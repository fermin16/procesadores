%{
  #include <stdio.h>
  #include <math.h>
  #include <stdlib.h>
%}


letra [A-Za-z]
cifra [0-9]


/*caracteres especiales*/
%token bis_comillas 
%token bis_barraInclinada 
%token bis_parentesisAbrir 
%token bis_parentesisCerrar 
%token bis_igual 
%token bis_arrayAbrir 
%token bis_arrayCerrar 
%token bis_corcheteAbrir 
%token bis_corcheteCerrar 
%token bis_suma 
%token bis_resta
%token bis_multiplicacion 
%token bis_coma 
%token bis_puntoComa 
%token bis_punto 
%token bis_dosPuntos 
%token bis_barraBaja 
%token bis_mayor 
%token bis_menor 
%token bis_alternativa 
%token bis_asignacion 
%token bis_subrango
%token bis_div_real 
%token bis_literal
%token bis_tipo_base

/*comparaciones*/
%token bis_menorIgual 
%token bis_mayorIgual 
%token bis_desigual 

/*Separadores*/
%token bis_espacio 
%token bis_tabulador 
%token bis_saltoLinea 

/*identificadores*/
%token bis_id 
%token bis_letraOcifra 

/*literales*/
%token bis_literal_entero 
%token bis_literal_real 
%token bis_literal_booleano 
%token bis_literal_caracter 
%token bis_literal_cadena

/* Comentarios */ 
%token bis_precondicion 
%token bis_postcondicion 
%token bis_comentario 


/*palabras reservadas*/
%token bis_verdadero
%token bis_falso
%token bis_algoritmo 
%token bis_falgoritmo 
%token bis_funcion 
%token bis_ffuncion 
%token bis_accion 
%token bis_faccion 
%token bis_tipo 
%token bis_ftipo 
%token bis_const 
%token bis_fconst
%token bis_var 
%token bis_fvar 
%token bis_tupla 
%token bis_ftupla 
%token bis_si 
%token bis_fsi 
%token bis_para 
%token bis_fpara 
%token bis_mientras 
%token bis_fmientras 
%token bis_hasta 
%token bis_hacer 
%token bis_entonces 
%token bis_ent 
%token bis_sal 
%token bis_sino 
%token bis_entradaSalida 
%token bis_continuar 
%token bis_de 
%token bis_div 
%token bis_mod 
%token bis_no 
%token bis_ref 
%token bis_tabla 
%token bis_o 
%token bis_y 
%token bis_booleano 
%token bis_entero 
%token bis_caracter 
%token bis_real 
%token bis_cadena 


desc_algoritmo:
    bis_algoritmo bis_id bis_puntoComa cabecera_alg bloque_alg bis_falgoritmo bis_puntoComa {printf("bis_algoritmo bis_id bis_puntoComa cabecera_alg bloque_alg bis_falgoritmo bis_puntoComa\n");}
;
    
cabecera_alg:
    declglobales decl_a_f decl_ent_sal bis_comentario {printf ("declglobales decl_a_f decl_ent_sal bis_comentario\n");}
    | declglobales decl_a_f declentsal  {printf ("declglobales decl_a_f declentsal\n");}
;

bloque_alg:
    bloque bis_comentario {printf ("bloque bis_comentario\n");}
    | bloque {printf ("bloque\n");}
;

decl_globales:
    declaracion_tipo decl_globales {printf ("declaracion_tipo decl_globales\n");}
    | declaracion_const decl_globales {printf ("declaracion_const decl_globales\n");}
    |  {printf ("decl_globales vacio\n");}
;

decl_a_f:
    accion_d decl_a_f {printf ("accion_d decl_a_f\n");}
    | funcion_d decl_a_f {printf ("uncion_d decl_a_f\n");}
    |  {printf "decl_a_f 3\n");}
;

bloque: 
    declaraciones instrucciones {printf ("bloque 1\n");}
;

declaraciones:
    declaracion_tipo declaraciones {printf ("declaraciones 1\n");}
    | declaracion_const declaraciones {printf ("declaraciones 2\n");}
    | declaracion_var declaraciones {printf ("declaraciones 3\n");}
    |  {printf ("declaraciones 4\n");}
