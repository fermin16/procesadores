#include "tablaSimbolos.h"
#include <string.h>

simbolo* newtemp(tablaSimbolos** tS, int tipo){
    printf("Entro newtemp\n");
    simbolo* sim;
    sim = crearSimbolo(tS,NULL);
    sim-> tipo = tipo;
    printf("Salgo newtemp\n");
    return sim;
};

tablaSimbolos* crearTablaSimbolos(){
    printf("entrocrearTablaSImbolos\n");
    tablaSimbolos* tS;
    tS = (tablaSimbolos*) malloc(sizeof(tablaSimbolos));
    tS -> inicio = NULL;
    tS -> end = NULL;
    tS -> simboloId = 0;
    printf("Salgo creartablasimbolos\n");
    return tS;
};

simbolo* crearSimbolo(tablaSimbolos** tS, char* nomb){
    printf("entro crearsimbolo\n");
    simbolo* sim;
    sim = (struct simbolo*) malloc (sizeof(struct simbolo));
    sim ->sig = NULL;
    if(nomb!=NULL)
        strcpy(sim->nombre,nomb);
    else strcpy(sim->nombre,"empty");
    printf("salgo crearsimbolo\n");
    return sim;
};
simbolo* crearSimboloConTipo(tablaSimbolos** tS, char* nomb, int tipo){
    printf("entro crearSimboloConTipo\n");
    printf("---Crear simbolo: nombre %s, tipo %d \n", nomb,tipo);
    simbolo* sim;
    sim = (struct simbolo*) malloc (sizeof(struct simbolo));
    sim ->sig = NULL;
    if(nomb!=NULL)
        strcpy(sim->nombre,nomb);
    sim-> tipo = tipo;
    printf("salgo crearSimboloConTipo\n");
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
    printf("entro buscarSimbolo %s\n",nomb);
    if (esVacia(tS)==1){
        printf("salgo buscarSimbolo\n");
        return NULL;
    }else{
        simbolo* simAux = (*tS) -> inicio;
        while ((simAux -> sig != NULL) && (strcmp(nomb, simAux -> nombre)!=0)){
            simAux = simAux -> sig;
        }
        if (strcmp(nomb, simAux -> nombre)!=0){
            printf("salgo buscarSimbolo\n");
             return NULL;
        }else{
            printf("salgo buscarSimbolo\n");
            return simAux;
        }
    }
};

void modificarSimbolo(tablaSimbolos** tS, char* nomb, int nuevoTipo){
    simbolo* sim=buscarSimbolo(tS,nomb);
    if(sim!=NULL){
        sim->tipo=nuevoTipo;
    }
}

int insertarSimbolo (tablaSimbolos** tS, simbolo* nueva){
    printf("entro insertarSimbolo\n");
    //miramos si elemento esta en la lista, si no esta en la lista
    printf("--- Intento insertar: ");
    imprimirSimbolo(nueva);
    if(buscarSimbolo(tS,nueva -> nombre) == NULL || strcmp(nueva->nombre, "empty")==0){
        if(esVacia(tS)){
            (*tS) -> inicio = nueva;
            (*tS) -> end =  nueva;
        }else{
            nueva -> sig= (*tS) -> inicio;
            (*tS) -> inicio= nueva;
        }
        (*tS) -> simboloId = (*tS)->simboloId + 1;
        nueva -> valor = (*tS) -> simboloId;
        printf("salgo insertarSimbolo\n");
        return nueva -> valor;
    }else{
        printf("El simbolo %s ya es una variable \n", nueva->nombre);
        printf("salgo insertarSimbolo\n");
        return -1;
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
    printf("entro mostrarTablaSimbolos\n");
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
    printf("salgo mostrarTablaSimbolos\n");
};



		



