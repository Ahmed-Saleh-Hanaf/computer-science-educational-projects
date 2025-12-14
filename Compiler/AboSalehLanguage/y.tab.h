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
     AND = 277,
     OR = 278,
     NOT = 279,
     EE = 280,
     NE = 281,
     GE = 282,
     LE = 283,
     G = 284,
     L = 285,
     PA = 286,
     SA = 287,
     MA = 288,
     DA = 289,
     MODA = 290,
     AO = 291,
     INCR = 292,
     DECR = 293,
     POW = 294,
     PLUS = 295,
     MINES = 296,
     MULT = 297,
     DIV = 298,
     MOD = 299,
     NUM_INT = 300,
     NUM_FLOAT = 301,
     ID = 302,
     STR = 303,
     CH = 304,
     BOOLVAL = 305,
     UMINUS = 306
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
#define AND 277
#define OR 278
#define NOT 279
#define EE 280
#define NE 281
#define GE 282
#define LE 283
#define G 284
#define L 285
#define PA 286
#define SA 287
#define MA 288
#define DA 289
#define MODA 290
#define AO 291
#define INCR 292
#define DECR 293
#define POW 294
#define PLUS 295
#define MINES 296
#define MULT 297
#define DIV 298
#define MOD 299
#define NUM_INT 300
#define NUM_FLOAT 301
#define ID 302
#define STR 303
#define CH 304
#define BOOLVAL 305
#define UMINUS 306



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 2058 of yacc.c  */
#line 51 "yacc_file.y"
 
    int int_val;
    float float_val;
    char char_val;
    bool bool_val;
    char* str_val;


/* Line 2058 of yacc.c  */
#line 168 "y.tab.h"
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
