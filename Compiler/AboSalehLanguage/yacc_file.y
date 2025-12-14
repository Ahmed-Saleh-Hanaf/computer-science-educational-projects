%{
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
            int int_val;
	    float float_val;
	    char char_val;
	    bool bool_val;
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
    //printf("%s\n",symtable[num_var].name);
    num_var++;
    return num_var-1;
}

%}

%union
{ 
    int int_val;
    float float_val;
    char char_val;
    bool bool_val;
    char* str_val;
}

%token CLASS FUN RETURN FOR WHILE BREAK CONTINUE SWITCH CASE DEFAULT IF ELIF ELSE
%token INT FLOAT CHAR STRING BOOL VOID
%token AND OR NOT
%token EE NE GE LE G L
%token PA SA MA DA MODA AO
%token INCR DECR 
%token POW PLUS MINES MULT DIV MOD 

%token <int_val> NUM_INT
%token <float_val> NUM_FLOAT
%token <str_val> ID
%token <str_val> STR
%token <char_val> CH
%token <bool_val> BOOLVAL

%type <float_val> exp term fact

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
    | decler ';'
    | var ':'
    ;
////////////////////////////////////////
var: ID {
         int idx = get_var_index($1);
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
				   printf("value var: %s\n", symtable[idx].value.str_val);
				 }
				  else if (symtable[idx].type == 3)
				 {
				   printf("type var: bool\n");
				   printf("value var: %s\n", symtable[idx].value.bool_val?"True":"False");
				 }


	
			      }
         } 
    ;
///////////////////////Expression/////////////////////////////
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
    | ID                    {  
                               int idx = get_var_index($1);
                               if (idx == -1) yyerror("this var is not declered\n") ;
			       else 
			       {
			         if(symtable[idx].type == 0)$$=symtable[idx].value.int_val;
				 else if (symtable[idx].type == 1) $$=symtable[idx].value.float_val;
				 else yyerror("you can not use this var in expression\n") ;
			       }
                            }
    | ID INCR               {int idx = get_var_index($1);
		             if (idx == -1)yyerror("variable not declered\n");
			     else 
				 {  
					 if(symtable[idx].type==0) {symtable[idx].value.int_val+=1;$$=symtable[idx].value.int_val; }
					 else if (symtable[idx].type==1) $$=++symtable[idx].value.float_val;
					 else yyerror("you can not increament this var\n");  
				  }
			    }
    | ID DECR               {int idx = get_var_index($1);
		             if (idx == -1)yyerror("variable not declered\n");
			     else 
				 {  
					 if(symtable[idx].type==0) {symtable[idx].value.int_val-=1;$$=symtable[idx].value.int_val; }
					 else if (symtable[idx].type==1) $$=--symtable[idx].value.float_val;
					 else yyerror("you can not increament this var\n");  
				  }
			    }

    | MINES fact %prec UMINUS { $$ = -$2; }
    | fact POW fact         { $$ = pow($1,$3); } 
    ;

/////////////////////////////Decleration///////////////////////////////////////////////
decler: INT decler_int   
      |FLOAT decler_float      
      |CHAR decler_char
      |STRING decler_str
      |BOOL decler_bool
      ;

      ///////////////////////decler INT ////////////////////////
decler_int: ID  decler_int_list	        { if (get_var_index($1)==-1) 
					  {
					     if (is_full())  yyerror("symbol table is full") ;
					     else 
					     {int idx = add_var($1, 0);symtable[idx].value.int_val=0; }
					  }
					  else yyerror("variable already devlared before") ;
				        }
			      
	   | ID AO exp decler_int_list  { if (get_var_index($1)==-1) 
                                           {
				             if (is_full())  yyerror("symbol table is full") ;
				             else 
				             {int idx = add_var($1, 0);symtable[idx].value.int_val=$3; }
				           }
			                   else yyerror("variable already devlared before") ;
			                }

	  ;
decler_int_list: ',' ID  decler_int_list{ if (get_var_index($2)==-1) 
                                            {
				              if (is_full())  yyerror("symbol table is full") ;
				              else 
				              {int idx = add_var($2, 0);symtable[idx].value.int_val=0; }
				            }
			                  else yyerror("variable already devlared before") ;
			                }
	   | ',' ID AO exp decler_int_list{ if (get_var_index($2)==-1) 
                                           {
				             if (is_full())  yyerror("symbol table is full") ;
				             else 
				             {int idx = add_var($2, 0);symtable[idx].value.int_val=$4; }
				           }
			                   else yyerror("variable already devlared before") ;
			                }
          | /*ep*/
	  ;

///////////////////////// decler float//////////////////////////////

decler_float: ID  decler_float_list    { if (get_var_index($1)==-1) 
					  {
					     if (is_full())  yyerror("symbol table is full") ;
					     else 
					     {int idx = add_var($1, 1);symtable[idx].value.float_val=0; }
					  }
					  else yyerror("variable already devlared before") ;
				        }
			      
	   | ID AO exp decler_float_list{ if (get_var_index($1)==-1) 
                                           {
				             if (is_full())  yyerror("symbol table is full") ;
				             else 
				             {int idx = add_var($1, 1);symtable[idx].value.float_val=$3; }
				           }
			                   else yyerror("variable already devlared before") ;
			                }

	  ;
