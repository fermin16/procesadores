%{
	/*CONSTANTES MANIFIESTAS*/
	#define CM_ACCION 1
	#define CM_ALGORITMO 2
	#define CM_BOOLEANO 3
	#define CM_CADENA 4
	#define CM_CARACTER 5
	#define CM_CONST 6
	#define CM_CONTINUAR 7
	#define CM_DE 8
	#define CM_DEV 9
	#define CM_DIV 10
	#define CM_ENT 11
	#define CM_ENTERO 12
	#define CM_ENTSAL 13
	#define CM_FACCION 14
	#define CM_FALGORITMO 15
	#define CM_FALSO 16
	#define CM_FCONST 17
	#define CM_FFUNCION 18
	#define CM_FMIENTRAS 19
	#define CM_FPARA 20
	#define CM_FSI 21
	#define CM_FTIPO 22
	#define CM_FTUPLA 23
	#define CM_FUNCION 24
	#define CM_FVAR 25
	#define CM_HACER 26
	#define CM_HASTA 27
	#define CM_MIENTRAS 28
	#define CM_MOD 29
	#define CM_NO 30
	#define CM_O 31
	#define CM_PARA 32
	#define CM_REAL 33
	#define CM_REF 34
	#define CM_SAL 35
	#define CM_SI 36
	#define CM_TABLA 37	
	#define CM_TIPO 38
	#define CM_TUPLA 39
	#define CM_VAR 40
	#define CM_VERDADERO 41
	#define CM_Y 42
	#define CM_ASIGNACION 43
	#define CM_COMP_SEC 44
	#define CM_SEPARADOR 45
	#define CM_SUBRANGO 46
	#define CM_DEFVAR 47
	#define CM_ENTONCES 48
	#define CM_SI_NO_SI 49
	#define CM_CREACION 50
	#define CM_INIARR 51
	#define CM_FINARR 52
	#define CM_OPREL 53
	#define CM_MEN 54
	#define CM_MENI 55
	#define CM_MAY 56
	#define CM_MAYI 57
	#define CM_IGUAL 58
	#define CM_DIFERENTE 59
	#define CM_OP 60
	#define CM_SUM 61
	#define CM_RES 62
	#define CM_MUL 63
	#define CM_DIVISION 64
%}
/*DEFINICIONES REGULARES*/
DR_DIGITO [0-9]
DR_ENTERO (+|-)?{DR_DIGITO}+((e|E){DR_DIGITO}+)?
DR_ESPECIALES [/()=[]+*{},;.:-_>< \t\n"']
DR_LETRA [a-zA-Z]
DR_CHAR [{DR_LETRA}{DR_DIGITO}{DR_ESPECIALES}]
DR_REAL {DR_ENTERO}+(.{DR_DIGITO}+)?((e|E){DR_DIGITO}+)?
DR_CADENA {DR_CHAR}*
DR_BOOLEANO ?i:verdadero|?i:falso

letra_o_cifra {DR_LETRA}|{DR_DIGITO}
identificador {DR_LETRA}{letra_o_cifra}*
caracter_literal \"{DR_CHAR}{-}["]\"
 /*FALTA POR REVISAR LA DEFINICION*/
cadena_literal \'{DR_CADENA}{-}[']\' 

%%
 /*REGLAS DE TRADUCCION*/
?i:accion {
		printf("accion %d ",CM_ACCION);
		//return(CM_ACCION);
	  }
?i:algoritmo {printf("algoritmo %d ",CM_ALGORITMO);return(CM_ALGORITMO);}
booleano {printf("booleano %d ",CM_BOOLEANO);return(CM_BOOLEANO);}
cadena {printf("cadena %d ",CM_CADENA);return(CM_CADENA);}
caracter {printf("caracter %d ", CM_CARACTER);return(CM_CARACTER);}
const {printf("const %d ",CM_CONST);return(CM_CONST);}
continuar {printf("continuar %d ",CM_CONTINUAR);return(CM_CONTINUAR);}
de {printf("de %d ",CM_DE);return(CM_DE);}
dev {printf("dev %d ",CM_DEV);return(CM_DEV);}
div {printf("div %d ",CM_DIV);return(CM_DIV);}
ent {printf("ent %d ",CM_ENT);return(CM_ENT);}
entero {printf("entero %d ",CM_ENTERO);return(CM_ENTERO);}
e/s {printf("e/s %d ",CM_ENTSAL);return(CM_ENTSAL);}
faccion {printf("faccion %d ",CM_FACCION);return(CM_FACCION);}
falgoritmo {printf("falgoritmo %d ",CM_FALGORITMO);return(CM_FALGORITMO);}
(?-i:falso) {printf("falso %d");return(CM_FALSO)}
fconst {return(CM_FCONST)}
ffuncion {return(CM_FFUNCION)}
fmientras {return(CM_FMIENTRAS)}
fpara {return(CM_FPARA)}
fsi {return(CM_FSI)}
ftipo {return(CM_FTIPO)}
ftupla {return(CM_FTUPLA)}
funcion {return(CM_FUNCION)}
fvar {return(CM_FVAR)}
hacer {return(CM_HACER)}
hasta {return(CM_HASTA)}
mientras {return(CM_MIENTRAS)}	
mod {return(CM_MOD)}
no {return(CM_NO)}
o {return(CM_O)}
para {return(CM_PARA)}
real {return(CM_REAL)}
ref {return(CM_REF)}
sal {return(CM_SAL)}
si {return(CM_SI)}
tabla {return(CM_TABLA)}
tipo {return(CM_TIPO)}
tupla {return(CM_TUPLA)}
var {return(CM_VAR)}
verdadero {return(CM_VERDADERO)}
y {return(CM_Y)}
":=" {yylval = asignar();return(CM_ASIGNACION)}
";" {}
"," {}
".." {}
":" {}
"->" {}
"[]" {}
"=" {}
"[" {}
"]" {}
"<" {}
"<=" {}
">" {}
">=" {}
"==" {}
"<>" {}
"+" {}
"-" {}
"*" {}
"/" {yyval = CM_DIVISION; }
{identificador} {}
{DR_ENTERO} {}
{DR_REAL} {}
{caracter_literal} {}
{cadena_literal} {}
%%