;

declaracion_tipo:
    bis_tipo lista_d_tipo bis_ftipo bis_puntoComa {printf ("declaracion_tipo 1\n");}
;

declaracion_const:
    bis_const lista_d_cte bis_fconst bis_puntoComa {printf ("declaracion_const 1\n");}
;

declaracion_var:
    bis_var lista_d_var bis_fvar bis_puntoComa {printf ("declaracion_var 1\n");}
;

lista_d_tipo:
    bis_id bis_igual d_tipo bis_puntoComa lista_d_tipo {printf ("lista_d_tipo 1\n");}
    |  {printf ("lista_d_tipo 2\n");}
;

d_tipo: lista_d_cte
    bis_tupla lista_campos bis_ftupla {printf ("d_tipo 1\n");}
    | bis_tabla bis_corcheteAbrir expresion_t bis_subrango expresion_t bis_corcheteCerrar bis_de d_tipo {printf ("d_tipo 2\n");}
    | bis_id {printf ("d_tipo 3\n");}
    | expresion_t bis_subrango expresion_t {printf ("d_tipo 4\n");}
    | bis_ref d_tipo {printf ("d_tipo 5\n");}
    | bis_tipo_base {printf ("d_tipo 6\n");}
;

expresion_t:
    expresion {printf ("expresion_t 1\n");}
    | bis_literal_caracter {printf ("expresion_t 2\n");}
;

lista_campos:
    bis_id bis_dosPuntos d_tipo bis_puntoComa lista_campos {printf ("lista_campos 1\n");}
    |  {printf ("lista_campos 2\n");}
;

lista_d_cte: 
    bis_id bis_igual bis_literal bis_puntoComa lista_d_cte {printf ("lista_d_cte 1\n");}
    |  {printf ("lista_d_cte 2\n");}
;

lista_d_var:
    lista_id bis_dosPuntos bis_id bis_puntoComa lista_d_var {printf ("lista_d_var 1\n");}
    | lista_id bis_puntoComa d_tipo bis_puntoComa lista_d_var {printf ("lista_d_var 2\n");}
    |  {printf ("lista_d_var 3\n");}
;

lista_id:
    bis_id bis_coma lista_id {printf ("lista_id 1\n");}
    | bis_id {printf ("lista_id 2\n");}
;

decl_ent_sal:
    decl_ent {printf ("decl_ent_sal 1\n");}
    | decl_ent decl_sal {printf ("decl_ent_sal 2\n");}
    | decl_sal {printf ("decl_ent_sal 3\n");}
;

decl_ent:
    bis_ent lista_d_var {printf ("decl_ent 1\n");}
;

decl_sal:
    bis_sal lista_d_var {printf ("decl_sal 1\n");}
;

expresion:
    exp_a {printf ("expresion 1\n");}
    | exp_b {printf ("expresion 2\n");}
    | funcion_ll {printf ("expresion 3\n");}
;

exp_a:
    exp_a bis_suma exp_a {printf ("exp_a 1\n");}
    | exp_a bis_resta exp_a {printf ("exp_a 2\n");}
    | exp_a bis_div_real exp_a {printf ("exp_a 3\n");}
    | exp_a bis_mod exp_a {printf ("exp_a 4\n");}
    | exp_a bis_div exp_a {printf ("exp_a 5\n");}
    | bis_parentesisAbrir exp_a bis_parentesisCerrar {printf ("exp_a 6\n");}
    | operando {printf ("exp_a 7\n");}
    | bis_literal_real {printf ("exp_a 8\n");}
    | bis_literal_entero {printf ("exp_a 9\n");}
    | bis_resta exp_a {printf ("exp_a 10\n");}
;

exp_b:
    exp_b bis_y exp_b {printf ("exp_b 1\n");}
    | exp_b bis_o exp_b {printf ("exp_b 2\n");}
    | bis_no exp_b {printf ("exp_b 3\n");}
    | operando {printf ("exp_b 4\n");}
    | bis_verdadero {printf ("exp_b 5\n");}
    | bis_falso {printf ("exp_b 6\n");}
;

operando:
    bis_id {printf ("operando 1\n");}
    |operando 





