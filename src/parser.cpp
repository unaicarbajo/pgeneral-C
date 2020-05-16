/* A Bison parser, made by GNU Bison 3.3.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.3.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 3 "parser.y" /* yacc.c:337  */

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
     printf("\033[0;31m");
     printf("line %d: %s at '%s'\n", yylineno, msg, yytext) ;
     printf("\033[0m"); 
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

#line 103 "parser.cpp" /* yacc.c:337  */
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.hpp".  */
#ifndef YY_YY_PARSER_HPP_INCLUDED
# define YY_YY_PARSER_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TID = 258,
    TREAL = 259,
    TINTEGER = 260,
    TEQEQ = 261,
    TNOEQ = 262,
    TLOE = 263,
    TGOE = 264,
    TMEN = 265,
    TMAY = 266,
    TPARA = 267,
    TPARC = 268,
    TLLAVEA = 269,
    TLLAVEC = 270,
    TCOMMA = 271,
    TPLUS = 272,
    TMINUS = 273,
    TMUL = 274,
    TDIV = 275,
    TCOL = 276,
    TSEMIC = 277,
    TASSIG = 278,
    TNOT = 279,
    TAND = 280,
    TOR = 281,
    RPROGRAM = 282,
    RBEGIN = 283,
    RENDPROGRAM = 284,
    RIF = 285,
    RELSE = 286,
    RELSEIF = 287,
    RWHFR = 288,
    RWHILE = 289,
    RFOR = 290,
    RTHEN = 291,
    RLOOP = 292,
    RFIN = 293,
    RUNTIL = 294,
    RREPEAT = 295,
    REXIT = 296,
    REXITIF = 297,
    RCONTINUE = 298,
    RPROC = 299,
    RINOUT = 300,
    RIN = 301,
    ROUT = 302,
    RREAD = 303,
    RPRINTLN = 304,
    RINTEGER = 305,
    RFLOAT = 306,
    RDOUBLE = 307
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 40 "parser.y" /* yacc.c:352  */

    string *str ;
    expresionstruct *expr ;
    sentenciastruct *sent ;
    int number ;
    vector<int> *numlist ;
    vector<string> *lident ;

#line 208 "parser.cpp" /* yacc.c:352  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_HPP_INCLUDED  */



#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   324

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  63
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  155

#define YYUNDEFTOK  2
#define YYMAXUTOK   307

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    84,    84,    84,    91,    90,   100,   103,   103,   108,
     110,   114,   116,   119,   120,   123,   124,   127,   128,   127,
     141,   142,   145,   147,   145,   154,   155,   156,   159,   159,
     160,   163,   164,   167,   174,   181,   188,   188,   201,   207,
     210,   216,   228,   215,   252,   255,   257,   259,   263,   267,
     271,   275,   279,   283,   287,   291,   295,   299,   305,   311,
     316,   317,   319,   321
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TID", "TREAL", "TINTEGER", "TEQEQ",
  "TNOEQ", "TLOE", "TGOE", "TMEN", "TMAY", "TPARA", "TPARC", "TLLAVEA",
  "TLLAVEC", "TCOMMA", "TPLUS", "TMINUS", "TMUL", "TDIV", "TCOL", "TSEMIC",
  "TASSIG", "TNOT", "TAND", "TOR", "RPROGRAM", "RBEGIN", "RENDPROGRAM",
  "RIF", "RELSE", "RELSEIF", "RWHFR", "RWHILE", "RFOR", "RTHEN", "RLOOP",
  "RFIN", "RUNTIL", "RREPEAT", "REXIT", "REXITIF", "RCONTINUE", "RPROC",
  "RINOUT", "RIN", "ROUT", "RREAD", "RPRINTLN", "RINTEGER", "RFLOAT",
  "RDOUBLE", "$accept", "programa", "$@1", "bloqueppl", "$@2", "bloque",
  "declaraciones", "$@3", "lista_de_ident", "resto_lista_id", "tipo",
  "decl_de_subprogs", "decl_de_subprograma", "$@4", "$@5", "argumentos",
  "lista_de_param", "$@6", "$@7", "clase_par", "resto_lis_de_param", "$@8",
  "lista_de_sentencias", "sentencia", "$@9", "$@10", "$@11", "M", "N",
  "variable", "expresion", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307
};
# endif

