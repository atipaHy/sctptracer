/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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

#ifndef YY_FILTYY_FILT_PARSER_H_INCLUDED
# define YY_FILTYY_FILT_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int filtyydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    EOS = 258,
    LPAREN = 259,
    RPAREN = 260,
    GREATER = 261,
    GREATER_EQ = 262,
    LESS = 263,
    LESS_EQ = 264,
    EQUAL = 265,
    NEQUAL = 266,
    NOT = 267,
    AND = 268,
    OR = 269,
    BAND = 270,
    BOR = 271,
    PLUS = 272,
    MINUS = 273,
    TIMES = 274,
    DIVIDE = 275,
    MOD = 276,
    VARIABLE = 277,
    STRING = 278,
    SIGNED = 279,
    UNSIGNED = 280,
    BOOL = 281,
    IPADDR = 282
  };
#endif
/* Tokens.  */
#define EOS 258
#define LPAREN 259
#define RPAREN 260
#define GREATER 261
#define GREATER_EQ 262
#define LESS 263
#define LESS_EQ 264
#define EQUAL 265
#define NEQUAL 266
#define NOT 267
#define AND 268
#define OR 269
#define BAND 270
#define BOR 271
#define PLUS 272
#define MINUS 273
#define TIMES 274
#define DIVIDE 275
#define MOD 276
#define VARIABLE 277
#define STRING 278
#define SIGNED 279
#define UNSIGNED 280
#define BOOL 281
#define IPADDR 282

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 70 "./filt_parser.y" /* yacc.c:1909  */
 /* the types that we use in the tokens */
    char *string;
    long signed_long;
    u_long unsigned_long;
    ipaddr *pipaddr;
    Bool bool;
    enum optype op;
    struct filter_node *pf;

#line 118 "filt_parser.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE filtyylval;

int filtyyparse (void);

#endif /* !YY_FILTYY_FILT_PARSER_H_INCLUDED  */
