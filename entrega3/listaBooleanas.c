#include "listaBooleanas.h"
#include "tablaCuadruplas.h"


listaBooleana* crearListaBooleana(int nextquad){
	listaBooleana* nuevaLista= (listaBooleana*)malloc(sizeof(listaBooleana));
	celdaBooleana* nuevaCelda= (celdaBooleana*)malloc(sizeof(celdaBooleana));
	nuevaLista->inicio=nuevaCelda;
	nuevaCelda->destino=nextquad;
	nuevaCelda->sig=NULL;
	return nuevaLista;
}

int esVaciaBooleana(listaBooleana* lista){
	if(lista->inicio==NULL){
		return 1;
	}else return 0;
}

listaBooleana* mergeListasBooleanas(listaBooleana* lista1, listaBooleana* lista2){
	if(esVaciaBooleana(lista1)== 0 && esVaciaBooleana(lista2)==0){
		celdaBooleana* auxBooleana = lista1-> inicio;
		while(auxBooleana->sig!=NULL){
			auxBooleana = auxBooleana->sig;
		}
		auxBooleana->sig = lista2->inicio;
		return lista1;
	}else if(esVaciaBooleana(lista1)==0){
		return lista1;

	}else if (esVaciaBooleana(lista2)==0){
		return lista2;
	}else
		return NULL;
}



