all: compilar

bison: parser.y
	bison -v -d parser.y

flex: scanner.l
	flex scanner.l

compilar: flex bison
	gcc parser.tab.c lex.yy.c -lfl

