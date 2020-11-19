#include "tabla_quad.h"

tQuad* crearTQuad(){
	tQuad* tQ;
	tQ = (tQuad*) malloc (sizeof(tQuad));
	tQ -> nextquad = 0;
	return tQ;
}

void gen(int operador, int op1, int op2, int res, tQuad* tQ){
	tQ -> tabla[tQ->nextquad].valor[0] = operador;
	tQ -> tabla[tQ->nextquad].valor[1] = op1;
	tQ -> tabla[tQ->nextquad].valor[2] = op2;
	tQ -> tabla[tQ->nextquad].valor[3] = res;
	tQ -> nextquad++;
}

void mostrarTablaQuad(tQuad* tQ) {
	for (int i=0; i<tQ->nextquad; i++ ){
		quad qAux = tQ-> tabla[i];
		printf("Operador: %d \t", qAux.valor[0]);
		printf(" Op1: %d \t", qAux.valor[1]);
		printf(" Op2: %d \t", qAux.valor[2]);
		printf(" Res: %d\n", qAux.valor[3]);
	}

};



