	/* Parser para el lenguaje ProAlg */

%{
	/* Librerias */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tabla_sim.h"
#include "tabla_quad.h"


extern int yylex (void);
void yyerror (char const *);
extern FILE* yyin;
struct tSimbolos* tS;
struct tQuad* tQ;
quad q;
%}

	/* DECLARACION DE TOKENS */

%token tk_algoritmo;
%token tk_falgoritmo;
%token tk_funcion;
%token tk_ffuncion;
%token tk_accion;
%token tk_faccion;
%token tk_tipo;
%token tk_ftipo;
%token tk_const;
%token tk_fconst;
%token tk_var;
%token tk_fvar;
%token tk_tupla;
%token tk_ftupla;
%token tk_si;
%token tk_fsi;
%token tk_para;
%token tk_fpara;
%token tk_mientras;
%token tk_fmientras;
%token tk_hacer;
%token tk_hasta;
%token tk_ent;
%token tk_sal;
%token tk_sino;
%token tk_entradaSalida;
%token tk_continuar;
%token tk_de;
%token tk_tabla;
%token tk_alternativa;
%token tk_lit_caracter;
%token tk_lit_cadena;
%token tk_lit_entero;
%token tk_lit_real;
%token tk_precondicion;
%token tk_postcondicion;
%token tk_subrango;
%token tk_defTipoVar;
%token tk_finArray;
%token tk_inicioParentesis;
%token tk_finalParentesis;
%token <uId>tk_id;
%token <uId>tk_idB;
%token tk_def_base;
%token tk_dev;
%token tk_verdadero;
%token tk_falso;
%token tk_divisionEntera;
%token tk_mod;
%token tk_asignacion;
%token tk_composicionSecuencial;

	/* PRIORIDADES IZQUIERDA */

%left tk_separador;

%left tk_o;
%left tk_y;

%left tk_comp_igual tk_comp_rel;

%left tk_suma tk_resta;
%left tk_producto tk_div tk_divisionEntera tk_mod;
%left UMINUS;
%left tk_punto tk_ref tk_inicioArray;

	/* PRIORIDADES DERECHA */

%right tk_asignacion;
%right tk_no;


%union {
	int entrada;
	char* uId;
	struct expA {
		int type;
		int place;
	} paraExpAritmeticas;
	struct expB {
		int typeB;
		int placeB;
	} paraExpBooleanas;
}

%type <paraExpAritmeticas> exp_a
%type <paraExpBooleanas> exp_b
%type <entrada>lista_id
%type <entrada>d_tipo
%type <paraExpAritmeticas>v_literal 
%type <entrada>tk_def_base
%type <entrada> operando

%%

	/* GRAMATICA */

desc_algoritmo: tk_algoritmo tk_id tk_composicionSecuencial cabecera_alg bloque_alg tk_falgoritmo {
			printf("\t desc_algoritmo \n");
		}
	;

cabecera_alg: decl_globales decl_a_f decl_ent_sal tk_precondicion {
			printf("\t cabecera_alg \n");
		}
	;

bloque_alg: bloque tk_postcondicion {
			printf("\t bloque_alg \n");
		}
	;

decl_a_f: accion_d decl_a_f {
			printf("\t decl_a_f por accion\n");
		}
	| funcion_d decl_a_f {
			printf("\t decl_a_f por funcion \n");
		}
	| /*empty*/ {
			printf("\t desc_a_f por epsilon \n");
		}
	;

bloque: declaraciones instrucciones {
        printf("\t bloque \n");
    }
;

declaraciones: declaracion_tipo declaraciones {
			printf("\t declaraciones por tipo \n");
		}
	| declaracion_cte declaraciones  {
			printf("\t declaracones por const \n");
		}
	| declaracion_var declaraciones  {
			printf("\t declaraciones por var \n");
		}
	| /*empty*/  {
			printf("\t declaraciones por epsilon \n");
		}
	;

decl_globales: declaracion_tipo decl_globales {
			printf("\t decl_globales por tipo \n");
		}
	| declaracion_cte decl_globales {
			printf("\t decl_globales por const\n");
		}
	| /*empty*/{
			printf("\t decl_globales por epsilon\n");
		}
	;

declaracion_tipo: tk_tipo lista_d_tipo tk_ftipo tk_composicionSecuencial{
			printf("\t declaracion_tipo \n");
		}
	;

declaracion_cte: tk_const lista_d_cte tk_fconst tk_composicionSecuencial{
			printf("\t declaracion_cte \n");
		}
	;

