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
   Codigo codigo;
   PilaTablaSimbolos stPila;

#line 100 "parser.cpp" /* yacc.c:337  */
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
#line 37 "parser.y" /* yacc.c:352  */

    string *str ;
    expresionstruct *expr ;
    sentenciastruct *sent ;
    int number ;
    vector<int> *numlist ;
    vector<string> *lident ;

#line 205 "parser.cpp" /* yacc.c:352  */
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
#define YYLAST   300

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  59
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  146

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
       0,    81,    81,    81,    87,    93,    96,    96,    97,    99,
     103,   105,   108,   109,   112,   113,   116,   116,   120,   121,
     124,   124,   126,   127,   128,   131,   131,   132,   135,   136,
     139,   146,   153,   160,   160,   173,   179,   182,   187,   187,
     213,   216,   218,   220,   224,   228,   232,   236,   240,   244,
     248,   252,   256,   260,   266,   272,   277,   278,   279,   280
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
  "RDOUBLE", "$accept", "programa", "$@1", "bloqueppl", "bloque",
  "declaraciones", "$@2", "lista_de_ident", "resto_lista_id", "tipo",
  "decl_de_subprogs", "decl_de_subprograma", "$@3", "argumentos",
  "lista_de_param", "$@4", "clase_par", "resto_lis_de_param", "$@5",
  "lista_de_sentencias", "sentencia", "$@6", "$@7", "M", "N", "variable",
  "expresion", YY_NULLPTR
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

#define YYPACT_NINF -70

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-70)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-1)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -14,    14,    18,   -70,   -70,     5,   -43,   -70,   -70,   -70,
     -24,    19,    21,     3,   -24,     9,    17,   -70,   -70,    61,
     -70,   -70,    28,    61,    29,    30,    33,     3,    26,   -70,
      41,   -70,   -70,    38,   -70,   -70,    61,    61,   -70,   119,
      57,   -70,     3,   140,    71,    61,   -70,   -70,    61,     9,
     -43,   -43,     5,   161,   265,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,   -70,   -70,   -70,   -43,   -70,
      61,   -70,   -70,    62,   182,   203,   -70,   -70,    19,    63,
     -70,   -70,   280,   280,   280,   280,   280,   280,    -4,    -4,
     -70,   -70,    61,    61,    57,     3,    55,    98,    61,    59,
      65,   -70,    58,   -70,   265,   245,   -70,    74,   -70,   -70,
     224,   -70,   -70,   -35,    70,   -70,    57,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,     3,    72,   -70,   -70,   -43,   -70,
      60,   -70,    19,    57,    82,    76,    77,    64,   -35,   -70,
      57,   -70,   -70,    72,   -70,   -70
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     1,     0,     8,     3,    12,    13,
      15,     0,     0,    29,    15,    11,     0,    16,    42,     0,
      40,    41,     0,     0,     0,     0,     0,    29,     0,    14,
       0,     9,     6,    19,    58,    57,     0,     0,    56,     0,
       0,    40,     0,     0,     0,     0,     4,    28,     0,    11,
       8,     0,     0,     0,    55,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    40,    40,    40,     8,    40,
       0,    40,    35,     0,     0,     0,    10,     7,     0,     0,
      17,    59,    43,    48,    47,    46,    44,    45,    49,    50,
      51,    52,     0,     0,     0,    29,     0,     0,     0,     0,
       0,    30,     0,    18,    53,    54,    40,     0,    32,    40,
       0,    36,    37,     0,     0,     5,     0,    40,    24,    22,
      23,    20,    31,    40,     0,    27,    33,    40,     0,    21,
       0,    38,     0,     0,     0,     0,     0,     0,     0,    34,
       0,    25,    40,    27,    39,    26
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -70,   -70,   -70,    48,   -47,   -45,   -70,   -69,    53,   -48,
      96,   -70,   -70,   -70,   -70,   -70,   -26,   -30,   -70,   -23,
     -41,   -70,   -70,   -39,   -70,   -13,    -2
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     5,     7,    69,    10,    50,    16,    31,    11,
      13,    14,    33,    52,    79,   125,   121,   129,   143,    26,
      27,   130,   134,    40,    41,    38,    39
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      28,    71,    70,    78,    47,    77,    18,     8,     9,   102,
     118,   119,   120,     1,    28,    63,    64,     3,     4,     6,
      12,    43,    15,    95,    17,    30,    92,    93,    94,    28,
      96,    73,    98,    19,    53,    54,    20,    21,    22,    32,
      42,    44,    45,    74,    49,    23,    75,   106,    46,    48,
      51,    24,    25,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,   135,    18,    34,    35,   114,    97,   123,
     116,    68,   107,    36,    18,    99,   103,   108,   124,   113,
     132,   111,    28,   127,   126,    37,   136,   112,   131,   115,
     104,   105,   122,   142,   128,   137,   110,   138,   133,   139,
      80,   140,    76,   144,    55,    56,    57,    58,    59,    60,
      29,    28,   141,   145,     0,    61,    62,    63,    64,     0,
       0,     0,     0,    65,    66,    55,    56,    57,    58,    59,
      60,     0,     0,     0,     0,   109,    61,    62,    63,    64,
       0,     0,     0,     0,    65,    66,    55,    56,    57,    58,
      59,    60,     0,     0,     0,    67,     0,    61,    62,    63,
      64,     0,    72,     0,     0,    65,    66,    55,    56,    57,
      58,    59,    60,     0,    81,     0,     0,     0,    61,    62,
      63,    64,     0,     0,     0,     0,    65,    66,    55,    56,
      57,    58,    59,    60,     0,   100,     0,     0,     0,    61,
      62,    63,    64,     0,     0,     0,     0,    65,    66,    55,
      56,    57,    58,    59,    60,     0,     0,     0,     0,     0,
      61,    62,    63,    64,     0,   101,     0,     0,    65,    66,
      55,    56,    57,    58,    59,    60,     0,     0,     0,     0,
       0,    61,    62,    63,    64,     0,   117,     0,     0,    65,
      66,    55,    56,    57,    58,    59,    60,     0,     0,     0,
       0,     0,    61,    62,    63,    64,     0,     0,     0,     0,
      65,    55,    56,    57,    58,    59,    60,     0,     0,     0,
       0,     0,    61,    62,    63,    64,    -1,    -1,    -1,    -1,
      -1,    -1,     0,     0,     0,     0,     0,    61,    62,    63,
      64
};

