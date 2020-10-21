%{
  #include <stdio.h>
  #include <math.h>
  #include <stdlib.h>
  #include "tablasimbolos.h"
  #include "cuadruplas.h"
  #include "funciones_bool.h"
  #define ENTERO 1
  #define REAL 2
  #define BOOL 3
  #define CHAR 4
  #define CADENA 5
  
  void yyerror (char const *);
  extern FILE *yyin;
  extern int yylex();
  extern int yyparse();
  lista tabla_s;
  tabla_cuadruplas tc;
%}

%union YYSTYPE{
    char* sval;
    int ival;
    float fval;
    struct AE{
        int place;
        int type;
        
        //Las siguientes se utilizan sólo en el caso de las expresiones booleanas
        struct lista_bool *l_true;
        struct lista_bool *l_false;
        struct lista_bool *next;
        int quad;
    }ExpArit;
/*
    struct CF{
    	struct lista_bool *next
    }*/
    // Crear makelist(valor) -> Genera una BE con un indice
    // Crear merge(lista de listas) -> Devuelve union de las listas
    // Backpatch(lista,valor) -> Recorre la lista y completa diciendo que quad = valor
}
// Para las expresiones
%type <ExpArit> asignacion
%type <ExpArit> exp_logicas
%type <ExpArit> exp_a
%type <ExpArit> expresion
%type <ival> lista_id
%type <ExpArit> operando

//Para el control de flujo
/*%type alternativa
%type iteracion
// Tokens generales*/
%token <sval> BIS_IDENTIFICADOR
%token BIS_LETRA_O_CIFRA
%token <fval> BIS_DR_REAL
%token <ival> BIS_DR_ENTERO
%token BIS_PUNTO_COMA
%token BIS_COMENTARIO
%token BIS_ASIG
%token BIS_LITERAL
%token <ival>BIS_TIPO_BASE

// Tokens para booleanos
%precedence BIS_VERDADERO
%precedence BIS_FALSO

// Tokens de los operadores aritmeticos
%left BIS_MENOS BIS_MAS
%left BIS_PRODUCTO BIS_DIV_REAL BIS_MOD BIS_DIV

// Tokens de los operadores relacionales
%left BIS_O 
%left BIS_Y
%left <ival> BIS_OPREL
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


// Tokens para operaciones de punteros
%right BIS_PUNTO BIS_REF BIS_COR_A 
%token BIS_COR_C

%%

desc_algoritmo: 
    BIS_ALGORITMO BIS_IDENTIFICADOR BIS_PUNTO_COMA cabecera_alg bloque_alg BIS_FALGORITMO {printf("Reduce: desc_algoritmo 0\n");}
;

cabecera_alg:
    decl_globales decl_a_f decl_ent_sal BIS_COMENTARIO {printf("Reduce: cabecera_alg 0\n");}
;


bloque_alg:
    bloque BIS_COMENTARIO {printf("Recorriendo la tabla\n");}   
;

decl_globales: 
    declaracion_tipo decl_globales {printf("Reduce: decl_globales 0\n");}
    | declaracion_const decl_globales {printf("Reduce: decl_globales 1 \n");}
    | %empty {printf("Reduce: decl_globales 2 \n");}
;

decl_a_f:
    accion_d decl_a_f {printf("Reduce: decl_a_f 0\n");}
    | funcion_d decl_a_f {printf("Reduce: decl_a_f 1\n");}
    | %empty {printf("Reduce: decl_a_f 2\n");}
;
accion_d:
    BIS_ACCION a_cabecera bloque BIS_FACCION {printf("Reduce: accion_d 0 \n");}
;

funcion_d:
    BIS_FUNCION f_cabecera bloque BIS_DEV expresion BIS_FFUNCION {printf("Reduce: funcion_d 0\n");}
;

a_cabecera:
    BIS_IDENTIFICADOR BIS_PAR_A d_par_form BIS_PAR_C BIS_PUNTO_COMA {printf("Reduce: a_cabecera 0 \n");}
;

f_cabecera:
    BIS_IDENTIFICADOR BIS_PAR_A lista_d_var BIS_PAR_C BIS_DEV d_tipo BIS_PUNTO_COMA {printf("Reduce: f_cabecera 0\n");}
