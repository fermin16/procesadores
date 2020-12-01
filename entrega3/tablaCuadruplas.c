#include "tablaCuadruplas.h"

char* mostarOperacion(int op);

void inicializarTablaCuadruplas(tablaCuadruplas *tabla){
	tabla->nextQuad=0;
}

void insertarCuadrupla(int operacion, int operador1, int operador2,int resultado, tablaCuadruplas *tabla){
	printf("entro insertarCuadrupla\n");
	int nextQuad=tabla->nextQuad;
	tabla->cuadruplas[nextQuad][0]=operacion;
	tabla->cuadruplas[nextQuad][1]=operador1;
	tabla->cuadruplas[nextQuad][2]=operador2;
	tabla->cuadruplas[nextQuad][3]=resultado;
	tabla->nextQuad=nextQuad+1;
	mostrarTablaCuadruplas(tabla);
	printf("salgo mostrarTablaCuadruplas\n");
}

char* mostrarOperacion(int op){
	switch(op){
		case 1: return "Asignacion";
				break;
		case 2: return "Suma";
				break;
		case 3: return "Resta";
				break;
		case 4: return "Multiplicacion";
				break;
		case 5: return "Division Real";
				break;
		case 6: return "MOD";
				break;
		case 7: return "Division";
				break;
		default: return "tipo no valido";
	}
}


void mostrarTablaCuadruplas(tablaCuadruplas *tabla){
	int i;
        printf("*********************** Tabla de Cuadruplas ***********************   Indice: %d\n",tabla->nextQuad);
	for (i=0;i<tabla->nextQuad;i++){
		printf("Cuadrupla %d: Operacion %s, Operador1 %d, Operador2 %d, Destino %d\n",i,mostrarOperacion(tabla->cuadruplas[i][0]),tabla->cuadruplas[i][1],tabla->cuadruplas[i][2],tabla->cuadruplas[i][3]);
	}
        printf("*******************************************************************   \n");

}