#define YYPACT_NINF -91

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-91)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-1)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -20,     6,    18,   -91,   -91,     5,   -91,   -91,   -45,   -91,
     -91,   -21,    21,    29,    25,   -21,    19,    15,   -91,   -91,
      59,   -91,   -91,    26,    59,    39,    40,    38,    25,    33,
     -91,    58,   -91,   -91,   -91,   -91,   -91,    59,    59,   -91,
     122,    51,   -91,   -45,   143,    69,    59,   -91,   -91,    59,
      19,   -45,    65,   164,   289,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,   -91,   -91,   -91,   -45,   -91,
      59,    69,   -91,    66,   185,   206,   -91,   -91,   -45,     5,
     -91,   304,   304,   304,   304,   304,   304,    -7,    -7,   -91,
     -91,    59,    59,    51,    25,    56,    99,    61,    60,    63,
     -91,    21,    73,   -91,   289,   269,   -91,    72,   -91,   -91,
      59,   -91,   -91,    68,   -91,    70,   -91,    51,   248,   -30,
     -91,   -91,    74,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
      52,    59,    75,    51,   227,   -45,   -91,    77,   -91,    21,
     -91,    25,    79,   -91,   -30,   -91,   -91,    78,    75,    64,
     -91,    51,   -91,    80,   -91
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     1,     0,     4,     3,     9,    13,
      14,    16,     0,     0,    32,    16,    12,     0,    17,    46,
       0,    44,    45,     0,     0,     0,     0,     0,    32,     0,
      15,     0,    10,     7,    18,    62,    61,     0,     0,    60,
       0,     0,    44,     0,     0,     0,     0,     5,    31,     0,
      12,     9,    21,     0,    59,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    44,    44,    44,     9,    44,
       0,     0,    38,     0,     0,     0,    11,     8,     0,     0,
      63,    47,    52,    51,    50,    48,    49,    53,    54,    55,
      56,     0,     0,     0,    32,     0,     0,     0,     0,     0,
      33,     0,     0,    19,    57,    58,    44,     0,    35,    44,
       0,    39,    40,     0,    20,     0,     6,     0,    41,     0,
      34,    44,     0,    27,    25,    26,    22,    36,    44,    23,
       0,     0,    30,     0,     0,     0,    24,     0,    44,     0,
      37,     0,     0,    44,     0,    42,    28,     0,    30,     0,
      29,     0,    44,     0,    43
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -91,   -91,   -91,    16,   -91,   -83,   -48,   -91,   -90,    54,
     -42,    96,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -31,
     -34,   -91,   -24,   -19,   -91,   -91,   -91,   -40,   -91,   -14,
     -16
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     5,     7,     8,    69,    11,    51,    17,    32,
      12,    14,    15,    34,    52,    79,   102,   129,   132,   126,
     136,   148,    27,    28,   130,   122,   147,    41,    42,    39,
      40
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      29,    71,    70,    77,    48,     9,    10,     1,    44,     3,
     106,   113,    63,    64,    29,   123,   124,   125,     4,     6,
      94,    53,    54,    13,    16,    91,    92,    93,    19,    95,
      74,    73,    18,    75,   121,    31,   101,    33,    43,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,   142,
     137,    45,    46,    47,    96,    20,    49,    97,    21,    22,
      23,    50,    19,    35,    36,    68,   115,    24,   152,   117,
     107,    37,    19,    25,    26,   104,   105,    78,   108,    98,
      29,   127,   111,    38,   110,   112,   114,   116,   131,   119,
     133,   149,   120,   139,   118,   103,   128,   135,   141,   140,
     144,   151,   154,   145,    76,    55,    56,    57,    58,    59,
      60,    30,   153,   146,   150,   134,    61,    62,    63,    64,
       0,     0,   143,     0,    65,    66,     0,    29,    55,    56,
      57,    58,    59,    60,     0,     0,   109,     0,     0,    61,
      62,    63,    64,     0,     0,     0,     0,    65,    66,    55,
      56,    57,    58,    59,    60,     0,     0,     0,    67,     0,
      61,    62,    63,    64,     0,    72,     0,     0,    65,    66,
      55,    56,    57,    58,    59,    60,     0,    80,     0,     0,
       0,    61,    62,    63,    64,     0,     0,     0,     0,    65,
      66,    55,    56,    57,    58,    59,    60,     0,    99,     0,
       0,     0,    61,    62,    63,    64,     0,     0,     0,     0,
      65,    66,    55,    56,    57,    58,    59,    60,     0,     0,
       0,     0,     0,    61,    62,    63,    64,     0,   100,     0,
       0,    65,    66,    55,    56,    57,    58,    59,    60,     0,
       0,     0,     0,     0,    61,    62,    63,    64,     0,   138,
       0,     0,    65,    66,    55,    56,    57,    58,    59,    60,
       0,     0,     0,     0,     0,    61,    62,    63,    64,     0,
       0,     0,     0,    65,    66,    55,    56,    57,    58,    59,
      60,     0,     0,     0,     0,     0,    61,    62,    63,    64,
       0,     0,     0,     0,    65,    55,    56,    57,    58,    59,
      60,     0,     0,     0,     0,     0,    61,    62,    63,    64,
      -1,    -1,    -1,    -1,    -1,    -1,     0,     0,     0,     0,
       0,    61,    62,    63,    64
};