;

d_par_form:
    d_p_form BIS_PUNTO_COMA d_par_form {printf("Reduce: d_par_form 0\n");}
    | %empty {printf("Reduce: d_par_form 1\n");}
;

d_p_form:
    BIS_ENT lista_id BIS_ASIG_TIPO d_tipo {printf("Reduce: d_p_form 0\n");}
    | BIS_SAL lista_id BIS_ASIG_TIPO d_tipo {printf("Reduce: d_p_form 1\n");}
    | BIS_ENT_SAL lista_id BIS_ASIG_TIPO d_tipo {printf("Reduce: d_p_form 2\n");}
;
    
bloque: 
    declaraciones instrucciones {printf("Reduce: bloque 0\n");}
;

declaraciones:
    declaracion_tipo declaraciones {printf("Reduce: declaraciones 0\n");}
    | declaracion_const declaraciones  {printf("Reduce: declaraciones 1\n");}
    | declaracion_var declaraciones {printf("Reduce: declaraciones 2\n");}
    | %empty {printf("Reduce: declaraciones 3\n");}
;

declaracion_tipo:
    BIS_TIPO lista_d_tipo BIS_FTIPO BIS_PUNTO_COMA {printf("Reduce: declaracion_tipo 0\n");}
;

declaracion_const:
    BIS_CONST lista_d_cte BIS_FCONST BIS_PUNTO_COMA {printf("Reduce: declaracion_const 0\n");}
;

declaracion_var:
    BIS_VAR lista_d_var BIS_FVAR BIS_PUNTO_COMA {printf("Reduce: declaracion_var 0\n");}
;

decl_ent_sal:
    decl_ent {printf("Reduce: decl_ent_sal 0\n");}
    | decl_ent decl_sal {printf("Reduce: decl_ent_sal 1\n");}
    | decl_sal {printf("Reduce: decl_ent_sal 2\n");}
    | %empty {printf("Reduce: decl_ent_sal 3\n");}
;

decl_ent:
    BIS_ENT lista_d_var {printf("Reduce: decl_ent 0\n");}
;   

decl_sal:
    BIS_SAL lista_d_var {printf("Reduce: decl_sal 0\n");}
;


lista_d_tipo:
    BIS_IDENTIFICADOR BIS_IGUAL d_tipo BIS_PUNTO_COMA {printf("Reduce: lista_d_tipo 0\n");}
    | %empty {printf("Reduce: lista_d_tipo 1\n");}
;

d_tipo:
    BIS_TUPLA lista_campos BIS_FTUPLA {printf("Reduce: d_tipo 0\n");}
    | BIS_TABLA BIS_COR_A expresion_t BIS_SUBRANGO expresion_t BIS_COR_C BIS_DE d_tipo {printf("Reduce: d_tipo 1\n");}
    | BIS_IDENTIFICADOR {printf("Reduce: d_tipo 2\n");}
    | expresion_t BIS_SUBRANGO expresion_t {printf("Reduce: d_tipo 3\n");}
    | BIS_REF d_tipo {printf("Reduce: d_tipo 4\n");}
    | BIS_TIPO_BASE {printf("Reduce: d_tipo 5\n");}
;

expresion_t:
    expresion {printf("Reduce: expresion_t 0\n");}
    | BIS_LETRA_O_CIFRA {printf("Reduce: expresion_t 1\n");}
;

lista_campos: 
    BIS_IDENTIFICADOR BIS_ASIG_TIPO d_tipo BIS_PUNTO_COMA lista_campos {printf("Reduce: lista_campos 0\n");}
    | %empty {printf("Reduce: lista_campos 1\n");}
;

lista_d_cte:
    BIS_IDENTIFICADOR BIS_IGUAL BIS_LITERAL BIS_PUNTO_COMA lista_d_cte {printf("Reduce: lista_d_cte 0\n");}
    | %empty {printf("Reduce: lista_d_cte 1\n");}
;