static const yytype_int16 yycheck[] =
{
      13,    42,    41,    51,    27,    50,     3,    50,    51,    78,
      45,    46,    47,    27,    27,    19,    20,     3,     0,    14,
      44,    23,     3,    68,     3,    16,    65,    66,    67,    42,
      69,    44,    71,    30,    36,    37,    33,    34,    35,    22,
      12,    12,    12,    45,     3,    42,    48,    94,    15,    23,
      12,    48,    49,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,   132,     3,     4,     5,   106,    70,   116,
     109,    14,    95,    12,     3,    13,    13,    22,   117,    21,
     128,    22,    95,   124,   123,    24,   133,    22,   127,    15,
      92,    93,    22,   140,    22,    13,    98,    21,    38,    22,
      52,    37,    49,   142,     6,     7,     8,     9,    10,    11,
      14,   124,   138,   143,    -1,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,    25,    26,     6,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    37,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    25,    26,     6,     7,     8,     9,
      10,    11,    -1,    -1,    -1,    36,    -1,    17,    18,    19,
      20,    -1,    22,    -1,    -1,    25,    26,     6,     7,     8,
       9,    10,    11,    -1,    13,    -1,    -1,    -1,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    25,    26,     6,     7,
       8,     9,    10,    11,    -1,    13,    -1,    -1,    -1,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    25,    26,     6,
       7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      17,    18,    19,    20,    -1,    22,    -1,    -1,    25,    26,
       6,     7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    17,    18,    19,    20,    -1,    22,    -1,    -1,    25,
      26,     6,     7,     8,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
      25,     6,     7,     8,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    17,    18,    19,    20,     6,     7,     8,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    17,    18,    19,
      20
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    27,    54,     3,     0,    55,    14,    56,    50,    51,
      58,    62,    44,    63,    64,     3,    60,     3,     3,    30,
      33,    34,    35,    42,    48,    49,    72,    73,    78,    63,
      16,    61,    22,    65,     4,     5,    12,    24,    78,    79,
      76,    77,    12,    79,    12,    12,    15,    72,    23,     3,
      59,    12,    66,    79,    79,     6,     7,     8,     9,    10,
      11,    17,    18,    19,    20,    25,    26,    36,    14,    57,
      76,    73,    22,    78,    79,    79,    61,    58,    62,    67,
      56,    13,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    76,    76,    76,    58,    76,    79,    76,    13,
      13,    22,    60,    13,    79,    79,    57,    72,    22,    37,
      79,    22,    22,    21,    76,    15,    76,    22,    45,    46,
      47,    69,    22,    57,    76,    68,    76,    73,    22,    70,
      74,    76,    62,    38,    75,    60,    57,    13,    21,    22,
      37,    69,    57,    71,    76,    70
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    55,    54,    56,    57,    59,    58,    58,    60,
      61,    61,    62,    62,    63,    63,    65,    64,    66,    66,
      68,    67,    69,    69,    69,    71,    70,    70,    72,    72,
      73,    73,    73,    74,    73,    73,    73,    73,    75,    73,
      76,    77,    78,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     4,     5,     4,     0,     5,     0,     2,
       3,     0,     1,     1,     2,     0,     0,     5,     3,     0,
       0,     6,     1,     1,     1,     0,     7,     0,     2,     0,
       4,     7,     5,     0,    12,     3,     5,     5,     0,    14,
       0,     0,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     4,     4,     2,     1,     1,     1,     3
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
#line 81 "parser.y" /* yacc.c:1652  */
    {codigo.anadirInstruccion(*(yyvsp[-1].str) + " " + *(yyvsp[0].str) + ";");
                          TablaSimbolos st; stPila.empilar(st);}
#line 1428 "parser.cpp" /* yacc.c:1652  */
    break;

  case 3:
#line 83 "parser.y" /* yacc.c:1652  */
    {codigo.anadirInstruccion("halt;");
                      codigo.escribir();}
#line 1435 "parser.cpp" /* yacc.c:1652  */
    break;

  case 5:
#line 93 "parser.y" /* yacc.c:1652  */
    { (yyval.sent) = new sentenciastruct; (yyval.sent)->exits = (yyvsp[-1].sent)->exits; }
#line 1441 "parser.cpp" /* yacc.c:1652  */
    break;

  case 6:
#line 96 "parser.y" /* yacc.c:1652  */
    { codigo.anadirDeclaraciones(*(yyvsp[-1].lident) , *(yyvsp[-2].str)); }
#line 1447 "parser.cpp" /* yacc.c:1652  */
    break;

  case 9:
#line 99 "parser.y" /* yacc.c:1652  */
    {(yyval.lident)  = (yyvsp[0].lident) ;
                                     (yyval.lident)->push_back(*(yyvsp[-1].str));}
#line 1454 "parser.cpp" /* yacc.c:1652  */
    break;

  case 10:
#line 103 "parser.y" /* yacc.c:1652  */
    {(yyval.lident)  = (yyvsp[0].lident) ;
                                             (yyval.lident)->push_back(*(yyvsp[-1].str));}
#line 1461 "parser.cpp" /* yacc.c:1652  */
    break;

  case 11:
#line 105 "parser.y" /* yacc.c:1652  */
    {(yyval.lident) = new vector<string>;}
#line 1467 "parser.cpp" /* yacc.c:1652  */
    break;

  case 12:
#line 108 "parser.y" /* yacc.c:1652  */
    { (yyval.str) = new std::string("ent");}
#line 1473 "parser.cpp" /* yacc.c:1652  */
    break;

  case 13:
#line 109 "parser.y" /* yacc.c:1652  */
    { (yyval.str) = new std::string("real");}
#line 1479 "parser.cpp" /* yacc.c:1652  */
    break;

  case 15:
#line 113 "parser.y" /* yacc.c:1652  */
    {}
#line 1485 "parser.cpp" /* yacc.c:1652  */
    break;

  case 16:
#line 116 "parser.y" /* yacc.c:1652  */
    {codigo.anadirInstruccion(*(yyvsp[-1].str) +" "+ *(yyvsp[0].str));}
#line 1491 "parser.cpp" /* yacc.c:1652  */
    break;

  case 17:
#line 117 "parser.y" /* yacc.c:1652  */
    {codigo.anadirInstruccion("endproc;");}
#line 1497 "parser.cpp" /* yacc.c:1652  */
    break;

  case 20:
#line 124 "parser.y" /* yacc.c:1652  */
    {codigo.anadirParametros(*(yyvsp[-2].lident), *(yyvsp[0].str), *(yyvsp[-3].str) ); }
#line 1503 "parser.cpp" /* yacc.c:1652  */
    break;

  case 22:
#line 126 "parser.y" /* yacc.c:1652  */
    { (yyval.str) = new std::string("in");}
#line 1509 "parser.cpp" /* yacc.c:1652  */
    break;

  case 23:
#line 127 "parser.y" /* yacc.c:1652  */
    { (yyval.str) = new std::string("out");}
#line 1515 "parser.cpp" /* yacc.c:1652  */
    break;

  case 24:
#line 128 "parser.y" /* yacc.c:1652  */
    { (yyval.str) = new std::string("in out");}
#line 1521 "parser.cpp" /* yacc.c:1652  */
    break;

  case 25:
#line 131 "parser.y" /* yacc.c:1652  */
    {codigo.anadirParametros(*(yyvsp[-2].lident), *(yyvsp[0].str), *(yyvsp[-3].str));}
#line 1527 "parser.cpp" /* yacc.c:1652  */
    break;

  case 28:
#line 135 "parser.y" /* yacc.c:1652  */
    {(yyval.sent)->exits = *unir((yyvsp[-1].sent)->exits, (yyvsp[0].sent)->exits);}
#line 1533 "parser.cpp" /* yacc.c:1652  */
    break;

  case 29:
#line 136 "parser.y" /* yacc.c:1652  */
    { (yyval.sent)->exits = * new vector<int>; }
#line 1539 "parser.cpp" /* yacc.c:1652  */
    break;

  case 30:
#line 139 "parser.y" /* yacc.c:1652  */
    { 
               codigo.anadirInstruccion(*(yyvsp[-3].str) + " := " + (yyvsp[-1].expr)->str + ";") ; 
               delete (yyvsp[-3].str) ; delete (yyvsp[-1].expr);
               (yyval.sent) = new sentenciastruct;
               (yyval.sent)->exits.clear();
               (yyval.sent)->tipo = "asignacion";
               }
#line 1551 "parser.cpp" /* yacc.c:1652  */
    break;

  case 31:
#line 146 "parser.y" /* yacc.c:1652  */
    {
              	(yyval.sent) = new sentenciastruct;
              	(yyval.sent)->exits = (yyvsp[-2].sent)->exits;
	      	    codigo.completarInstrucciones((yyvsp[-5].expr)->trues,(yyvsp[-3].number)) ;
    	  	    codigo.completarInstrucciones((yyvsp[-5].expr)->falses,(yyvsp[-1].number)) ;
	      	    delete (yyvsp[-5].expr) ;
              }
#line 1563 "parser.cpp" /* yacc.c:1652  */
    break;

  case 32:
#line 153 "parser.y" /* yacc.c:1652  */
    {(yyval.sent) = new sentenciastruct;
                              codigo.anadirInstruccion("goto");
                              vector<int> tmp1 ; tmp1.push_back((yyvsp[-1].number)) ;
                              codigo.completarInstrucciones(tmp1, (yyvsp[-3].number)) ;
                              codigo.completarInstrucciones((yyvsp[-2].sent)->exits,(yyvsp[-1].number)+1);
                              (yyval.sent)->exits.clear();
                              delete (yyvsp[-2].sent);}
#line 1575 "parser.cpp" /* yacc.c:1652  */
    break;

  case 33:
#line 160 "parser.y" /* yacc.c:1652  */
    {codigo.anadirInstruccion("goto");}
#line 1581 "parser.cpp" /* yacc.c:1652  */
    break;

  case 34:
#line 161 "parser.y" /* yacc.c:1652  */
    {(yyval.sent) = new sentenciastruct; 
                    codigo.completarInstrucciones((yyvsp[-8].expr)->trues,(yyvsp[-6].number)) ;
                    codigo.completarInstrucciones((yyvsp[-8].expr)->falses, (yyvsp[-4].number)+1) ;

					          vector<int> tmp1 ; tmp1.push_back((yyvsp[-4].number)) ;
                    codigo.completarInstrucciones(tmp1, (yyvsp[-9].number)) ;
                    
					          codigo.completarInstrucciones((yyvsp[-5].sent)->exits, (yyvsp[-4].number)+1);
					          (yyval.sent)->exits.clear();
                    (yyval.sent)->exits = (yyvsp[-1].sent)->exits;

                    delete (yyvsp[-8].expr) ;}
#line 1598 "parser.cpp" /* yacc.c:1652  */
    break;

  case 35:
#line 173 "parser.y" /* yacc.c:1652  */
    { 
               (yyval.sent) = new sentenciastruct;
               codigo.completarInstrucciones((yyvsp[-1].expr)->falses, codigo.obtenRef());
               (yyval.sent)->exits = (yyvsp[-1].expr)->trues;
               delete (yyvsp[-1].expr);
               }
#line 1609 "parser.cpp" /* yacc.c:1652  */
    break;

  case 36:
#line 179 "parser.y" /* yacc.c:1652  */
    {(yyval.sent) = new sentenciastruct;
						(yyval.sent)->exits = * new vector<int>;
						codigo.anadirInstruccion("read "+ *(yyvsp[-2].str) + ";");}
#line 1617 "parser.cpp" /* yacc.c:1652  */
    break;

  case 37:
#line 182 "parser.y" /* yacc.c:1652  */
    {(yyval.sent) = new sentenciastruct;
											(yyval.sent)->exits = * new vector<int>;
											codigo.anadirInstruccion("write "+ (yyvsp[-2].expr)->str + ";");
											codigo.anadirInstruccion("writeln;");}
#line 1626 "parser.cpp" /* yacc.c:1652  */
    break;

  case 38:
#line 187 "parser.y" /* yacc.c:1652  */
    {codigo.anadirInstruccion("goto");}
#line 1632 "parser.cpp" /* yacc.c:1652  */
    break;

  case 39:
#line 188 "parser.y" /* yacc.c:1652  */
    {(yyval.sent) = new sentenciastruct;
                      if ((yyvsp[-11].sent)->tipo != "asignacion")
                        yyerror("Error semántico. El primer elemento debe ser una asignación.");
                      else if ((yyvsp[-6].sent)->tipo != "asignacion")
                        yyerror("Error semántico. El tercer elemento debe ser una asignación.");
                      else if ((yyvsp[-9].expr)->tipo != "comparacion" && (yyvsp[-9].expr)->tipo != "booleano")
                        yyerror("Error semántico. El segundo elemento debe ser una expresión de comparación o booleana.");
                      // TODO los correspondiente a la tabla de símbolos.
                      // Está previamente declarada la variable? Error.
                      else{
                          codigo.anadirInstruccion("goto");
                          vector<int> tmp1 ; tmp1.push_back((yyvsp[-5].number)) ;
                          codigo.completarInstrucciones(tmp1, (yyvsp[-10].number)) ;
                          tmp1.clear(); tmp1.push_back((yyvsp[0].number)) ;
                          codigo.completarInstrucciones(tmp1, (yyvsp[-7].number)) ;
                          codigo.completarInstrucciones((yyvsp[-9].expr)->trues,(yyvsp[-5].number)+1) ;
                          codigo.completarInstrucciones((yyvsp[-9].expr)->falses, (yyvsp[0].number)+1) ;
                          codigo.completarInstrucciones((yyvsp[-1].sent)->exits, (yyvsp[0].number)+1);
					                (yyval.sent)->exits.clear();
                        }
                      }
#line 1658 "parser.cpp" /* yacc.c:1652  */
    break;

  case 40:
#line 213 "parser.y" /* yacc.c:1652  */
    { (yyval.number) = codigo.obtenRef(); }
#line 1664 "parser.cpp" /* yacc.c:1652  */
    break;

  case 42:
#line 218 "parser.y" /* yacc.c:1652  */
    { (yyval.str) = (yyvsp[0].str) ; }
#line 1670 "parser.cpp" /* yacc.c:1652  */
    break;

  case 43:
#line 220 "parser.y" /* yacc.c:1652  */
    { (yyval.expr) = new expresionstruct;
                                          *(yyval.expr) = makecomparison((yyvsp[-2].expr)->str,*(yyvsp[-1].str),(yyvsp[0].expr)->str); 
                                          (yyval.expr)->tipo = "comparacion";
                                          delete (yyvsp[-2].expr); delete (yyvsp[0].expr); }
#line 1679 "parser.cpp" /* yacc.c:1652  */
    break;

  case 44:
#line 224 "parser.y" /* yacc.c:1652  */
    { (yyval.expr) = new expresionstruct;
                                          *(yyval.expr) = makecomparison((yyvsp[-2].expr)->str,*(yyvsp[-1].str),(yyvsp[0].expr)->str) ; 
                                          (yyval.expr)->tipo = "comparacion";
                                          delete (yyvsp[-2].expr); delete (yyvsp[0].expr); }
#line 1688 "parser.cpp" /* yacc.c:1652  */
    break;

  case 45:
#line 228 "parser.y" /* yacc.c:1652  */
    { (yyval.expr) = new expresionstruct;
                                          *(yyval.expr) = makecomparison((yyvsp[-2].expr)->str,*(yyvsp[-1].str),(yyvsp[0].expr)->str) ;
                                          (yyval.expr)->tipo = "comparacion"; 
                                          delete (yyvsp[-2].expr); delete (yyvsp[0].expr); }
#line 1697 "parser.cpp" /* yacc.c:1652  */
    break;

  case 46:
#line 232 "parser.y" /* yacc.c:1652  */
    { (yyval.expr) = new expresionstruct;
                                          *(yyval.expr) = makecomparison((yyvsp[-2].expr)->str,*(yyvsp[-1].str),(yyvsp[0].expr)->str) ; 
                                          (yyval.expr)->tipo = "comparacion";
                                          delete (yyvsp[-2].expr); delete (yyvsp[0].expr); }
#line 1706 "parser.cpp" /* yacc.c:1652  */
    break;

  case 47:
#line 236 "parser.y" /* yacc.c:1652  */
    { (yyval.expr) = new expresionstruct;
                                          *(yyval.expr) = makecomparison((yyvsp[-2].expr)->str,*(yyvsp[-1].str),(yyvsp[0].expr)->str) ; 
                                          (yyval.expr)->tipo = "comparacion";
                                          delete (yyvsp[-2].expr); delete (yyvsp[0].expr); }
#line 1715 "parser.cpp" /* yacc.c:1652  */
    break;

  case 48:
#line 240 "parser.y" /* yacc.c:1652  */
    { (yyval.expr) = new expresionstruct;
                                          *(yyval.expr) = makecomparison((yyvsp[-2].expr)->str,*(yyvsp[-1].str),(yyvsp[0].expr)->str) ; 
                                          (yyval.expr)->tipo = "comparacion";
                                          delete (yyvsp[-2].expr); delete (yyvsp[0].expr); }
#line 1724 "parser.cpp" /* yacc.c:1652  */
    break;

  case 49:
#line 244 "parser.y" /* yacc.c:1652  */
    { (yyval.expr) = new expresionstruct;
                                          *(yyval.expr) = makearithmetic((yyvsp[-2].expr)->str,*(yyvsp[-1].str),(yyvsp[0].expr)->str) ; 
                                          (yyval.expr)->tipo = "aritmetico";
                                          delete (yyvsp[-2].expr); delete (yyvsp[0].expr); }
#line 1733 "parser.cpp" /* yacc.c:1652  */
    break;

  case 50:
#line 248 "parser.y" /* yacc.c:1652  */
    { (yyval.expr) = new expresionstruct;
                                          *(yyval.expr) = makearithmetic((yyvsp[-2].expr)->str,*(yyvsp[-1].str),(yyvsp[0].expr)->str) ; 
                                          (yyval.expr)->tipo = "aritmetico";
                                          delete (yyvsp[-2].expr); delete (yyvsp[0].expr); }
#line 1742 "parser.cpp" /* yacc.c:1652  */
    break;

  case 51:
#line 252 "parser.y" /* yacc.c:1652  */
    { (yyval.expr) = new expresionstruct;
                                          *(yyval.expr) = makearithmetic((yyvsp[-2].expr)->str,*(yyvsp[-1].str),(yyvsp[0].expr)->str) ; 
                                          (yyval.expr)->tipo = "aritmetico";
                                          delete (yyvsp[-2].expr); delete (yyvsp[0].expr); }
#line 1751 "parser.cpp" /* yacc.c:1652  */
    break;

  case 52:
#line 256 "parser.y" /* yacc.c:1652  */
    { (yyval.expr) = new expresionstruct;
                                          *(yyval.expr) = makearithmetic((yyvsp[-2].expr)->str,*(yyvsp[-1].str),(yyvsp[0].expr)->str) ; 
                                          (yyval.expr)->tipo = "aritmetico";
                                          delete (yyvsp[-2].expr); delete (yyvsp[0].expr); }
#line 1760 "parser.cpp" /* yacc.c:1652  */
    break;

  case 53:
#line 260 "parser.y" /* yacc.c:1652  */
    { (yyval.expr) = new expresionstruct;
                                          codigo.completarInstrucciones((yyvsp[-3].expr)->trues,(yyvsp[-1].number)) ;
                                          (yyval.expr)->trues = (yyvsp[0].expr)->trues;
                                          (yyval.expr)->falses = *unir((yyvsp[-3].expr)->falses, (yyvsp[0].expr)->falses);
                                          (yyval.expr)->tipo = "booleano";
                                          delete (yyvsp[-3].expr); delete (yyvsp[0].expr); }
#line 1771 "parser.cpp" /* yacc.c:1652  */
    break;

  case 54:
#line 266 "parser.y" /* yacc.c:1652  */
    { (yyval.expr) = new expresionstruct;
                                          codigo.completarInstrucciones((yyvsp[-3].expr)->falses,(yyvsp[-1].number)) ;
                                          (yyval.expr)->trues = *unir((yyvsp[-3].expr)->trues, (yyvsp[0].expr)->trues);
                                          (yyval.expr)->falses = (yyvsp[0].expr)->falses;
                                          (yyval.expr)->tipo = "booleano";
                                          delete (yyvsp[-3].expr); delete (yyvsp[0].expr); }
#line 1782 "parser.cpp" /* yacc.c:1652  */
    break;

  case 55:
#line 272 "parser.y" /* yacc.c:1652  */
    {(yyval.expr) = new expresionstruct;
                                          (yyval.expr)->trues = (yyvsp[0].expr)->falses;
                                          (yyval.expr)->falses = (yyvsp[0].expr)->trues;
                                          (yyval.expr)->tipo = "booleano";
                                          delete (yyvsp[0].expr);}
#line 1792 "parser.cpp" /* yacc.c:1652  */
    break;

  case 56:
#line 277 "parser.y" /* yacc.c:1652  */
    { (yyval.expr) = new expresionstruct; (yyval.expr)->str = *(yyvsp[0].str); }
#line 1798 "parser.cpp" /* yacc.c:1652  */
    break;

  case 57:
#line 278 "parser.y" /* yacc.c:1652  */
    { (yyval.expr) = new expresionstruct; (yyval.expr)->str = *(yyvsp[0].str); }
#line 1804 "parser.cpp" /* yacc.c:1652  */
    break;

  case 58:
#line 279 "parser.y" /* yacc.c:1652  */
    { (yyval.expr) = new expresionstruct; (yyval.expr)->str = *(yyvsp[0].str); }
#line 1810 "parser.cpp" /* yacc.c:1652  */
    break;

  case 59:
#line 280 "parser.y" /* yacc.c:1652  */
    { (yyval.expr) = (yyvsp[-1].expr); }
#line 1816 "parser.cpp" /* yacc.c:1652  */
    break;


#line 1820 "parser.cpp" /* yacc.c:1652  */
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
#line 283 "parser.y" /* yacc.c:1918  */

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
