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



void inicializarTablaCuadruplas(tablaCuadruplas *tabla){
    tabla->nextquad=0;
}

void gen(int operacion, int op1,int op2, int res, tablaCuadrupulas *tc){
    tc -> cuadruplas[tc->nextquad][0] = operacion;
    tc -> cuadruplas[tc->nextquad][1] = op1;
    tc -> cuadruplas[tc->nextquad][2] = op2;
    tc -> cuadruplas[tc->nextquad][3] = res;
    tc->nextquad++;
}

void recorrer(tablaCuadruplas tab){
    int i;
    for (i=0;i<tab.nextquad;i++){
        printf("Cuadrupla numero %d,valores %d, %d, %d, %d\n",i,tab.cuadruplas[i][0],tab.cuadruplas[i][1],tab.cuadruplas[i][2],tab.cuadruplas[i][3])
    }
}

void modCuadrupla(tablaCuadruplas *tabla, int fila, int col, int val){
    tabla->cuadrulas[fila][col] = valor;
}

void mostrarTablaCuadruplas(){
    for (int i =0; i<number_of_string;i++){
        printf("%s\n",arr[i]);
    }
}