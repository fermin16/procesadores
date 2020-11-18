%{
  #define YYSTYPE double
  #include <stdio.h>
  #include <math.h>
  #include <stdlib.h>
  void yyerror (char const *);
  extern FILE *yyin;
  extern int yylex();
  extern int yyparse();
%}


/*caracteres especiales*/


 
%token bis_coma 
%token bis_puntoComa 

%token bis_dosPuntos 
%token bis_alternativa 
%token bis_asignacion 
%token bis_subrango
%token bis_literal
%token bis_tipo_base
%token bis_dev

%precedence bis_verdadero
%precedence bis_falso

/*operadores aritmeticos*/
%left bis_suma bis_resta
%left bis_multiplicacion bis_div bis_mod bis_div_real 

%left bis_o
%left bis_y
/*comparaciones*/
%left bis_oprel
%left bis_igual 
%left FALSA
%precedence bis_no 


/*identificadores*/
%token bis_id 


/*literales*/
%token bis_literal_entero 
%token bis_literal_real 
%token bis_literal_caracter 

/* Comentarios */ 
%token bis_comentario 


/*palabras reservadas*/

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
%token bis_ent 
%token bis_sal 
%token bis_sino 
%token bis_entradaSalida 
%token bis_continuar 
%token bis_de 
 
%token bis_tabla 
%left bis_parentesisAbrir bis_parentesisCerrar
%left bis_corcheteAbrir bis_corcheteCerrar 
%right bis_punto bis_ref



%%

desc_algoritmo:
    bis_algoritmo bis_id bis_puntoComa cabecera_alg bloque_alg bis_falgoritmo bis_puntoComa
    {printf("desc_algoritmo: bis_algoritmo bis_id bis_puntoComa cabecera_alg bloque_alg bis_falgoritmo bis_punto\n");}
;
    
cabecera_alg:
    decl_globales decl_a_f decl_ent_sal bis_comentario {printf ("cabecera_alg: decl_globales decl_a_f decl_ent_sal bis_comentario\n");}
;

bloque_alg:
    bloque bis_comentario {printf ("bloque_alg: bloque bis_comentario\n");}
    | bloque {printf ("bloque_alg: bloque \n");}
;

decl_globales:
    declaracion_tipo decl_globales {printf ("decl_globales: declaracion_tipo decl_globales\n");}
    | declaracion_const decl_globales {printf ("decl_globales: declaracion_const decl_globales\n");}
    | declaracion_var decl_globales{printf ("decl_globales: declaracion_var decl_globales\n");}
    |  {printf ("decl_globales: vacio\n");}
;

decl_a_f:
    accion_d decl_a_f {printf ("decl_a_f: accion_d decl_a_f\n");}
    | funcion_d decl_a_f {printf ("decl_a_f: uncion_d decl_a_f\n");}
    |  {printf ("decl_a_f: vacio\n");}
;

bloque: 
    declaraciones instrucciones {printf ("bloque: declaraciones instrucciones \n");}
;

declaraciones:
    declaracion_tipo declaraciones {printf ("declaraciones: declaracion_tipo declaraciones\n");}
    | declaracion_const declaraciones {printf ("declaraciones: declaracion_const declaraciones\n");}
    | declaracion_var declaraciones {printf ("declaraciones: declaracion_var declaraciones\n");}
    |  {printf ("declaraciones: vacio\n");}
;

declaracion_tipo:
    bis_tipo lista_d_tipo bis_ftipo bis_puntoComa {printf ("declaracion_tipo: bis_tipo lista_d_tipo bis_ftipo bis_puntoComa\n");}
;

declaracion_const:
    bis_const lista_d_cte bis_fconst bis_puntoComa {printf ("declaracion_const:  bis_const lista_d_cte bis_fconst bis_puntoComa\n");}
;

declaracion_var:
    bis_var lista_d_var bis_fvar bis_puntoComa {printf ("declaracion_var: bis_var lista_d_var bis_fvar bis_puntoComa\n");}
;

lista_d_tipo:
    bis_id bis_igual d_tipo bis_puntoComa {printf ("lista_d_tipo: bis_id bis_igual d_tipo bis_puntoComa lista_d_tipo \n");}
    |  {printf ("lista_d_tipo: vacio\n");}
;

d_tipo: 
    bis_tupla lista_campos bis_ftupla {printf ("d_tipo : bis_tupla lista_campos bis_ftupla \n");}
    | bis_tabla bis_corcheteAbrir expresion_t bis_subrango expresion_t bis_corcheteCerrar bis_de d_tipo {printf ("d_tipo: bis_tabla bis_corcheteAbrir expresion_t bis_subrango expresion_t bis_corcheteCerrar bis_de d_tipo\n");}
    | bis_id {printf ("d_tipo: bis_id\n");}
    | expresion_t bis_subrango expresion_t {printf ("d_tipo: expresion_t bis_subrango expresion_t\n");}
    | bis_ref d_tipo {printf ("d_tipo: bis_ref d_tipo\n");}
    | bis_tipo_base {printf ("d_tipo: bis_tipo_base\n");}
;

expresion_t:
    expresion {printf ("expresion_t: expresion\n");}
    | bis_literal_caracter {printf ("expresion_t: bis_literal_caracter\n");}
;

lista_campos:
    bis_id bis_dosPuntos d_tipo bis_puntoComa lista_campos {printf ("lista_campos: bis_id bis_dosPuntos d_tipo bis_puntoComa lista_campos\n");}
    |  {printf ("lista_campos: vacio\n");}
;

