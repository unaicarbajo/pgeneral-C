%define parse.error verbose

%{
   #include <stdio.h>
   #include <iostream>
   #include <vector>
   #include <string>
   using namespace std; 

   #define RED     "\033[31m" 
   #define RESET   "\033[0m"
   extern int yylex();
   extern int yylineno;
   extern char *yytext;
   void yyerror (const char *msg) {
     printf(RED);
     printf("line %d: %s at '%s'\n", yylineno, msg, yytext) ;
     printf(RESET); 
   }


   #include "Codigo.hpp"
   #include "Aux.hpp"
   #include "TablaSimbolos.hpp"
   #include "PilaTablaSimbolos.hpp"

   expresionstruct makecomparison(std::string &s1, std::string &s2, std::string &s3) ;
   expresionstruct makearithmetic(std::string &s1, std::string &s2, std::string &s3) ;
   void makeboolean(std::string &s1, std::string &s2, std::string &s3);
   vector<int> *unir(vector<int> lis1, vector<int> lis2);
   TablaSimbolos anadirVariablesTabla(vector<string> &idNombres, string &tipoNombre, TablaSimbolos &tabla);
   Codigo codigo;
   PilaTablaSimbolos stPila;
%}

/* 
   qué atributos tienen los tokens 
*/

%union {
    string *str ;
    expresionstruct *expr ;
    sentenciastruct *sent ;
    int number ;
    vector<int> *numlist ;
    vector<string> *lident ;
}

/* 
   declaración de tokens. Esto debe coincidir con tokens.l 
   Prioridad de abajo a arriba
*/
%token <str> TID TREAL TINTEGER
%token <str> TEQEQ TNOEQ TLOE TGOE TMEN TMAY
%token <str> TPARA TPARC TLLAVEA TLLAVEC TCOMMA
%token <str> TPLUS TMINUS TMUL TDIV
%token <str> TCOL TSEMIC TASSIG
%token <str> TNOT TAND TOR
%token <str> RPROGRAM RBEGIN RENDPROGRAM RIF RELSE RELSEIF RWHFR RWHILE RFOR RTHEN RLOOP RFIN RUNTIL RREPEAT REXIT REXITIF RCONTINUE RPROC RINOUT RIN ROUT RREAD RPRINTLN RINTEGER RFLOAT RDOUBLE 

// declaración de no terminales
%type <str> variable
%type <str> programa
%type <number> M
%type <sent> bloque
%type <sent> sentencia
%type <expr> expresion
%type <sent> lista_de_sentencias
%type <lident> lista_de_ident
%type <lident> resto_lista_id
%type <str> clase_par
%type <str> tipo

%left TOR
%left TAND
%left TNOT
%nonassoc TEQEQ TNOEQ TLOE TGOE TMEN TMAY
%left TPLUS TMINUS
%left TMUL TDIV
%start programa

%%

programa : RPROGRAM TID {codigo.anadirInstruccion(*$1 + " " + *$2 + ";");}
            bloqueppl {codigo.anadirInstruccion("halt;");
                      codigo.escribir();
                      }
         ;

bloqueppl :  TLLAVEA 
            {TablaSimbolos st;
            stPila.empilar(st);}
            declaraciones
            decl_de_subprogs
	          lista_de_sentencias
	          TLLAVEC
            {stPila.desempilar();}
          ;

bloque : TLLAVEA declaraciones lista_de_sentencias TLLAVEC { $$ = new sentenciastruct; $$->exits = $3->exits; }
            ;

declaraciones :   tipo lista_de_ident TSEMIC { codigo.anadirDeclaraciones(*$2 , *$1);
                                                TablaSimbolos tabla = stPila.desempilar();
                                                tabla = anadirVariablesTabla(*$2, *$1, tabla);
                                                stPila.empilar(tabla);
                                                 } declaraciones
                  | /*vacio*/
                  ;
lista_de_ident : TID resto_lista_id {$$  = $2 ;
                                     $$->push_back(*$1);}
                  ;

resto_lista_id :  TCOMMA TID resto_lista_id {$$  = $3 ;
                                             $$->push_back(*$2);}
                  | /*vacio*/ {$$ = new vector<string>;}
                  ;

tipo :      RINTEGER { $$ = new std::string("ent");}
            | RFLOAT  { $$ = new std::string("real");}
            ;

decl_de_subprogs : decl_de_subprograma decl_de_subprogs
            | /*vacio*/ {}
            ;

decl_de_subprograma :   RPROC TID {codigo.anadirInstruccion(*$1 +" "+ *$2);}
                          {TablaSimbolos stPadre = stPila.desempilar();
                          stPadre.anadirProcedimiento(*$2);
                          stPila.empilar(stPadre);
                          TablaSimbolos st;
                          stPila.empilar(st);}

                          argumentos
                          bloqueppl

                         {codigo.anadirInstruccion("endproc;");
                         stPila.desempilar();}
                     ;

argumentos :TPARA lista_de_param TPARC
            | /*vacio*/
            ;

