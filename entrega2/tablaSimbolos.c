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
    int cont;
}lista;

/* Para los arrays y matrices como el tamaño no podemos saberlo crearemos una estructura
 * que tenga un tamaño dimensional para que acoja cualquier tamaño que queramos*/
typedef struct dimension{
    struct dimension *sig_dimension;
    int tam;
}dimension;

/*Para codificar los tipos usaremos numeros
 1 para los enteros
 2 para los reales
 3 para los caracteres
 4 para las cadenas de caracteres*/

/*A continuacion pondremos la lista de funciones*/
void ini_tabla(lista *l);
int es_vacia(lista l);
int insertarElemento(lsita *l, celda* nueva);
celda* buscarElemento(lista l, int id_buscar);
int actualizarElemento(lista l, char* nombre_var, char* nuevo_val);
void recorrerTablaSimbolos(lista l);

