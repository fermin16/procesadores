%{
	#include <ctype.h>
	#include <string.h>
	#include "parser.tab.h"
	#define ENTERO 1
    #define REAL 2
    #define BOOL 3
    #define CHAR 4
    #define CADENA 5
    #define OP_MENOR 12
    #define OP_MENOR_IGUAL 13
    #define OP_MAYOR 14
    #define OP_MAYOR_IGUAL 15
    #define OP_DISTINTO 16
    #define OP_IGUAL  17
    #define astoi 48 //Cte. para transformar numeros en ascii a numeros enteros.
	extern YYSTYPE yylval;
	int dev_exp();
%}

DR_DIGITO [0-9]
DR_ENTERO {DR_DIGITO}+((e|E){DR_DIGITO}+)?
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
comentario \{.*\}
%%

(?i:accion) {
		printf("Shift: accion\n");
		return BIS_ACCION;
	  }
(?i:algoritmo) {
		printf("Shift: algoritmo\n");
		return BIS_ALGORITMO;
	}
(?i:booleano) {
		printf("Shift: booleano\n");
		yylval.ival = BOOL;
		return BIS_TIPO_BASE;
	}
(?i:cadena) {
        printf("Shift: cadena\n");
        yylval.ival = CADENA;
        return BIS_TIPO_BASE;
    }
(?i:caracter) {
        printf("Shift: caracter\n");
        yylval.ival = CHAR;
        return BIS_TIPO_BASE;
    }
(?i:const) {
        printf("Shift: const\n");
        return BIS_CONST;
    }
(?i:continuar) {
        printf("Shift: continuar\n");
        return BIS_CONTINUAR;
    }
(?i:de) {
        printf("Shift: de\n");
        return BIS_DE;
    }
(?i:dev) {
        printf("Shift: dev\n");
        return BIS_DEV;
    }
(?i:ent) {
        printf("Shift: ent\n");
        return BIS_ENT;
    }
(?i:entero) {
        printf("Shift: entero\n");
        yylval.ival = ENTERO;
        return BIS_TIPO_BASE;
    }
(?i:es) {
        printf("Shift: e/s\n");  
        return BIS_ENT_SAL;
    }
(?i:faccion) {
        printf("Shift: faccion\n");
        return BIS_FACCION;
    }
(?i:falgoritmo) {
        printf("Shift: falgoritmo\n");  
        return BIS_FALGORITMO;
    }
(?i:falso) {
        printf("Shift: falso\n");    
        return BIS_FALSO;
    }
(?i:fconst) {
        printf("Shift: fconst\n");   
        return BIS_FCONST;
    }
(?i:ffuncion) {
        printf("Shift: ffuncion\n");        
        return BIS_FFUNCION;
    }
(?i:fmientras) {
        printf("Shift: fmientras\n");        
        return BIS_FMIENTRAS;
    }
(?i:fpara) {
        printf("Shift: fpara\n");   
        return BIS_FPARA;
    }
(?i:fsi) {
        printf("Shift: fsi\n"); 
        return BIS_FSI;
    }
(?i:ftipo) {
        printf("Shift: ftipo\n");
        return BIS_FTIPO;
    }
(?i:ftupla) {
        printf("Shift: ftupla\n");
        return BIS_FTUPLA;
    }
(?i:funcion) {
        printf("Shift: funcion\n");  
        return BIS_FFUNCION;
    }
(?i:fvar) {
        printf("Shift: fvar\n");   
        return BIS_FVAR;
    }
(?i:hacer) {
        printf("Shift: hacer\n");
        return BIS_HACER;
    }
(?i:hasta) {
        printf("Shift: hasta\n");
        return BIS_HASTA;
    }
(?i:mientras) {
        printf("Shift: mientras\n");
        return BIS_MIENTRAS;
    }	
(?i:no) {
        printf("Shift: no\n");     
        return BIS_NO;
    }
(?i:o) {
        printf("Shift: o\n");  
        return BIS_O;
    }
(?i:para) {
        printf("Shift: para\n");     
        return BIS_PARA;
    }
(?i:real) {
        printf("Shift: real\n");
        yylval.ival = REAL;
        return BIS_TIPO_BASE;
    }
(?i:ref) {
        printf("Shift: ref\n");
        return BIS_REF;
    }
(?i:sal) {
        printf("Shift: sal\n");        
        return BIS_SAL;
    }
(?i:si) {
        printf("Shift: si\n");      
        return BIS_SI;
    }