lista_de_param : tipo lista_de_ident TCOL clase_par {codigo.anadirParametros(*$2, *$4, *$1 ); } 

                {TablaSimbolos st;
                 st = stPila.desempilar();
                 // DE MOMENTO LAS AÑADO COMO VARIABLES NORMALES
                 st = anadirVariablesTabla(*$2, *$1, st);
                 stPila.empilar(st);}
                resto_lis_de_param   ;

clase_par : RIN   { $$ = new std::string("in");}
      | ROUT      { $$ = new std::string("out");}
      | RINOUT    { $$ = new std::string("in out");}
      ;

resto_lis_de_param :    TSEMIC tipo lista_de_ident TCOL clase_par {codigo.anadirParametros(*$3, *$5, *$2);} resto_lis_de_param
                        | /*vacio*/ 
                        ;

lista_de_sentencias : sentencia lista_de_sentencias {$$->exits = *unir($1->exits, $2->exits);}
      | /*vacio*/ { $$->exits = * new vector<int>; }
      ;

sentencia : variable TASSIG expresion TSEMIC { 
               codigo.anadirInstruccion(*$1 + " := " + $3->str + ";") ; 
               delete $1 ; delete $3;
               $$ = new sentenciastruct;
               $$->exits.clear();
               $$->tipo = "asignacion";
               } 
      | RIF expresion RTHEN M bloque M TSEMIC    {
              	$$ = new sentenciastruct;
              	$$->exits = $5->exits;
	      	    codigo.completarInstrucciones($2->trues,$4) ;
    	  	    codigo.completarInstrucciones($2->falses,$6) ;
	      	    delete $2 ;
              }
      | RWHFR M bloque M TSEMIC {$$ = new sentenciastruct;
                              codigo.anadirInstruccion("goto");
                              vector<int> tmp1 ; tmp1.push_back($4) ;
                              codigo.completarInstrucciones(tmp1, $2) ;
                              codigo.completarInstrucciones($3->exits,$4+1);
                              $$->exits.clear();
                              delete $3;}
      | RWHILE N M expresion RLOOP M bloque M {codigo.anadirInstruccion("goto");}
			RFIN bloque TSEMIC  {$$ = new sentenciastruct; 
                    codigo.completarInstrucciones($4->trues,$6) ;
                    codigo.completarInstrucciones($4->falses, $8+1) ;

					          vector<int> tmp1 ; tmp1.push_back($8) ;
                    codigo.completarInstrucciones(tmp1, $3) ;
                    
					          codigo.completarInstrucciones($7->exits, $8+1);
					          $$->exits.clear();
                    $$->exits = $11->exits;

                    delete $4 ;}
      | REXITIF expresion TSEMIC { 
               $$ = new sentenciastruct;
               codigo.completarInstrucciones($2->falses, codigo.obtenRef());
               $$->exits = $2->trues;
               delete $2;
               }
      | RREAD TPARA variable TPARC TSEMIC {$$ = new sentenciastruct;
						$$->exits = * new vector<int>;
						codigo.anadirInstruccion("read "+ *$3 + ";");}
      | RPRINTLN TPARA expresion TPARC TSEMIC   {$$ = new sentenciastruct;
											$$->exits = * new vector<int>;
											codigo.anadirInstruccion("write "+ $3->str + ";");
											codigo.anadirInstruccion("writeln;");}
      
      | RFOR TPARA tipo variable 
                          { TablaSimbolos st = stPila.desempilar();
                          try{
                            st.anadirVariable(*$4,*$3);
                          }
                          catch(string err){
                            const char *cstr = err.c_str();
                            yyerror(cstr);
                          }
                          codigo.anadirInstruccion(*$3+" "+*$4+";");
                          stPila.empilar(st);}
      TASSIG expresion {codigo.anadirInstruccion(*$4+" "+*$6+" "+$7->str);} TSEMIC
      M expresion TSEMIC M sentencia M {codigo.anadirInstruccion("goto");}  TPARC RLOOP bloque M TSEMIC
                      {$$ = new sentenciastruct;
                      if ($14->tipo != "asignacion")
                        yyerror("Error semántico. El tercer elemento del for debe ser una asignación.");
                      else if ($11->tipo != "comparacion" && $11->tipo != "booleano")
                        yyerror("Error semántico. El segundo elemento del for debe ser una expresión de comparación o booleana.");
                      // TODO los correspondiente a la tabla de símbolos
                      // Está previamente declarada la variable? Error.
                      else{
                          codigo.anadirInstruccion("goto");
                          vector<int> tmp1 ; tmp1.push_back($15) ;
                          codigo.completarInstrucciones(tmp1, $10) ;
                          tmp1.clear(); tmp1.push_back($20) ;
                          codigo.completarInstrucciones(tmp1, $13) ;
                          codigo.completarInstrucciones($11->trues,$15+1) ;
                          codigo.completarInstrucciones($11->falses, $20+1) ;
                          codigo.completarInstrucciones($19->exits, $20+1);
					                $$->exits.clear();
                        }
                      }

      ;


M : { $$ = codigo.obtenRef(); }
	;

