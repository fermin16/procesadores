%{
  #include <stdio.h>
  #include <math.h>
  #include "lex.yy.c"
  int yylex (void);
  void yyerror (char const *);
%}

// Tokens generales
%token BIS_IDENTIFICADOR
%token BIS_LETRA_O_CIFRA
%token BIS_DR_REAL
%token BIS_DR_ENTERO
%token BIS_PUNTO_COMA
%token BIS_COMENTARIO
%token BIS_ASIG
%token BIS_LITERAL
%token BIS_TIPO_BASE
%token BIS_CADENA_LIT

// Tokens para booleanos
%precedence BIS_VERDADERO
%precedence BIS_FALSO

// Tokens de los operadores aritmeticos
%left BIS_MAS BIS_MENOS
%left BIS_PRODUCTO BIS_DIV_REAL BIS_MOD BIS_DIV
%precedence BIS_NEG

// Tokens de los operadores relacionales
%left BIS_O 
%left BIS_Y
%left BIS_OPREL
%precedence BIS_NO


// Tokens sentencias control de flujo
%token BIS_SI
%token BIS_SI_NO_SI
%token BIS_FSI

%token BIS_ENTONCES
%token BIS_MIENTRAS
%token BIS_FMIENTRAS

%token BIS_HACER
%token BIS_PARA
%token BIS_HASTA
%token BIS_FPARA

%token BIS_CONTINUAR

// Tokens de acciones - funciones
%token BIS_ALGORITMO
%token BIS_FALGORITMO

%token BIS_FUNCION
%token BIS_FFUNCION

%token BIS_ACCION
%token BIS_FACCION

%token BIS_ENT
%token BIS_SAL
%token BIS_ENT_SAL
%token BIS_DEV

// Tokens para variables
%token BIS_TIPO
%token BIS_IGUAL
%token BIS_FTIPO

%token BIS_CONST
%token BIS_FCONST

%token BIS_VAR
%token BIS_FVAR

%token BIS_TUPLA
%token BIS_FTUPLA
%token BIS_TABLA
%token BIS_DE
%token BIS_SUBRANGO

%token BIS_ASIG_TIPO


%token BIS_COMA
%left BIS_PAR_A BIS_PAR_C

%token BIS_BOOLEANO
%token BIS_CADENA
%token BIS_CARACTER
%token BIS_ENTERO
%token BIS_REAL

// Tokens para operaciones de punteros
%right BIS_PUNTO BIS_REF BIS_COR_A 
%token BIS_COR_C

%%

desc_algoritmo: 
    BIS_ALGORITMO BIS_IDENTIFICADOR BIS_PUNTO_COMA cabecera_alg bloque_alg BIS_FALGORITMO BIS_PUNTO {printf("desc_algoritmo 0\n");}
;

cabecera_alg:
    decl_globales decl_a_f decl_ent_sal BIS_COMENTARIO {printf("cabecera_alg 0\n");}
;

bloque_alg:
    bloque BIS_COMENTARIO {printf("bloque_alg 0\n");} 
;

decl_globales: 
    declaracion_tipo decl_globales {printf("decl_globales 0\n");}
    | declaracion_const decl_globales {printf("decl_globales 1 \n");}
    | %empty {printf("decl_globales 2 \n");}
;

decl_a_f:
    accion_d decl_a_f {printf("decl_a_f 0\n");}
    | funcion_d decl_a_f {printf("decl_a_f 1\n");}
    | %empty {printf("decl_a_f 2\n");}
;
accion_d:
    BIS_ACCION a_cabecera bloque BIS_FACCION {printf("accion_d 0 \n");}
;

funcion_d:
    BIS_FUNCION f_cabecera bloque BIS_DEV expresion BIS_FFUNCION {printf("funcion_d 0\n");}
;

a_cabecera:
    BIS_IDENTIFICADOR BIS_PAR_A d_par_form BIS_PAR_C BIS_PUNTO_COMA {printf("a_cabecera 0 \n");}
;

f_cabecera:
    BIS_IDENTIFICADOR BIS_PAR_A lista_d_var BIS_PAR_C BIS_DEV d_tipo BIS_PUNTO_COMA {printf("f_cabecera 0\n");}
;

d_par_form:
    d_p_form BIS_PUNTO_COMA d_par_form {printf("d_par_form 0\n");}
    | %empty {printf("d_par_form 1\n");}
;

d_p_form:
    BIS_ENT lista_id BIS_ASIG_TIPO d_tipo {printf("d_p_form 0\n");}
    | BIS_SAL lista_id BIS_ASIG_TIPO d_tipo {printf("d_p_form 1\n");}
    | BIS_ENT_SAL lista_id BIS_ASIG_TIPO d_tipo {printf("d_p_form 2\n");}
;
    
bloque: 
    declaraciones instrucciones {printf("bloque 0\n");}
;

declaraciones:
    declaracion_tipo declaraciones {printf("declaraciones 0\n");}
    | declaracion_const declaraciones  {printf("declaraciones 1\n");}
    | declaracion_var declaraciones {printf("declaraciones 2\n");}
    | %empty {printf("declaraciones 3\n");}
;

declaracion_tipo:
    BIS_TIPO lista_d_tipo BIS_FTIPO BIS_PUNTO_COMA {printf("declaracion_tipo 0\n");}
;

declaracion_const:
    BIS_CONST lista_d_cte BIS_FCONST BIS_PUNTO_COMA {printf("declaracion_const 0\n");}
;

declaracion_var:
    BIS_VAR lista_d_var BIS_FVAR BIS_PUNTO_COMA {printf("declaracion_var 0\n");}
;

