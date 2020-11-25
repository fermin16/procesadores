%{

	#define astoi 48 //Cte. para transformar numeros en ascii a numeros enteros.
	#include <ctype.h>
	#include <string.h>
	#include "parser.tab.h"
	int dev_exp();
%}

DR_DIGITO [0-9]
DR_ENTERO (\+|-)?{DR_DIGITO}+((e|E){DR_DIGITO}+)?
DR_ESPECIALES [/()=[]+*{},;.:-_>< \t\n"']
DR_ESPECIALES_ACEPTADOS [/()=[]+*{},;.:-_>< \t\n]
DR_LETRA [a-zA-Z]
DR_CHAR [{DR_LETRA}{DR_DIGITO}{DR_ESPECIALES_ACEPTADOS}]
DR_REAL {DR_ENTERO}+(\.{DR_DIGITO}+)?((e|E){DR_DIGITO}+)?
DR_CADENA {DR_CHAR}*
DR_BOOLEANO (?i:verdadero)|(?i:falso)

letra_o_cifra {DR_LETRA}|{DR_DIGITO}
identificador {DR_LETRA}{letra_o_cifra}*
caracter_literal \".\"
cadena_literal \'([^']*(\/.?)?)+\'
%%

(?i:accion) {
		printf("accion\n");
		return BIS_ACCION;
	  }
(?i:algoritmo) {
		printf("algoritmo\n");
		return BIS_ALGORITMO;
	}
(?i:booleano) {
		printf("booleano\n");
		return BIS_BOOLEANO;
	}
(?i:cadena) {
        printf("cadena\n");
        return BIS_CADENA;
    }
(?i:caracter) {
        printf("caracter\n");
        return BIS_CARACTER;
    }
(?i:const) {
        printf("const\n");
        return BIS_CONST;
    }
(?i:continuar) {
        printf("continuar\n");
        return BIS_CONTINUAR;
    }
(?i:de) {
        printf("de\n");
        return BIS_DE;
    }
(?i:dev) {
        printf("dev\n");
        return BIS_DEV;
    }
(?i:ent) {
        printf("ent\n");
        return BIS_ENT;
    }
(?i:entero) {
        printf("entero\n");
        return BIS_ENTERO;
    }
(?i:es) {
        printf("e/s\n");  
        return BIS_ENT_SAL;
    }
(?i:faccion) {
        printf("faccion\n");
        return BIS_FACCION;
    }
(?i:falgoritmo) {
        printf("falgoritmo\n");  
        return BIS_FALGORITMO;
    }
(?i:falso) {
        printf("falso\n");    
        return BIS_FALSO;
    }
(?i:fconst) {
        printf("fconst\n");   
        return BIS_FCONST;
    }
(?i:ffuncion) {
        printf("ffuncion\n");        
        return BIS_FFUNCION;
    }
(?i:fmientras) {
        printf("fmientras\n");        
        return BIS_FMIENTRAS;
    }
(?i:fpara) {
        printf("fpara\n");   
        return BIS_FPARA;
    }
(?i:fsi) {
        printf("fsi\n"); 
        return BIS_FSI;
    }
(?i:ftipo) {
        printf("ftipo\n");
        return BIS_FTIPO;
    }
(?i:ftupla) {
        printf("ftupla\n");
        return BIS_FTUPLA;
    }
(?i:funcion) {
        printf("funcion\n");  
        return BIS_FFUNCION;
    }
(?i:fvar) {
        printf("fvar\n");   
        return BIS_FVAR;
    }
(?i:hacer) {
        printf("hacer\n");
        return BIS_HACER;
    }
(?i:hasta) {
        printf("hasta\n");
        return BIS_HASTA;
    }
(?i:mientras) {
        printf("mientras\n");
        return BIS_MIENTRAS;
    }	
(?i:no) {
        printf("no\n");     
        return BIS_NO;
    }
(?i:o) {
        printf("o\n");  
        return BIS_O;
    }
