/* Funciones boobleanas para el tratamiento de expresiones booleanas*/
#include <stdlib.h>
#include <stdio.h>

typedef struct celdaBooleana{
    int inst;
    struct celdaBooleana *sig;
}celdaBooleana;

typedef struct listaBooleana{
    celdaBooleana *primero;
}listaBooleana;

listaBooleana* mergeList(listaBooleana *l listaBooleana *li){
    if(l!=NULL && li!=NULL){
        celdaBooleana *aux = l->primero;
        while (aux->sig!=NULL){
            aux = aux-> sig;
        }
        aux -> sig = li->primero;
        return l;
    }else if(li==NULL && l!=NULL){
        return l;
    }else if (l ==NULL && li!=NULL){
        return li;
    }
}

void insertarBooleano(listaBooleana* lis,int ssid){
    celdaBooleana *aux = lis->primero;
    celdaBooleana *nuevo = (celdaBooleana*)malloc(sizeof(celdaBooleana));
    nuevo->inst=ssid;
    nuevo->sig=NULL;
    while(aux->sig!=NULL){
        aux=aux->sig;
    }
    aux->sig=nuevo;
}

listaBooleana* makeList(int sigquad){
    listaBooleana *nuevaLista = (listaBooleana*)malloc(sizeof(listaBooleana));
    celdaBooleana *nuevo = (celdaBooleana*)malloc(sizeof(celdaBooleana));
    nuevo->inst = sigquad;
    nuevo-> sig= NULL;
    nuevaLista->primero = nuevo;
    return nuevaLista;
}

void recorrerBooleano(listaBooleana* l){
    celdaBooleana *aux=l->primero;
    while(aux->sig != NULL){
        printf("Lista: %d\n",aux->inst);
    }
    printf("Lista: %d\n",aux->inst);
}