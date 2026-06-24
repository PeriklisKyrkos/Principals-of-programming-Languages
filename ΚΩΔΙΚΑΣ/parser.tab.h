/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
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
    MYAMOUNT = 258,
    DOUBLE_DOT = 259,
    DOUBLE_QUOTE = 260,
    COMMA = 261,
    LEFT_BRACKET = 262,
    LEFT_PAREN = 263,
    MYASCEND = 264,
    MYACTIVE = 265,
    MYADDON = 266,
    MYBONUS = 267,
    MYBOOLEAN = 268,
    MYCATEGTYPE = 269,
    MYCOLUMNS = 270,
    MYCONTENT = 271,
    MYDESCEND = 272,
    MYDIRECTION = 273,
    MYDISTRIIBUTED = 274,
    MYDIVIDENT = 275,
    MYDRAWBREAK = 276,
    MYDRAWID = 277,
    MYDRAWTIME = 278,
    MYFIXED = 279,
    MYFIRST = 280,
    MYFLOAT = 281,
    MYGAMEID = 282,
    MYGAMETYPE = 283,
    MYID = 284,
    MYJACKPOT = 285,
    MYIGNCASE = 286,
    MYINT = 287,
    MYLAST = 288,
    MYLIST = 289,
    MYMINDIST = 290,
    MYNULLHANDL = 291,
    MYNUMBER = 292,
    MYNUMOFELEMENTS = 293,
    MYPRICEPOINTS = 294,
    MYPRIZECATEG = 295,
    MYPROPERTY = 296,
    MYSIZE = 297,
    MYSORT = 298,
    MYSTATUS = 299,
    MYSTRING = 300,
    MYTOTALELEMS = 301,
    MYTOTALPAGES = 302,
    MYVISUALDRAW = 303,
    MYWAGERS = 304,
    MYWAGERSTATS = 305,
    MYWIN_NUMBERS = 306,
    MYWINNERS = 307,
    RIGHT_BRACKET = 308,
    RIGHT_PAREN = 309
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
