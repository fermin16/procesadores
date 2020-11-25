#include <stdlib.h>
#include <stdio.h>
#include <string.h>
//para mostrar los datos de las constantes
char arr[number_of_string][max_string_size] = 
{
    " op_sumaEntero 1 ",
    " op_restaEntero 2 ",
    " op_sumaReal 3 ",
    " op_restaReal 4 ",
    " op_multiplicacionEntero 5 ",
    " op_multiplicacionReal 6 ",
    " op_divisionEntera 7 ",
    " op_divisionReal 8 ",
    " op_mod 9 ",
    " op_asignacion 10 ",
    " op_goto 11 ",
    " op_gotoMenor 12 ",
    " op_gotoMayor 13 ",
    " op_gotoMayorIgual 14 ",
    " op_gotoMenorIgual 15 ",
    " op_distinto 16 ",
    " op_gotoIgual 17 ",
    " op_gotoCond 18 --> comprueba si es verdadera la variable booleana ",
    " op_sumaEnteroUnario 19 ",
    " op_restaEnteroUnario 20 ",
    " op_sumaRealUnario 21 ",
    " op_restaRealUnario 22 ",
    " op_intToReal 23 ",
    " op_assignFalse 24 ",
    " op_assingTrue 25 "
};

typedef struct tablaCuadrupulas{
    int nextquad;
    int cuadrupulas[100][4];
}tablaCuadrupulas;

void inicializarTablaCuadrupulas(tablaCuadrupulas *tabla){
    tabla->nextquad=0;
}

void gen(int operacion, int op1,int op2, int res, tablaCuadrupulas *tc){
    tc -> cuadrupulas[tc->nextquad][0] = operacion;
    tc -> cuadrupulas[tc->nextquad][1] = op1;
    tc -> cuadrupulas[tc->nextquad][2] = op2;
    tc -> cuadrupulas[tc->nextquad][3] = res;
    tc->nextquad++;
}

void recorrer(tablaCuadrupulas tab){
    int i;
    for (i=0;i<tab.nextquad;i++){
        printf("Cuadrupula numero %d,valores %d, %d, %d, %d\n",i,tab.cuadrupulas[i][0],tab.cuadrupulas[i][1],tab.cuadrupulas[i][2],tab.cuadrupulas[i][3])
    }
}

void modCuadrupula(tablaCuadrupulas *tabla, int fila, int col, int val){
    tabla->cuadrupulas[fila][col] = valor;
}

void mostrarTablaCuadrupulas(){
    for (int i =0; i<number_of_string;i++){
        printf("%s\n",arr[i]);
    }
}