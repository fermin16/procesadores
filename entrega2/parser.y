%{
  #include <stdio.h>
  #include <math.h>
  #include <stdlib.h>
%}


letra [A-Za-z]
cifra [0-9]


/*caracteres especiales*/
%token bis_dr_comillas 
%token bis_dr_barraInclinada 
%token bis_dr_parentesisAbrir 
%token bis_dr_parentesisCerrar 
%token bis_dr_igual 
%token bis_dr_arrayAbrir 
%token bis_dr_arrayCerrar 
%token bis_dr_corcheteAbrir 
%token bis_dr_corcheteCerrar 
%token bis_dr_suma 
%token bis_dr_resta
%token bis_dr_multiplicacion 
%token bis_dr_coma 
%token bis_dr_puntoComa 
%token bis_dr_punto 
%token bis_dr_dosPuntos 
%token bis_dr_barraBaja 
%token bis_dr_mayor 
%token bis_dr_menor 
%token bis_dr_alternativa 
%token bis_dr_asignacion 
%token bis_dr_subrango
%token bis_literal
%token bis_tipo_base

/*comparaciones*/
%token bis_dr_menorIgual 
%token bis_dr_mayorIgual 
%token bis_dr_desigual 

/*Separadores*/
%token bis_dr_espacio 
%token bis_dr_tabulador 
%token bis_dr_saltoLinea 

/*identificadores*/
%token bis_id 
%token bis_letraOcifra 

/*literales*/
%token bis_dr_literal_entero 
%token bis_dr_literal_real 
%token bis_dr_literal_booleano 
%token bis_dr_literal_caracter 
%token bis_dr_literal_cadena

/* Comentarios */ 
%token bis_dr_precondicion 
%token bis_dr_postcondicion 
%token bis_dr_comentario 


/*palabras reservadas*/
%token bis_pr_algoritmo 
%token bis_pr_falgoritmo 
%token bis_pr_funcion 
%token bis_pr_ffuncion 
%token bis_pr_accion 
%token bis_pr_faccion 
%token bis_pr_tipo 
%token bis_pr_ftipo 
%token bis_pr_const 
%token bis_pr_fconst
%token bis_pr_var 
%token bis_pr_fvar 
%token bis_pr_tupla 
%token bis_pr_ftupla 
%token bis_pr_si 
%token bis_pr_fsi 
%token bis_pr_para 
%token bis_pr_fpara 
%token bis_pr_mientras 
%token bis_pr_fmientras 
%token bis_pr_hasta 
%token bis_pr_hacer 
%token bis_pr_entonces 
%token bis_pr_ent 
%token bis_pr_sal 
%token bis_pr_sino 
%token bis_pr_entradaSalida 
%token bis_pr_continuar 
%token bis_pr_de 
%token bis_pr_div 
%token bis_pr_mod 
%token bis_pr_no 
%token bis_pr_ref 
%token bis_pr_tabla 
%token bis_pr_o 
%token bis_pr_y 
%token bis_pr_booleano 
%token bis_pr_entero 
%token bis_pr_caracter 
%token bis_pr_real 
%token bis_pr_cadena 


desc_algoritmo:
    bis_pr_algoritmo bis_id bis_dr_puntoComa cabecera_alg bloque_alg bis_pr_falgoritmo bis_dr_puntoComa {printf("desc_algortimo 1\n");}
;
    
cabecera_alg:
    declglobales decl_a_f decl_ent_sal bis_dr_comentario {printf ("cabecera_alg 1\n");}
    | declglobales decl_a_f declentsal  {printf ("cabecera_alg 2\n");}
;

bloque_alg:
    bloque bis_dr_comentario {printf ("bloque_alg 1\n");}
    | bloque {printf ("bloque_alg 2\n");}
;

decl_globales:
    declaracion_tipo decl_globales {printf ("decl_globales 1\n");}
    | declaracion_const decl_globales {printf ("decl_globales 2\n");}
    | %empty {printf ("decl_globales 3\n");}
;

decl_a_f:
    accion_d decl_a_f {printf ("decl_a_f 1\n");}
    | funcion_d decl_a_f {printf ("decl_a_f 2\n");}
    | %empty {printf "decl_a_f 3\n");}
;

bloque: 
    declaraciones instrucciones {printf ("bloque 1\n");}
;

declaraciones:
    declaracion_tipo declaraciones {printf ("declaraciones 1\n");}
    | declaracion_const declaraciones {printf ("declaraciones 2\n");}
    | declaracion_var declaraciones {printf ("declaraciones 3\n");}
    | %empty {printf ("declaraciones 4\n");}
;

declaracion_tipo:
    bis_pr_tipo lista_d_tipo bis_pr_ftipo bis_dr_puntoComa {printf ("declaracion_tipo 1\n");}
;

declaracion_const:
    bis_pr_const lista_d_cte bis_pr_fconst bis_dr_puntoComa {printf ("declaracion_const 1\n");}
;

declaracion_var:
    bis_pr_var lista_d_var bis_pr_fvar bis_dr_puntoComa {printf ("declaracion_var 1\n");}
;

lista_d_tipo:
    bis_id bis_dr_igual d_tipo bis_dr_puntoComa lista_d_tipo {printf ("lista_d_tipo 1\n");}
    | %empty {printf ("lista_d_tipo 2\n");}
;

d_tipo: lista_d_cte
    bis_pr_tupla lista_campos bis_pr_ftupla {printf ("d_tipo 1\n");}
    | bis_pr_tabla bis_dr_corcheteAbrir expresion_t bis_dr_subrango expresion_t bis_dr_corcheteCerrar bis_pr_de d_tipo {printf ("d_tipo 2\n");}
    | bis_id {printf ("d_tipo 3\n");}
    | expresion_t bis_dr_subrango expresion_t {printf ("d_tipo 4\n");}
    | bis_pr_ref d_tipo {printf ("d_tipo 5\n");}
    | bis_tipo_base {printf ("d_tipo 6\n");}
;

expresion_t:
    expresion {printf ("expresion_t 1\n");}
    | bis_dr_literal_caracter {printf ("expresion_t 2\n");}
;

lista_campos:
    bis_id bis_dr_dosPuntos d_tipo bis_dr_puntoComa lista_campos {printf ("lista_campos 1\n");}
    | %empty {printf ("lista_campos 2\n");}
;

lista_d_cte: 
    bis_id bis_dr_igual bis_literal bis_dr_puntoComa lista_d_cte {printf ("lista_d_cte 1\n");}
    | %empty {printf ("lista_d_cte 2\n");}
;

lista_d_var:
    lista_id bis_dr_dosPuntos bis_id bis_dr_puntoComa lista_d_var {printf ("lista_d_var 1\n");}
    | lista_id bis_dr_puntoComa d_tipo bis_dr_puntoComa lista_d_var {printf ("lista_d_var 2\n");}
    | %empty {printf ("lista_d_var 3\n");}
;

lista_id:
    bis_id bis_dr_coma lista_id {printf ("lista_id 1\n");}
    | bis_id {printf ("lista_id 2\n");}
;

decl_ent_sal:
    decl_ent {printf ("decl_ent_sal 1\n");}
    | decl_ent decl_sal {printf ("decl_ent_sal 2\n");}
    | decl_sal {printf ("decl_ent_sal 3\n");}
;

decl_ent:
    bis_pr_ent lista_d_var {printf ("decl_ent 1\n");}
;

decl_sal:
    bis_pr_sal lista_d_var {printf ("decl_sal 1\n");}
;


    







