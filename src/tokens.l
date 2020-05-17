%option yylineno 

%{
 #include <string>
 #include <iostream>
 #include <vector>
 using namespace std ;
 #include "Aux.hpp"
 #include "parser.hpp" 


 #define TOKEN(t) yylval.str = new std::string(yytext, yyleng) ; return t 

 extern "C" int yywrap() { return(1) ; }  

%}

%option nounput
digito [0-9]
letra [a-zA-Z]
%%

prog                    TOKEN(RPROGRAM) ;
if                      TOKEN(RIF);
while" "forever         TOKEN(RWHFR);
while                   TOKEN(RWHILE);
then                    TOKEN(RTHEN);
loop                    TOKEN(RLOOP);
finally                 TOKEN(RFIN);
exit" "if               TOKEN(REXITIF);
proc                    TOKEN(RPROC);
in" "out                TOKEN(RINOUT);
in                      TOKEN(RIN);
out                     TOKEN(ROUT);
read                    TOKEN(RREAD);
println                 TOKEN(RPRINTLN);
int                     TOKEN(RINTEGER);
float                   TOKEN(RFLOAT);

for                     TOKEN(RFOR);
and                     TOKEN(TAND);
or                      TOKEN(TOR);
not                     TOKEN(TNOT);

(\(\*)[^\*]*[^\*\)]*(\*\))   ;
#[^#\n]*\n                   ;
{letra}(_?({letra}|{digito}))*       TOKEN(TID);
{digito}+\.{digito}+([Ee][+-]?{digito}+)?     TOKEN(TREAL);
[0-9]+                                        TOKEN(TINTEGER);

"*"                     TOKEN(TMUL);

"+"                     TOKEN(TPLUS);

"-"                     TOKEN(TMINUS);

"=="                    TOKEN(TEQEQ);

"/="                    TOKEN(TNOEQ);

"<="                    TOKEN(TLOE);

">="                    TOKEN(TGOE);

"<"                     TOKEN(TMEN);

">"                     TOKEN(TMAY);

"="                     TOKEN(TASSIG);

";"                     TOKEN(TSEMIC);

"{"                     TOKEN(TLLAVEA);

"}"                     TOKEN(TLLAVEC);

"("                     TOKEN(TPARA);

")"                     TOKEN(TPARC);

":"                     TOKEN(TCOL);

","                     TOKEN(TCOMMA);

"/"                     TOKEN(TDIV);



[ \t\n]                 ;

.                       { cout << "Token desconocido: " << yytext << endl; yyterminate();}
%%


