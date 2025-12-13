/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     CLASS = 258,
     FUN = 259,
     RETURN = 260,
     FOR = 261,
     WHILE = 262,
     BREAK = 263,
     CONTINUE = 264,
     SWITCH = 265,
     CASE = 266,
     DEFAULT = 267,
     IF = 268,
     ELIF = 269,
     ELSE = 270,
     INT = 271,
     FLOAT = 272,
     CHAR = 273,
     STRING = 274,
     BOOL = 275,
     VOID = 276,
     TRUE = 277,
     FALSE = 278,
     AND = 279,
     OR = 280,
     NOT = 281,
     EE = 282,
     NE = 283,
     GE = 284,
     LE = 285,
     G = 286,
     L = 287,
     PA = 288,
     SA = 289,
     MA = 290,
     DA = 291,
     MODA = 292,
     AO = 293,
     INCR = 294,
     DECR = 295,
     POW = 296,
     PLUS = 297,
     MINES = 298,
     MULT = 299,
     DIV = 300,
     MOD = 301,
     NUM_INT = 302,
     NUM_FLOAT = 303,
     ID = 304,
     STR = 305,
     CH = 306,
     UMINUS = 307
   };
#endif
/* Tokens.  */
#define CLASS 258
#define FUN 259
#define RETURN 260
#define FOR 261
#define WHILE 262
#define BREAK 263
#define CONTINUE 264
#define SWITCH 265
#define CASE 266
#define DEFAULT 267
#define IF 268
#define ELIF 269
#define ELSE 270
#define INT 271
#define FLOAT 272
#define CHAR 273
#define STRING 274
#define BOOL 275
#define VOID 276
#define TRUE 277
#define FALSE 278
#define AND 279
#define OR 280
#define NOT 281
#define EE 282
#define NE 283
#define GE 284
#define LE 285
#define G 286
#define L 287
#define PA 288
#define SA 289
#define MA 290
#define DA 291
#define MODA 292
#define AO 293
#define INCR 294
#define DECR 295
#define POW 296
#define PLUS 297
#define MINES 298
#define MULT 299
#define DIV 300
#define MOD 301
#define NUM_INT 302
#define NUM_FLOAT 303
#define ID 304
#define STR 305
#define CH 306
#define UMINUS 307



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 2058 of yacc.c  */
#line 50 "yacc_file.y"
 
    int int_val;
    float float_val;
    char char_val;
    char* str_val;


/* Line 2058 of yacc.c  */
#line 169 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