decl_ent_sal:
    %empty {printf("decl_ent_sal 0\n");}
;


lista_d_tipo:
    BIS_IDENTIFICADOR BIS_IGUAL d_tipo BIS_PUNTO_COMA {printf("lista_d_tipo 0\n");}
    | %empty {printf("lista_d_tipo 1\n");}
;

d_tipo:
    BIS_TUPLA lista_campos BIS_FTUPLA {printf("d_tipo 0\n");}
    | BIS_TABLA BIS_COR_A expresion_t BIS_SUBRANGO expresion_t BIS_COR_C BIS_DE d_tipo {printf("d_tipo 1\n");}
    | BIS_IDENTIFICADOR {printf("d_tipo 2\n");}
    | expresion_t BIS_SUBRANGO expresion_t {printf("d_tipo 3\n");}
    | BIS_REF d_tipo {printf("d_tipo 4\n");}
    | BIS_TIPO_BASE {printf("d_tipo 5\n");}
;

expresion_t:
    expresion {printf("expresion_t 0\n");}
    | BIS_LETRA_O_CIFRA {printf("expresion_t 1\n");}
;

lista_campos: 
    BIS_IDENTIFICADOR BIS_ASIG_TIPO d_tipo BIS_PUNTO_COMA lista_campos {printf("lista_campos 0\n");}
    | %empty {printf("lista_campos 1\n");}
;

lista_d_cte:
    BIS_IDENTIFICADOR BIS_IGUAL BIS_LITERAL BIS_PUNTO_COMA lista_d_cte {printf("lista_d_cte 0\n");}
    | %empty {printf("lista_d_cte 1\n");}
;

lista_d_var:
    lista_id BIS_ASIG_TIPO BIS_IDENTIFICADOR BIS_PUNTO_COMA lista_d_var {printf("lista_d_var 0\n");}
    | lista_id BIS_PUNTO_COMA d_tipo BIS_PUNTO_COMA lista_d_var {printf("lista_d_var 1\n");}
    | %empty {printf("lista_d_var 2\n");}
;

lista_id:
    BIS_IDENTIFICADOR BIS_COMA lista_id {printf("lista_id 0\n");}
    | BIS_IDENTIFICADOR {printf("lista_id 1\n");}
;

expresion:
    %empty
    | exp_a {printf("expresion 0\n");}
;

exp_a:
    exp_a BIS_MAS exp_a {printf("exp_a 0\n");}
    | exp_a BIS_MENOS exp_a {printf("exp_a 1\n");}
    | exp_a BIS_PRODUCTO exp_a {printf("exp_a 2\n");}
    | exp_a BIS_DIV_REAL exp_a {printf("exp_a 3\n");}
    | exp_a BIS_MOD exp_a {printf("exp_a 4\n");}
    | exp_a BIS_DIV exp_a {printf("exp_a 5\n");}
    | BIS_PAR_A exp_a BIS_PAR_C {printf("exp_a 6\n");}
    | operando {printf("exp_a 7\n");}
    | BIS_DR_REAL {printf("exp_a 8\n");}
    | BIS_DR_ENTERO {printf("exp_a bis_entero\n");}
    | BIS_NEG exp_a {printf("exp_a 9\n");}
    | exp_a BIS_Y exp_a {printf("exp_a 10\n");}
    | exp_a BIS_O exp_a {printf("exp_a 11\n");}
    | BIS_NO exp_a {printf("exp_a 12\n");}
    | BIS_VERDADERO {printf("exp_a 13\n");}
    | BIS_FALSO {printf("exp_a 14\n");}
    | expresion BIS_OPREL expresion {printf("exp_a 15\n");}
;

operando:
    BIS_IDENTIFICADOR {printf("operando 0\n");}
    | operando BIS_PUNTO operando {printf("operando 1\n");}
    | operando BIS_COR_A expresion BIS_COR_C {printf("operando 2\n");}
    | operando BIS_REF {printf("operando 3\n");}
;

instrucciones:
    instruccion BIS_PUNTO_COMA instrucciones  {printf("instrucciones 0\n");}
    |instruccion {printf("instrucciones 1\n");}
;

instruccion:
    BIS_CONTINUAR {printf("instruccion 0\n");}
    | asignacion {printf("instruccion 1\n");}
    | alternativa {printf("instruccion 2\n");}
    | iteracion {printf("instruccion 3\n");}
;

asignacion:
    operando BIS_ASIG expresion {printf("asignacion\n");}
;

alternativa:
    BIS_SI expresion BIS_ENTONCES instrucciones lista_opciones BIS_FSI {printf("alternativa\n");}
;

lista_opciones:
    BIS_SI_NO_SI expresion BIS_ENTONCES instrucciones lista_opciones  {printf("lista_opciones 0\n");}
    | %empty {printf("lista_opciones 1\n");}
;

iteracion:
    it_cota_fija {printf("iteracion 0\n");}
    | it_cota_exp {printf("iteracion 1\n");}
;

it_cota_fija:
    BIS_PARA BIS_IDENTIFICADOR BIS_ASIG expresion BIS_HASTA expresion BIS_HACER instrucciones BIS_FPARA {printf("it_cota_fija\n");}
;

it_cota_exp:
    BIS_MIENTRAS expresion BIS_HACER instrucciones BIS_FMIENTRAS {printf("it_cota_exp\n");}
;
%%
extern FILE *yyin;
int main( int argc, char **argv ){
    ++argv, --argc;
    if ( argc > 0 )
        yyin = fopen( argv[0], "r" );
    else
        yyin = stdin;
    yyparse();
}

void yyerror(const char *s){
    exit(-1);
}
