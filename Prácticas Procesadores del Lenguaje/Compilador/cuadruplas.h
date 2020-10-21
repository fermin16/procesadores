#ifndef BG_C_H
    #define BG_C_H
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
        
        typedef struct tabla_cuadruplas{
            int nextquad;
            int cuadruplas[4][100];
        }tabla_cuadruplas;
        
        void inicializar_tabla_cuadruplas(tabla_cuadruplas *tabla);
        void gen(int operacion,int op1,int op2,int res, tabla_cuadruplas *tc);
        void recorrer(tabla_cuadruplas tabla);
        void modificar_cuadrupla(tabla_cuadruplas *tabla, int fil, int col, int valor);

#endif
