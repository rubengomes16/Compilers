#include "functions.h"
#include "structures.h"
#include <stdlib.h>

is_expression_list* insert_expression_list(is_expression_list* list, is_expression* exp)
{
	is_expression_list* iel=(is_expression_list*)malloc(sizeof(is_expression_list));	//Cria novo n� na lista
	iel->expr=exp;				//Preenche-o
	
	if(list==NULL)		//Se a lista estiver vazia
		return iel;	//Devolve o n� criado

	is_expression_list* aux;
			
	for(aux=list; aux->next != NULL; aux = aux->next);	//procura pelo final da lista
	aux->next = iel;					//adiciona no final da lista
	
	return list;
}

is_expression* insert_i_expression(is_infix_expression* expression)
{
	is_expression* ie = (is_expression*)malloc(sizeof(is_expression)); //cri novo n�
	ie->disc_d = d_infix_exp;				//Coloca etiqueta a informar que � um "infix expression"
	ie->data_expression.u_infix_exp = (struct is_infix_expression*) expression;	//Guarda o conte�do
		
	return ie;		
}
is_expression* insert_u_expression(is_unary_expression* expression)
{
	is_expression* ie=(is_expression*)malloc(sizeof(is_expression));
	ie->disc_d=d_unary_exp;				//Coloca etiqueta a informar que � um "unary expression"
	ie->data_expression.u_unary_exp=(struct is_unary_expression*) expression;	//Guarda o conte�do
		
	return ie;		
}

is_expression* insert_NUMBER(int number)
{
	is_expression* ie=(is_expression*)malloc(sizeof(is_expression));
	ie->disc_d=d_number;				//Coloca etiqueta a informar que � um numero
	ie->data_expression.number=number;	//Guarda o conte�do
		
	return ie;		
}

is_infix_expression *insert_infix_expression(is_expression *op1, is_oper oper, is_expression *op2)
{
        is_infix_expression *iie=(is_infix_expression*)malloc(sizeof(is_infix_expression));
        iie->exp1=op1;			//Guarda operando 1
        iie->oper=oper;			//Guarda operador
        iie->exp2=op2;			//Guarda operando 2

        return iie;
}

is_unary_expression* insert_unary_expression(is_expression* expression)
{
        is_unary_expression *iue=(is_unary_expression*)malloc(sizeof(is_unary_expression));
        iue->exp=expression;			//Guarda operando

        return iue;
}