lista_d_var:
    lista_id  BIS_PUNTO_COMA lista_d_var {printf("Reduce: lista_d_var 0\n");
                                        }
    | lista_id BIS_PUNTO_COMA d_tipo BIS_PUNTO_COMA lista_d_var {printf("Reduce: lista_d_var 1\n");}
    | %empty {printf("Reduce: lista_d_var 2\n");}
;

lista_id:
    BIS_IDENTIFICADOR BIS_COMA lista_id {printf("Reduce: lista_id 0\n"); 
                                            printf("Nombre del identificador: %s\n",$1);
					    if (((celda*)buscar_variable_nombre(tabla_s,$1)) == NULL){
                                            	modificar_tipo(&tabla_s,nueva_entrada(&tabla_s,$1),$3);
                                            	$$ = $3;
					    }else{
						log_err(5,$1);
					    }
                                        }
                                        
    | BIS_IDENTIFICADOR BIS_ASIG_TIPO BIS_TIPO_BASE {printf("Reduce: lista_id 1\n");
                            printf("Nombre del identificador: %s\n",$1);
			    if (((celda*)buscar_variable_nombre(tabla_s,$1)) == NULL){
                            	modificar_tipo(&tabla_s,nueva_entrada(&tabla_s,$1),$3);
                            	$$ = $3;
			    }else{
				log_err(5,$1);
			    }
                        }
;

expresion:
    %empty {printf("Reduce: expresion 0\n");}
    | exp_a {printf("Reduce: expresion 1\n");
                $$.place = $1.place;
                $$.type = $1.type;
            }
;

