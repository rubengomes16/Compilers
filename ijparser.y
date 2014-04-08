%{	
#include <stdio.h>
#include "estruturas.h" 
%}

%union{
	char *string;
	is_expression* IsExpression;
}

%token <string> BOOL CBRACE CLASS COMMA DOTLENGTH ELSE IF INT OBRACE PARSEINT PRINT PUBLIC RETURN SEMIC STATIC STRING VOID WHILE RESERVED BOOLLIT INTLIT ID RELATIONAL EQUALITY OP3 OP4

%type <IsExpression> Start Program DeclMethodField FieldDecl MethodDecl RepVarDecl RepStatement FormalParams CommaTypeID VarDecl CommaId Type Statement Expr Args CommaExpr

%right ASSIGN
%left OR
%left AND
%left EQUALITY
%left RELATIONAL
%left OP3
%left OP4
%right NEW
%right NOT	
%left OCURV CCURV OSQUARE CSQUARE
%left DOTLENGTH
%nonassoc ELSE
%%


Start : 	Program					{}
      ;


Program :	CLASS ID OBRACE DeclMethodField CBRACE			{} 
	;


DeclMethodField :	FieldDecl DeclMethodField	{}
		|	MethodDecl DeclMethodField	{}
		|					{}
		;


FieldDecl : 	STATIC VarDecl				{}
	  ;


MethodDecl :	PUBLIC STATIC Type ID OCURV FormalParams CCURV OBRACE RepVarDecl RepStatement CBRACE			{}
	   |	PUBLIC STATIC Type ID OCURV CCURV OBRACE RepVarDecl RepStatement CBRACE				{}
	   |	PUBLIC STATIC VOID ID OCURV FormalParams CCURV OBRACE RepVarDecl RepStatement CBRACE			{}
	   |	PUBLIC STATIC VOID ID OCURV CCURV OBRACE RepVarDecl RepStatement CBRACE				{}
	   ;


RepVarDecl :	VarDecl	RepVarDecl			{}
	   |						{}
	   ;


RepStatement :	Statement RepStatement			{}
	     |						{}
	     ;


FormalParams :	Type ID CommaTypeID			{}
	     |	STRING OSQUARE CSQUARE ID		{}
	     ;


CommaTypeID :	COMMA Type ID CommaTypeID		{}
	    |						{}
	    ;


VarDecl :	Type ID CommaId SEMIC			{}
	;


CommaId :	COMMA ID CommaId			{}
	|						{}
	;

Type :		INT		{}
     |		BOOL		{}
     |		INT OSQUARE CSQUARE		{}
     |		BOOL OSQUARE CSQUARE		{}
     ;


Statement :	OBRACE	RepStatement CBRACE		{}
	  |	IF OCURV Expr CCURV Statement		{}
	  |	IF OCURV Expr CCURV Statement ELSE Statement		{;}
	  |	WHILE OCURV Expr CCURV Statement	{}
	  |	PRINT OCURV Expr CCURV SEMIC		{}
	  |	ID ASSIGN Expr SEMIC			{}
	  |	ID OSQUARE Expr CSQUARE ASSIGN Expr SEMIC			{}
	  |	RETURN SEMIC				{}
	  |	RETURN Expr SEMIC				{}
	  ;

Expr :		Expr AND Expr			{}
     |		Expr OR Expr			{}
     |		Expr RELATIONAL Expr		{}
     |		Expr EQUALITY Expr		{}
     |		Expr OP3 Expr			{}
     |		Expr OP4 Expr			{}
     |		Expr OSQUARE Expr CSQUARE	{}
     |		ID				{}
     |		INTLIT				{}
     |		BOOLLIT				{}
     |		NEW INT OSQUARE Expr CSQUARE	{}
     |		NEW BOOL OSQUARE Expr CSQUARE	{}
     |		OCURV Expr CCURV		{}
     |		Expr DOTLENGTH			{}
     |		OP3 Expr			{}
     |		NOT Expr			{}
     |		PARSEINT OCURV ID OSQUARE Expr CSQUARE CCURV	{}
     |		ID OCURV CCURV			{}
     | 		ID OCURV Args CCURV		{}
     ;

Args :		Expr CommaExpr			{}
     ;

CommaExpr :	COMMA Expr CommaExpr		{}
	  |					{}
	  ;	

%%
int main(){
	yyparse();
}




void yyerror(char *s) {
    fprintf(stdout, "%s\n", s);
}