(?i:para) {
        printf("para\n");     
        return BIS_PARA;
    }
(?i:real) {
        printf("real\n");
        return BIS_REAL;
    }
(?i:ref) {
        printf("ref\n");
        return BIS_REF;
    }
(?i:sal) {
        printf("sal\n");        
        return BIS_SAL;
    }
(?i:si) {
        printf("si\n");      
        return BIS_SI;
    }
(?i:tabla) {
        printf("tabla\n");  
        return BIS_TABLA;
    }
(?i:tipo) {
        printf("tipo\n");
        return BIS_TIPO;
    }
(?i:tupla) {
        printf("tupla\n");   
        return BIS_TUPLA;
    }
(?i:var) {
        printf("var\n"); 
        return BIS_VAR;
    }
(?i:verdadero) {
        printf("verdadero\n");
        return BIS_VERDADERO;
    }
(?i:y) {
        printf("y\n");
        return BIS_Y;
    }
":=" {
        printf("asignacion --> :=\n");
        return BIS_ASIG;
    }
";" {
        printf("composicion secuencial --> ;\n");
        return BIS_PUNTO_COMA;
    }
"," {
        printf("separador --> ,\n");
        return BIS_COMA;
    }
".." {
        printf("subrango --> ..\n");
        return BIS_SUBRANGO;
    }
":" {
        printf("definicion de variable --> :\n");
        return BIS_ASIG_TIPO;
    }
"->" {
        printf("entonces --> ->\n");
        return BIS_ENTONCES;
    }
"[]" {
        printf("si no si --> []\n");
        return BIS_SI_NO_SI;
    }
"=" {
        printf("creacion de tipo --> =\n");
        return BIS_IGUAL;
    }
"[" {
        printf("inicio de array --> [\n");
        return BIS_COR_A;
    }
"]" {
        printf("fin de array --> ]\n");
        return BIS_COR_C;
    }
"<"|"<="|">"|">="|"=="|"<>" {
        printf("operador relacio[nal --> %s\n",yytext);
        return BIS_OPREL;
    }
"*"|"/"|(?i:div)|(?i:mod) {
        printf("operador: %s\n", yytext);
    }
"+"|"-"   printf("operador: %s\n", yytext );

"("|")" printf("Operador aritmetico --> %s\n",yytext);

{DR_ENTERO} {
        printf("entero --> %d\n",dev_exp());
        return BIS_DR_ENTERO;
    }
{DR_REAL} {
        printf("real --> %f\n",atof(yytext));
        return BIS_DR_REAL;
    }
{caracter_literal} {
        printf("caracter literal --> %s\n",yytext);
        return BIS_LETRA_O_CIFRA;
    }
{cadena_literal} {
        printf("cadena literal --> %s\n",yytext);
        return BIS_CADENA_LIT;
    }
{identificador} {
        printf("id --> %s\n",yytext);
        return BIS_IDENTIFICADOR;
    }
%%


/*Función que al llamarla lee sobre yytext de manera que convierte los enteros en notacion cientifica a enteros reconocidos por C*/
int dev_exp(){
    int sal = 0; 
    int read_e = 1; //variable que sirve para indicar cuando he leido el exponente.
    int pot = 0;
    int i=0;
    //Bucle que lee la primera parte, lee hasta que encuentra una e|E o bien hasta que termina el string.
    while (read_e && i<strlen(yytext)){
        if ((yytext[i] == 'e') || (yytext[i] == 'E'))
            read_e = 0;
        if (read_e)
            sal = sal*10+(yytext[i]-astoi);
        i++;
    }
    //Bucle que lee lo que sigue a e|E
    while (i<strlen(yytext)){
        pot = pot*10+(yytext[i]-astoi);
        i++;
    }
    //Bucle que añade los ceros necesarios
    for (i = 0; i < pot; i++){
        sal *= 10;
    }
    return sal;
}
