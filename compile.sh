lex ijscanner.l
yacc -d ijparser.y
cc -o cena y.tab.c lex.yy.c -ll -ly
