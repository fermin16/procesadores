/*Vamos a implementar aquí las dos funciones necesarias para el tratamiento de las expresiones boooleanas.
Vamos a utilizar las siguientes funciones:
    - Merge
    - Backpatch
*/

#include <stdlib.h>
#include <stdio.h>

typedef struct celda_bool{
    int inst;
    struct celda_bool *sig;
}celda_bool;

typedef struct lista_bool{
    celda_bool *primero;
}lista_bool;

lista_bool* merge_lists(lista_bool *A, lista_bool *B){
    if (A!= NULL && B!= NULL){
	    celda_bool *aux = A->primero;
	    while (aux->sig != NULL){
		aux = aux->sig;
	    }
	    aux->sig = B->primero;
	    return A;
    }else if(B == NULL && A != NULL){
	return A;
    }else if(A == NULL && B != NULL){
	return B;
    }
}

void insertar_bool(lista_bool* ls, int ssid){
    celda_bool *aux = ls->primero;
    celda_bool *nuevo = (celda_bool*)malloc(sizeof(celda_bool));
    nuevo->inst = ssid;
    nuevo->sig = NULL;
    while (aux->sig != NULL){
        aux = aux->sig;
    }
    aux->sig = nuevo;
}

lista_bool* makelist(int nextquad){
    lista_bool *nueva_lista = (lista_bool*)malloc(sizeof(lista_bool));
    celda_bool *nuevo = (celda_bool*)malloc(sizeof(celda_bool));
    nuevo->inst = nextquad;
    nuevo->sig = NULL;
    nueva_lista->primero = nuevo;
    return nueva_lista;
}

void recorrer_bool(lista_bool* A){
    celda_bool *aux = A->primero;
    while(aux->sig != NULL){
        printf("Valor de lista: %d\n",aux->inst);
    }
    printf("Valor de lista: %d\n",aux->inst);
}
