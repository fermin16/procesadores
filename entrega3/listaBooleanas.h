#ifndef listaBooleanas
#define listaBooleanas
#include <stdlib.h>
#include <stdio.h>
#include "tablaCuadruplas.h"

typedef struct celdaBooleana{
	int destino;
	struct celdaBooleana *sig;
}celdaBooleana;

typedef struct listaBooleana{
	celdaBooleana *inicio;
}listaBooleana;

listaBooleana* crearListaBooleana(int nextquad);
int esVaciaBooleana(listaBooleana* lista);
listaBooleana* mergeListasBooleanas(listaBooleana* lista1, listaBooleana* lista2);
#endif
