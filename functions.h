#include "structures.h"

is_expression_list* insert_expression_list(is_expression_list*, is_expression*);
is_expression* insert_i_expression(is_infix_expression*);
is_expression* insert_u_expression(is_unary_expression*);
is_expression* insert_NUMBER(int);
is_infix_expression* insert_infix_expression(is_expression*, is_oper, is_expression*);
is_unary_expression* insert_unary_expression(is_expression*);
