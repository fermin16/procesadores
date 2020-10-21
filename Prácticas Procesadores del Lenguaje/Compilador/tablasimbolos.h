#ifndef BG_TS_H
#define BG_TS_H
    #include <stdlib.h>
    #include <string.h>
    typedef struct celda{
        char* nombre;
        int sid;
        int tipo;
        struct celda *sig,*ant; 
    } celda;
        
    /*Como necesitamos una lista doble, la estructura de la cabecera serÃ¡ la siguiente*/
    typedef struct lista{
        struct celda *primero, *ultimo;
        int cont;
    }lista;	

    /* Para el caso de arrays y matrices, necesitaremos guardar el tamaÃ±o de 
    * las distintas dimensiones. Al no ser algo fijo, ya que se pueden
    * declarar estructuras con tantas dimensiones como se desee, necesitamos 
    * una estructura dinÃ¡mica para estas dimensiones*/
    
        
    /*Para codificar los tipos vamos a utilizar nÃºmeros enteros por facilidad:
    * 1- Enteros
    * 2- Reales
    * 3- Caracteres
    * 4- Cadenas de caracteres*/

    //Lista de funciones
    int nueva_entrada(lista *ls,char* nombre);
    void ini_tabla(lista *ls);
    void modificar_tipo(lista *ls, int ssid, int tipo);
    void recorrer_tabla_simbolos(lista ls);
    celda* buscar_variable_nombre(lista ls, char* nombre);

#endif
