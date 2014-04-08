#ifndef _ESTRUTURAS_
#define _ESTRUTURAS_

/*operacoes*/
typedef enum
{
	Or, And, Eq, Ne, Lt, Gt, Le, Ge, Add, Sub, Mul, Div, Mod, Store, Itoa, Null,
	Not, Minus, Plus, Addr, Deref, Print, Atoi, Int, Char, Pointer, Id, IntLit, ChrLit, StrLit, Call,
	Return, IfElse, While, CompoundStat, ParamDeclaration, FuncBody, FuncDeclarator, FuncDefinition,
	FuncDeclaration, ArrayDeclarator, Declarator, Declaration, Program, Assign, Ast, Amp, Function
}disc_expression;

typedef struct _a3
{
	char* id;
 	disc_expression nodeType;
 	struct _a3 *filho; //filho direto
 	struct _a3 *next; //mesmo nivel

}is_expression;

#endif