declaracion_var: tk_var lista_d_var tk_fvar tk_composicionSecuencial{
			printf("\t declaracion_var \n");
		}
	;

lista_d_tipo: tk_id tk_comp_igual d_tipo tk_composicionSecuencial lista_d_tipo {
			printf("\t lista_d_tipo \n");
		}
	| /*empty*/{
			printf("\t lista_d_tipo por epsilon \n");
		}
	;

d_tipo: tk_tupla lista_campos tk_ftupla {
			printf("\t d_tipo por tupla \n");
		} 
	| tk_tabla tk_inicioArray expresion_t tk_subrango expresion_t tk_finArray tk_de d_tipo{
			printf("\t d_tipo por tabla \n");
		}
	| tk_id {
			printf("\t d_tipo por id \n");
		}
	| expresion_t tk_subrango expresion_t {
			printf("\t d_tipo por expresion \n");
		}
	| tk_ref d_tipo {
			printf("\t d_tipo por tipo \n");
		}
	| tk_def_base {
			printf("\t d_tipo por tipo base \n");
			$$ = $1;
		}
	;

expresion_t: expresion {
			printf("\t expresion_t por expresion \n");
		}
	| tk_lit_caracter {
			printf("\t expresion_t por literal caracter \n");
		}
	;

lista_campos: tk_id tk_defTipoVar d_tipo tk_composicionSecuencial lista_campos {
			printf("\t lista_campos \n");
		}
	| /*empty*/{
			printf("\t lista_campos por epsilon \n");
		}
	;

lista_d_cte: tk_id tk_comp_igual v_literal tk_composicionSecuencial lista_d_cte {
			printf("\t lista_d_cte \n");
		}
	| /*empty*/{
			printf("\t lista_d_cte por epsilon \n");
		}
	;

v_literal: tk_lit_real {
			printf("\t v_literal por tk_lit_real\n");
			$$.type = TIPO_REAL;
		}
	|tk_lit_entero {
			printf("\t v_literal por tk_lit_entero\n");
			$$.type = TIPO_ENTERO;
		}
	|tk_lit_cadena {
			printf("\t v_literal por tk_lit_cadena\n");
			$$.type = TIPO_CADENA;		
	}
	|tk_lit_caracter {
			printf("\t v_literal por tk_lit_caracter\n");
			$$.type = TIPO_CARACTER;
		}
	|tk_verdadero {
			printf("\t v_literal por tk_verdadero\n");
			$$.type = TIPO_BOOLEANO;
		}
	|tk_falso {
			printf("\t v_literal por tk_falso\n");
			$$.type = TIPO_BOOLEANO;    
		}
	;

lista_d_var: lista_id tk_defTipoVar tk_id tk_composicionSecuencial lista_d_var {
			printf("\t lista_d_var por id\n");
		}
	| lista_id tk_defTipoVar d_tipo tk_composicionSecuencial lista_d_var {
			//mostrarTabla(&tS);
			actualizar($1, $3, &tS);
			//mostrarTabla(&tS);
			printf("\t lista_d_var por tipo\n");
		}
	| /*empty*/{
			printf("\t lista_d_var por epsilon \n");
		}
	;

lista_id: tk_id tk_separador lista_id {
			printf("\t id por lista_id \n");
			insertar(&tS,$1);
			$$ = $3 + 1;
		}
	| tk_idB tk_separador lista_id {
			printf("\t idB por lista_id \n");
			insertar(&tS,$1);
			$$ = $3 + 1;
		}
	| tk_id{
			printf("\t lista_id por id\n");			
			insertar(&tS,$1);
			$$ = 1;
		}
	| tk_idB{
			printf("\t lista_id por idB \n");
			insertar(&tS,$1);
			$$ = 1;
		}
	;

decl_ent_sal: decl_ent {
			printf("\t decl_ent_sal por ent \n");
		}
	| decl_ent decl_sal {
			printf("\t decl_ent_sal por ent/sal \n");
		}
	| decl_sal {
			printf("\t decl_ent_sal por sal \n");
		}
	;

decl_ent: tk_ent lista_d_var {
			printf("\t decl_ent \n");
		}
	;

decl_sal: tk_sal lista_d_var {
			printf("\t decl_sal \n");
		}
	;

