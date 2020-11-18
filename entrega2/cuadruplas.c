#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define op_sumaEntero 1
#define op_restaEntero 2
#define op_sumaReal 3
#define op_restaReal 4
#define op_multiplicacionEntero 5
#define op_multiplicacionReal 6
#define op_divisionEntera 7
#define op_divisionReal 8
#define op_mod 9
#define op_asignacion 10
#define op_goto 11
#define op_gotoMenor 12
#define op_gotoMayor 13
#define op_gotoMayorIgual 14
#define op_gotoMenorIgual 15
#define op_distinto 16
#define op_gotoIgual 17
#define op_gotoCond 18
#define op_sumaEnteroUnario 19
#define op_restaEnteroUnario 20
#define op_sumaRealUnario 21
#define op_restaRealUnario 22
#define op_intToReal 23
#define op_assignFalse 24
#define op_assingTrue 25
#define number_of_string 25
#define max_string_size 100

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
    int sigquad;
    int cuadrupulas[100][4];
}tablaCuadrupulas;

void inicializarTablaCuadrupulas(tablaCuadrupulas *tabla){
    tabla->sigquad=0;
}

void gen(int operacion, int op1,int op2, int res, tablaCuadrupulas *tc){
    tc -> cuadrupulas[tc->sigquad][0] = operacion;
    tc -> cuadrupulas[tc->sigquad][1] = op1;
    tc -> cuadrupulas[tc->sigquad][2] = op2;
    tc -> cuadrupulas[tc->sigquad][3] = res;
    tc->sigquad++;
}

void recorrer(tablaCuadrupulas tab){
    int i;
    for (i=0;i<tab.sigquad;i++){
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