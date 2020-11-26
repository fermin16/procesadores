#include "tablaSimbolos.h"
#include <string.h>

int newtemp(tablaSimbolos** tS){
    simbolo* sim;
    sim = crearSimbolo(tS,NULL);
    return (*tS) -> simboloId;
};

tablaSimbolos* crearTablaSimbolos(){
    tablaSimbolos* tS;
    tS = (tablaSimbolos*) malloc(sizeof(tablaSimbolos));
    tS -> inicio = NULL;
    tS -> end = NULL;
    tS -> simboloId = 0;
    return tS;
};

simbolo* crearSimbolo(tablaSimbolos** tS, char* nomb){
    simbolo* sim;
    sim = (struct simbolo*) malloc (sizeof(struct simbolo));
    sim ->sig = NULL;
    if(nomb=NULL)
        strcpy(sim->nombre,nomb);
    sim -> valor = ++((*tS) -> simboloId);
    return sim;
};
simbolo* crearSimboloConTipo(tablaSimbolos** tS, char* nomb, int tipo){
    simbolo* sim;
    sim = (struct simbolo*) malloc (sizeof(struct simbolo));
    sim ->sig = NULL;
    if(nomb=NULL)
        strcpy(sim->nombre,nomb);
    sim -> valor = ++((*tS) -> simboloId);
    sim-> tipo = tipo;
    return sim;
};

int esVacia (tablaSimbolos tS){
    if (tS.inicio == NULL){
        return 1;
    }else{
        return 0;
    }
};

simbolo* buscarSimbolo(tablaSimbolos** tS, char* nomb){
    if esVacia(tS)==1{
        return NULL;
    }else{
        simbolo* simAux = (*tS) -> inicio;
        while ((simAux -> sig != NULL) && (strcmp(nomb, simAux -> nombre)==0)){
            simAux = simAux -> sig;
        }
        if (strcmp(nomb,simAux -> nombre)==0){
             return simAux;
        }else{
            return NULL;
        }
    }
};

void insertarSimbolo (tablaSimbolos** tS, simbolo* nueva){
    //miramos si elemento esta en la lista, si no esta en la lista
    if(buscarSimbolo(tS,nueva -> nombre) == NULL){
        if(esVacia(tS)){
            tS -> inicio = nueva;
            tS -> end =  nueva;
        }else{
            nueva -> sig= (*tS) -> end;
            end -> nueva;
        }
        (tS*) -> simboloId = (tS*)->simboloId + 1;
    }
};

void imprimirSimbolo(simbolo* simAux){
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
};

void mostrarTablaSimbolos(tablaSimbolos** tS){
    if (esVacia(tS)==0){
        simbolo* simAux = (*tS) -> inicio;
        while (simAux->sig != NULL) {
			printf("Nombre: %s\t ", simAux -> nombre);
			imprimirSimbolo(simbolo* simAux);
			simAux = simAux -> sig;
		}
		imprimirSimbolo(simbolo* simAux);
    }else{
        printf("Tabla vacia.\n");
    }
};



		