exp_a:
    operando {printf("Reduce: exp_a 0\n");
            $$.place = $1.place;
            $$.type = $1.type;
            if ($1.type == BOOL){
                $$.l_true = makelist(tc.nextquad);
                $$.l_false = makelist(tc.nextquad+1);
                gen(OP_GOTO_COND,$1.place,NULL,NULL,&tc);
                gen(OP_GOTO,NULL,NULL,NULL,&tc);
            }
        }
    | exp_a BIS_MENOS exp_a {printf("Reduce: exp_a 1\n");
                                    int ssid = nueva_entrada(&tabla_s,NULL);
                                    $$.place = ssid;
                                    if ($1.type == ENTERO && $3.type == ENTERO){
                                        modificar_tipo(&tabla_s,ssid, ENTERO);
                                        gen(OP_RESTA_ENTERO,$1.place,$3.place,$$.place,&tc);
                                        $$.type = ENTERO;
                                    }else if ($1.type == REAL && $3.type == ENTERO){
                                        modificar_tipo(&tabla_s,ssid, REAL);
                                        gen(OP_RESTA_REAL,$1.place,$3.place,$$.place,&tc);
                                        $$.type = REAL;
                                    }else if($1.type == ENTERO && $3.type == REAL){
                                        modificar_tipo(&tabla_s,ssid, REAL);
                                        gen(OP_RESTA_REAL,$1.place,$3.place,$$.place,&tc);
                                        $$.type = REAL;                                    
                                    }else if($1.type == REAL && $3.type == REAL){
                                        modificar_tipo(&tabla_s,ssid, REAL);
                                        gen(OP_RESTA_REAL,$1.place,$3.place,$$.place,&tc);
                                        $$.type = REAL;                                    
                                    }else{
                                        log_err(1);
                                    }
    }
    | exp_a BIS_PRODUCTO exp_a {printf("Reduce: exp_a 2\n");
                                    int ssid = nueva_entrada(&tabla_s,NULL);
                                    $$.place = ssid;
                                    if ($1.type == ENTERO && $3.type == ENTERO){
                                        modificar_tipo(&tabla_s,ssid, ENTERO);
                                        gen(OP_MULTI_ENTERO,$1.place,$3.place,$$.place,&tc);
                                        $$.type = ENTERO;
                                    }else if ($1.type == REAL && $3.type == ENTERO){
                                        modificar_tipo(&tabla_s,ssid, REAL);
                                        gen(OP_MULTI_REAL,$1.place,$3.place,$$.place,&tc);
                                        $$.type = REAL;
                                    }else if($1.type == ENTERO && $3.type == REAL){
                                        modificar_tipo(&tabla_s,ssid, REAL);
                                        gen(OP_MULTI_REAL,$1.place,$3.place,$$.place,&tc);
                                        $$.type = REAL;                                    
                                    }else if($1.type == REAL && $3.type == REAL){
                                        modificar_tipo(&tabla_s,ssid, REAL);
                                        gen(OP_MULTI_REAL,$1.place,$3.place,$$.place,&tc);
                                        $$.type = REAL;                                    
                                    }else{
                                        log_err(1);
                                    }
                                }
    | exp_a BIS_DIV_REAL exp_a {printf("Reduce: exp_a 3\n");
                                    if (($1.type == ENTERO || $1.type == REAL) && ($3.type == ENTERO || $3.type == REAL)){
                                        int ssid = nueva_entrada(&tabla_s,NULL);
                                        $$.place = ssid;
                                        gen(OP_DIV_REAL,$1.place,$3.place,$$.place,&tc);
                                        $$.type = REAL;
                                    }else{
                                        log_err(1);
                                    }
                                }
    | exp_a BIS_MOD exp_a {printf("Reduce: exp_a 4\n");
                                    if (($1.type == ENTERO) && ($3.type == ENTERO)){
                                        int ssid = nueva_entrada(&tabla_s,NULL);
                                        $$.place = ssid;
                                        gen(OP_MOD,$1.place,$3.place,$$.place,&tc);
                                        $$.type = ENTERO;
                                    }else{
                                        log_err(1);
                                    }}
    | exp_a BIS_DIV exp_a {printf("Reduce: exp_a 5\n");
                            if (($1.type == ENTERO) && ($3.type == ENTERO)){
                                        int ssid = nueva_entrada(&tabla_s,NULL);
                                        $$.place = ssid;
                                        gen(OP_DIV_ENT,$1.place,$3.place,$$.place,&tc);
                                        $$.type = ENTERO;
                                    }else{
                                        log_err(1);
                                    }
                            }
    | BIS_PAR_A exp_a BIS_PAR_C {printf("Reduce: exp_a 6\n");
                                    $$.place = $2.place;
                                    $$.type = $2.type;
                                    if ($$.type == BOOL){
                                            $$.l_true = $2.l_true;
                                            $$.l_false = $2.l_false;
                                    }
                                }
    | exp_a BIS_MAS exp_a {printf("Reduce: exp_a 7\n");
                                int ssid = nueva_entrada(&tabla_s,NULL);
                                $$.place = ssid;
                                if ($1.type == ENTERO && $3.type == ENTERO){
                                    modificar_tipo(&tabla_s,ssid, ENTERO);
                                    gen(OP_SUMA_ENTERO,$1.place,$3.place,$$.place,&tc);
                                    $$.type = ENTERO;
                                }else if ($1.type == REAL && $3.type == ENTERO){
                                    modificar_tipo(&tabla_s,ssid, REAL);
                                    gen(OP_SUMA_REAL,$1.place,$3.place,$$.place,&tc);
                                    $$.type = REAL;
                                }else if($1.type == ENTERO && $3.type == REAL){
                                    modificar_tipo(&tabla_s,ssid, REAL);
                                    gen(OP_SUMA_REAL,$1.place,$3.place,$$.place,&tc);
                                    $$.type = REAL;                                    
                                }else if($1.type == REAL && $3.type == REAL){
                                    modificar_tipo(&tabla_s,ssid, REAL);
                                    gen(OP_SUMA_REAL,$1.place,$3.place,$$.place,&tc);
                                    $$.type = REAL;                                    
                                }else{
                                    log_err(1);
                                }
                            }
    | BIS_DR_ENTERO {printf("Reduce: exp_a bis_entero\n");
                    int sid = nueva_entrada(&tabla_s,NULL);
                    modificar_tipo(&tabla_s,sid,ENTERO);
                    $$.place = sid;
                    $$.type = ENTERO;
                    }
    | BIS_DR_REAL {printf("Reduce: exp_a 8\n");
                    int sid = nueva_entrada(&tabla_s,NULL);
                    modificar_tipo(&tabla_s,sid,REAL);
                    $$.place = sid;
                    $$.type = REAL;
                    }
                        
    | BIS_MAS exp_a {printf("Suma unaria\n");
                        int ssid = nueva_entrada(&tabla_s,NULL);
                        modificar_tipo(&tabla_s, ssid, $2.type);
                        $$.place = ssid;
                        if (($2.type == ENTERO)){
                            gen(OP_SUMA_ENTERO_UNARIO,NULL,$2.place,$$.place, &tc);
                            $$.type = $2.type;
                        }else if ($2.type == REAL){
                            gen(OP_SUMA_REAL_UNARIO,NULL,$2.place,$$.place, &tc);
                            $$.type = $2.type;
                        }else{
                            log_err(2);
                        }
                    }
    | BIS_MENOS exp_a {printf("Reduce: exp_a 9\n");
                        int ssid = nueva_entrada(&tabla_s,NULL);
                        modificar_tipo(&tabla_s, ssid, $2.type);
                        $$.place = ssid;
                        if (($2.type == ENTERO)){
                            gen(OP_RESTA_ENTERO_UNARIO,NULL,$2.place,$$.place, &tc);
                            $$.type = $2.type;
                        }else if ($2.type == REAL){
                            gen(OP_RESTA_REAL_UNARIO,NULL,$2.place,$$.place, &tc);
                            $$.type = $2.type;
                        }else{
                            log_err(2);
                        }
                    }
    
    
    | exp_a BIS_Y exp_logicas exp_a {printf("Reduce: exp_a 10\n");
					if ($1.type == BOOL && $3.type == BOOL){
		                                backpatch($1.l_true,$3.quad);
		                                $$.l_false = merge_lists($1.l_false, $4.l_false);
		                                $$.l_true = $4.l_true;
					}else{
						log_err(4);
					}
                                    }
    | exp_a BIS_O exp_logicas exp_a {printf("Reduce: exp_a 11\n");
					if ($1.type == BOOL && $3.type == BOOL){
		                                backpatch($1.l_false,$3.quad);
		                                $$.l_true = merge_lists($1.l_true, $4.l_true);
		                                $$.l_false = $4.l_false;

					}else{
						log_err(4);
                                    	}
				    }
    | BIS_NO exp_a {printf("Reduce: exp_a 12\n");
                        if ($2.type == BOOL){
                                $$.l_true = $2.l_false;
                                $$.l_false = $2.l_true;
                        }else{
                            log_err(3);
                        }
                    }
    | BIS_VERDADERO {printf("Reduce: exp_a 13\n");
                        int sid = nueva_entrada(&tabla_s,NULL);
                        modificar_tipo(&tabla_s,sid,BOOL);
                        $$.place = sid;
                        $$.type = BOOL;
                    }
    | BIS_FALSO {printf("Reduce: exp_a 14\n");
                    int sid = nueva_entrada(&tabla_s,NULL);
                    modificar_tipo(&tabla_s,sid,BOOL);
                    $$.place = sid;
                    $$.type = BOOL;
                }
                
    | exp_a BIS_OPREL exp_a {printf("Reduce: exp_a 15\n");
                                        $$.type = BOOL;
                                        $$.l_true = makelist(tc.nextquad);
                                        $$.l_false = makelist(tc.nextquad+1);
                                        gen($2,$1.place,$3.place,NULL,&tc);
                                        gen(OP_GOTO,NULL,NULL,NULL,&tc);
                                    }