exp_b: exp_b tk_y exp_b {
			printf("\t exp_b por y \n");
		}
	| exp_b tk_o exp_b {
			printf("\t exp_b por o \n");
		}
	| tk_no exp_b {
			printf("\t exp_b por no \n");
		}
	| operandoB {
			printf("\t exp_b por oper \n");
		}
	| tk_verdadero {
			printf("\t exp_b por verdadero \n");
		}
	| tk_falso {
			printf("\t exp_b por falso \n");
		}
	| expresion tk_comp_rel expresion {
			printf("\t exp_b por exp \n");
		}
	| expresion tk_comp_igual expresion {
			printf("\t exp_b por exp \n");
}
	| tk_inicioParentesis exp_b tk_finalParentesis {
			printf("\t exp_b por () \n");
		}
	;

expresion: exp_a {
			printf("\t expresion por exp_a \n");
		}
	| exp_b {
			printf("\t expresion por exp_b \n");
		}
	| funcion_ll {
			printf("\t expresion por funcion \n");
		}
	;

exp_a: exp_a tk_suma exp_a {
			printf("\t exp_a por suma \n");
			int T=newtemp(&tS);
			$$.place = T;if (($1.type == TIPO_ENTERO) && ($3.type == TIPO_ENTERO)){
				actualizar(1, TIPO_ENTERO,&tS);
				gen(MASENTERO, $$.place, $1.place, $3.place, tQ);
				$$.type = TIPO_ENTERO;	
			} else if (($1.type == TIPO_ENTERO) && ($3.type == TIPO_REAL)) {
				actualizar(1, TIPO_REAL,&tS);
				gen(CASTENT2REAL, T, $1.place, NULO, tQ);
				gen(MASREAL, $$.place, T, $3.place, tQ);
				$$.type = TIPO_REAL;
			} else if (($1.type == TIPO_REAL) && ($3.type == TIPO_ENTERO)) {
				actualizar(1, TIPO_REAL,&tS);
				gen(CASTENT2REAL, T, $3.place, NULO, tQ);
				gen(MASREAL, $$.place, T, $1.place, tQ);
				$$.type = TIPO_REAL;
			} else if (($1.type == TIPO_REAL) && ($3.type == TIPO_REAL)) {
				actualizar(1, TIPO_REAL,&tS);
				gen(MASREAL, $$.place, $1.place, $3.place, tQ);
				$$.type = TIPO_REAL;			
			};
			
		}
	| exp_a tk_resta exp_a {
			printf("\t exp_a por resta \n");
			int T=newtemp(&tS);
			$$.place = T;
			if (($1.type == TIPO_ENTERO) && ($3.type == TIPO_ENTERO)){
				actualizar(1, TIPO_ENTERO,&tS);
				gen(MENOSENTERO, $$.place, $1.place, $3.place, tQ);
				$$.type = TIPO_ENTERO;	
			} else if (($1.type == TIPO_ENTERO) && ($3.type == TIPO_REAL)) {
				actualizar(1, TIPO_REAL,&tS);
				gen(CASTENT2REAL, T, $1.place, NULO, tQ);
				gen(MENOSREAL, $$.place, T, $3.place, tQ);
				$$.type = TIPO_REAL;
			} else if (($1.type == TIPO_REAL) && ($3.type == TIPO_ENTERO)) {
				actualizar(1, TIPO_REAL,&tS);
				gen(CASTENT2REAL, T, $3.place, NULO, tQ);
				gen(MENOSREAL, $$.place, T, $1.place, tQ);
				$$.type = TIPO_REAL;
			} else if (($1.type == TIPO_REAL) && ($3.type == TIPO_REAL)) {
				actualizar(1, TIPO_REAL,&tS);
				gen(MENOSREAL, $$.place, $1.place, $3.place, tQ);
				$$.type = TIPO_REAL;			
			};
		}
	| exp_a tk_producto exp_a {
			printf("\t exp_a por producto \n");
			int T=newtemp(&tS);
			$$.place = T;
			if (($1.type == TIPO_ENTERO) && ($3.type == TIPO_ENTERO)){
				actualizar(1, TIPO_ENTERO,&tS);
				gen(PRODENTERO, $$.place, $1.place, $3.place, tQ);
				$$.type = TIPO_ENTERO;	
			} else if (($1.type == TIPO_ENTERO) && ($3.type == TIPO_REAL)) {
				actualizar(1, TIPO_REAL,&tS);
				gen(CASTENT2REAL, T, $1.place, NULO, tQ);
				gen(PRODREAL, $$.place, T, $3.place, tQ);
				$$.type = TIPO_REAL;
			} else if (($1.type == TIPO_REAL) && ($3.type == TIPO_ENTERO)) {
				actualizar(1, TIPO_REAL,&tS);
				gen(CASTENT2REAL, T, $3.place, NULO, tQ);
				gen(PRODREAL, $$.place, T, $1.place, tQ);
				$$.type = TIPO_REAL;
			} else if (($1.type == TIPO_REAL) && ($3.type == TIPO_REAL)) {
				actualizar(1, TIPO_REAL,&tS);
				gen(PRODREAL, $$.place, $1.place, $3.place, tQ);
				$$.type = TIPO_REAL;			
			};
		}
	| exp_a tk_div exp_a {
			printf("\t exp_a por division \n");
			int T=newtemp(&tS);
			$$.place = T;
			if (($1.type == TIPO_ENTERO) && ($3.type == TIPO_ENTERO)){
				actualizar(1, TIPO_ENTERO,&tS);
				gen(DIVENTERO, $$.place, $1.place, $3.place, tQ);
				$$.type = TIPO_ENTERO;	
			} else if (($1.type == TIPO_ENTERO) && ($3.type == TIPO_REAL)) {
				actualizar(1, TIPO_REAL,&tS);
				gen(CASTENT2REAL, T, $1.place, NULO, tQ);
				gen(DIVREAL, $$.place, T, $3.place, tQ);
				$$.type = TIPO_REAL;
			} else if (($1.type == TIPO_REAL) && ($3.type == TIPO_ENTERO)) {
				actualizar(1, TIPO_REAL,&tS);
				gen(CASTENT2REAL, T, $3.place, NULO, tQ);
				gen(DIVREAL, $$.place, T, $1.place, tQ);
				$$.type = TIPO_REAL;
			} else if (($1.type == TIPO_REAL) && ($3.type == TIPO_REAL)) {
				actualizar(1, TIPO_REAL,&tS);
				gen(DIVREAL, $$.place, $1.place, $3.place, tQ);
				$$.type = TIPO_REAL;						
			};
		}
	| exp_a tk_mod exp_a {
			printf("\t exp_a por mod \n");
			int T= newtemp(&tS);
			$$.place = T;
			if (($1.type == TIPO_ENTERO) && ($3.type == TIPO_ENTERO)) {
				actualizar(1, TIPO_ENTERO,&tS);
				gen(MOD, $$.place, $1.place, $3.place, tQ);
				$$.type = TIPO_ENTERO;
			} else {
				printf("Error: El modulo debe ser entre enteros.\n");
			}
					
		}
	| exp_a tk_divisionEntera exp_a {
			printf("\t exp_a por div \n");
			int T=newtemp(&tS);
			$$.place = T;
			if (($1.type == TIPO_ENTERO) && ($3.type == TIPO_ENTERO)){
				actualizar(1, TIPO_ENTERO,&tS);
				gen(DIVENTERO, $$.place, $1.place, $3.place, tQ);
				$$.type = TIPO_ENTERO;	
			} else {
				printf("Error: Div tiene que ser entre operandos enteros.\n");
					
			}

		}
	| tk_inicioParentesis exp_a tk_finalParentesis {
			printf("\t exp_a por () \n");
			$$.place = $2.place;
			$$.type = $2.type;
		}
	| operando {
			printf("\t exp_a por operando \n");
			$$.place = $1;
			$$.type = buscarTipoDeSid(&tS, $1);
		}
	| literal_numerico {
			printf("\t exp_a por literal \n");
		}
	| tk_resta exp_a %prec UMINUS {
			printf("\t exp_a por menos \n");
			int T=newtemp(&tS);
			int quadAux[4];
			actualizar(T, $2.type,&tS);
			$$.place = T;
			if ($2.type == TIPO_ENTERO) {
				gen(MENOSUNARIOENT, $$.place, $2.place, NULO, tQ);
			}
			if ($2.type == TIPO_REAL) {
				gen(MENOSUNARIOREAL, $$.place, $2.place, NULO, tQ);
			}
		}
	;

