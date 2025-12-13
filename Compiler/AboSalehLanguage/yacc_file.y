%{
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int yylex();
int yyerror(char* s);
%}

%union
{ 
    int int_val;
    float float_val;
    char char_val;
    char* str_val;
}

%token CLASS FUN RETURN FOR WHILE BREAK CONTINUE SWITCH CASE DEFAULT IF ELIF ELSE
%token INT FLOAT CHAR STRING BOOL VOID
%token TRUE FALSE
%token AND OR NOT
%token EE NE GE LE G L
%token PA SA MA DA MODA AO
%token INCR DECR 
%token POW PLUS MINES MULT DIV MOD 

%token <int_val> NUM_INT
%token <float_val> NUM_FLOAT
%token <str_val> ID

%type <float_val> stmt exp term fact

%left OR
%left AND
%left EE NE G L GE LE
%left PLUS MINES
%left MULT DIV MOD
%right POW
%left INCR DECR
%right AO
%nonassoc UMINUS

%start code

%% 
code: code stmt
    | stmt
    ;

stmt: exp ';'               { printf("Result: %f\n", $1); }
    ;

exp:  exp PLUS term         { $$ = $1 + $3; }
    | exp MINES term        { $$ = $1 - $3; }
    | term                  { $$ = $1; }
    ;

term: term MULT fact        { $$ = $1 * $3; }
    | term DIV fact         { if($3==0) { printf("Error: divide by zero\n"); $$=0; } else $$=$1/$3; }
    | term MOD fact         { if($3==0) { printf("Error: modulo by zero\n"); $$=0; } else $$=fmod($1,$3); }
    | fact                  { $$ = $1; }
    ;

fact: '(' exp ')'           { $$ = $2; }
    | NUM_INT               { $$ = (float)$1; }
    | NUM_FLOAT             { $$ = $1; }
    | MINES fact %prec UMINUS { $$ = -$2; }
    | fact POW fact         { $$ = pow($1,$3); }
    ;

%%

int yyerror(char* s)
{
    printf("syntax error: %s\n",s);
    return 0;
}

int main()
{
    printf("Enter your code:\n");
    while(!feof(stdin))
    {
        yyparse();
    }
    return 0;
}