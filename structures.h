#ifndef _STRUCTURES_
#define _STRUCTURES_

/*is_oper  is_PLUS  is_MINUS*/
typedef enum {is_PLUS, is_MINUS} is_oper;

/*is_ expression   is_infix_ expression   is_unary_expression 
			    is_NUMBER*/

typedef enum {d_infix_exp, d_unary_exp, d_number} disc_expression;

typedef struct _b1
{
	int id;
	union{
		struct is_fieldDec	*u_ifd;
		struct is_methDec	*u_imd;
	}data_program;
}is_program;

typedef struct _b2
{
	union{
		struct is_varDec	*u_ivd;
	}data_fieldDec;
}is_fieldDec;

typedef struct _b3
{
	union{
		struct is_type		*u_it;
		struct is_formPar	*u_ifp;
		struct is_varDec	*u_ivd
		struct is_statement	*u_istm;
	}data_methDec;
}is_methDec;

typedef struct _b4
{
	union{
		struct is_type		*u_it;
		struct is_commaId 	*u_ici;
	}data_varDec;
}is_varDec;

typedef struct _b5
{
	char *type;
}is_type;

typedef struct _b6
{
	struct _b6 *comma;
}is_commaId;

typedef struct _b7
{
	char *string;
	union{
		struct is_type 		*u_it;
		struct is_commaTId 	*u_icti;
	}data_formPar;
}is_formPar;

typedef struct _b8
{
	struct _b8	*stm;
	union{
		struct is_expression 	*u_expr;
	}data_statement;
}is_statement;

typedef struct _b9
{
	/**/
}is_commaTId;

typedef struct _b10
{
	struct _b10	*expr;
	union{
		struct is_args 	*u_arg;
	}data_expression;
}is_expression;

typedef struct _b11
{
	
}is_args;


	
	is_program* 	ip;
	is_dec_meth* 	idm;
	is_fieldDec* 	ifd;
	is_methDec* 	imd;
	is_repValDec* 	irvd;
	is_repStmt* 	irstm;
	is_formPar* 	ifp;
	is_commaTId* 	icti;
	is_varDec* 		ivd;
	is_commaId* 	ici;
	is_type* 		it;
	is_statement* 	istm;
	is_expression* 	iexpr;
	is_args*		ia;
	is_commaExpr*	icexpr;

#endif
