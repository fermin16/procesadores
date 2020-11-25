#ifndef TABLA_SIM_H
#define TABLA_SIM_H

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

int newtemp(tablaSimbolos**);
tablaSimbolos* crearTablaSimbolos();
simbolo* crearSimbolo(tablaSimbolos**, char*);
int esVacia(tablaSimbolos);
int buscarSimboloId(tablaSimbolos**,int);
void insertarSimbolo(tablaSimbolos**, simbolo*);
void mostrarTablaSimbolos(tablaSimbolos*);
void imprimirSimbolo(simbolo*);
#include <stdio.h>
#include <stdlib.h>
#endif
