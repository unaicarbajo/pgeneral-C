/* A Bison parser, made by GNU Bison 3.3.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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
#line 47 "parser.y" /* yacc.c:1921  */

    string *str ;
    expresionstruct *expr ;
    sentenciastruct *sent ;
    int number ;
    vector<int> *numlist ;
    vector<string> *lident ;

#line 120 "parser.hpp" /* yacc.c:1921  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_HPP_INCLUDED  */
