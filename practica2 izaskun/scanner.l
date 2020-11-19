	/* Scanner para el lenguaje ProAlg */

%{
	/* Librerias */
	#include "parser.tab.h"
	#include <string.h>
	#include "tabla_sim.h"
%}

	/* Definiciones regulares */
delim [ \t\n]
eb {delim}+
letra [A-Za-z]
digito [0-9]
id {letra}({letra}|{digito})*
idB [b|B]({letra}|{digito})*
numero (\+|\-)?{digito}+(\.{digito}+)?(E[\+\-]?{digito}+)?
asignacion ":="
composicionSecuencial ";"
alternativa "->"
separador ","
subrango ".."
punto "."
defTipoVar ":"
inicioArray "["
finArray "]"
inicioParentesis "("
finalParentesis ")"
	/* Comparaciones */
comp_rel {comp_menorigual}|{comp_mayorigual}|{comp_mayor}|{comp_menor}|{comp_desigual}
comp_igual "="
comp_menorigual "<="
comp_mayorigual ">="
comp_mayor ">"
comp_menor "<"
comp_desigual "<>"

	/* Operadores */
op_suma "+"
op_resta "-"
op_producto "*"
op_div "/"
op_divisionEntera {pr_div}
op_mod {pr_mod}

	/* Valor Tipo  LITERAL */
