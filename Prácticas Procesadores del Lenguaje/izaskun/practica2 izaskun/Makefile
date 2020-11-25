todo: ejecutar
bison: parser.y
	bison -d -v parser.y
flex: scanner.l parser.tab.h tabla_sim.h
	flex scanner.l
ejecutar: bison flex
	gcc -c lex.yy.c
	gcc -c tabla_quad.c
	gcc -c tabla_sim.c
	gcc -o ejecutar parser.tab.c lex.yy.o tabla_quad.o tabla_sim.o -ll
borrar:
	rm -rf ejecutar lex.yy.c lex.yy.o parser.output parser.tab.c parser.tab.h tabla_quad.o tabla_sim.o 