;

exp_logicas:
    %empty {$$.quad = tc.nextquad;}
;

operando:
    BIS_IDENTIFICADOR {printf("Reduce: operando 0\n");
                        printf("Valor del ID: %s\n",$1);
                        $$.place = ((celda*)buscar_variable_nombre(tabla_s,$1))->sid;
                        $$.type = ((celda*)buscar_variable_nombre(tabla_s,$1))->tipo;
                        }
    | operando BIS_PUNTO operando {printf("Reduce: operando 1\n");}
    | operando BIS_COR_A expresion BIS_COR_C {printf("Reduce: operando 2\n");}
    | operando BIS_REF {printf("Reduce: operando 3\n");}
;

instrucciones:
    instruccion BIS_PUNTO_COMA instrucciones  {printf("Reduce: instrucciones 0\n");}
    |instruccion {printf("Reduce: instrucciones 1\n");}
    |%empty {printf("Reduce: instrucciones 2\n");}
;

instruccion:
    BIS_CONTINUAR {printf("Reduce: instruccion 0\n");}
    | asignacion {printf("Reduce: instruccion 1\n");}
    | alternativa {printf("Reduce: instruccion 2\n");}
    | iteracion {printf("Reduce: instruccion 3\n");}
;

asignacion:
    operando BIS_ASIG expresion {printf("Reduce: asignacion\n");
                                    if ($1.type == $3.type){
                                        if ($1.type == BOOL && $3.type == BOOL){
                                            backpatch($3.l_false,tc.nextquad);
                                            gen(OP_ASSIGN_FALSE,NULL,NULL,$1.place,&tc);
                                            gen(OP_GOTO,NULL,NULL,tc.nextquad+2,&tc);
                                            backpatch($3.l_true,tc.nextquad);
                                            gen(OP_ASSIGN_TRUE,NULL,NULL,$1.place,&tc);
                                        }else{
                                            gen(OP_ASIG,$3.place,NULL,$1.place, &tc);
                                            $$.type = $1.type;
                                        }
                                    }else if ($1.type == REAL && $3.type == ENTERO){
					printf("Distintos tipos\n");
                                        gen(OP_INTTOREAL,$3.place,NULL,$3.place, &tc);
                                        gen(OP_ASIG,$3.place,NULL,$1.place, &tc);
                                        $$.type = REAL;
                                    }else{
                                            log_err(1);
                                    }
                                }