N : ;

variable : TID { $$ = $1 ; } ;

expresion : expresion TEQEQ expresion     { $$ = new expresionstruct;
                                          *$$ = makecomparison($1->str,*$2,$3->str); 
                                          $$->tipo = "comparacion";
                                          delete $1; delete $3; }
            | expresion TMEN expresion    { $$ = new expresionstruct;
                                          *$$ = makecomparison($1->str,*$2,$3->str) ; 
                                          $$->tipo = "comparacion";
                                          delete $1; delete $3; }
            | expresion TMAY expresion    { $$ = new expresionstruct;
                                          *$$ = makecomparison($1->str,*$2,$3->str) ;
                                          $$->tipo = "comparacion"; 
                                          delete $1; delete $3; }
            | expresion TGOE expresion    { $$ = new expresionstruct;
                                          *$$ = makecomparison($1->str,*$2,$3->str) ; 
                                          $$->tipo = "comparacion";
                                          delete $1; delete $3; }
            | expresion TLOE expresion    { $$ = new expresionstruct;
                                          *$$ = makecomparison($1->str,*$2,$3->str) ; 
                                          $$->tipo = "comparacion";
                                          delete $1; delete $3; }
            | expresion TNOEQ expresion   { $$ = new expresionstruct;
                                          *$$ = makecomparison($1->str,*$2,$3->str) ; 
                                          $$->tipo = "comparacion";
                                          delete $1; delete $3; }
            | expresion TPLUS expresion   { $$ = new expresionstruct;
                                          *$$ = makearithmetic($1->str,*$2,$3->str) ; 
                                          $$->tipo = "aritmetico";
                                          delete $1; delete $3; }
            | expresion TMINUS expresion  { $$ = new expresionstruct;
                                          *$$ = makearithmetic($1->str,*$2,$3->str) ; 
                                          $$->tipo = "aritmetico";
                                          delete $1; delete $3; }
            | expresion TMUL expresion    { $$ = new expresionstruct;
                                          *$$ = makearithmetic($1->str,*$2,$3->str) ; 
                                          $$->tipo = "aritmetico";
                                          delete $1; delete $3; }
            | expresion TDIV expresion    { $$ = new expresionstruct;
                                          *$$ = makearithmetic($1->str,*$2,$3->str) ; 
                                          $$->tipo = "aritmetico";
                                          delete $1; delete $3; }
            | expresion TAND M expresion    { $$ = new expresionstruct;
                                          codigo.completarInstrucciones($1->trues,$3) ;
                                          $$->trues = $4->trues;
                                          $$->falses = *unir($1->falses, $4->falses);
                                          $$->tipo = "booleano";
                                          delete $1; delete $4; }
            | expresion TOR M expresion    { $$ = new expresionstruct;
                                          codigo.completarInstrucciones($1->falses,$3) ;
                                          $$->trues = *unir($1->trues, $4->trues);
                                          $$->falses = $4->falses;
                                          $$->tipo = "booleano";
                                          delete $1; delete $4; }
            | TNOT expresion              {$$ = new expresionstruct;
                                          $$->trues = $2->falses;
                                          $$->falses = $2->trues;
                                          $$->tipo = "booleano";
                                          delete $2;}
            | variable                    { $$ = new expresionstruct; $$->str = *$1; }
            | TINTEGER                    { $$ = new expresionstruct; $$->str = *$1; 
                                            $$->tipo = "ent";}
            | TREAL                       { $$ = new expresionstruct; $$->str = *$1; 
                                            $$->tipo = "real";}
            | TPARA expresion TPARC       { $$ = $2; }
            ;

%%
expresionstruct makecomparison(std::string &s1, std::string &s2, std::string &s3) {
  expresionstruct tmp ; 
  tmp.trues.push_back(codigo.obtenRef()) ;
  tmp.falses.push_back(codigo.obtenRef()+1) ;

  codigo.anadirInstruccion("if " + s1 + " " + s2 + " " + s3 + " goto") ;
  codigo.anadirInstruccion("goto") ;
  return tmp ;
}


expresionstruct makearithmetic(std::string &s1, std::string &s2, std::string &s3) {
  expresionstruct tmp ; 
  tmp.str = codigo.nuevoId() ;
  codigo.anadirInstruccion(tmp.str + " := " + s1 + " " +  s2 + " " +  s3 + ";") ;
  return tmp ;
}

vector<int> *unir(vector<int> lis1, vector<int> lis2){
        vector<int> *nueva;
        nueva = new vector<int>(lis1);

        nueva->insert(nueva->end(), lis2.begin(), lis2.end());

        return nueva;
}

TablaSimbolos anadirVariablesTabla(vector<string> &idNombres,  string &tipoNombre, TablaSimbolos &tabla) {
  vector<string>::const_iterator iter;
  for (iter=idNombres.end()-1; iter!=idNombres.begin()-1; iter--) {
    //anadirInstruccion(tipoNombre + " " + *iter + ";");
    tabla.anadirVariable(*iter, tipoNombre);
  }
  return tabla;
}