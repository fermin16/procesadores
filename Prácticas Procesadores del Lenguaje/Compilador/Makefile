all:
	gcc -w -c tablasimbolos.c
	gcc -w -c cuadruplas.c
	gcc -w -c funciones_bool.c
	bison -d parser.y
	flex scanner.l
	gcc parser.tab.c lex.yy.c tablasimbolos.o cuadruplas.o funciones_bool.o -lfl -w -o compiler
