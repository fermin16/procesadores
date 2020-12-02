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
#define OP_GOTO_CONDICIONAL 8
#define OP_GOTO 9
#define OP_ASIGNACION_TRUE 10
#define OP_ASIGNACION_FALSE 11
#define OP_RESTA_UNARIA 12
#define OP_SUMA_UNARIA 13
#define OP_MENOR 14
#define OP_MENOR_IGUAL 15
#define OP_MAYOR 16
#define OP_MAYOR_IGUAL 17
#define OP_DISTINTO 18
#define OP_IGUAL  19


typedef struct tablaCuadruplas{
	int nextQuad;
	int cuadruplas[200][4];
}tablaCuadruplas;

void inicializarTablaCuadruplas(tablaCuadruplas*);
void insertarCuadrupla(int,int,int,int,tablaCuadruplas*);
void mostrarTablaCuadruplas(tablaCuadruplas*);
char* mostrarOperacion(int);
void modificarCuadrupla(tablaCuadruplas*, int, int, int);

#endif