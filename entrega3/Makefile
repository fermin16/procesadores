all: ejecutar
bison: parser.y
	bison -d -v parser.y
flex: scanner.l parser.tab.h tablaSimbolos.h
	flex scanner.l
ejecutar: bison flex
	gcc -c tablaSimbolos.c
	gcc -c tablaCuadruplas.c
	gcc -c listaBooleanas.c 
	gcc -c lex.yy.c
	gcc -o ejecutar parser.tab.c lex.yy.o tablaCuadruplas.o tablaSimbolos.o listaBooleanas.o -ll
borrar:
	rm -rf ejecutar lex.yy.c lex.yy.o parser.output parser.tab.c parser.tab.h  tablaSimbolos.o listaBooleanas.o tablaCuadruplas.o a.out
soloflex: borrar
	flex scanner.l
	gcc lex.yy.c -lfl
