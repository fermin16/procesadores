#ifndef TABLA_SIM_H
#define TABLA_SIM_H


#define TIPO_ENTERO -1
#define TIPO_REAL -2
#define TIPO_CARACTER -3
#define TIPO_CADENA -4
#define TIPO_BOOLEANO -5

typedef struct tablaSimbolos {
	struct simbolo* inicio;
	struct simbolo* end;
	int simboloId;
} tablaSimbolos;

typedef struct simbolo {
	struct simbolo* sig;
	char nombre[25];
	int valor;
	int tipo;
} simbolo;

simbolo* newtemp(tablaSimbolos** ,int);
tablaSimbolos* crearTablaSimbolos();
simbolo* crearSimbolo(tablaSimbolos**, char*);
simbolo* crearSimboloConTipo(tablaSimbolos**, char*, int);
int esVacia(tablaSimbolos**);
simbolo* buscarSimbolo(tablaSimbolos**,char*);
simbolo* buscarSimboloId(tablaSimbolos**,int);
void modificarSimbolo(tablaSimbolos** , char*, int);
void modificarSimboloId(tablaSimbolos** , int, int);
int insertarSimbolo(tablaSimbolos**, simbolo*);
void mostrarTablaSimbolos(tablaSimbolos**);
void imprimirSimbolo(simbolo*);
#include <stdio.h>
#include <stdlib.h>
#endif
