#include "tabla_sim.h"
#include <string.h>

tSimbolos* crearTSimbolos(){
	tSimbolos* tS;
	tS = (tSimbolos*) malloc (sizeof(tSimbolos));
	tS -> inicio = NULL;
	tS -> end = NULL;
	tS -> sId = 0;
	return tS;
};

simbolo* crearSimbolo(tSimbolos** tS, char* nomb){
	simbolo* sim;
	sim = (struct simbolo*) malloc (sizeof(struct simbolo));
	sim -> sig = NULL;
	if (nomb != NULL)
		strcpy(sim->nombre,nomb);
	sim -> valor = ++((*tS) -> sId);
	return sim;
};

int newtemp(tSimbolos** tS){
	simbolo* sim;
	sim = crearSimbolo(tS,NULL);
	return (*tS)->sId;
};

int buscar(tSimbolos** tS, char* nomb){
	if(((*tS) -> inicio) != NULL){
		simbolo* simAux = (*tS)->inicio;
		while ((simAux -> sig != NULL) && (strcmp(nomb, simAux -> nombre)==0))
			simAux = simAux -> sig;
		if(strcmp(nomb, simAux -> nombre)==0) {
			return 1;
		} else {
			return 0;
		}
	} else {
		return 0;
	}
};


int buscarSid(tSimbolos** tS, char* nomb){
	if(((*tS) -> inicio) != NULL){
		simbolo* simAux = (*tS)->inicio;
		while ((simAux -> sig != NULL) && (strcmp(nomb, simAux -> nombre)==0))
			if(strcmp(nomb, simAux -> nombre)==0) {
				break;
			} else {
				simAux = simAux -> sig;
			}
	} 
	return (*tS)->sId;
};

int buscarTipoDeSid(tSimbolos** tS,int sid){
	simbolo* simAux;
	if(((*tS) -> inicio) != NULL){
		simAux = (*tS)->inicio;
		while ((simAux -> sig != NULL) && (sid != simAux->valor))
			if(sid != simAux->valor) 
				simAux = simAux -> sig;;
			
	}
	return simAux->tipo;
};

void insertar(tSimbolos** tS, char* nomb) {
	// Si el simbolo no esta en la tabla
	if (buscar(tS,nomb) == 0){
		simbolo* simNuevo = crearSimbolo(tS, nomb);
		simNuevo->valor = ((*tS)->sId);
		if((*tS) -> inicio == NULL) {
			simNuevo -> sig = NULL;
			(*tS) -> inicio = simNuevo;
			(*tS) -> end = simNuevo;
		} else {
			simNuevo -> sig = (*tS) -> inicio;
			(*tS) -> inicio = simNuevo;
		}			
	} else {
		printf("El simbolo ya esta en la tabla");
	}
 };



void actualizar(int num, int nuevoTipo, tSimbolos** tS){
	simbolo* simAux = (*tS)->inicio;
	int salida;
	for(salida=0;salida < num; salida++){
		simAux->tipo=nuevoTipo;
		simAux= simAux->sig;
	}
};

void mostrarTabla(tSimbolos** tS) {
	if(((*tS) -> inicio) != NULL) {
		simbolo* simAux = (*tS)->inicio;
		while (simAux->sig != NULL) {
			printf("Nombre: %s\t ", simAux -> nombre);
			char type[20];
			int tipoSimbolo = simAux->tipo;
			switch(tipoSimbolo) {
				case 0: strcpy(type, "No tiene tipo"); break;
				case -1: strcpy(type, "entero"); break;
				case -2: strcpy(type, "real"); break;
				case -3: strcpy(type, "caracter"); break;
				case -4: strcpy(type, "cadena"); break;
				case -5: strcpy(type, "booleano"); break;
				default: break;
			}
			printf("Tipo: %s\t ", type);
			printf("Indice del símbolo: %d\n", simAux -> valor);
			simAux = simAux -> sig;
		}
		char type[20];
		int tipoSimbolo = simAux->tipo;
		switch(tipoSimbolo) {
			case 0: strcpy(type, "No tiene tipo"); break;
			case -1: strcpy(type, "entero"); break;
			case -2: strcpy(type, "real"); break;
			case -3: strcpy(type, "caracter"); break;
			case -4: strcpy(type, "cadena"); break;
			case -5: strcpy(type, "booleano"); break;
			default: break;
		}
		printf("Nombre: %s\t ", simAux -> nombre);
		printf("Tipo: %s\t ", type);
		printf("Indice del símbolo: %d\n", simAux -> valor);
	} else {
		printf("Tabla vacia.\n");
	}
};
