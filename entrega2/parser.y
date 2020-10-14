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
%token bis_dev

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
    bis_id {printf ("bis_id 1\n");}
    | operando bis_punto operando {printf ("operando bis_punto operando \n");}
    | operando bis_corcheteAbrir expresion bis_corcheteCerrar {printf ("operando bis_corcheteAbrir expresion bis_corcheteCerrar \n");}
    | operando bis_ref {printf ("operando bis_ref \n");}
;
    
instrucciones:
    intruccion bis_puntoComa instrucciones {printf ("intruccion bis_puntoComa instrucciones \n");}
    |instrucciones {printf ("intruccion \n");}
;

instruccion:
    bis_continuar {printf ("instruccion: bis_continuar \n");}
    | asignacion {printf ("instruccion:asignacion \n");}
    | alternativa {printf ("instruccion: alternativa \n");}
    | iteracion {printf ("iteracion \n");}
    | accion_ll {printf ("accion_ll \n");}
;

asignacion:
    operando bis_asignacion expresion {printf ("asignacion: operando bis_asignacion expresion \n");}
;

alternativa:
    bis_si expresion bis_alternativa instrucciones lista_opciones bis_fsi {printf ("alternativa: bis_si expresion bis_alternativa instrucciones lista_opciones bis_fsi \n");}
;

lista_opciones:
    bis_sino expresion bis_asignacion instrucciones lista_opciones {printf ("lista_opciones: bis_sino expresion bis_asignacion instrucciones lista_opciones \n");}
    | {printf ("lista_opciones: vacio \n");}
;

iteracion:
    it_cota_fija {printf ("iteracion: it_cota_fija \n");}
    | it_cota_exp {printf ("iteracion: it_cota_exp \n");}
;

it_cota_exp:
    bis_mientras expresion bis_hacer intrucciones bis_fmientras {printf ("it_cota_exp: bis_mientras expresion bis_hacer intrucciones bis_fmientras \n");}
;

it_cota_fija:
    bis_para bis_id bis_asignacion expresion bis_hasta expresion bis_hacer instrucciones bis_fpara {printf ("it_cota_fija: bis_para bis_id bis_asignacion expresion bis_hasta expresion bis_hacer instrucciones bis_fpara \n");}
;

accion_d:
    bis_accion a_cabecera bloque bis_faccion {printf ("accion_d: bis_accion a_cabecera bloque bis_faccion \n");}
;

funcion_d:
    bis_funcion f_cabecera bloque bis_dev expresion bis_ffuncion {printf ("funcion_d: bis_funcion f_cabecera bloque bis_dev expresion bis_ffuncion \n");}
;

a_cabecera:
    bis_id bis_parentesisAbrir d_par_form bis_parentesisCerrar bis_puntoComa {printf ("a_cabecera: bis_id bis_parentesisAbrir d_par_form bis_parentesisCerrar bis_puntoComa \n");}
;

f_cabecera:
    bis_id bis_parentesisAbrir lista_d_var bis_parentesisCerrar bis_dev d_tipo bis_puntoComa {printf ("f_cabecera: bis_id bis_parentesisAbrir lista_d_var bis_parentesisCerrar bis_dev d_tipo bis_puntoComa \n");}
;

d_par_form:
    d_p_form bis_puntoComa d_par_form {printf ("d_par_form: d_p_form bis_puntoComa d_par_form \n");}
    | {printf ("d_par_form: vacio \n");}
;

d_p_form:
    bis_ent lista_id bis_dosPuntos d_tipo {printf ("d_p_form: bis_ent lista_id bis_dosPuntos d_tipo \n");}
    | bis_sal lista_id bis_dosPuntos d_tipo {printf ("d_p_form: bis_sal lista_id bis_dosPuntos d_tipo \n");}
    | bis_entradaSalida lista_id bis_dosPuntos d_tipo {printf ("d_p_form: bis_entradaSalida lista_id bis_dosPuntos d_tipo \n");}
;

accion_ll:
    bis_id bis_parentesisAbrir l_ll bis_parentesisCerrar {printf ("accion_ll: bis_id bis_parentesisAbrir l_ll bis_parentesisCerrar \n");}
;

funcion_ll:
    bis_id bis_parentesisAbrir l_ll bis_parentesisCerrar {printf ("funcion_ll: bis_id bis_parentesisAbrir l_ll bis_parentesisCerrar \n");}
;

l_ll:
    expresion bis_coma l_ll {printf ("l_ll: expresion bis_coma l_ll \n");}
    | expresion {printf ("l_ll: expresion \n");}
;
    






    
    
    
    
    
    