;

alternativa:
    BIS_SI expresion BIS_ENTONCES instrucciones lista_opciones BIS_FSI {printf("Reduce: alternativa\n");}
;

lista_opciones:
    BIS_SI_NO_SI expresion BIS_ENTONCES instrucciones lista_opciones  {printf("Reduce: lista_opciones 0\n");}
    | %empty {printf("Reduce: lista_opciones 1\n");}
;

iteracion:
    it_cota_fija {printf("Reduce: iteracion 0\n");}
    | it_cota_exp {printf("Reduce: iteracion 1\n");}
;

it_cota_fija:
    BIS_PARA BIS_IDENTIFICADOR BIS_ASIG expresion BIS_HASTA expresion BIS_HACER instrucciones BIS_FPARA {printf("Reduce: it_cota_fija\n");}
;

it_cota_exp:
    BIS_MIENTRAS expresion BIS_HACER instrucciones BIS_FMIENTRAS {printf("Reduce: it_cota_exp\n");}
;
%%
int main( int argc, char **argv ){
    ++argv, --argc;
    ini_tabla(&tabla_s);
    inicializar_tabla_cuadruplas(&tc);
    if ( argc > 0 )
        yyin = fopen( argv[0], "r" );
    else
        yyin = stdin;
    yyparse();
    printf("\n\n------------------Constantes usadas en la tabla de cuadruplas-------------------------\n");
    mostrar_ctes_TC();
    printf("\n\n----------------------Tabla de cuadruplas-------------------------\n");
    recorrer(tc);
    printf("\n\n------------------------Tabla de simbolos-------------------------\n");
    recorrer_tabla_simbolos(tabla_s);
}

void yyerror(const char *s){
    exit(-1);
}

void backpatch (lista_bool *A, int quad){
    if (A != NULL){
	    if (A->primero != NULL){
		celda_bool *aux = A->primero;
		while (aux->sig != NULL){
		    modificar_cuadrupla(&tc, aux->inst, 3, quad);
		    aux = aux->sig;
		}
		modificar_cuadrupla(&tc, aux->inst, 3, quad);
	    }else{
		printf("Lista vacía\n");
	    }
    }
}

void log_err(int error,char* val){
   switch(error){
	case 1: printf("ERROR, tipos incompatibles\n");
		break;
	case 2: printf("ERROR, tipo incorrecto\n");
	   	break;
        case 3: printf("ERROR, se necesita un tipo booleano\n");
	   	break;
	case 4: printf("ERROR, los operadores Y y O sólo admiten expresiones booleanas\n");
		break;
	case 5: printf("ERROR, la variable %s ya está siendo utilizada\n",val);
		break;
	
   }
}
