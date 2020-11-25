#ifndef TABLA_QUAD_H
#define TABLA_QUAD_H

#include <stdio.h>
#include <stdlib.h>

#define MASENTERO 1
#define MENOSENTERO 2
#define PRODENTERO 3
#define DIVENTERO 4
#define MOD 5
#define MASREAL 6
#define MENOSREAL 7
#define PRODREAL 8
#define DIVREAL 9
#define MENOSUNARIOENT 10
#define MENOSUNARIOREAL 11
#define CASTENT2REAL 12
#define CASTREAL2ENT 13
#define NULO -99
#define OR 14
#define AND 15
#define NOT 16

// Operador, resultado, operando1 y operando2
typedef struct quad{
	int valor[4];
} quad;

typedef struct tQuad{
	quad tabla[100];
	int nextquad;
} tQuad;



//Funciones
void gen(int, int, int, int, tQuad*);
tQuad* crearTQuad();
void mostrarTablaQuad(tQuad*);

#endif //TABLA_QUAD_H

