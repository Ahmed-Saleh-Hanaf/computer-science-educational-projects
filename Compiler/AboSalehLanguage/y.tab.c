/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "yacc_file.y"

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>

int yylex();
int yyerror(char* s);

typedef struct 
{
    char name[32];
    int type; // 0=int,1=float,2=char,3=bool,4=string 
    union {
            int   int_val;
	    float float_val;
	    char  char_val;
	    bool  bool_val;
	    char* str_val;
    } value;
}Variable;

Variable symtable[100];
int num_var = 0;

int get_var_index(char *name) 
{
    for (int i = 0; i < num_var; i++)
        if (strcmp(symtable[i].name, name) == 0) return i;
    return -1;
}

bool is_full()
{
   return num_var >= 99;
}

int add_var(char *name, int type) 
{
    strcpy(symtable[num_var].name, name);
    symtable[num_var].type = type;
    num_var++;
    return num_var-1;
}

/* Line 371 of yacc.c  */
#line 115 "y.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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
/* Line 387 of yacc.c  */
#line 49 "yacc_file.y"
 
    int   int_val;
    float float_val;
    char  char_val;
    bool  bool_val;
    char* str_val;


/* Line 387 of yacc.c  */
#line 275 "y.tab.c"
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

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 303 "y.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

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
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  68
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   305

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  115
/* YYNRULES -- Number of states.  */
#define YYNSTATES  237

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   309

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      59,    60,     2,     2,    61,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    56,    55,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    57,     2,    58,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     8,    10,    12,    14,    17,    20,
      23,    25,    27,    29,    31,    35,    38,    41,    44,    47,
      50,    51,    55,    59,    63,    65,    69,    73,    77,    79,
      83,    85,    87,    89,    92,    95,    98,   102,   105,   108,
     111,   114,   117,   120,   125,   129,   135,   136,   139,   144,
     148,   154,   155,   158,   163,   167,   173,   174,   177,   182,
     186,   192,   193,   196,   201,   205,   211,   212,   216,   220,
     224,   228,   234,   238,   242,   246,   250,   254,   258,   262,
     266,   269,   271,   273,   277,   281,   285,   289,   293,   297,
     305,   312,   313,   316,   317,   326,   331,   332,   336,   337,
     343,   355,   360,   365,   370,   372,   379,   383,   385,   386,
     389,   391,   393,   395,   397,   399
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      63,     0,    -1,    63,    64,    -1,    64,    -1,    99,    -1,
      95,    -1,    65,    -1,    68,    55,    -1,    71,    55,    -1,
      82,    55,    -1,    85,    -1,    91,    -1,    92,    -1,    88,
      -1,     5,    68,    55,    -1,     8,    55,    -1,     9,    55,
      -1,    94,    56,    -1,    93,    55,    -1,    66,    65,    -1,
      -1,    57,    66,    58,    -1,    68,    43,    69,    -1,    68,
      44,    69,    -1,    69,    -1,    69,    45,    70,    -1,    69,
      46,    70,    -1,    69,    47,    70,    -1,    70,    -1,    59,
      68,    60,    -1,    48,    -1,    49,    -1,    50,    -1,    50,
      40,    -1,    50,    41,    -1,    44,    70,    -1,    70,    42,
      70,    -1,    19,    72,    -1,    20,    74,    -1,    21,    76,
      -1,    22,    78,    -1,    23,    80,    -1,    50,    73,    -1,
      50,    39,    68,    73,    -1,    61,    50,    73,    -1,    61,
      50,    39,    68,    73,    -1,    -1,    50,    75,    -1,    50,
      39,    68,    75,    -1,    61,    50,    75,    -1,    61,    50,
      39,    68,    75,    -1,    -1,    50,    77,    -1,    50,    39,
      52,    77,    -1,    61,    50,    77,    -1,    61,    50,    39,
      52,    77,    -1,    -1,    50,    79,    -1,    50,    39,    51,
      79,    -1,    61,    50,    79,    -1,    61,    50,    39,    51,
      79,    -1,    -1,    50,    81,    -1,    50,    39,    53,    81,
      -1,    61,    50,    81,    -1,    61,    50,    39,    53,    81,
      -1,    -1,    50,    39,    68,    -1,    50,    39,    52,    -1,
      50,    39,    51,    -1,    50,    39,    53,    -1,    50,    39,
      59,    83,    60,    -1,    50,    34,    68,    -1,    50,    34,
      51,    -1,    50,    35,    68,    -1,    50,    36,    68,    -1,
      50,    37,    68,    -1,    50,    38,    68,    -1,    84,    25,
      83,    -1,    84,    26,    83,    -1,    27,    83,    -1,    84,
      -1,    53,    -1,    68,    28,    68,    -1,    68,    29,    68,
      -1,    68,    30,    68,    -1,    68,    31,    68,    -1,    68,
      32,    68,    -1,    68,    33,    68,    -1,    13,    59,    83,
      60,    67,    86,    87,    -1,    86,    14,    59,    83,    60,
      67,    -1,    -1,    15,    67,    -1,    -1,    10,    59,    68,
      60,    57,    89,    90,    58,    -1,    89,    11,    48,    67,
      -1,    -1,    12,    56,    67,    -1,    -1,     7,    59,    83,
      60,    67,    -1,     6,    50,    18,    17,    59,    48,    61,
      48,    61,    48,    60,    -1,    16,    59,    68,    60,    -1,
      16,    59,    51,    60,    -1,    16,    59,    50,    60,    -1,
      50,    -1,     4,    50,    59,    96,    60,    67,    -1,    96,
      61,    97,    -1,    97,    -1,    -1,    98,    50,    -1,    19,
      -1,    20,    -1,    21,    -1,    22,    -1,    23,    -1,     3,
      50,    57,    64,    58,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    89,    89,    90,    93,    94,    95,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   112,
     113,   116,   119,   120,   121,   124,   125,   126,   127,   130,
     131,   132,   133,   143,   153,   164,   165,   169,   170,   171,
     172,   173,   177,   187,   199,   208,   217,   221,   231,   243,
     252,   261,   265,   275,   287,   296,   305,   309,   319,   331,
     340,   349,   353,   363,   375,   384,   393,   397,   409,   417,
     425,   432,   440,   449,   463,   471,   479,   492,   505,   506,
     507,   508,   509,   513,   514,   515,   516,   517,   518,   522,
     525,   526,   529,   530,   534,   537,   538,   541,   542,   548,
     559,   577,   578,   579,   608,   647,   650,   651,   652,   655,
     658,   659,   660,   661,   662,   666
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CLASS", "FUN", "RETURN", "FOR", "WHILE",
  "BREAK", "CONTINUE", "SWITCH", "CASE", "DEFAULT", "IF", "ELIF", "ELSE",
  "PRINT", "RANGE", "IN", "INT", "FLOAT", "CHAR", "STRING", "BOOL", "VOID",
  "AND", "OR", "NOT", "EE", "NE", "GE", "LE", "G", "L", "PA", "SA", "MA",
  "DA", "MODA", "AO", "INCR", "DECR", "POW", "PLUS", "MINES", "MULT",
  "DIV", "MOD", "NUM_INT", "NUM_FLOAT", "ID", "STR", "CH", "BOOLVAL",
  "UMINUS", "';'", "':'", "'{'", "'}'", "'('", "')'", "','", "$accept",
  "code", "decler", "stmt", "stmt_list", "block", "exp", "term", "fact",
  "decler_var", "decler_int", "decler_int_list", "decler_float",
  "decler_float_list", "decler_char", "decler_char_list", "decler_str",
  "decler_str_list", "decler_bool", "decler_bool_list", "assign", "logic",
  "rel", "if_stmt", "elif_list", "else_opt", "switch_stmt", "case_list",
  "default_case", "while_stmt", "for_stmt", "print", "var", "fun",
  "param_list", "param", "type", "class", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,    59,    58,   123,   125,    40,
      41,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    62,    63,    63,    64,    64,    64,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    66,
      66,    67,    68,    68,    68,    69,    69,    69,    69,    70,
      70,    70,    70,    70,    70,    70,    70,    71,    71,    71,
      71,    71,    72,    72,    73,    73,    73,    74,    74,    75,
      75,    75,    76,    76,    77,    77,    77,    78,    78,    79,
      79,    79,    80,    80,    81,    81,    81,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    83,    83,
      83,    83,    83,    84,    84,    84,    84,    84,    84,    85,
      86,    86,    87,    87,    88,    89,    89,    90,    90,    91,
      92,    93,    93,    93,    94,    95,    96,    96,    96,    97,
      98,    98,    98,    98,    98,    99
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     1,     1,     1,     2,     2,     2,
       1,     1,     1,     1,     3,     2,     2,     2,     2,     2,
       0,     3,     3,     3,     1,     3,     3,     3,     1,     3,
       1,     1,     1,     2,     2,     2,     3,     2,     2,     2,
       2,     2,     2,     4,     3,     5,     0,     2,     4,     3,
       5,     0,     2,     4,     3,     5,     0,     2,     4,     3,
       5,     0,     2,     4,     3,     5,     0,     3,     3,     3,
       3,     5,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     1,     1,     3,     3,     3,     3,     3,     3,     7,
       6,     0,     2,     0,     8,     4,     0,     3,     0,     5,
      11,     4,     4,     4,     1,     6,     3,     1,     0,     2,
       1,     1,     1,     1,     1,     5
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    30,    31,    32,
       0,     0,     3,     6,     0,    24,    28,     0,     0,    10,
      13,    11,    12,     0,     0,     5,     4,     0,     0,    32,
       0,     0,     0,    15,    16,     0,     0,     0,    46,    37,
      51,    38,    56,    39,    61,    40,    66,    41,    35,     0,
       0,     0,     0,     0,     0,    33,    34,     0,     1,     2,
       0,     0,     7,     0,     0,     0,     0,     8,     9,    18,
      17,     0,   108,    14,     0,     0,    82,     0,     0,    81,
       0,     0,    32,     0,     0,     0,     0,    42,     0,     0,
      47,     0,     0,    52,     0,     0,    57,     0,     0,    62,
      73,    72,    74,    75,    76,    77,    69,    68,    70,     0,
      67,    29,    22,    23,    25,    26,    27,    36,     0,   110,
     111,   112,   113,   114,     0,   107,     0,     0,    80,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     103,   102,   101,    46,    46,    51,    51,    56,    56,    61,
      61,    66,    66,     0,     0,   115,     0,     0,   109,     0,
      83,    84,    85,    86,    87,    88,    20,    99,    78,    79,
      96,    91,    43,     0,    44,    48,     0,    49,    53,     0,
      54,    58,     0,    59,    63,     0,    64,    71,   105,   106,
       0,     0,    98,    93,    46,    51,    56,    61,    66,     0,
      21,    19,     0,     0,     0,     0,     0,    89,    45,    50,
      55,    60,    65,     0,     0,     0,    94,     0,    92,     0,
      95,    97,     0,     0,     0,   100,    90
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    21,    22,    23,   201,   177,    87,    25,    26,    27,
      49,    97,    51,   100,    53,   103,    55,   106,    57,   109,
      28,    88,    89,    29,   203,   217,    30,   202,   214,    31,
      32,    33,    34,    35,   134,   135,   136,    36
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -154
static const yytype_int16 yypact[] =
{
     168,   -41,   -37,   111,   -32,   -34,    -3,     1,    17,    21,
      32,    55,    72,    88,    97,   129,   111,  -154,  -154,    -6,
     111,   104,  -154,  -154,    -2,   119,   109,   147,   156,  -154,
    -154,  -154,  -154,   158,   124,  -154,  -154,   157,   163,     3,
     189,   202,    44,  -154,  -154,   111,    44,   175,   -25,  -154,
     -24,  -154,   -23,  -154,   -22,  -154,   -15,  -154,  -154,   219,
     111,   111,   111,   111,   207,  -154,  -154,   125,  -154,  -154,
     111,   111,  -154,   111,   111,   111,   111,  -154,  -154,  -154,
    -154,   168,   252,  -154,   211,    44,  -154,   210,   169,    23,
     155,   170,    96,   188,   161,   111,   197,  -154,   111,   199,
    -154,   198,   212,  -154,   201,   214,  -154,   208,   215,  -154,
    -154,    42,    42,    42,    42,    42,  -154,  -154,  -154,    44,
      42,  -154,   119,   119,   109,   109,   109,   109,   218,  -154,
    -154,  -154,  -154,  -154,    29,  -154,   227,   220,  -154,   111,
     111,   111,   111,   111,   111,   223,    44,    44,   224,   223,
    -154,  -154,  -154,    39,    12,   106,    18,   221,    45,   222,
      57,   225,    60,   102,   228,  -154,   223,   252,  -154,   236,
      42,    42,    42,    42,    42,    42,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,   111,  -154,  -154,   111,  -154,  -154,   233,
    -154,  -154,   238,  -154,  -154,   234,  -154,  -154,  -154,  -154,
     229,   187,   117,   101,    39,   106,   221,   222,   225,   243,
    -154,  -154,   244,   237,   239,   235,   223,  -154,  -154,  -154,
    -154,  -154,  -154,   240,   223,   223,  -154,    44,  -154,   247,
    -154,  -154,   242,   245,   223,  -154,  -154
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -154,  -154,   -11,    95,  -154,  -147,     0,    87,    -8,  -154,
    -154,  -149,  -154,  -133,  -154,  -131,  -154,  -153,  -154,  -150,
    -154,   -45,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,   131,  -154,  -154
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -105
static const yytype_int16 yytable[] =
{
      24,    91,   181,    40,   182,   184,   191,   193,    58,    37,
      69,   194,   196,    38,    95,    98,   101,   104,    41,   198,
      67,    24,   185,   187,   107,    42,   188,   190,    59,    60,
      61,    62,    63,    64,    65,    66,    96,    99,   102,   105,
     138,    70,    71,    65,    66,    90,   108,    94,   146,   147,
    -104,   183,    43,    72,   221,   218,    44,   186,   222,   111,
     112,   113,   114,   115,   120,   124,   125,   126,   127,   228,
     128,    85,   219,    96,   164,   220,    45,   230,   231,    99,
      46,    24,    70,    71,   189,    70,    71,   236,    16,   166,
     167,    47,    17,    18,    39,   153,   192,    86,   155,   195,
      96,   178,   179,    20,    68,    48,   102,     1,     2,     3,
       4,     5,     6,     7,     8,   215,   216,     9,   105,   163,
      10,   108,    50,    11,    12,    13,    14,    15,   212,   213,
     139,   140,   141,   142,   143,   144,    65,    66,    52,   170,
     171,   172,   173,   174,   175,    70,    71,    54,    16,    70,
      71,    76,    17,    18,    19,    16,   150,   122,   123,    17,
      18,    39,   121,    20,    73,    74,    75,    99,    70,    71,
      20,     1,     2,     3,     4,     5,     6,     7,     8,    56,
      80,     9,   232,   204,    10,   121,   205,    11,    12,    13,
      14,    15,     3,     4,     5,     6,     7,     8,    70,    71,
       9,    24,    77,    10,    70,    71,    11,    12,    13,    14,
      15,    78,    16,    79,    81,   148,    17,    18,    19,    16,
      84,   152,    82,    17,    18,    92,    93,    20,   137,   145,
     149,    16,    70,    71,    20,    17,    18,    19,   139,   140,
     141,   142,   143,   144,    83,   210,    20,   154,   151,   156,
     157,    16,   159,    70,    71,    17,    18,    39,   116,   117,
     118,   161,   158,    16,   160,   162,   119,    17,    18,    39,
     110,   129,   130,   131,   132,   133,   165,   168,    20,   169,
     176,   180,   102,   105,   200,   206,   108,   208,   197,   207,
     209,   223,   224,   225,   227,   233,   211,   226,   199,     0,
       0,   229,   234,     0,     0,   235
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-154)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       0,    46,   149,     3,   153,   154,   159,   160,    16,    50,
      21,   161,   162,    50,    39,    39,    39,    39,    50,   166,
      20,    21,   155,   156,    39,    59,   157,   158,    34,    35,
      36,    37,    38,    39,    40,    41,    61,    61,    61,    61,
      85,    43,    44,    40,    41,    45,    61,    47,    25,    26,
      56,    39,    55,    55,   207,   204,    55,    39,   208,    59,
      60,    61,    62,    63,    64,    73,    74,    75,    76,   216,
      81,    27,   205,    61,   119,   206,    59,   224,   225,    61,
      59,    81,    43,    44,    39,    43,    44,   234,    44,    60,
      61,    59,    48,    49,    50,    95,    39,    53,    98,    39,
      61,   146,   147,    59,     0,    50,    61,     3,     4,     5,
       6,     7,     8,     9,    10,    14,    15,    13,    61,   119,
      16,    61,    50,    19,    20,    21,    22,    23,    11,    12,
      28,    29,    30,    31,    32,    33,    40,    41,    50,   139,
     140,   141,   142,   143,   144,    43,    44,    50,    44,    43,
      44,    42,    48,    49,    50,    44,    60,    70,    71,    48,
      49,    50,    60,    59,    45,    46,    47,    61,    43,    44,
      59,     3,     4,     5,     6,     7,     8,     9,    10,    50,
      56,    13,   227,   183,    16,    60,   186,    19,    20,    21,
      22,    23,     5,     6,     7,     8,     9,    10,    43,    44,
      13,   201,    55,    16,    43,    44,    19,    20,    21,    22,
      23,    55,    44,    55,    57,    60,    48,    49,    50,    44,
      18,    60,    59,    48,    49,    50,    51,    59,    17,    60,
      60,    44,    43,    44,    59,    48,    49,    50,    28,    29,
      30,    31,    32,    33,    55,    58,    59,    50,    60,    50,
      52,    44,    51,    43,    44,    48,    49,    50,    51,    52,
      53,    53,    50,    44,    50,    50,    59,    48,    49,    50,
      51,    19,    20,    21,    22,    23,    58,    50,    59,    59,
      57,    57,    61,    61,    48,    52,    61,    53,    60,    51,
      61,    48,    48,    56,    59,    48,   201,    58,   167,    -1,
      -1,    61,    60,    -1,    -1,    60
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    13,
      16,    19,    20,    21,    22,    23,    44,    48,    49,    50,
      59,    63,    64,    65,    68,    69,    70,    71,    82,    85,
      88,    91,    92,    93,    94,    95,    99,    50,    50,    50,
      68,    50,    59,    55,    55,    59,    59,    59,    50,    72,
      50,    74,    50,    76,    50,    78,    50,    80,    70,    34,
      35,    36,    37,    38,    39,    40,    41,    68,     0,    64,
      43,    44,    55,    45,    46,    47,    42,    55,    55,    55,
      56,    57,    59,    55,    18,    27,    53,    68,    83,    84,
      68,    83,    50,    51,    68,    39,    61,    73,    39,    61,
      75,    39,    61,    77,    39,    61,    79,    39,    61,    81,
      51,    68,    68,    68,    68,    68,    51,    52,    53,    59,
      68,    60,    69,    69,    70,    70,    70,    70,    64,    19,
      20,    21,    22,    23,    96,    97,    98,    17,    83,    28,
      29,    30,    31,    32,    33,    60,    25,    26,    60,    60,
      60,    60,    60,    68,    50,    68,    50,    52,    50,    51,
      50,    53,    50,    68,    83,    58,    60,    61,    50,    59,
      68,    68,    68,    68,    68,    68,    57,    67,    83,    83,
      57,    67,    73,    39,    73,    75,    39,    75,    77,    39,
      77,    79,    39,    79,    81,    39,    81,    60,    67,    97,
      48,    66,    89,    86,    68,    68,    52,    51,    53,    61,
      58,    65,    11,    12,    90,    14,    15,    87,    73,    75,
      77,    79,    81,    48,    48,    56,    58,    59,    67,    61,
      67,    67,    83,    48,    60,    60,    67
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
        break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
	    /* Fall through.  */
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

  return yystpcpy (yyres, yystr) - yyres;
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

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
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
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
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
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
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

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
      yychar = YYLEX;
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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 7:
/* Line 1792 of yacc.c  */
#line 98 "yacc_file.y"
    { printf("Result: %f\n", (yyvsp[(1) - (2)].float_val)); }
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 119 "yacc_file.y"
    { (yyval.float_val) = (yyvsp[(1) - (3)].float_val) + (yyvsp[(3) - (3)].float_val); }
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 120 "yacc_file.y"
    { (yyval.float_val) = (yyvsp[(1) - (3)].float_val) - (yyvsp[(3) - (3)].float_val); }
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 121 "yacc_file.y"
    { (yyval.float_val) = (yyvsp[(1) - (1)].float_val); }
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 124 "yacc_file.y"
    { (yyval.float_val) = (yyvsp[(1) - (3)].float_val) * (yyvsp[(3) - (3)].float_val); }
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 125 "yacc_file.y"
    { if((yyvsp[(3) - (3)].float_val)==0) { printf("Error: divide by zero\n"); (yyval.float_val)=0; } else (yyval.float_val)=(yyvsp[(1) - (3)].float_val)/(yyvsp[(3) - (3)].float_val); }
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 126 "yacc_file.y"
    { if((yyvsp[(3) - (3)].float_val)==0) { printf("Error: modulo by zero\n"); (yyval.float_val)=0; } else (yyval.float_val)=fmod((yyvsp[(1) - (3)].float_val),(yyvsp[(3) - (3)].float_val)); }
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 127 "yacc_file.y"
    { (yyval.float_val) = (yyvsp[(1) - (1)].float_val); }
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 130 "yacc_file.y"
    { (yyval.float_val) = (yyvsp[(2) - (3)].float_val); }
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 131 "yacc_file.y"
    { (yyval.float_val) = (float)(yyvsp[(1) - (1)].int_val); }
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 132 "yacc_file.y"
    { (yyval.float_val) = (yyvsp[(1) - (1)].float_val); }
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 133 "yacc_file.y"
    {  
					       int idx = get_var_index((yyvsp[(1) - (1)].str_val));
					       if (idx == -1) yyerror("this var is not declered\n") ;
					       else 
					       {
						 if(symtable[idx].type == 0)(yyval.float_val)=symtable[idx].value.int_val;
						 else if (symtable[idx].type == 1) (yyval.float_val)=symtable[idx].value.float_val;
						 else yyerror("you can not use this var in expression\n") ;
					       }
					 }
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 143 "yacc_file.y"
    {
						int idx = get_var_index((yyvsp[(1) - (2)].str_val));
						if (idx == -1)yyerror("variable not declered\n");
						else 
						{  
							if(symtable[idx].type==0) {symtable[idx].value.int_val+=1;(yyval.float_val)=symtable[idx].value.int_val; }
							else if (symtable[idx].type==1) (yyval.float_val)=++symtable[idx].value.float_val;
							else yyerror("you can not increament this var\n");  
						}
					 }
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 153 "yacc_file.y"
    {
						int idx = get_var_index((yyvsp[(1) - (2)].str_val));
						if (idx == -1)yyerror("variable not declered\n");
						else 
						{  
							if(symtable[idx].type==0) {symtable[idx].value.int_val-=1;(yyval.float_val)=symtable[idx].value.int_val; }
							else if (symtable[idx].type==1) (yyval.float_val)=--symtable[idx].value.float_val;
							else yyerror("you can not increament this var\n");  
						}
			                 }
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 164 "yacc_file.y"
    { (yyval.float_val) = -(yyvsp[(2) - (2)].float_val); }
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 165 "yacc_file.y"
    { (yyval.float_val) = pow((yyvsp[(1) - (3)].float_val),(yyvsp[(3) - (3)].float_val)); }
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 177 "yacc_file.y"
    { 
						if (get_var_index((yyvsp[(1) - (2)].str_val))==-1) 
						{
							if (is_full())  yyerror("symbol table is full") ;
							else 
							{int idx = add_var((yyvsp[(1) - (2)].str_val), 0);symtable[idx].value.int_val=0; }
						}
					        else yyerror("variable already devlared before") ;
				          }
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 187 "yacc_file.y"
    { 
						if (get_var_index((yyvsp[(1) - (4)].str_val))==-1) 
						{
							if (is_full())  yyerror("symbol table is full") ;
							else 
							{int idx = add_var((yyvsp[(1) - (4)].str_val), 0);symtable[idx].value.int_val=(yyvsp[(3) - (4)].float_val); }
						}
						else yyerror("variable already devlared before") ;
			                  }
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 199 "yacc_file.y"
    { 
						if (get_var_index((yyvsp[(2) - (3)].str_val))==-1) 
                                                {
							if (is_full())  yyerror("symbol table is full") ;
							else 
							{int idx = add_var((yyvsp[(2) - (3)].str_val), 0);symtable[idx].value.int_val=0; }
						}
						else yyerror("variable already devlared before") ;
			                  }
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 208 "yacc_file.y"
    { 
						if (get_var_index((yyvsp[(2) - (5)].str_val))==-1) 
						{
							 if (is_full())  yyerror("symbol table is full") ;
							else 
							{int idx = add_var((yyvsp[(2) - (5)].str_val), 0);symtable[idx].value.int_val=(yyvsp[(4) - (5)].float_val); }
						}
						else yyerror("variable already devlared before") ;
			                  }
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 221 "yacc_file.y"
    {
						if (get_var_index((yyvsp[(1) - (2)].str_val))==-1) 
						{
							if (is_full())  yyerror("symbol table is full") ;
							else 
							{int idx = add_var((yyvsp[(1) - (2)].str_val), 1);symtable[idx].value.float_val=0; }
						}
						else yyerror("variable already devlared before") ;
				          }
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 231 "yacc_file.y"
    {
						if (get_var_index((yyvsp[(1) - (4)].str_val))==-1) 
						{
							if (is_full())  yyerror("symbol table is full") ;
							else 
							{int idx = add_var((yyvsp[(1) - (4)].str_val), 1);symtable[idx].value.float_val=(yyvsp[(3) - (4)].float_val); }
						}
						else yyerror("variable already devlared before") ;
					  }
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 243 "yacc_file.y"
    {	
						 if (get_var_index((yyvsp[(2) - (3)].str_val))==-1) 
						 {
							if (is_full())  yyerror("symbol table is full") ;
							else 
							{int idx = add_var((yyvsp[(2) - (3)].str_val), 1);symtable[idx].value.float_val=0; }
						 }
						 else yyerror("variable already devlared before") ;
			                     }
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 252 "yacc_file.y"
    { 
						 if (get_var_index((yyvsp[(2) - (5)].str_val))==-1) 
                                                 {
							if (is_full())  yyerror("symbol table is full") ;
							else 
							{int idx = add_var((yyvsp[(2) - (5)].str_val), 1);symtable[idx].value.float_val=(yyvsp[(4) - (5)].float_val); }
				                 }
			                         else yyerror("variable already devlared before") ;
			                      }
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 265 "yacc_file.y"
    { 
						if (get_var_index((yyvsp[(1) - (2)].str_val))==-1) 
						{
							if (is_full())  yyerror("symbol table is full") ;
							else 
							{int idx = add_var((yyvsp[(1) - (2)].str_val), 2);symtable[idx].value.char_val='0'; }
						}
						else yyerror("variable already devlared before") ;
					     }
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 275 "yacc_file.y"
    { 
						if (get_var_index((yyvsp[(1) - (4)].str_val))==-1) 
						{
							 if (is_full())  yyerror("symbol table is full") ;
							 else 
							 {int idx = add_var((yyvsp[(1) - (4)].str_val), 2);symtable[idx].value.char_val=(yyvsp[(3) - (4)].char_val); }
						}
						else yyerror("variable already devlared before") ;
			                     }
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 287 "yacc_file.y"
    {	
						if (get_var_index((yyvsp[(2) - (3)].str_val))==-1) 
                                                {
							if (is_full())  yyerror("symbol table is full") ;
							else 
							{int idx = add_var((yyvsp[(2) - (3)].str_val), 2);symtable[idx].value.char_val='0'; }
						}
						else yyerror("variable already devlared before") ;
					     }
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 296 "yacc_file.y"
    {
						if (get_var_index((yyvsp[(2) - (5)].str_val))==-1) 
                                                {
							if (is_full())  yyerror("symbol table is full") ;
							else 
							{int idx = add_var((yyvsp[(2) - (5)].str_val), 2);symtable[idx].value.char_val=(yyvsp[(4) - (5)].char_val); }
				                }
			                        else yyerror("variable already devlared before") ;
					      }
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 309 "yacc_file.y"
    { 
						  if (get_var_index((yyvsp[(1) - (2)].str_val))==-1) 
						  {
							if (is_full())  yyerror("symbol table is full") ;
							else 
							{int idx = add_var((yyvsp[(1) - (2)].str_val), 4);symtable[idx].value.str_val=strdup(""); }
						  }
						  else yyerror("variable already devlared before") ;
				               }
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 319 "yacc_file.y"
    { 
						   if (get_var_index((yyvsp[(1) - (4)].str_val))==-1) 
                                                   {
							if (is_full())  yyerror("symbol table is full") ;
							else 
							{int idx = add_var((yyvsp[(1) - (4)].str_val), 4);symtable[idx].value.str_val=strdup((yyvsp[(3) - (4)].str_val)); }
						   }
						   else yyerror("variable already devlared before") ;
					       }
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 331 "yacc_file.y"
    { 
						   if (get_var_index((yyvsp[(2) - (3)].str_val))==-1) 
						   {
							if (is_full())  yyerror("symbol table is full") ;
							else 
							{int idx = add_var((yyvsp[(2) - (3)].str_val), 4);symtable[idx].value.str_val=strdup(""); }
						   }
						   else yyerror("variable already devlared before") ;
			                       }
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 340 "yacc_file.y"
    { 
						   if (get_var_index((yyvsp[(2) - (5)].str_val))==-1) 
						   {
							if (is_full())  yyerror("symbol table is full") ;
							else 
							{int idx = add_var((yyvsp[(2) - (5)].str_val), 4);symtable[idx].value.str_val=strdup((yyvsp[(4) - (5)].str_val)); }
						   }
						  else yyerror("variable already devlared before") ;
					       }
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 353 "yacc_file.y"
    {
						    if (get_var_index((yyvsp[(1) - (2)].str_val))==-1) 
						    {
							if (is_full())  yyerror("symbol table is full") ;
							else 
							{int idx = add_var((yyvsp[(1) - (2)].str_val), 3);symtable[idx].value.bool_val=false; }
						     }
						     else yyerror("variable already devlared before") ;
				                 }
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 363 "yacc_file.y"
    { 
							if (get_var_index((yyvsp[(1) - (4)].str_val))==-1) 
							{
								if (is_full())  yyerror("symbol table is full") ;
								else 
								{int idx = add_var((yyvsp[(1) - (4)].str_val), 3);symtable[idx].value.bool_val=(yyvsp[(3) - (4)].bool_val); }
							}
							else yyerror("variable already devlared before") ;
						  }
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 375 "yacc_file.y"
    { 
							if (get_var_index((yyvsp[(2) - (3)].str_val))==-1) 
							{
								if (is_full())  yyerror("symbol table is full") ;
								else 
								{int idx = add_var((yyvsp[(2) - (3)].str_val), 3);symtable[idx].value.bool_val=false; }
							}
							else yyerror("variable already devlared before") ;
						  }
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 384 "yacc_file.y"
    { 
							if (get_var_index((yyvsp[(2) - (5)].str_val))==-1) 
							{
								if (is_full())  yyerror("symbol table is full") ;
								else 
								{int idx = add_var((yyvsp[(2) - (5)].str_val), 3);symtable[idx].value.bool_val=(yyvsp[(4) - (5)].bool_val); }
							}
							else yyerror("variable already devlared before") ;
						  }
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 397 "yacc_file.y"
    {
							int idx = get_var_index((yyvsp[(1) - (3)].str_val));
							if (idx == -1) yyerror("variable not declared");
							else 
							{
								if (symtable[idx].type == 0) symtable[idx].value.int_val = (int)(yyvsp[(3) - (3)].float_val);
								else if (symtable[idx].type == 1)  symtable[idx].value.float_val = (yyvsp[(3) - (3)].float_val);
								else yyerror("type mismatch in assignment");
						        }
						 }
    break;

  case 68:
/* Line 1792 of yacc.c  */
#line 409 "yacc_file.y"
    {
						    int idx = get_var_index((yyvsp[(1) - (3)].str_val));
						    if (idx == -1) yyerror("variable not declared");
						    else if (symtable[idx].type == 2) symtable[idx].value.char_val = (yyvsp[(3) - (3)].char_val);
						    else yyerror("type mismatch (char)");
						 }
    break;

  case 69:
/* Line 1792 of yacc.c  */
#line 417 "yacc_file.y"
    {
						    int idx = get_var_index((yyvsp[(1) - (3)].str_val));
						    if (idx == -1) yyerror("variable not declared");
						    else if (symtable[idx].type == 4) symtable[idx].value.str_val = strdup((yyvsp[(3) - (3)].str_val));
						    else yyerror("type mismatch (string)");
						 }
    break;

  case 70:
/* Line 1792 of yacc.c  */
#line 425 "yacc_file.y"
    {
						    int idx = get_var_index((yyvsp[(1) - (3)].str_val));
						    if (idx == -1) yyerror("variable not declared");
						    else if (symtable[idx].type == 3) symtable[idx].value.bool_val = (yyvsp[(3) - (3)].bool_val);
						    else yyerror("type mismatch (bool)");
						 }
    break;

  case 71:
/* Line 1792 of yacc.c  */
#line 432 "yacc_file.y"
    {
						    int idx = get_var_index((yyvsp[(1) - (5)].str_val));
						    if (idx == -1) yyerror("variable not declared");
						    else if (symtable[idx].type == 3) symtable[idx].value.bool_val = (yyvsp[(4) - (5)].bool_val);
						    else yyerror("type mismatch (bool)");
						 }
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 440 "yacc_file.y"
    {
						    int idx = get_var_index((yyvsp[(1) - (3)].str_val));
						    if (idx == -1) yyerror("variable not declared");
						    else if (symtable[idx].type == 0) symtable[idx].value.int_val += (int)(yyvsp[(3) - (3)].float_val);
						    else if (symtable[idx].type == 1) symtable[idx].value.float_val += (yyvsp[(3) - (3)].float_val);
						    else yyerror("+= not allowed for this type");
						 }
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 449 "yacc_file.y"
    {
						    int idx = get_var_index((yyvsp[(1) - (3)].str_val));
						    if (idx == -1) yyerror("variable not declared");
						    else if (symtable[idx].type == 4) 
						    {
							char *tmp = malloc(strlen(symtable[idx].value.str_val) + strlen((yyvsp[(3) - (3)].str_val)) + 1);
							strcpy(tmp, symtable[idx].value.str_val);
							strcat(tmp, (yyvsp[(3) - (3)].str_val));
							symtable[idx].value.str_val = tmp;
						    } 
						    else yyerror("+= not allowed for this type");
						 }
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 463 "yacc_file.y"
    {
						    int idx = get_var_index((yyvsp[(1) - (3)].str_val));
						    if (idx == -1) yyerror("variable not declared");
						    else if (symtable[idx].type == 0) symtable[idx].value.int_val -= (int)(yyvsp[(3) - (3)].float_val);
						    else if (symtable[idx].type == 1) symtable[idx].value.float_val -= (yyvsp[(3) - (3)].float_val);
						    else yyerror("-= not allowed for this type");
						 }
    break;

  case 75:
/* Line 1792 of yacc.c  */
#line 471 "yacc_file.y"
    {
						    int idx = get_var_index((yyvsp[(1) - (3)].str_val));
						    if (idx == -1) yyerror("variable not declared");
						    else if (symtable[idx].type == 0) symtable[idx].value.int_val *= (int)(yyvsp[(3) - (3)].float_val);
						    else if (symtable[idx].type == 1) symtable[idx].value.float_val *= (yyvsp[(3) - (3)].float_val);
						    else yyerror("*= not allowed for this type");
						 }
    break;

  case 76:
/* Line 1792 of yacc.c  */
#line 479 "yacc_file.y"
    {
						    int idx = get_var_index((yyvsp[(1) - (3)].str_val));
						    if (idx == -1) yyerror("variable not declared");
						    else 
						    {
							if ((yyvsp[(3) - (3)].float_val) == 0) yyerror("division by zero");
							else if (symtable[idx].type == 0) symtable[idx].value.int_val /= (int)(yyvsp[(3) - (3)].float_val);
							else if (symtable[idx].type == 1) symtable[idx].value.float_val /= (yyvsp[(3) - (3)].float_val);
							else yyerror("/= not allowed for this type");
						    }
						 }
    break;

  case 77:
/* Line 1792 of yacc.c  */
#line 492 "yacc_file.y"
    {
						    int idx = get_var_index((yyvsp[(1) - (3)].str_val));
						    if (idx == -1) yyerror("variable not declared");
						    else if (symtable[idx].type == 0) 
						    {
							if ((int)(yyvsp[(3) - (3)].float_val) == 0) yyerror("modulo by zero");
							else symtable[idx].value.int_val %= (int)(yyvsp[(3) - (3)].float_val);
						    } 
						    else yyerror("%= allowed only for int");
						 }
    break;

  case 78:
/* Line 1792 of yacc.c  */
#line 505 "yacc_file.y"
    {(yyval.bool_val)=(yyvsp[(1) - (3)].bool_val)&&(yyvsp[(3) - (3)].bool_val);}
    break;

  case 79:
/* Line 1792 of yacc.c  */
#line 506 "yacc_file.y"
    {(yyval.bool_val)=(yyvsp[(1) - (3)].bool_val)||(yyvsp[(3) - (3)].bool_val);}
    break;

  case 80:
/* Line 1792 of yacc.c  */
#line 507 "yacc_file.y"
    {(yyval.bool_val)=!(yyvsp[(2) - (2)].bool_val);}
    break;

  case 81:
/* Line 1792 of yacc.c  */
#line 508 "yacc_file.y"
    {(yyval.bool_val)=(yyvsp[(1) - (1)].bool_val);}
    break;

  case 82:
/* Line 1792 of yacc.c  */
#line 509 "yacc_file.y"
    {(yyval.bool_val)= (yyvsp[(1) - (1)].bool_val);}
    break;

  case 83:
/* Line 1792 of yacc.c  */
#line 513 "yacc_file.y"
    {(yyval.bool_val)=((yyvsp[(1) - (3)].float_val)==(yyvsp[(3) - (3)].float_val));}
    break;

  case 84:
/* Line 1792 of yacc.c  */
#line 514 "yacc_file.y"
    {(yyval.bool_val)=((yyvsp[(1) - (3)].float_val)!=(yyvsp[(3) - (3)].float_val));}
    break;

  case 85:
/* Line 1792 of yacc.c  */
#line 515 "yacc_file.y"
    {(yyval.bool_val)=((yyvsp[(1) - (3)].float_val)>=(yyvsp[(3) - (3)].float_val));}
    break;

  case 86:
/* Line 1792 of yacc.c  */
#line 516 "yacc_file.y"
    {(yyval.bool_val)=((yyvsp[(1) - (3)].float_val)<=(yyvsp[(3) - (3)].float_val));}
    break;

  case 87:
/* Line 1792 of yacc.c  */
#line 517 "yacc_file.y"
    {(yyval.bool_val)=((yyvsp[(1) - (3)].float_val)>(yyvsp[(3) - (3)].float_val));}
    break;

  case 88:
/* Line 1792 of yacc.c  */
#line 518 "yacc_file.y"
    {(yyval.bool_val)=((yyvsp[(1) - (3)].float_val)<(yyvsp[(3) - (3)].float_val));}
    break;

  case 89:
/* Line 1792 of yacc.c  */
#line 522 "yacc_file.y"
    { if((yyvsp[(3) - (7)].bool_val)) printf("Executed if\n"); else if((yyvsp[(6) - (7)].bool_val)) printf("Executed Else if\n"); else printf("Executed Else\n");}
    break;

  case 90:
/* Line 1792 of yacc.c  */
#line 525 "yacc_file.y"
    {(yyval.bool_val)=(yyvsp[(4) - (6)].bool_val);}
    break;

  case 91:
/* Line 1792 of yacc.c  */
#line 526 "yacc_file.y"
    {(yyval.bool_val)=false;}
    break;

  case 94:
/* Line 1792 of yacc.c  */
#line 534 "yacc_file.y"
    {printf("switch case num %f", (yyvsp[(3) - (8)].float_val));}
    break;

  case 99:
/* Line 1792 of yacc.c  */
#line 548 "yacc_file.y"
    {  
							if((yyvsp[(3) - (5)].bool_val))
						        {
								int i =1;
								while(i<5){printf("while num: %d\n", i); i++;}
							}
							else printf("No while\n");
						      }
    break;

  case 100:
/* Line 1792 of yacc.c  */
#line 559 "yacc_file.y"
    {
									int i = 1;
									int st = (yyvsp[(6) - (11)].int_val);
									int en = (yyvsp[(8) - (11)].int_val);
									int step = (yyvsp[(10) - (11)].int_val);
									if (step > 0)
									{
										for (; st<=en;st+=step, i++)printf("loop %d\n",i);
									}
									else if (step < 0)
									{
									    for(;st>=en; st+=step,i++)printf("loop %d\n",i);
									}
									else yyerror("step must not be zero\n");
								    }
    break;

  case 101:
/* Line 1792 of yacc.c  */
#line 577 "yacc_file.y"
    {printf("%f\n", (yyvsp[(3) - (4)].float_val));}
    break;

  case 102:
/* Line 1792 of yacc.c  */
#line 578 "yacc_file.y"
    {printf("%s\n",(yyvsp[(3) - (4)].str_val));}
    break;

  case 103:
/* Line 1792 of yacc.c  */
#line 579 "yacc_file.y"
    { 
						 int idx = get_var_index((yyvsp[(3) - (4)].str_val));
						 if (idx == -1) yyerror("this var is not declered\n") ;
						 else 
						 {
							 if (symtable[idx].type == 0)
							 {
							   printf("%d\n", symtable[idx].value.int_val);
							 }
							 else if (symtable[idx].type == 1)
							 {
							   printf("%f\n", symtable[idx].value.float_val);
							 }
							 else if (symtable[idx].type == 2)
							 {
							   printf("%c\n", symtable[idx].value.char_val);
							 }
							 else if (symtable[idx].type == 4)
							 {
							   printf("%s\n", symtable[idx].value.str_val);
							 }
							  else if (symtable[idx].type == 3)
							 {
							   printf("%s\n", symtable[idx].value.bool_val?"True":"False");
							 }
					         }
					    }
    break;

  case 104:
/* Line 1792 of yacc.c  */
#line 608 "yacc_file.y"
    {
			       int idx = get_var_index((yyvsp[(1) - (1)].str_val));
                               if (idx == -1) yyerror("this var is not declered\n") ;
			       else 
			       {
			         printf("name var: %s\n", symtable[idx].name);
				 if (symtable[idx].type == 0)
				 {
				   printf("type var: int\n");
				   printf("value var: %d\n", symtable[idx].value.int_val);
				 }
				 else if (symtable[idx].type == 1)
				 {
				   printf("type var: float\n");
				   printf("value var: %f\n", symtable[idx].value.float_val);
				 }
				 else if (symtable[idx].type == 2)
				 {
				   printf("type var: char\n");
				   printf("value var: %c\n", symtable[idx].value.char_val);
				 }
				 else if (symtable[idx].type == 4)
				 {
				   printf("type var: string\n");
				   printf("value var: \"%s\"\n", symtable[idx].value.str_val);
				 }
				  else if (symtable[idx].type == 3)
				 {
				   printf("type var: bool\n");
				   printf("value var: %s\n", symtable[idx].value.bool_val?"True":"False");
				 }


	
			      }
         }
    break;

  case 105:
/* Line 1792 of yacc.c  */
#line 647 "yacc_file.y"
    {printf("function %s is declered\n", (yyvsp[(2) - (6)].str_val));}
    break;

  case 115:
/* Line 1792 of yacc.c  */
#line 666 "yacc_file.y"
    {printf("class %s is declered\n", (yyvsp[(2) - (5)].str_val));}
    break;


/* Line 1792 of yacc.c  */
#line 2486 "y.tab.c"
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

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

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

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


/* Line 2055 of yacc.c  */
#line 670 "yacc_file.y"


int yyerror(char* s)
{
    printf("syntax error: %s\n",s);
    return 0;
}

int main()
{
    printf("Enter your code:\n");
    while(yyparse()==0)
    {

    }
    return 0;
}