(?i:tabla) {
        printf("Shift: tabla\n");  
        return BIS_TABLA;
    }
(?i:tipo) {
        printf("Shift: tipo\n");
        return BIS_TIPO;
    }
(?i:tupla) {
        printf("Shift: tupla\n");   
        return BIS_TUPLA;
    }
(?i:var) {
        printf("Shift: var\n"); 
        return BIS_VAR;
    }
(?i:verdadero) {
        printf("Shift: verdadero\n");
        return BIS_VERDADERO;
    }
(?i:y) {
        printf("Shift: y\n");
        return BIS_Y;
    }
":=" {
        printf("Shift: asignacion --> :=\n");
        return BIS_ASIG;
    }
";" {
        printf("Shift: composicion secuencial --> ;\n");
        return BIS_PUNTO_COMA;
    }
"," {
        printf("Shift: separador --> ,\n");
        return BIS_COMA;
    }
".." {
        printf("Shift: subrango --> ..\n");
        return BIS_SUBRANGO;
    }
":" {
        printf("Shift: definicion de variable --> :\n");
        return BIS_ASIG_TIPO;
    }
"->" {
        printf("Shift: entonces --> ->\n");
        return BIS_ENTONCES;
    }
"[]" {
        printf("Shift: si no si --> []\n");
        return BIS_SI_NO_SI;
    }
"=" {
        printf("Shift: creacion de tipo --> =\n");
        return BIS_IGUAL;
    }
"[" {
        printf("Shift: inicio de array --> [\n");
        return BIS_COR_A;
    }
"]" {
        printf("Shift: fin de array --> ]\n");
        return BIS_COR_C;
    }
"<" {
        printf("Shift: operador relacional --> %s\n",yytext);
        yylval.ival = OP_MENOR;
        return BIS_OPREL;
    }
"<=" {
        printf("Shift: operador relacional --> %s\n",yytext);
        yylval.ival = OP_MENOR_IGUAL;
        return BIS_OPREL;
    }
">" {
        printf("Shift: operador relacional --> %s\n",yytext);
        yylval.ival = OP_MAYOR;
        return BIS_OPREL;
    }
">=" {
        printf("Shift: operador relacional --> %s\n",yytext);
        yylval.ival = OP_MAYOR_IGUAL;
        return BIS_OPREL;
    }
"==" {
        printf("Shift: operador relacional --> %s\n",yytext);
        yylval.ival = OP_IGUAL;
        return BIS_OPREL;
    }
"<>" {
        printf("Shift: operador relacional --> %s\n",yytext);
        yylval.ival = OP_DISTINTO;
        return BIS_OPREL;
    }
    
    
"*" {
        printf("Shift: operador: %s\n", yytext);
        return BIS_PRODUCTO;
    }
"/" {
        printf("Shift: operador: %s\n", yytext);
        return BIS_DIV_REAL;
    }
    
(?i:div) {
        printf("Shift: operador: %s\n", yytext);
        return BIS_DIV;
    }
(?i:mod) {
        printf("Shift: operador: %s\n", yytext);
        return BIS_MOD;
    }
"+" {
        printf("Shift: operador: %s\n", yytext);
        return BIS_MAS;
    }
"-" {
        printf("Shift: operador: %s\n", yytext);
        return BIS_MENOS;
    }

"(" {
        printf("Shift: operador: %s\n", yytext);
        return BIS_PAR_A;
    }
")" {
        printf("Shift: operador: %s\n", yytext);
        return BIS_PAR_C;
    }

{DR_ENTERO} {
        printf("Shift: entero --> %d\n",dev_exp());
        yylval.ival = dev_exp();
        return BIS_DR_ENTERO;
    }
{DR_REAL} {
        yylval.fval = atof(yytext);
        printf("Shift: real --> %f\n",atof(yytext));
        return BIS_DR_REAL;
    }
{caracter_literal} {
        printf("Shift: caracter literal --> %s\n",yytext);
        return BIS_LETRA_O_CIFRA;
    }
{cadena_literal} {
        printf("Shift: cadena literal --> %s\n",yytext);
    }
{identificador} {
        printf("Shift: id --> %s\n",yytext);
        yylval.sval = (char*)malloc(sizeof(strlen(yytext)));
        strcpy(yylval.sval,yytext);
        return BIS_IDENTIFICADOR;
    }
{comentario} {
        printf("Shift: comentario --> %s\n",yytext);
        return BIS_COMENTARIO;
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