decler_float_list: ',' ID  decler_float_list{ if (get_var_index($2)==-1) 
                                              {
				                if (is_full())  yyerror("symbol table is full") ;
				                else 
				                {int idx = add_var($2, 1);symtable[idx].value.float_val=0; }
				              }
			                      else yyerror("variable already devlared before") ;
			                    }
	   | ',' ID AO exp decler_float_list{ if (get_var_index($2)==-1) 
                                              {
				               if (is_full())  yyerror("symbol table is full") ;
				               else 
				               {int idx = add_var($2, 1);symtable[idx].value.float_val=$4; }
				              }
			                     else yyerror("variable already devlared before") ;
			                    }
          | /*ep*/
	  ;

      ///////////////////////decler char ////////////////////////
decler_char: ID  decler_char_list      { if (get_var_index($1)==-1) 
					  {
					     if (is_full())  yyerror("symbol table is full") ;
					     else 
					     {int idx = add_var($1, 2);symtable[idx].value.char_val='0'; }
					  }
					  else yyerror("variable already devlared before") ;
				        }
			      
	   | ID AO CH decler_char_list  { if (get_var_index($1)==-1) 
                                           {
				             if (is_full())  yyerror("symbol table is full") ;
				             else 
				             {int idx = add_var($1, 2);symtable[idx].value.char_val=$3; }
				           }
			                   else yyerror("variable already devlared before") ;
			                }

	  ;
decler_char_list: ',' ID  decler_char_list{ if (get_var_index($2)==-1) 
                                            {
				              if (is_full())  yyerror("symbol table is full") ;
				              else 
				              {int idx = add_var($2, 2);symtable[idx].value.char_val='0'; }
				            }
			                  else yyerror("variable already devlared before") ;
			                }
	   | ',' ID AO CH decler_char_list{ if (get_var_index($2)==-1) 
                                           {
				             if (is_full())  yyerror("symbol table is full") ;
				             else 
				             {int idx = add_var($2, 2);symtable[idx].value.char_val=$4; }
				           }
			                   else yyerror("variable already devlared before") ;
			                }
          | /*ep*/
	  ;

///////////////////////decler string ////////////////////////
decler_str: ID  decler_str_list      { if (get_var_index($1)==-1) 
					  {
					     if (is_full())  yyerror("symbol table is full") ;
					     else 
					     {int idx = add_var($1, 4);symtable[idx].value.str_val=strdup(""); }
					  }
					  else yyerror("variable already devlared before") ;
				        }
			      
	   | ID AO STR decler_str_list  { if (get_var_index($1)==-1) 
                                           {
				             if (is_full())  yyerror("symbol table is full") ;
				             else 
				             {int idx = add_var($1, 4);symtable[idx].value.str_val=strdup($3); }
				           }
			                   else yyerror("variable already devlared before") ;
			                }

	  ;
decler_str_list: ',' ID  decler_str_list{ if (get_var_index($2)==-1) 
                                            {
				              if (is_full())  yyerror("symbol table is full") ;
				              else 
				              {int idx = add_var($2, 4);symtable[idx].value.str_val=strdup(""); }
				            }
			                  else yyerror("variable already devlared before") ;
			                }
	   | ',' ID AO STR decler_str_list{ if (get_var_index($2)==-1) 
                                           {
				             if (is_full())  yyerror("symbol table is full") ;
				             else 
				             {int idx = add_var($2, 4);symtable[idx].value.str_val=strdup($4); }
				           }
			                   else yyerror("variable already devlared before") ;
			                }
          | /*ep*/
	  ;

 ///////////////////////decler bool ////////////////////////
decler_bool: ID  decler_bool_list	{ if (get_var_index($1)==-1) 
					  {
					     if (is_full())  yyerror("symbol table is full") ;
					     else 
					     {int idx = add_var($1, 3);symtable[idx].value.bool_val=false; }
					  }
					  else yyerror("variable already devlared before") ;
				        }
			      
	   | ID AO BOOLVAL decler_bool_list  { if (get_var_index($1)==-1) 
                                           {
				             if (is_full())  yyerror("symbol table is full") ;
				             else 
				             {int idx = add_var($1, 3);symtable[idx].value.bool_val=$3; }
				           }
			                   else yyerror("variable already devlared before") ;
			                }

	  ;
decler_bool_list: ',' ID  decler_bool_list{ if (get_var_index($2)==-1) 
                                            {
				              if (is_full())  yyerror("symbol table is full") ;
				              else 
				              {int idx = add_var($2, 3);symtable[idx].value.bool_val=false; }
				            }
			                  else yyerror("variable already devlared before") ;
			                }
	   | ',' ID AO BOOLVAL decler_bool_list{ if (get_var_index($2)==-1) 
                                           {
				             if (is_full())  yyerror("symbol table is full") ;
				             else 
				             {int idx = add_var($2, 3);symtable[idx].value.bool_val=$4; }
				           }
			                   else yyerror("variable already devlared before") ;
			                }
          | /*ep*/
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
    while(yyparse()==0){

    }
    return 0;
}