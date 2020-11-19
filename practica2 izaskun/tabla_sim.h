#ifndef TABLA_SIM_H
#define TABLA_SIM_H

#include <stdio.h>
#include <stdlib.h>

#define TIPO_ENTERO -1
#define TIPO_REAL -2
#define TIPO_CARACTER -3
#define TIPO_CADENA -4
#define TIPO_BOOLEANO -5

typedef struct tSimbolos {
	struct simbolo* inicio;
	struct simbolo* end;
	int sId;
} tSimbolos;


typedef struct simbolo {
	struct simbolo* sig;
	char nombre[25];
	int valor;
	int tipo;
} simbolo;


//operaciones crear, insertar, buscar e imprimir
tSimbolos* crearTSimbolos();
simbolo* crearSimbolo(tSimbolos**, char*);
int buscar(tSimbolos**,char*);
int buscarSid(tSimbolos**,char*);
int buscarTipoDeSid(tSimbolos**,int);
void insertar(tSimbolos**, char*);
void actualizar(int, int, tSimbolos**);
void mostrarTabla(tSimbolos**);
int newtemp(tSimbolos**);

#endif //TABLA_SIM_H