static const yytype_int16 yycheck[] =
{
      14,    43,    42,    51,    28,    50,    51,    27,    24,     3,
      93,   101,    19,    20,    28,    45,    46,    47,     0,    14,
      68,    37,    38,    44,     3,    65,    66,    67,     3,    69,
      46,    45,     3,    49,   117,    16,    78,    22,    12,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,   139,
     133,    12,    12,    15,    70,    30,    23,    71,    33,    34,
      35,     3,     3,     4,     5,    14,   106,    42,   151,   109,
      94,    12,     3,    48,    49,    91,    92,    12,    22,    13,
      94,   121,    22,    24,    23,    22,    13,    15,   128,    21,
      38,    13,    22,   135,   110,    79,    22,    22,   138,    22,
      21,    37,    22,   143,    50,     6,     7,     8,     9,    10,
      11,    15,   152,   144,   148,   131,    17,    18,    19,    20,
      -1,    -1,   141,    -1,    25,    26,    -1,   141,     6,     7,
       8,     9,    10,    11,    -1,    -1,    37,    -1,    -1,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    25,    26,     6,
       7,     8,     9,    10,    11,    -1,    -1,    -1,    36,    -1,
      17,    18,    19,    20,    -1,    22,    -1,    -1,    25,    26,
       6,     7,     8,     9,    10,    11,    -1,    13,    -1,    -1,
      -1,    17,    18,    19,    20,    -1,    -1,    -1,    -1,    25,
      26,     6,     7,     8,     9,    10,    11,    -1,    13,    -1,
      -1,    -1,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
      25,    26,     6,     7,     8,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    17,    18,    19,    20,    -1,    22,    -1,
      -1,    25,    26,     6,     7,     8,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    17,    18,    19,    20,    -1,    22,
      -1,    -1,    25,    26,     6,     7,     8,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,    25,    26,     6,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    25,     6,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    17,    18,    19,    20,
       6,     7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    17,    18,    19,    20
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    27,    54,     3,     0,    55,    14,    56,    57,    50,
      51,    59,    63,    44,    64,    65,     3,    61,     3,     3,
      30,    33,    34,    35,    42,    48,    49,    75,    76,    82,
      64,    16,    62,    22,    66,     4,     5,    12,    24,    82,
      83,    80,    81,    12,    83,    12,    12,    15,    75,    23,
       3,    60,    67,    83,    83,     6,     7,     8,     9,    10,
      11,    17,    18,    19,    20,    25,    26,    36,    14,    58,
      80,    63,    22,    82,    83,    83,    62,    59,    12,    68,
      13,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    80,    80,    80,    59,    80,    83,    82,    13,    13,
      22,    63,    69,    56,    83,    83,    58,    75,    22,    37,
      23,    22,    22,    61,    13,    80,    15,    80,    83,    21,
      22,    58,    78,    45,    46,    47,    72,    80,    22,    70,
      77,    80,    71,    38,    83,    22,    73,    58,    22,    63,
      22,    80,    61,    76,    21,    80,    72,    79,    74,    13,
      73,    37,    58,    80,    22
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    55,    54,    57,    56,    58,    60,    59,    59,
      61,    62,    62,    63,    63,    64,    64,    66,    67,    65,
      68,    68,    70,    71,    69,    72,    72,    72,    74,    73,
      73,    75,    75,    76,    76,    76,    77,    76,    76,    76,
      76,    78,    79,    76,    80,    81,    82,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     4,     0,     6,     4,     0,     5,     0,
       2,     3,     0,     1,     1,     2,     0,     0,     0,     6,
       3,     0,     0,     0,     7,     1,     1,     1,     0,     7,
       0,     2,     0,     4,     7,     5,     0,    12,     3,     5,
       5,     0,     0,    20,     0,     0,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     4,     4,     2,
       1,     1,     1,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yynewstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 84 "parser.y" /* yacc.c:1652  */
    {codigo.anadirInstruccion(*(yyvsp[-1].str) + " " + *(yyvsp[0].str) + ";");}
#line 1442 "parser.cpp" /* yacc.c:1652  */
    break;

  case 3:
#line 85 "parser.y" /* yacc.c:1652  */
    {codigo.anadirInstruccion("halt;");
                      codigo.escribir();
                      }
#line 1450 "parser.cpp" /* yacc.c:1652  */
    break;

  case 4:
#line 91 "parser.y" /* yacc.c:1652  */
    {TablaSimbolos st;
            stPila.empilar(st);}
#line 1457 "parser.cpp" /* yacc.c:1652  */
    break;

  case 5:
#line 97 "parser.y" /* yacc.c:1652  */
    {stPila.desempilar();}
#line 1463 "parser.cpp" /* yacc.c:1652  */
    break;

  case 6:
#line 100 "parser.y" /* yacc.c:1652  */
    { (yyval.sent) = new sentenciastruct; (yyval.sent)->exits = (yyvsp[-1].sent)->exits; }
#line 1469 "parser.cpp" /* yacc.c:1652  */
    break;

  case 7:
#line 103 "parser.y" /* yacc.c:1652  */
    { codigo.anadirDeclaraciones(*(yyvsp[-1].lident) , *(yyvsp[-2].str));
                                                TablaSimbolos tabla = stPila.desempilar();
                                                tabla = anadirVariablesTabla(*(yyvsp[-1].lident), *(yyvsp[-2].str), tabla);
                                                stPila.empilar(tabla);
                                                 }
#line 1479 "parser.cpp" /* yacc.c:1652  */
    break;

  case 10:
#line 110 "parser.y" /* yacc.c:1652  */
    {(yyval.lident)  = (yyvsp[0].lident) ;
                                     (yyval.lident)->push_back(*(yyvsp[-1].str));}
#line 1486 "parser.cpp" /* yacc.c:1652  */
    break;

  case 11:
#line 114 "parser.y" /* yacc.c:1652  */
    {(yyval.lident)  = (yyvsp[0].lident) ;
                                             (yyval.lident)->push_back(*(yyvsp[-1].str));}
#line 1493 "parser.cpp" /* yacc.c:1652  */
    break;

  case 12:
#line 116 "parser.y" /* yacc.c:1652  */
    {(yyval.lident) = new vector<string>;}
#line 1499 "parser.cpp" /* yacc.c:1652  */
    break;

  case 13:
#line 119 "parser.y" /* yacc.c:1652  */
    { (yyval.str) = new std::string("ent");}
#line 1505 "parser.cpp" /* yacc.c:1652  */
    break;

  case 14:
#line 120 "parser.y" /* yacc.c:1652  */
    { (yyval.str) = new std::string("real");}
#line 1511 "parser.cpp" /* yacc.c:1652  */
    break;

  case 16:
#line 124 "parser.y" /* yacc.c:1652  */
    {}
#line 1517 "parser.cpp" /* yacc.c:1652  */
    break;

  case 17:
#line 127 "parser.y" /* yacc.c:1652  */
    {codigo.anadirInstruccion(*(yyvsp[-1].str) +" "+ *(yyvsp[0].str));}
#line 1523 "parser.cpp" /* yacc.c:1652  */
    break;

  case 18:
#line 128 "parser.y" /* yacc.c:1652  */
    {TablaSimbolos stPadre = stPila.desempilar();
                          stPadre.anadirProcedimiento(*(yyvsp[-1].str));
                          stPila.empilar(stPadre);
                          TablaSimbolos st;
                          stPila.empilar(st);}
#line 1533 "parser.cpp" /* yacc.c:1652  */
    break;

  case 19:
#line 137 "parser.y" /* yacc.c:1652  */
    {codigo.anadirInstruccion("endproc;");
                         stPila.desempilar();}
#line 1540 "parser.cpp" /* yacc.c:1652  */
    break;

  case 22:
#line 145 "parser.y" /* yacc.c:1652  */
    {codigo.anadirParametros(*(yyvsp[-2].lident), *(yyvsp[0].str), *(yyvsp[-3].str) ); }
#line 1546 "parser.cpp" /* yacc.c:1652  */
    break;

  case 23:
#line 147 "parser.y" /* yacc.c:1652  */
    {TablaSimbolos st;
                 st = stPila.desempilar();
                 // DE MOMENTO LAS AÑADO COMO VARIABLES NORMALES
                 st = anadirVariablesTabla(*(yyvsp[-3].lident), *(yyvsp[-4].str), st);
                 stPila.empilar(st);}
#line 1556 "parser.cpp" /* yacc.c:1652  */
    break;

  case 25:
#line 154 "parser.y" /* yacc.c:1652  */
    { (yyval.str) = new std::string("in");}
#line 1562 "parser.cpp" /* yacc.c:1652  */
    break;

  case 26:
#line 155 "parser.y" /* yacc.c:1652  */
    { (yyval.str) = new std::string("out");}
#line 1568 "parser.cpp" /* yacc.c:1652  */
    break;

  case 27:
#line 156 "parser.y" /* yacc.c:1652  */
    { (yyval.str) = new std::string("in out");}
#line 1574 "parser.cpp" /* yacc.c:1652  */
    break;

  case 28:
#line 159 "parser.y" /* yacc.c:1652  */
    {codigo.anadirParametros(*(yyvsp[-2].lident), *(yyvsp[0].str), *(yyvsp[-3].str));}
#line 1580 "parser.cpp" /* yacc.c:1652  */
    break;

  case 31:
#line 163 "parser.y" /* yacc.c:1652  */
    {(yyval.sent)->exits = *unir((yyvsp[-1].sent)->exits, (yyvsp[0].sent)->exits);}
#line 1586 "parser.cpp" /* yacc.c:1652  */
    break;

  case 32:
#line 164 "parser.y" /* yacc.c:1652  */
    { (yyval.sent)->exits = * new vector<int>; }
#line 1592 "parser.cpp" /* yacc.c:1652  */
    break;

  case 33:
#line 167 "parser.y" /* yacc.c:1652  */
    { 
               codigo.anadirInstruccion(*(yyvsp[-3].str) + " := " + (yyvsp[-1].expr)->str + ";") ; 
               delete (yyvsp[-3].str) ; delete (yyvsp[-1].expr);
               (yyval.sent) = new sentenciastruct;
               (yyval.sent)->exits.clear();
               (yyval.sent)->tipo = "asignacion";
               }
#line 1604 "parser.cpp" /* yacc.c:1652  */
    break;

  case 34:
#line 174 "parser.y" /* yacc.c:1652  */
    {
              	(yyval.sent) = new sentenciastruct;
              	(yyval.sent)->exits = (yyvsp[-2].sent)->exits;
	      	    codigo.completarInstrucciones((yyvsp[-5].expr)->trues,(yyvsp[-3].number)) ;
    	  	    codigo.completarInstrucciones((yyvsp[-5].expr)->falses,(yyvsp[-1].number)) ;
	      	    delete (yyvsp[-5].expr) ;
              }
#line 1616 "parser.cpp" /* yacc.c:1652  */
    break;

  case 35:
#line 181 "parser.y" /* yacc.c:1652  */
    {(yyval.sent) = new sentenciastruct;
                              codigo.anadirInstruccion("goto");
                              vector<int> tmp1 ; tmp1.push_back((yyvsp[-1].number)) ;
                              codigo.completarInstrucciones(tmp1, (yyvsp[-3].number)) ;
                              codigo.completarInstrucciones((yyvsp[-2].sent)->exits,(yyvsp[-1].number)+1);
                              (yyval.sent)->exits.clear();
                              delete (yyvsp[-2].sent);}
#line 1628 "parser.cpp" /* yacc.c:1652  */
    break;

  case 36:
#line 188 "parser.y" /* yacc.c:1652  */
    {codigo.anadirInstruccion("goto");}
#line 1634 "parser.cpp" /* yacc.c:1652  */
    break;

  case 37:
#line 189 "parser.y" /* yacc.c:1652  */
    {(yyval.sent) = new sentenciastruct; 
                    codigo.completarInstrucciones((yyvsp[-8].expr)->trues,(yyvsp[-6].number)) ;
                    codigo.completarInstrucciones((yyvsp[-8].expr)->falses, (yyvsp[-4].number)+1) ;

					          vector<int> tmp1 ; tmp1.push_back((yyvsp[-4].number)) ;
                    codigo.completarInstrucciones(tmp1, (yyvsp[-9].number)) ;
                    
					          codigo.completarInstrucciones((yyvsp[-5].sent)->exits, (yyvsp[-4].number)+1);
					          (yyval.sent)->exits.clear();
                    (yyval.sent)->exits = (yyvsp[-1].sent)->exits;

                    delete (yyvsp[-8].expr) ;}
#line 1651 "parser.cpp" /* yacc.c:1652  */
    break;

  case 38:
#line 201 "parser.y" /* yacc.c:1652  */
    { 
               (yyval.sent) = new sentenciastruct;
               codigo.completarInstrucciones((yyvsp[-1].expr)->falses, codigo.obtenRef());
               (yyval.sent)->exits = (yyvsp[-1].expr)->trues;
               delete (yyvsp[-1].expr);
               }
#line 1662 "parser.cpp" /* yacc.c:1652  */
    break;

  case 39:
#line 207 "parser.y" /* yacc.c:1652  */
    {(yyval.sent) = new sentenciastruct;
						(yyval.sent)->exits = * new vector<int>;
						codigo.anadirInstruccion("read "+ *(yyvsp[-2].str) + ";");}
#line 1670 "parser.cpp" /* yacc.c:1652  */
    break;

  case 40:
#line 210 "parser.y" /* yacc.c:1652  */
    {(yyval.sent) = new sentenciastruct;
											(yyval.sent)->exits = * new vector<int>;
											codigo.anadirInstruccion("write "+ (yyvsp[-2].expr)->str + ";");
											codigo.anadirInstruccion("writeln;");}
#line 1679 "parser.cpp" /* yacc.c:1652  */
    break;

  case 41:
#line 216 "parser.y" /* yacc.c:1652  */
    { TablaSimbolos st = stPila.desempilar();
                          try{
                            st.anadirVariable(*(yyvsp[-2].str),*(yyvsp[-3].str));
                          }
                          catch(string err){
                            const char *cstr = err.c_str();
                            yyerror(cstr);
                          }
                          codigo.anadirInstruccion(*(yyvsp[-3].str)+" "+*(yyvsp[-2].str)+";");
                          codigo.anadirInstruccion(*(yyvsp[-2].str)+" "+*(yyvsp[-1].str)+" "+(yyvsp[0].expr)->str);
                          stPila.empilar(st);}
#line 1695 "parser.cpp" /* yacc.c:1652  */
    break;

  case 42:
#line 228 "parser.y" /* yacc.c:1652  */
    {codigo.anadirInstruccion("goto");}
#line 1701 "parser.cpp" /* yacc.c:1652  */
    break;

  case 43:
#line 229 "parser.y" /* yacc.c:1652  */
    {(yyval.sent) = new sentenciastruct;
                      if ((yyvsp[-7].sent)->tipo != "asignacion")
                        yyerror("Error semántico. El tercer elemento del for debe ser una asignación.");
                      else if ((yyvsp[-10].expr)->tipo != "comparacion" && (yyvsp[-10].expr)->tipo != "booleano")
                        yyerror("Error semántico. El segundo elemento del for debe ser una expresión de comparación o booleana.");
                      // TODO los correspondiente a la tabla de símbolos
                      // Está previamente declarada la variable? Error.
                      else{
                          codigo.anadirInstruccion("goto");
                          vector<int> tmp1 ; tmp1.push_back((yyvsp[-6].number)) ;
                          codigo.completarInstrucciones(tmp1, (yyvsp[-11].number)) ;
                          tmp1.clear(); tmp1.push_back((yyvsp[-1].number)) ;
                          codigo.completarInstrucciones(tmp1, (yyvsp[-8].number)) ;
                          codigo.completarInstrucciones((yyvsp[-10].expr)->trues,(yyvsp[-6].number)+1) ;
                          codigo.completarInstrucciones((yyvsp[-10].expr)->falses, (yyvsp[-1].number)+1) ;
                          codigo.completarInstrucciones((yyvsp[-2].sent)->exits, (yyvsp[-1].number)+1);
					                (yyval.sent)->exits.clear();
                        }
                      }
#line 1725 "parser.cpp" /* yacc.c:1652  */
    break;

  case 44:
#line 252 "parser.y" /* yacc.c:1652  */
    { (yyval.number) = codigo.obtenRef(); }
#line 1731 "parser.cpp" /* yacc.c:1652  */
    break;

  case 46:
#line 257 "parser.y" /* yacc.c:1652  */
    { (yyval.str) = (yyvsp[0].str) ; }
#line 1737 "parser.cpp" /* yacc.c:1652  */
    break;

  case 47:
#line 259 "parser.y" /* yacc.c:1652  */
    { (yyval.expr) = new expresionstruct;
                                          *(yyval.expr) = makecomparison((yyvsp[-2].expr)->str,*(yyvsp[-1].str),(yyvsp[0].expr)->str); 
                                          (yyval.expr)->tipo = "comparacion";
                                          delete (yyvsp[-2].expr); delete (yyvsp[0].expr); }
#line 1746 "parser.cpp" /* yacc.c:1652  */
    break;

  case 48:
#line 263 "parser.y" /* yacc.c:1652  */
    { (yyval.expr) = new expresionstruct;
                                          *(yyval.expr) = makecomparison((yyvsp[-2].expr)->str,*(yyvsp[-1].str),(yyvsp[0].expr)->str) ; 
                                          (yyval.expr)->tipo = "comparacion";
                                          delete (yyvsp[-2].expr); delete (yyvsp[0].expr); }
#line 1755 "parser.cpp" /* yacc.c:1652  */
    break;

  case 49:
#line 267 "parser.y" /* yacc.c:1652  */
    { (yyval.expr) = new expresionstruct;
                                          *(yyval.expr) = makecomparison((yyvsp[-2].expr)->str,*(yyvsp[-1].str),(yyvsp[0].expr)->str) ;
                                          (yyval.expr)->tipo = "comparacion"; 
                                          delete (yyvsp[-2].expr); delete (yyvsp[0].expr); }
#line 1764 "parser.cpp" /* yacc.c:1652  */
    break;

  case 50:
#line 271 "parser.y" /* yacc.c:1652  */
    { (yyval.expr) = new expresionstruct;
                                          *(yyval.expr) = makecomparison((yyvsp[-2].expr)->str,*(yyvsp[-1].str),(yyvsp[0].expr)->str) ; 
                                          (yyval.expr)->tipo = "comparacion";
                                          delete (yyvsp[-2].expr); delete (yyvsp[0].expr); }
#line 1773 "parser.cpp" /* yacc.c:1652  */
    break;

  case 51:
#line 275 "parser.y" /* yacc.c:1652  */
    { (yyval.expr) = new expresionstruct;
                                          *(yyval.expr) = makecomparison((yyvsp[-2].expr)->str,*(yyvsp[-1].str),(yyvsp[0].expr)->str) ; 
                                          (yyval.expr)->tipo = "comparacion";
                                          delete (yyvsp[-2].expr); delete (yyvsp[0].expr); }
#line 1782 "parser.cpp" /* yacc.c:1652  */
    break;

  case 52:
#line 279 "parser.y" /* yacc.c:1652  */
    { (yyval.expr) = new expresionstruct;
                                          *(yyval.expr) = makecomparison((yyvsp[-2].expr)->str,*(yyvsp[-1].str),(yyvsp[0].expr)->str) ; 
                                          (yyval.expr)->tipo = "comparacion";
                                          delete (yyvsp[-2].expr); delete (yyvsp[0].expr); }
#line 1791 "parser.cpp" /* yacc.c:1652  */
    break;

  case 53:
#line 283 "parser.y" /* yacc.c:1652  */
    { (yyval.expr) = new expresionstruct;
                                          *(yyval.expr) = makearithmetic((yyvsp[-2].expr)->str,*(yyvsp[-1].str),(yyvsp[0].expr)->str) ; 
                                          (yyval.expr)->tipo = "aritmetico";
                                          delete (yyvsp[-2].expr); delete (yyvsp[0].expr); }
#line 1800 "parser.cpp" /* yacc.c:1652  */
    break;

  case 54:
#line 287 "parser.y" /* yacc.c:1652  */
    { (yyval.expr) = new expresionstruct;
                                          *(yyval.expr) = makearithmetic((yyvsp[-2].expr)->str,*(yyvsp[-1].str),(yyvsp[0].expr)->str) ; 
                                          (yyval.expr)->tipo = "aritmetico";
                                          delete (yyvsp[-2].expr); delete (yyvsp[0].expr); }
#line 1809 "parser.cpp" /* yacc.c:1652  */
    break;

  case 55:
#line 291 "parser.y" /* yacc.c:1652  */
    { (yyval.expr) = new expresionstruct;
                                          *(yyval.expr) = makearithmetic((yyvsp[-2].expr)->str,*(yyvsp[-1].str),(yyvsp[0].expr)->str) ; 
                                          (yyval.expr)->tipo = "aritmetico";
                                          delete (yyvsp[-2].expr); delete (yyvsp[0].expr); }
#line 1818 "parser.cpp" /* yacc.c:1652  */
    break;

  case 56:
#line 295 "parser.y" /* yacc.c:1652  */
    { (yyval.expr) = new expresionstruct;
                                          *(yyval.expr) = makearithmetic((yyvsp[-2].expr)->str,*(yyvsp[-1].str),(yyvsp[0].expr)->str) ; 
                                          (yyval.expr)->tipo = "aritmetico";
                                          delete (yyvsp[-2].expr); delete (yyvsp[0].expr); }
#line 1827 "parser.cpp" /* yacc.c:1652  */
    break;

  case 57:
#line 299 "parser.y" /* yacc.c:1652  */
    { (yyval.expr) = new expresionstruct;
                                          codigo.completarInstrucciones((yyvsp[-3].expr)->trues,(yyvsp[-1].number)) ;
                                          (yyval.expr)->trues = (yyvsp[0].expr)->trues;
                                          (yyval.expr)->falses = *unir((yyvsp[-3].expr)->falses, (yyvsp[0].expr)->falses);
                                          (yyval.expr)->tipo = "booleano";
                                          delete (yyvsp[-3].expr); delete (yyvsp[0].expr); }
#line 1838 "parser.cpp" /* yacc.c:1652  */
    break;

  case 58:
#line 305 "parser.y" /* yacc.c:1652  */
    { (yyval.expr) = new expresionstruct;
                                          codigo.completarInstrucciones((yyvsp[-3].expr)->falses,(yyvsp[-1].number)) ;
                                          (yyval.expr)->trues = *unir((yyvsp[-3].expr)->trues, (yyvsp[0].expr)->trues);
                                          (yyval.expr)->falses = (yyvsp[0].expr)->falses;
                                          (yyval.expr)->tipo = "booleano";
                                          delete (yyvsp[-3].expr); delete (yyvsp[0].expr); }
#line 1849 "parser.cpp" /* yacc.c:1652  */
    break;

  case 59:
#line 311 "parser.y" /* yacc.c:1652  */
    {(yyval.expr) = new expresionstruct;
                                          (yyval.expr)->trues = (yyvsp[0].expr)->falses;
                                          (yyval.expr)->falses = (yyvsp[0].expr)->trues;
                                          (yyval.expr)->tipo = "booleano";
                                          delete (yyvsp[0].expr);}
#line 1859 "parser.cpp" /* yacc.c:1652  */
    break;

  case 60:
#line 316 "parser.y" /* yacc.c:1652  */
    { (yyval.expr) = new expresionstruct; (yyval.expr)->str = *(yyvsp[0].str); }
#line 1865 "parser.cpp" /* yacc.c:1652  */
    break;

  case 61:
#line 317 "parser.y" /* yacc.c:1652  */
    { (yyval.expr) = new expresionstruct; (yyval.expr)->str = *(yyvsp[0].str); 
                                            (yyval.expr)->tipo = "ent";}
#line 1872 "parser.cpp" /* yacc.c:1652  */
    break;

  case 62:
#line 319 "parser.y" /* yacc.c:1652  */
    { (yyval.expr) = new expresionstruct; (yyval.expr)->str = *(yyvsp[0].str); 
                                            (yyval.expr)->tipo = "real";}
#line 1879 "parser.cpp" /* yacc.c:1652  */
    break;

  case 63:
#line 321 "parser.y" /* yacc.c:1652  */
    { (yyval.expr) = (yyvsp[-1].expr); }
#line 1885 "parser.cpp" /* yacc.c:1652  */
    break;


#line 1889 "parser.cpp" /* yacc.c:1652  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 324 "parser.y" /* yacc.c:1918  */

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
