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
    if(nomb!=NULL)
        strcpy(sim->nombre,nomb);
    return sim;
};
simbolo* crearSimboloConTipo(tablaSimbolos** tS, char* nomb, int tipo){
    printf("---Crear simbolo: nombre %s, tipo %d \n", nomb,tipo);
    simbolo* sim;
    sim = (struct simbolo*) malloc (sizeof(struct simbolo));
    sim ->sig = NULL;
    if(nomb!=NULL)
        strcpy(sim->nombre,nomb);
    sim-> tipo = tipo;
    return sim;
};

int esVacia (tablaSimbolos** tS){
    if ((*tS) -> inicio == NULL){
        return 1;
    }else{
        return 0;
    }
};

simbolo* buscarSimbolo(tablaSimbolos** tS, char* nomb){
    if (esVacia(tS)==1){
        return NULL;
    }else{
        simbolo* simAux = (*tS) -> inicio;
        while ((simAux -> sig != NULL) && (strcmp(nomb, simAux -> nombre)!=0)){
            simAux = simAux -> sig;
        }
        if (strcmp(nomb, simAux -> nombre)!=0){
             return NULL;
        }else{
            return simAux;
        }
    }
};

void insertarSimbolo (tablaSimbolos** tS, simbolo* nueva){
    //miramos si elemento esta en la lista, si no esta en la lista
    printf("--- Intento insertar: ");
    imprimirSimbolo(nueva);
    if(buscarSimbolo(tS,nueva -> nombre) == NULL){
        if(esVacia(tS)){
            (*tS) -> inicio = nueva;
            (*tS) -> end =  nueva;
        }else{
            nueva -> sig= (*tS) -> inicio;
            (*tS) -> inicio= nueva;
        }
        (*tS) -> simboloId = (*tS)->simboloId + 1;
        nueva -> valor = (*tS) -> simboloId;
    }else{
        printf("El simbolo %s ya es una variable \n", nueva->nombre);
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
        printf("Nombre: %s\t",simAux->nombre);
		printf("Tipo: %s\t ", type);
		printf("Indice del símbolo: %d\n", simAux -> valor);
};

void mostrarTablaSimbolos(tablaSimbolos** tS){
    if (esVacia(tS)==0){
        printf("************************ Tabla de Simbolos ************************   Indice: %d\n",(*tS)->simboloId);
        simbolo* simAux = (*tS) -> inicio;
        while (simAux->sig != NULL) {
			imprimirSimbolo(simAux);
			simAux = simAux -> sig;
		}
		imprimirSimbolo(simAux);
        printf("*******************************************************************\n");
    }else{
        printf("Tabla vacia.\n");
    }
};



		