literal_numerico: tk_lit_entero {
	printf("Se ha reducido literal_numerico con tk_lit_entero\n");
		}
		| tk_lit_real {
	printf("Se ha reducido literal_numerico con tk_lit_real\n");
		}
	;

operando: tk_id {
			printf("\t operando por id \n");
			$$ = buscarSid(&tS,$1);
		}
	| operando tk_punto operando {
			printf("\t operando por punto \n");
		}
	| operando tk_inicioArray expresion tk_finArray {
			printf("\t operando por [] \n");
		}
	| operando tk_ref {
			printf("\t operando por ref \n");
		}
	;
	
operandoB: tk_idB {
			printf("\t operando por id Booleano\n");
		}
	| operandoB tk_punto operandoB {
			printf("\t B operando por punto \n");
		}
	| operandoB tk_inicioArray expresion tk_finArray {
			printf("\t B operando por [] \n");
		}
	| operandoB tk_ref {
			printf("\t B operando por ref \n");
		}
	;


instrucciones: instruccion tk_composicionSecuencial instrucciones {
			printf("\t instrucciones por ; \n");
		}
	| instruccion {
			printf("\t instrucciones por instruccion \n");
		}
	;

instruccion: tk_continuar {
			printf("\t instruccion por continuar \n");
		}
	| asignacion {
			printf("\t instruccion por asignacion \n");
		}
	| alternativa {
			printf("\t instruccion por alternativa \n");
		}
	| iteracion {
			printf("\t instruccion por iteraccion \n");
		}
	| accion_ll {
			printf("\t instruccion por accion \n");
		}
	;