lista_d_cte: 
    bis_id bis_igual bis_literal bis_puntoComa lista_d_cte {printf ("lista_d_cte: bis_id bis_igual bis_literal bis_puntoComa lista_d_cte\n");}
    |  {printf ("lista_d_cte: vacio\n");}
;

lista_id:
    bis_id bis_coma lista_id {printf ("lista_id: bis_id bis_coma lista_id\n");}
    | bis_id {printf ("lista_id: bis_id\n");}
;

lista_d_var:
    lista_id bis_dosPuntos bis_tipo_base bis_puntoComa lista_d_var {printf ("lista_d_var: lista_id bis_dosPuntos bis_id bis_puntoComa lista_d_var\n");}
    | lista_id bis_dosPuntos d_tipo bis_puntoComa lista_d_var {printf ("lista_d_var: lista_id bis_dosPuntos d_tipo bis_puntoComa lista_d_var\n");}
    |  {printf ("lista_d_var: vacio\n");}
;

decl_ent_sal:
    decl_ent {printf ("decl_ent_sal: decl_ent\n");}
    | decl_ent decl_sal {printf ("decl_ent_sal: decl_ent decl_sal\n");}
    | decl_sal {printf ("decl_ent_sal: decl_sal\n");}
;

decl_ent:
    bis_ent lista_d_var {printf ("decl_ent: bis_ent lista_d_var\n");}
;

decl_sal:
    bis_sal lista_d_var {printf ("decl_sal: bis_sal lista_d_var\n");}
;


expresion:
    expresion bis_suma expresion {printf ("expresion: expresion bis_suma expresion\n");}
    | expresion bis_resta expresion {printf ("expresion: expresion bis_resta expresion\n");}
    | expresion bis_multiplicacion expresion {printf ("expresion: expresion bis_multiplicacion expresion\n");}
    | expresion bis_div_real expresion {printf ("expresion: expresion bis_div_real expresion \n");}
    | expresion bis_mod expresion {printf ("expresion: expresion bis_mod expresion \n");}
    | expresion bis_div expresion {printf ("expresion: expresion bis_div expresion\n");}
    | bis_parentesisAbrir expresion bis_parentesisCerrar {printf ("expresion: bis_parentesisAbrir expresion bis_parentesisCerrar\n");}
    | operando {printf ("expresion: operando\n");}
    | bis_literal_real {printf ("expresion: bis_literal_real\n");}
    | bis_literal_entero {printf ("expresion: bis_literal_entero\n");}
    | bis_resta expresion %prec FALSA {printf ("expresion: bis_resta expresion\n");}
    | bis_suma expresion %prec FALSA{printf ("expresion: bis_resta expresion\n");}
    | expresion bis_y expresion {printf ("expresion: expresion bis_y expresion\n");}
    | expresion bis_o expresion {printf ("expresion: expresion bis_o expresion\n");}
    | bis_no expresion {printf ("expresion: bis_no expresion\n");}
    | bis_verdadero {printf ("expresion: bis_verdadero\n");}
    | bis_falso {printf ("expresion: bis_falso\n");}
    | expresion bis_oprel expresion {printf ("expresion: expresion bis_oprel expresion\n");}
    
    
;


operando:
    bis_id {printf ("operando: bis_id\n");}
    | operando bis_punto operando {printf ("operando: operando bis_punto operando \n");}
    | operando bis_corcheteAbrir expresion bis_corcheteCerrar {printf ("operando: operando bis_corcheteAbrir expresion bis_corcheteCerrar \n");}
    | operando bis_ref {printf ("operando: operando bis_ref \n");}
;
    
instrucciones:
    instruccion bis_puntoComa instrucciones {printf ("instrucciones: instruccion bis_puntoComa instrucciones \n");}
    |instruccion {printf ("instrucciones: instruccion \n");}
;

instruccion:
    bis_continuar {printf ("instruccion: bis_continuar \n");}
    | asignacion {printf ("instruccion:asignacion \n");}
    | alternativa {printf ("instruccion: alternativa \n");}
    | iteracion {printf ("iteracion \n");}
;

asignacion:
    operando bis_asignacion expresion {printf ("asignacion: operando bis_asignacion expresion \n");}
;

alternativa:
    bis_si expresion bis_alternativa instrucciones lista_opciones bis_fsi {printf ("alternativa: bis_si expresion bis_alternativa instrucciones lista_opciones bis_fsi \n");}
;

lista_opciones:
    bis_sino expresion bis_alternativa instrucciones lista_opciones {printf ("lista_opciones: bis_sino expresion bis_asignacion instrucciones lista_opciones \n");}
    | {printf ("lista_opciones: vacio \n");}
;

it_cota_fija:
    bis_para bis_id bis_asignacion expresion bis_hasta expresion bis_hacer instrucciones bis_fpara {printf ("it_cota_fija: bis_para bis_id bis_asignacion expresion bis_hasta expresion bis_hacer instrucciones bis_fpara \n");}
;

it_cota_exp:
    bis_mientras expresion bis_hacer instrucciones bis_fmientras {printf ("it_cota_exp: bis_mientras expresion bis_hacer instrucciones bis_fmientras \n");}
;


iteracion:
    it_cota_fija {printf ("iteracion: it_cota_fija \n");}
    | it_cota_exp {printf ("iteracion: it_cota_exp \n");}
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



%%
int main( int argc, char **argv ){
    ++argv, --argc;
    if ( argc > 0 )
        yyin = fopen( argv[0], "r" );
    else
        yyin = stdin;
    yyparse();
}

void yyerror(const char *s){
    printf("Esto es un asco\n");
    exit(-1);
}
    






    
    
    
    
    
    




