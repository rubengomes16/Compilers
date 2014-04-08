/* A Bison parser, made by GNU Bison 2.7.12-4996.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.
   
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
     BOOLLIT = 258,
     INTLIT = 259,
     ID = 260,
     RELATIONAL = 261,
     EQUALITY = 262,
     OP3 = 263,
     OP4 = 264,
     BOOL = 265,
     CBRACE = 266,
     CLASS = 267,
     COMMA = 268,
     DOTLENGTH = 269,
     ELSE = 270,
     IF = 271,
     INT = 272,
     OBRACE = 273,
     PARSEINT = 274,
     PRINT = 275,
     PUBLIC = 276,
     RETURN = 277,
     SEMIC = 278,
     STATIC = 279,
     STRING = 280,
     VOID = 281,
     WHILE = 282,
     RESERVED = 283,
     ASSIGN = 284,
     OR = 285,
     AND = 286,
     NEW = 287,
     NOT = 288,
     CSQUARE = 289,
     OSQUARE = 290,
     CCURV = 291,
     OCURV = 292
   };
#endif
/* Tokens.  */
#define BOOLLIT 258
#define INTLIT 259
#define ID 260
#define RELATIONAL 261
#define EQUALITY 262
#define OP3 263
#define OP4 264
#define BOOL 265
#define CBRACE 266
#define CLASS 267
#define COMMA 268
#define DOTLENGTH 269
#define ELSE 270
#define IF 271
#define INT 272
#define OBRACE 273
#define PARSEINT 274
#define PRINT 275
#define PUBLIC 276
#define RETURN 277
#define SEMIC 278
#define STATIC 279
#define STRING 280
#define VOID 281
#define WHILE 282
#define RESERVED 283
#define ASSIGN 284
#define OR 285
#define AND 286
#define NEW 287
#define NOT 288
#define CSQUARE 289
#define OSQUARE 290
#define CCURV 291
#define OCURV 292



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 2053 of yacc.c  */
#line 6 "ijparser.y"

	char *string;
	is_expression* IsExpression;


/* Line 2053 of yacc.c  */
#line 137 "y.tab.h"
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
