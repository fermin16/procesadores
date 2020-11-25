#include <stdlib.h>
#include <stdio.h>
#include <string.h>


        #define OP_SUMA_ENTERO 1
        #define OP_RESTA_ENTERO 2
        #define OP_SUMA_REAL 3
        #define OP_RESTA_REAL 4
        #define OP_MULTI_ENTERO 5
        #define OP_MULTI_REAL 6
        #define OP_DIV_ENT 7
        #define OP_DIV_REAL 8
        #define OP_MOD 9
        #define OP_ASIG 10
        #define OP_GOTO 11
        #define OP_GOTO_MENOR 12
        #define OP_GOTO_MENOR_IGUAL 13
        #define OP_GOTO_MAYOR 14
        #define OP_GOTO_MAYOR_IGUAL 15
        #define OP_GOTO_DISTINTO 16
        #define OP_GOTO_IGUAL  17
        #define OP_GOTO_COND 18
        #define OP_SUMA_ENTERO_UNARIO 19
        #define OP_RESTA_ENTERO_UNARIO 20
        #define OP_SUMA_REAL_UNARIO 21
        #define OP_RESTA_REAL_UNARIO 22
        #define OP_INTTOREAL 23
        #define OP_ASSIGN_FALSE 24
        #define OP_ASSIGN_TRUE 25
    
        
        #define NUMBER_OF_STRING 25
        #define MAX_STRING_SIZE 100

//Para mostrar los datos de las constantes
char arr[NUMBER_OF_STRING][MAX_STRING_SIZE] =
{       " OP_SUMA_ENTERO 1 ",
        " OP_RESTA_ENTERO 2 ",
        " OP_SUMA_REAL 3 ",
        " OP_RESTA_REAL 4 ",
        " OP_MULTI_ENTERO 5 ",
        " OP_MULTI_REAL 6 ",
        " OP_DIV_ENT 7 ",
        " OP_DIV_REAL 8 ",
        " OP_MOD 9 ",
        " OP_ASIG 10 ",
        " OP_GOTO 11 ",
        " OP_GOTO_MENOR 12 ",
        " OP_GOTO_MENOR_IGUAL 13 ",
        " OP_GOTO_MAYOR 14 ",
        " OP_GOTO_MAYOR_IGUAL 15 ",
        " OP_GOTO_DISTINTO 16 ",
        " OP_GOTO_IGUAL  17 ",
        " OP_GOTO_COND 18 --> Comprueba si es verdadera la variable booleana ",
        " OP_SUMA_ENTERO_UNARIO 19 ",
        " OP_RESTA_ENTERO_UNARIO 20 ",
        " OP_SUMA_REAL_UNARIO 21 ",
        " OP_RESTA_REAL_UNARIO 22 ",
        " OP_INTTOREAL 23 ",
        " OP_ASSIGN_FALSE 24 ",
        " OP_ASSIGN_TRUE 25 "
};


typedef struct tabla_cuadruplas{
    int nextquad;
    int cuadruplas[100][4];
}tabla_cuadruplas;



void inicializar_tabla_cuadruplas(tabla_cuadruplas *tabla){
    tabla->nextquad = 0;
}

void gen(int operacion,int op1,int op2,int res, tabla_cuadruplas *tc){
    tc->cuadruplas[tc->nextquad][0] = operacion;
    tc->cuadruplas[tc->nextquad][1] = op1;
    tc->cuadruplas[tc->nextquad][2] = op2;
    tc->cuadruplas[tc->nextquad][3] = res;
    tc->nextquad++;
}

void recorrer(tabla_cuadruplas tabla){
    int i;
    for (i=0;i<tabla.nextquad;i++){
        printf("cuadrupla numero %d, valores: %d, %d, %d, %d\n",i,tabla.cuadruplas[i][0],tabla.cuadruplas[i][1],tabla.cuadruplas[i][2],tabla.cuadruplas[i][3]);
    }
}

void modificar_cuadrupla(tabla_cuadruplas *tabla, int fil, int col, int valor){
    tabla->cuadruplas[fil][col] = valor;
}

void mostrar_ctes_TC(){
    for (int i = 0; i < NUMBER_OF_STRING; i++){
        printf("%s\n", arr[i]);
    }
}
