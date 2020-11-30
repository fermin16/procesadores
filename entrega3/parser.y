%{
  #include <stdio.h>
  #include <math.h>
  #include <stdlib.h>
  #include "tablaSimbolos.h"
  #include "tablaCuadruplas.h"

  void yyerror (char const *);
  extern FILE *yyin;
  extern int yylex();
  extern int yyparse();
  struct tablaSimbolos* ts;
  struct tablaCuadruplas tc;
%}


/*caracteres especiales*/
 
%token bis_coma 
%token bis_puntoComa 

%token bis_dosPuntos 
%token bis_alternativa 
%token bis_asignacion 
%token bis_subrango
%token bis_literal
%token <entradaEntero> bis_tipo_base
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
%token <entradaChar> bis_id


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

%union  YYSTYPE{
	int entradaEntero;
    float entradaFloat;
	char* entradaChar;
    struct expresionAritmetica{
        int place;
        int type;
        int nextQuad;
    }expresionAritmetica
}

%type <entradaEntero> lista_id
%type <entradaEntero> d_tipo
%type <expresionAritmetica> asignacion
%type <expresionAritmetica> operando
%type <expresionAritmetica> expresion

%%

desc_algoritmo:
    bis_algoritmo bis_id bis_puntoComa cabecera_alg bloque_alg bis_falgoritmo bis_puntoComa
    {printf("Reduce : desc_algoritmo: bis_algoritmo bis_id bis_puntoComa cabecera_alg bloque_alg bis_falgoritmo bis_punto\n");}
;
    
cabecera_alg:
    decl_globales decl_a_f decl_ent_sal bis_comentario {printf ("Reduce cabecera_alg: decl_globales decl_a_f decl_ent_sal bis_comentario\n");}
;

bloque_alg:
    bloque bis_comentario {printf ("Recorrer la tabla: bloque_alg: bloque bis_comentario\n");}
    | bloque {printf ("Recorrer la tabla: bloque_alg: bloque \n");}
;

decl_globales:
    declaracion_tipo decl_globales {printf ("Reduce: decl_globales: declaracion_tipo decl_globales\n");}
    | declaracion_const decl_globales {printf ("Reduce: decl_globales: declaracion_const decl_globales\n");}
    |  {printf ("Reduce: decl_globales: vacio\n");}
;

decl_a_f:
    accion_d decl_a_f {printf ("Reduce: decl_a_f: accion_d decl_a_f\n");}
    | funcion_d decl_a_f {printf ("Reduce: decl_a_f: uncion_d decl_a_f\n");}
    |  {printf ("Reduce: decl_a_f: vacio\n");}
;

bloque: 
    declaraciones instrucciones {printf ("Reduce: bloque: declaraciones instrucciones \n");}
;

declaraciones:
    declaracion_tipo declaraciones {printf ("Reduce: declaraciones: declaracion_tipo declaraciones\n");}
    | declaracion_const declaraciones {printf ("Reduce: declaraciones: declaracion_const declaraciones\n");}
    | declaracion_var declaraciones {printf ("Reduce: declaraciones: declaracion_var declaraciones\n");}
    |  {printf ("Reduce: declaraciones: vacio\n");}
;

declaracion_tipo:
    bis_tipo lista_d_tipo bis_ftipo bis_puntoComa {printf ("Reduce: declaracion_tipo: bis_tipo lista_d_tipo bis_ftipo bis_puntoComa\n");}
;

declaracion_const:
    bis_const lista_d_cte bis_fconst bis_puntoComa {printf ("Reduce: declaracion_const:  bis_const lista_d_cte bis_fconst bis_puntoComa\n");}
;

declaracion_var:
    bis_var lista_d_var bis_fvar bis_puntoComa {printf ("Reduce: declaracion_var: bis_var lista_d_var bis_fvar bis_puntoComa\n");}
;

lista_d_tipo:
    bis_id bis_igual d_tipo bis_puntoComa {printf ("Reduce: lista_d_tipo: bis_id bis_igual d_tipo bis_puntoComa lista_d_tipo \n");}
    |  {printf ("Reduce: lista_d_tipo: vacio\n");}
;

d_tipo: 
    bis_tupla lista_campos bis_ftupla {printf ("Reduce: d_tipo : bis_tupla lista_campos bis_ftupla \n");}
    | bis_tabla bis_corcheteAbrir expresion_t bis_subrango expresion_t bis_corcheteCerrar bis_de d_tipo {printf ("Reduce: d_tipo: bis_tabla bis_corcheteAbrir expresion_t bis_subrango expresion_t bis_corcheteCerrar bis_de d_tipo\n");}
    | bis_id {printf ("Reduce: d_tipo: bis_id\n");}
    | expresion_t bis_subrango expresion_t {printf ("Reduce: d_tipo: expresion_t bis_subrango expresion_t\n");}
    | bis_ref d_tipo {printf ("Reduce: d_tipo: bis_ref d_tipo\n");}
    | bis_tipo_base {printf ("Reduce: d_tipo: bis_tipo_base\n");
        $$ = $1 ;}
;

