#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/*Vamos a optar por una lista doble, donde buscaremos las variables desde
 * los dos extremos. De esta forma, en el peor de los casos, recorreremos
 * elem_lista/2 elementos*/
 
union Valor {
	int t;
	float f;
	char* str;
	int bool;
}; 



typedef struct celda{
	char* nombre;
    int sid;
    int tipo;
	struct celda *sig,*ant; 
} celda;
	
/*Como necesitamos una lista doble, la estructura de la cabecera será la siguiente*/
typedef struct lista{
	struct celda *primero, *ultimo;
    int cont;
}lista;	

/* Para el caso de arrays y matrices, necesitaremos guardar el tamaño de 
 * las distintas dimensiones. Al no ser algo fijo, ya que se pueden
 * declarar estructuras con tantas dimensiones como se desee, necesitamos 
 * una estructura dinámica para estas dimensiones*/
 
typedef struct dimension{
	struct dimension *sig_dimension;
	int tamano;
} dimension;
	
/*Para codificar los tipos vamos a utilizar números enteros por facilidad:
 * 1- Enteros
 * 2- Reales
 * 3- Caracteres
 * 4- Cadenas de caracteres*/

//Lista de funciones
void ini_tabla(lista *ls);
int es_vacia(lista ls);
int insertar_elemento(lista *ls, celda* nuevo);
celda* buscar_elemento(lista ls, int id_buscar);
int actualizar_elemento(lista *ls, char* nom_variable, char *nuevo_valor);
void recorrer_tabla_simbolos(lista ls);
int nueva_entrada(lista *ls,char* nombre);
void act_nombre(lista *ls, char* nombre, int id);
void modificar_tipo(lista *ls, int ssid, int tipo);

void eliminar_variable(lista* ls,char* nombre);
void eliminar_primero(lista* ls);
void eliminar_ultimo(lista* ls);

void act_nombre(lista *ls, char* nombre, int id);


//Funcion que inicializa la tabla de simbolos.
void ini_tabla(lista *ls){
	ls->primero = NULL;
	ls->ultimo = NULL;
    ls->cont = 1;
}

//Funcion que comprueba si la tabla es vacia
int es_vacia(lista ls){
	if (ls.primero == NULL){
		return 1;
	}else{
		return 0;
	}
}

int insertar_elemento(lista *ls, celda* nuevo){
	if (es_vacia(*ls)){
		ls->primero = nuevo;
		ls->ultimo = nuevo;
		return 1;   //Insercion exitosa
	}else{
		nuevo->ant = ls->ultimo;
		ls->ultimo->sig = nuevo;
		ls->ultimo = nuevo;
		return 1;
	}
}

celda* buscar_elemento(lista ls, int id_buscar){
	if (es_vacia(ls) == 0){
		//Comprobamos si se encuentra al principio o al final de la lista
		if ((ls.primero)->sid == id_buscar){
			return ls.primero;
		}else if ((ls.ultimo)->sid == id_buscar){
			return ls.ultimo;
		}else{
			lista aux;
			aux = ls;
            if (ls.primero->sig != NULL && ls.ultimo->ant != NULL){
                //Acortamos por los dos extremos la lista doble
                while ((((aux.primero)->sig)->sid != id_buscar) && (((aux.ultimo)->ant)->sid != id_buscar)){
                    aux.primero = aux.primero->sig;
                    aux.ultimo = aux.ultimo->ant;
		    if (aux.primero->sig == NULL || aux.ultimo->ant == NULL){
			break;
		    }
                }
                //Cuando salgamos del bucle, habremos encontrado el nombre de la variable. Por lo tanto, comprobamos por d�nde lo hemos alcanzado y devolvemos
                //El puntero a la celda encontrada
                if (((aux.primero)->sig)->sid == id_buscar){
                    return (aux.primero)->sig;
                }else if (((aux.ultimo)->ant)->sid == id_buscar){
                    return (aux.ultimo)->ant;
                }else{
                    return NULL;
                }
            }
		}
	}else{
		return NULL;
	}
}


void recorrer_tabla_simbolos(lista ls){
	printf("Los enteros mostrados corresponden con los siguientes tipos: \n");
	printf("1 --> entero\n");
	printf("2 --> real\n");
	printf("3 --> booleano\n");
	printf("4 --> char\n");
	printf("5 --> cadena\n");
	if (es_vacia(ls)){
		printf("No hay elementos en la tabla de simbolos");
	}else{
		celda *aux;
		aux = ls.primero;
		while (aux->sig != NULL){
                    printf("SSID de la variable %d ",aux->sid);
                    if (aux->nombre != NULL){
                        printf("Nombre de la variable %s ",aux->nombre);
                        if (aux->tipo > 0){
                            printf("Tipo de la variable: %d ",aux->tipo);
                        }
                    }
			aux = aux->sig;
		printf("\n");
		}
		printf("SSID de la variable %d ",aux->sid);
        if (aux->nombre != NULL){
                printf("Nombre de la variable %s ",aux->nombre);
                if (aux->tipo > 0){
                    printf("Tipo de la variable: %d ",aux->tipo);
                }
            }
        printf("\n");
	}
}

void eliminar_primero(lista* ls){
	celda* aux;
	aux= ls->primero;
	ls->primero = ls->primero->sig;
	ls->primero->ant = NULL;
	free(aux);
}
void eliminar_ultimo(lista* ls){
	celda* aux;
	aux= ls->ultimo;
	ls->ultimo = ls->ultimo->ant;
	ls->ultimo->sig = NULL;
	free(aux);
}



int nueva_entrada(lista *ls,char* nombre){
    celda* nuevo;
    nuevo = (celda*)malloc(sizeof(celda));
    nuevo->sig = NULL;
    nuevo->ant = NULL;
    nuevo->sid = ls->cont++;
    if (nombre != NULL){
        char* aux_char;
        aux_char = (char*)malloc(sizeof(strlen(nombre)));
        strcpy(aux_char,nombre);
        nuevo->nombre = aux_char;
    }else{
        char aux_char[7];
        sprintf(aux_char,"temp_%d",ls->cont);
        nuevo->nombre = strdup(aux_char);
    }
    printf("Creado el elemento: %s\n",nuevo->nombre);
    insertar_elemento(ls,nuevo);
    return nuevo->sid;
}

celda* buscar_variable_nombre(lista ls, char* nombre){
	if (es_vacia(ls) == 0){
        lista aux = ls;
         while ((strcmp(aux.primero->nombre, nombre)!=0) && (aux.primero->sig != NULL)){
                    aux.primero = aux.primero->sig;
                }
                //Cuando salgamos del bucle, habremos encontrado el nombre de la variable. Por lo tanto, comprobamos por d�nde lo hemos alcanzado y devolvemos
                //El puntero a la celda encontrada
                if (strcmp(aux.primero->nombre, nombre)==0){
                    return (aux.primero);
                }else{
                    return NULL;
                }

	}else{
		return NULL;
	}
}

void act_nombre(lista *ls, char* nombre, int id){
    celda* aux = buscar_elemento(*ls,id); 
    char* char_aux;
    char_aux = (char*)malloc(sizeof(strlen(nombre)));
    strcpy(char_aux,nombre);
    aux->nombre = char_aux;
}

void modificar_tipo(lista *ls, int ssid, int tipo){
    celda* aux = buscar_elemento(*ls,ssid);
    aux->tipo = tipo;
}