tipo_lit_caracter \"{letra}+\"
tipo_lit_cadena "'"[^\"]*"'"
tipo_lit_entero (\+|\-)?{digito}+(E[\+\-]?{digito}+)?
tipo_lit_real {numero}

	/* Definicion tipo */
tipo_def_base {tipo_def_booleano}|{tipo_def_entero}|{tipo_def_cadena}|{tipo_def_caracter}|{tipo_def_real}
tipo_def_booleano {pr_booleano}
tipo_def_entero {pr_entero}
tipo_def_cadena {pr_cadena}
tipo_def_caracter {pr_caracter}
tipo_def_real {pr_real}

	/* Comentarios */
precondicion "{"Pre.*"}"
postcondicion "{"Post.*"}"
comentario "{".*"}"

	/* Palabras reservadas */
pr_algoritmo1 (?i:"algoritmo1")
pr_algoritmo (?i:"algoritmo")
pr_falgoritmo (?i:"falgoritmo")
pr_funcion (?i:"funcion")
pr_ffuncion (?i:"ffuncion")
pr_accion (?i:"accion")
pr_faccion (?i:"faccion")
pr_tipo (?i:"tipo")
pr_ftipo (?i:"ftipo")
pr_const (?i:"const")
pr_fconst (?i:"fconst")
pr_var (?i:"var")
pr_fvar (?i:"fvar")
pr_tupla (?i:"tupla")
pr_ftupla (?i:"ftupla")
pr_si (?i:"si")
pr_fsi (?i:"fsi")
pr_para (?i:"para")
pr_fpara (?i:"fpara")
pr_mientras (?i:"mientras")
pr_fmientras (?i:"fmientras")
pr_hasta (?i:"hasta")
pr_hacer (?i:"hacer")
pr_entonces (?i:"entonces")
pr_ent (?i:"ent")
pr_sal (?i:"sal")
pr_sino (?i:"[]")
pr_entradaSalida (?i:"e/s")
pr_continuar (?i:"continuar")
pr_de (?i:"de")
pr_div (?i:"div")
pr_mod (?i:"mod")
pr_dev (?i:"dev")
pr_no (?i:"no")
pr_ref (?i:"ref")
pr_tabla (?i:"tabla")
pr_o (?i:"o")
pr_y (?i:"y")
pr_booleano (?i:"booleano")
pr_entero (?i:"entero")
pr_caracter (?i:"caracter")
pr_real (?i:"real")
pr_cadena (?i:"cadena")
pr_verdadero (?i:"verdadero")
pr_falso (?i:"falso")
%%

{pr_algoritmo} {
		printf( "Palabra Reservada. Inicio del algoritmo: %s\n", yytext);
		return tk_algoritmo;
}

{pr_falgoritmo} {
		printf( "Palabra Reservada. Final del algoritmo: %s\n", yytext);
		return tk_falgoritmo;
}

{pr_funcion} {
		printf( "Palabra Reservada. Inicio funcion: %s\n", yytext);
		return tk_funcion;
}

{pr_ffuncion} {
		printf( "Palabra Reservada. Fin funcion: %s\n", yytext);
		return tk_ffuncion;
}	

{pr_accion} {
		printf( "Palabra Reservada. Inicio accion: %s\n", yytext);
		return tk_accion;
}

{pr_faccion} {
		printf( "Palabra Reservada. Fin accion: %s\n", yytext);
		return tk_faccion;
}
{pr_tipo} {
		printf( "Palabra Reservada. Inicio tipo: %s\n", yytext);
		return tk_tipo;
}
{pr_ftipo} {
		printf( "Palabra Reservada. Fintipo: %s\n", yytext);
		return tk_ftipo;
}

{pr_const} {
		printf( "Palabra Reservada. Inicio constante: %s\n", yytext);
		return tk_const;
}

{pr_fconst} {
		printf( "Palabra Reservada. Fin constante: %s\n", yytext);
		return tk_fconst;
}

{pr_var} {
		printf( "Palabra Reservada. Inicio variable: %s\n", yytext);
		return tk_var;
}

{pr_fvar} {
		printf( "Palabra Reservada. Fin variable: %s\n", yytext);
		return tk_fvar;
}

{pr_tupla} {
		printf( "Palabra Reservada. Inicio tupla: %s\n", yytext);
		return tk_tupla;
}

{pr_ftupla} {
		printf( "Palabra Reservada. Fin tupla: %s\n", yytext);
		return tk_ftupla;
}

{pr_verdadero} {
		printf( "Palabra Reservada. Verdadero: %s\n", yytext);
		return tk_verdadero;
}

{pr_falso} {
		printf( "Palabra Reservada. Falso: %s\n", yytext);
		return tk_falso;
}

{pr_si} {
		printf( "Palabra Reservada. Inicio instruccion condicional si: %s\n", yytext);
		return tk_si;
}

{pr_fsi} {
		printf( "Palabra Reservada. Final instruccion condicional si: %s\n", yytext);
		return tk_fsi;
}

{pr_entonces} {
		printf( "Palabra Reservada. Entonces: %s\n", yytext);
}

{pr_para} {
		printf( "Palabra Reservada. Inicio bucle para: %s\n", yytext);
		return tk_para;
}

{pr_fpara} {
		printf( "Palabra Reservada. Fin bucle para: %s\n", yytext);
		return tk_fpara;
}

{pr_mientras} {
		printf( "Palabra Reservada. Inicio bucle mientras: %s\n", yytext);
		return tk_mientras;
}

{pr_fmientras} {
		printf( "Palabra Reservada. Fin bucle mientras: %s\n", yytext);
		return tk_fmientras;
}

{pr_hacer} {
		printf( "Palabra Reservada. Hacer: %s\n", yytext);
		return tk_hacer;
}

{pr_hasta} {
		printf( "Palabra Reservada. Hasta: %s\n", yytext);
		return tk_hasta;
}

{pr_ent} {
		printf( "Palabra Reservada. Entrada: %s\n", yytext);
		return tk_ent;
}

{pr_sal} {
		printf( "Palabra Reservada. Salida: %s\n", yytext);
		return tk_sal;
}

{pr_sino} {
		printf( "Palabra Reservada. Si no: %s\n", yytext);
		return tk_sino;
}

{pr_entradaSalida} {
		printf( "Palabra Reservada. e/s: %s\n", yytext);
		return tk_entradaSalida;
}

{pr_continuar} {
		printf( "Palabra Reservada. Continuar: %s\n", yytext);
		return tk_continuar;
}

{pr_de} {
		printf( "Palabra Reservada. De: %s\n", yytext);
		return tk_de;
}

{pr_no} {
		printf( "Palabra Reservada. No: %s\n", yytext);
		return tk_no;
}

{pr_ref} {
		printf( "Palabra Reservada. Ref: %s\n", yytext);
		return tk_ref;
}

{pr_tabla} {
		printf( "Palabra Reservada. Tabla: %s\n", yytext);
		return tk_tabla;
}

{punto} {
		printf( "Punto: %s\n", yytext );
		return tk_punto;
}

{pr_o} {
		printf( "Unión: %s\n", yytext );
		return tk_o;
}

{pr_y} {
		printf( "Interseccion: %s\n", yytext );
		return tk_y;
}

{op_suma} {
		printf( "Operador suma: %s\n", yytext );
		return tk_suma;
}

{op_resta} {
		printf( "Operador resta: %s\n", yytext );
		return tk_resta;
}

{op_producto} {
		printf( "Operador producto: %s\n", yytext );
		return tk_producto;
}

{op_div} {
		printf( "Operador division: %s\n", yytext );
		return tk_div;
}

{op_divisionEntera} {
		printf( "Operador division entero: %s\n", yytext );
		return tk_divisionEntera;
}

{op_mod} {
		printf( "Operador resto division: %s\n", yytext );
		return tk_mod;
}

{pr_dev} {
		printf( "Palabra reservada dev: %s\n", yytext );
		return tk_dev;
}

{asignacion} {
		printf( "Asignacion: %s\n", yytext );
		return tk_asignacion;
}

{alternativa} {
		printf( "Alternativa a entonces: %s\n", yytext );
		return tk_alternativa;
}

{separador} {
		printf( "Separador: %s\n", yytext );
		return tk_separador;
}

{tipo_lit_caracter} {
		printf( "Caracter: %s\n", yytext );
		return tk_lit_caracter;
}

{tipo_lit_cadena} {
		printf( "Cadena: %s\n", yytext );
		return tk_lit_cadena;
}

{tipo_lit_entero} {
		printf( "Numero Entero: %s (%d)\n", yytext, atoi(yytext) );
		return tk_lit_entero;
}

{tipo_lit_real} {
		printf( "Numero Real: %s (%f)\n", yytext, atof(yytext) );
		return tk_lit_real;
}

{tipo_def_base} {
		printf( "Tipo de variable. Base: %s\n", yytext);
		if (!strcasecmp(yytext, "entero")){
			yylval.entrada = TIPO_ENTERO;
			return tk_def_base;
		} else if (!strcasecmp(yytext, "real")){
			yylval.entrada = TIPO_REAL;
			return tk_def_base;	
		} else if (!strcasecmp(yytext, "caracter")){
			yylval.entrada = TIPO_CARACTER;
			return tk_def_base;	
		} else if (!strcasecmp(yytext, "cadena")){
			yylval.entrada = TIPO_CADENA;
			return tk_def_base;	
		} else if (!strcasecmp(yytext, "booleano")) {
			yylval.entrada = TIPO_BOOLEANO;
			return tk_def_base;		
		} else {
			printf( "Tipo INCORRECTO: %s\n", yytext);
		}
}

{precondicion} {
		printf( "Precondicion: %s\n", yytext );
		return tk_precondicion;
}

{postcondicion} {
		printf( "Postcondicion: %s\n", yytext );
		return tk_postcondicion;
}

{comentario} {
		printf( "Comentario: %s\n", yytext );
}

{composicionSecuencial} {
		printf( "Composicion Secuencial: %s\n", yytext );
		return tk_composicionSecuencial;
}

{subrango} {
		printf( "Subrango: %s\n", yytext );
		return tk_subrango;
}

{defTipoVar} {
		printf( "Definicion tipo variable: %s\n", yytext );
		return tk_defTipoVar;
}

{inicioArray} {
		printf( "Inicio Array: %s\n", yytext );
		return tk_inicioArray;
}

{finArray} {
		printf( "Fin Array: %s\n", yytext );
		return tk_finArray;
}

{inicioParentesis} {
		printf( "Parentesis inicial: %s\n", yytext );
		return tk_inicioParentesis;
}

{finalParentesis} {
		printf( "Parentesis final: %s\n", yytext );
		return tk_finalParentesis;
}

{comp_rel} {
		printf( "Comparacion Operadores: %s\n", yytext );
		return tk_comp_rel;
}

{comp_igual} {
		printf( "Comparacion igualdad: %s\n", yytext );
		return tk_comp_igual;
}

{idB} {
		printf( "Identificador Booleano: %s\n", yytext );
		yylval.uId = strdup(yytext);
		return tk_idB;
}

{id} {
		printf( "Identificador: %s\n", yytext );
		yylval.uId = strdup(yytext);
		return tk_id;
}

"{"[\^{}}\n]*"}"     /* Nos comemos los comentarios de una linea */

[ \t\n]+          /* Nos comemos los espacios en blanco */

.           printf( "Caracter no reconocido: %s\n", yytext );

%%
