all: ejecutar
bison: parser.y
	bison -d -v parser.y
flex: scanner.l parser.tab.h tablaSimbolos.h
	flex scanner.l
ejecutar: bison flex
	gcc -c tablaSimbolos.c
	gcc -c lex.yy.c
	gcc -o ejecutar parser.tab.c lex.yy.o  tablaSimbolos.o -ll
borrar:
	rm -rf ejecutar lex.yy.c lex.yy.o parser.output parser.tab.c parser.tab.h o tablaSimbolos.o 