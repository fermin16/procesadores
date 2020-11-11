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
    struct dimension *sigDimension;
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
celda* buscarElemento(lista l, int idBuscar);
int actualizarElemento(lista l, char* nombre_var, char* nuevoVal);
void recorrerTablaSimbolos(lista l);
int nuevaEntrada(lista *l, char* nombre);
void actNombre(lista *l, char* nombre, int id);
void modificarTipo (lista *ls, int ssid, int tipo);

void eliminarVariable(lista* l, char* nombre);
void eliminarPrimero(lista* l);
void eliminarUltimo(lista* l);

void actNombre(lista *l, char* nombre, int id);

// Funcion para inicializar la tabla de simbolos
void iniTabla(lista *l){
	l-> primero = NULL;
	l-> ultimo = NULL;
	l-> cont = 1;
}

//Funcion para comprobar si la tabla esta vacia o no
int esVacia(lista *l){
	if(l.primero==NULL){
		return 1;
	}else{
		return 0;
	}
}

int insertarElemento(lista *l, celda* nueva){
	if (esVacia(*l){
		l-> primero=nueva;
		l-> ultimo =nueva;
		return 1;
	}else{
		nuevo-> ant = l-> ultimo;
		l-> ultimo->sig = nueva;
		l->ultimo=nueva;
		return 1;
	}
}

celda* buscarElemento(lista l,int idBuscar){
	if(esVacia(l)==0{
		//miramos si esta al inicio o final de la lista
		if((l.primero)->sid==idBuscar){
			return l.primero;
		}else if ((l.ultimo)->sid==idBuscar){
			return ls.ultimo;
		}else{
			lista aux;
			aux=l;
			if(l.primero->sig !=NULL && l.ultimo->ant !=NULL){
				while((((aux.primero)->sig)->sid!=  idBudcar) &&  (((aux.ultimo) ->ant)sid!=idBuscar)){
					aux.primero =aux.primero->sig;
					aux.ultimo = aux.ultimo->ant;
					if(aux.primero-> sig ==NULL|| aux.ultimo-> ant ==NULL){
						break;
					}
				}
				if(((aux.primero)->sig)->sid==idBuscar){
					return(aux.primero)->sig;
				}else if (((aux.ultimo)->ant)->sid == idBuscar){
					return(aux.ultimo)->ant;
				}else{
					return NULL;
				}
			}
		}
	}else{
		return NULL;
	}
}

void recorrerTablaSimbolos(lista l){
	printf("Los enteros mostrados corresponden con los siguientes tipos: \n");
	printf("1 --> entero\n");
	printf("2 --> real\n");
	printf("3 --> booleano\n");
	printf("4 --> char\n");
	printf("5 --> cadena\n");
	if (esVacia(l){
		printf("No hay elementos en la tabla de simbolos");
	}else{
		celda *aux;
		aux = l.primero;
		while(aux->sig !=NULL){
			printf("SSID de la variable %d ",aux->sid);
			if(aux->nombre !=NULL){
				printf("Nombre de la variable %s " ,aux->nombre);
				if(aux->tipo > 0){
					printf("Tipo de la variable: 5d ",aux.tipo);
				}
			}
			aux =aux->sig;
			printf("\n");
		}
		printf("SSID de la variable %d ", aux->sid);
		if(aux->nombre!=NULL){
				printf("Nombre de la variable %s " ,aux->nombre);
				if(aux->tipo > 0){
					printf("Tipo de la variable: 5d ",aux.tipo);
				}
		}
		printf("\n");
	}
}

void eliminarPrimero(lista* l){
	celda* aux;
	aux=l->primero;
	l->primero=l->primero->sig;
	l->primero->ant=NULL;
	free(aux);
}

void eliminarUltimo(lista* l){
	celda* aux;
	aux=l->ultimo;
	l->ultimo=l->ultimo->ant;
	l->ultimo->sig=NULL;
	free(aux);
}		
		
int nuevaEntrada(lista *l,char* nombre){
	celda* nueva;
	nueva=(celda*)malloc(sizeof(celda));
	nueva->sig = NULL;
	nueva->ant =NULL;
	nueva->sid=l->cont++;
	if(nombre !=NULL){
		char* auxChar;
		auxChar=(char*)malloc(sizeof(strlen(nombre));	
		strcpy(auxChar, nombre);
		nueva->nombre=auxChar;
	}else{
		char auxChar[7];
		sprinf(auxChar,"temp_%d" , l->cont);
		nueva->nombre =strdup(auxChar);
	}
	printf("Creando el elemento:  %s\n" ,nueva->nombre);
	insertarElemento(l,nueva);
	return nueva->sid;
	
celda* buscarVariableNombre(lista l, char* nombre){
	if(esVacia(l) ==0){
		lista aux =l;
		while((strcmp(aux.primero->nombre,nombre)!=0) && (aux.primero -> sig != NULL)){
			aux.primero =aux.primero->sig;
		}
		//Devolvemos puntero celda encontrada
		if(strcmp(aux.primero->nombre,nombre)==0){
			return(aux.primero);
		}else{
			return NULL;
		}
	}else{
		return NULL;
	}
}

void actNombre(lista *l, char* nombre, int id){
	celda* aux = buscarElemento(*l,id);
	char* charAux;
	charAux = (char*)malloc(sizeof(strlen(nombre)));
	strcpy(charAux,nombre);
	aux-> nombre =charAux;
}

void modificarTipo(lista *l,int ssid, int tipo){
	celda* aux = buscarElemento(*l,ssid);
	aux->tipo=tipo;
}
			
				
				
				





