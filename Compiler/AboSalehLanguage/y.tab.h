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
     PRINT = 271,
     RANGE = 272,
     IN = 273,
     INT = 274,
     FLOAT = 275,
     CHAR = 276,
     STRING = 277,
     BOOL = 278,
     VOID = 279,
     AND = 280,
     OR = 281,
     NOT = 282,
     EE = 283,
     NE = 284,
     GE = 285,
     LE = 286,
     G = 287,
     L = 288,
     PA = 289,
     SA = 290,
     MA = 291,
     DA = 292,
     MODA = 293,
     AO = 294,
     INCR = 295,
     DECR = 296,
     POW = 297,
     PLUS = 298,
     MINES = 299,
     MULT = 300,
     DIV = 301,
     MOD = 302,
     NUM_INT = 303,
     NUM_FLOAT = 304,
     ID = 305,
     STR = 306,
     CH = 307,
     BOOLVAL = 308,
     UMINUS = 309
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
#define PRINT 271
#define RANGE 272
#define IN 273
#define INT 274
#define FLOAT 275
#define CHAR 276
#define STRING 277
#define BOOL 278
#define VOID 279
#define AND 280
#define OR 281
#define NOT 282
#define EE 283
#define NE 284
#define GE 285
#define LE 286
#define G 287
#define L 288
#define PA 289
#define SA 290
#define MA 291
#define DA 292
#define MODA 293
#define AO 294
#define INCR 295
#define DECR 296
#define POW 297
#define PLUS 298
#define MINES 299
#define MULT 300
#define DIV 301
#define MOD 302
#define NUM_INT 303
#define NUM_FLOAT 304
#define ID 305
#define STR 306
#define CH 307
#define BOOLVAL 308
#define UMINUS 309



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 2058 of yacc.c  */
#line 49 "yacc_file.y"
 
    int   int_val;
    float float_val;
    char  char_val;
    bool  bool_val;
    char* str_val;


/* Line 2058 of yacc.c  */
#line 174 "y.tab.h"
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
