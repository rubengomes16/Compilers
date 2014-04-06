%{
#include "structures.h"
#include "functions.h"
#include "shows.h"
#include<stdio.h>

is_expression_list* myprogram;
%}

%union{
is_expression_list* iel;
is_expression* ie;
is_infix_expression* iie;
is_unary_expression* iue;
int num;
}
%token<num>NUMBER
%type<iel>statement
%type<ie>expression
%type<iie>infix_expression
%type<iue>unary_expression
%left '+' '-'
%nonassoc UMINUS
%%
statement:  statement expression '\n'	{$$=insert_expression_list($1, $2);}
		| expression	'\n'	{$$=insert_expression_list(NULL, $1); myprogram=$$; }
		;

expression:	infix_expression	{$$=insert_i_expression($1);}
		| unary_expression	{$$=insert_u_expression($1);}
		| NUMBER		{$$=insert_NUMBER($1);}
		;		

infix_expression: expression '+' expression {$$=insert_infix_expression($1, is_PLUS, $3);}
		| expression '-' expression {$$=insert_infix_expression($1, is_MINUS, $3);}
		;

unary_expression: '-' expression	%prec UMINUS	{$$=insert_unary_expression($2);}
			;

%%
int main()
{
yyparse();
show_program(myprogram);	//mostra a árvore que acabou de ser construida
}

int yyerror(char* s)
{
printf("%s\n", s);
}
