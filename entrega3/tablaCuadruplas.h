#ifndef TABLA_CUA_H
#define TABLA_CUA_H

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define OP_ASIGNACION  1
#define OP_SUMA 2
#define OP_RESTA 3
#define OP_MULTIPLICACION 4
#define OP_DIVISION_REAL 5
#define OP_MOD 6
#define OP_DIVISION 7



typedef struct tablaCuadruplas{
	int nextQuad;
	int cuadruplas[200][4];
}tablaCuadruplas;

void inicializarTablaCuadruplas(tablaCuadruplas*);
void insertarCuadrupla(int,int,int,int,tablaCuadruplas*);
void mostrarTablaCuadruplas(tablaCuadruplas*);
char* mostrarOperacion(int);
#endif