asignacion: operando tk_asignacion expresion{
			printf("\t asignacion \n");
		}
	;

alternativa: tk_si expresion tk_alternativa instrucciones lista_opciones tk_fsi {
			printf("\t alternativa \n");
		}
	;

lista_opciones: tk_sino expresion tk_alternativa instrucciones lista_opciones{
			printf("\t lista_opciones \n");
		}
	| /*empty*/ {
			printf("\t lista_opciones por epsilon \n");
		}
	;

iteracion: it_cota_fija {
			printf("\t iteracion por fija \n");
		}
	| it_cota_exp {
			printf("\t iteracion por exp \n");
		}
	;

it_cota_exp: tk_mientras expresion tk_hacer instrucciones tk_fmientras {
			printf("\t it_cota_exp \n");
		}
	;

it_cota_fija: tk_para tk_id tk_asignacion expresion tk_hasta expresion tk_hacer instrucciones tk_fpara {
			printf("\t it_cota_fija \n");
		}
	;

accion_d: tk_accion a_cabecera bloque tk_faccion {
			printf("\t accion_d \n");
		}
	;

funcion_d: tk_funcion f_cabecera bloque tk_dev expresion tk_ffuncion {
			printf("\t funcion_d \n");
		}
	;

a_cabecera: tk_id tk_inicioParentesis d_par_form tk_finalParentesis tk_composicionSecuencial {
			printf("\t a_cabecera \n");
		}
	;

f_cabecera: tk_id tk_inicioParentesis lista_d_var tk_finalParentesis tk_dev d_tipo tk_composicionSecuencial {
			printf("\t f_cabecera \n");
		}
	;

d_par_form: d_p_form tk_composicionSecuencial d_par_form {
			printf("\t d_par_form \n");
		}
	| /*empty*/ {
			printf("\t d_par_form por epsilon \n");
		}
	;

d_p_form: tk_ent lista_id tk_defTipoVar d_tipo {
			printf("\t d_p_form por entrada \n");
		}
	| tk_sal lista_id tk_defTipoVar d_tipo {
			printf("\t d_p_form por salida \n");
		}
	| tk_entradaSalida lista_id tk_defTipoVar d_tipo {
			printf("\t d_p_form por ent/sal \n");
		}
	;

accion_ll: tk_id tk_inicioParentesis l_ll tk_finalParentesis {
			printf("\t accion_ll \n");
		}
	;

funcion_ll: tk_id tk_inicioParentesis l_ll tk_finalParentesis {
			printf("\t funcion_ll \n");
		}
	;

l_ll: expresion tk_separador l_ll {
			printf("\t l_ll por ;\n");
		}
	| expresion {
			printf("\t l_ll por expresion\n");
		}
	;
%%

int main(int argc, char* argv[]){
	tS = crearTSimbolos();
	tQ = crearTQuad();
	++argv, --argc;
	if (argc > 0) {
		yyin = fopen(argv[0], "r");
		yyparse();
		
	} else {
		yyin = stdin;
		yyparse();
	}
	printf("\n");
	printf("\tTABLA SIMBOLOS\n");
	printf("\n");
	mostrarTabla(&tS);
	printf("\n");
	printf("\tTABLA CUADRUPLAS\n");
	printf("\n");
	mostrarTablaQuad(tQ);
	printf("\n");
}

void yyerror (const char* s) {
	fprintf(stderr, "error %s \n", s);
}