expresion_t:
    expresion {printf ("Reduce: expresion_t: expresion\n");}
    | bis_literal_caracter {printf ("Reduce: expresion_t: bis_literal_caracter\n");}
;

lista_campos:
    bis_id bis_dosPuntos d_tipo bis_puntoComa lista_campos {printf ("Reduce: lista_campos: bis_id bis_dosPuntos d_tipo bis_puntoComa lista_campos\n");}
    |  {printf ("Reduce: lista_campos: vacio\n");}
;

lista_d_cte: 
    bis_id bis_igual bis_literal bis_puntoComa lista_d_cte {printf ("Reduce: lista_d_cte: bis_id bis_igual bis_literal bis_puntoComa lista_d_cte\n");}
    |  {printf ("Reduce: lista_d_cte: vacio\n");}
;

lista_id:
    bis_id bis_coma lista_id {
        printf ("Reduce: lista_id: bis_id bis_coma lista_id\n");
        insertarSimbolo(&ts,crearSimboloConTipo(&ts,$1,$3));
        mostrarTablaSimbolos(&ts);
		$$ = $3;}
    | bis_id bis_dosPuntos bis_tipo_base {
        printf ("lista_id: bis_id bis_dosPuntos bis_tipoBase\n");
        insertarSimbolo(&ts,crearSimboloConTipo(&ts,$1,$3));
        mostrarTablaSimbolos(&ts);
        $$ = $3;}

lista_d_var:
    lista_id bis_puntoComa lista_d_var {printf ("lista_d_var: lista_id  lista_d_var\n")
    ;}
    | lista_id bis_puntoComa d_tipo bis_puntoComa lista_d_var {printf ("lista_d_var: lista_id d_tipo bis_puntoComa lista_d_var\n");}
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
    expresion bis_suma expresion {
    	    printf ("expresion: expresion bis_suma expresion\n");
            if(($1.type==TIPO_ENTERO && $3.type==TIPO_ENTERO) || ($1.type==TIPO_REAL && $3.type==TIPO_REAL)){
                insertarCuadrupla(OP_SUMA, $1.place, $3.place, $$.place, &tc);
                $$.type=$1.type;
            }else printf("Tipos no compatibles\n");
    	}
    | expresion bis_resta expresion {
            printf ("expresion: expresion bis_resta expresion\n");
            if(($1.type==TIPO_ENTERO && $3.type==TIPO_ENTERO) || ($1.type==TIPO_REAL && $3.type==TIPO_REAL)){
                insertarCuadrupla(OP_RESTA, $1.place, $3.place, $$.place, &tc);
                $$.type=$1.type;
            }else printf("Tipos no compatibles\n");
        }
    | expresion bis_multiplicacion expresion {printf ("expresion: expresion bis_multiplicacion expresion\n");}
    | expresion bis_div_real expresion {printf ("expresion: expresion bis_div_real expresion \n");}
    | expresion bis_mod expresion {printf ("expresion: expresion bis_mod expresion \n");}
    | expresion bis_div expresion {printf ("expresion: expresion bis_div expresion\n");}
    | bis_parentesisAbrir expresion bis_parentesisCerrar {printf ("expresion: bis_parentesisAbrir expresion bis_parentesisCerrar\n");}
    | operando {    printf ("expresion: operando\n");
                    $$.place = $1.place;
                    $$.type = $1.type;
      }
    | bis_literal_real {
            printf ("expresion: bis_literal_real\n");
            $$.place=insertarSimbolo(&ts,newtemp(&ts,TIPO_REAL));
            $$.type=TIPO_REAL;
            mostrarTablaSimbolos(&ts);
        }
    | bis_literal_entero {
            printf ("expresion: bis_literal_entero\n");
            $$.place=insertarSimbolo(&ts,newtemp(&ts,TIPO_ENTERO));
            $$.type=TIPO_ENTERO;
            mostrarTablaSimbolos(&ts);
        }
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
    bis_id {    printf ("operando: bis_id\n");
                simbolo* auxSimbolo= buscarSimbolo(&ts,$1);
                if(auxSimbolo!=NULL){
                    $$.place=auxSimbolo->valor;
                    $$.type=auxSimbolo->tipo;
                }else{
                    printf("variable %s no encontrada\n",$1);
                }
            }
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
    operando bis_asignacion expresion {
    printf ("asignacion: operando bis_asignacion expresion \n");
        if ($1.type==$3.type){
            if($1.type==TIPO_BOOLEANO && $3.type==TIPO_BOOLEANO){
                printf("sustituir por codigo de booleanos");
            }else{
                printf("Creando cuadrupla: Operacion %d, Destino %d, Variable %d, tipo1 %d, tipo2 %d\n", OP_ASIGNACION,$1.place, $3.place,$1.type,$3.type );
                //mostrarTablaSimbolos(&ts);
                insertarCuadrupla(OP_ASIGNACION,$3.place,-1,$1.place, &tc);
                $$.type=$1.type;
                //mostrarTablaCuadruplas(&tc);
            }
        }else printf("tipos no compatibles\n");
    }
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
    ts=crearTablaSimbolos();
    inicializarTablaCuadruplas(&tc);
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
    






    
    
    
    
    
    




