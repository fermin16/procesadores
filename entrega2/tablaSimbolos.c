#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*Vamos a implementar una lista doble para buscar las variables desde los dos extremos.
 * De esta manera, si pensamos en el peor de los casos solo recorreremos el nuemero de elemntos entre 2
 * puesto que como lo hacemos doble delante y detras recorreremos a la vez dos elementos.*/

union val{
    int n;
    float f;
    char* str;
    int bool;
}

typedef struct celda{
    char*nombre;
    int sid;
    int tipo;
    struct celda *sig,*ant;
}celda;

/*Como lo que queremos realizar es una lista doble, cabecera tendra la siguiente estructura*/
typedef struct lista{
    struct celda *primero, *ultimo;
}lista;

