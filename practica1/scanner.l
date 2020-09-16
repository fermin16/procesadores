/* Scanner para el lenguaje ProAlg */

%{
/* Librerias */
#include <math.h>
%}

/* Definiciones regulares */
delim [ \t\n]
eb {delim}+
letra [A-Za-z]
digito [0-9]
id {letra}({letra}|{digito})*
numero {digito}+(\.{digito}+)?(E[\+\-]?{digito}+)?
asignacion ":="
composicionSecuencial ";"
alternativa "->"
separador ","
subrango ".."
defTipoVar ":"
inicioArray "["
finArray "]"
inicioParentesis "("
finalParentesis ")"

/* Comparaciones */
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

/* Tipo */
tipo_booleano (?i:"verdadero")|(?i:"falso")
tipo_caracter \"{letra}+\"
tipo_cadena "'"[^\"]*"'"
tipo_entero \-?{digito}+
tipo_real {numero}
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
%%

{pr_algoritmo} printf( "Palabra Reservada. Inicio del algoritmo: %s\n", yytext);

{pr_falgoritmo} printf( "Palabra Reservada. Final del algoritmo: %s\n", yytext);

{pr_funcion} printf( "Palabra Reservada. Inicio funcion: %s\n", yytext);

{pr_ffuncion} printf( "Palabra Reservada. Fin funcion: %s\n", yytext);

{pr_accion} printf( "Palabra Reservada. Inicio accion: %s\n", yytext);

{pr_faccion} printf( "Palabra Reservada. Fin accion: %s\n", yytext);

{pr_tipo} printf( "Palabra Reservada. Inicio tipo: %s\n", yytext);

{pr_ftipo} printf( "Palabra Reservada. Fintipo: %s\n", yytext);

{pr_const} printf( "Palabra Reservada. Inicio constante: %s\n", yytext);

{pr_fconst} printf( "Palabra Reservada. Fin constante: %s\n", yytext);

{pr_var} printf( "Palabra Reservada. Inicio variable: %s\n", yytext);

{pr_fvar} printf( "Palabra Reservada. Fin variable: %s\n", yytext);

{pr_tupla} printf( "Palabra Reservada. Inicio tupla: %s\n", yytext);

{pr_ftupla} printf( "Palabra Reservada. Fin tupla: %s\n", yytext);

{pr_si} printf( "Palabra Reservada. Inicio instruccion condicional si: %s\n", yytext);

{pr_fsi}  printf( "Palabra Reservada. Final instruccion condicional si: %s\n", yytext);

{pr_entonces} printf( "Palabra Reservada. Entonces: %s\n", yytext);

{pr_para} printf( "Palabra Reservada. Inicio bucle para: %s\n", yytext);

{pr_fpara} printf( "Palabra Reservada. Fin bucle para: %s\n", yytext);

{pr_mientras} printf( "Palabra Reservada. Inicio bucle mientras: %s\n", yytext);

{pr_fmientras} printf( "Palabra Reservada. Fin bucle mientras: %s\n", yytext);

{pr_hacer} printf( "Palabra Reservada. Hacer: %s\n", yytext);

{pr_hasta} printf( "Palabra Reservada. Hasta: %s\n", yytext);

{pr_ent} printf( "Palabra Reservada. Entrada: %s\n", yytext);

{pr_sal} printf( "Palabra Reservada. Salida: %s\n", yytext);

{pr_sino} printf( "Palabra Reservada. Si no: %s\n", yytext);

{pr_entradaSalida} printf( "Palabra Reservada. e/s: %s\n", yytext);

{pr_continuar} printf( "Palabra Reservada. Continuar: %s\n", yytext);

{pr_de} printf( "Palabra Reservada. De: %s\n", yytext);

{pr_no} printf( "Palabra Reservada. No: %s\n", yytext);

{pr_ref} printf( "Palabra Reservada. Ref: %s\n", yytext);

{pr_tabla} printf( "Palabra Reservada. Tabla: %s\n", yytext);

{tipo_def_booleano} printf( "Tipo de variable. Booleana: %s\n", yytext);

{tipo_def_caracter} printf( "Tipo de variable. Caracter: %s\n", yytext);

{tipo_def_cadena} printf( "Tipo de variable. Cadena: %s\n", yytext);

{tipo_def_entero} printf( "Tipo de variable. Entero: %s\n", yytext);

{tipo_def_real} printf( "Tipo de variable. Real: %s\n", yytext);

{pr_o} printf( "Unión: %s\n", yytext );

{pr_y} printf( "Interseccion: %s\n", yytext );

{op_suma} printf( "Operador suma: %s\n", yytext );

{op_resta} printf( "Operador resta: %s\n", yytext );

{op_producto} printf( "Operador producto: %s\n", yytext );

{op_div} printf( "Operador division: %s\n", yytext );

{op_divisionEntera} printf( "Operador division entero: %s\n", yytext );

{op_mod} printf( "Operador resto division: %s\n", yytext );

{asignacion} printf( "Asignacion: %s\n", yytext );

{alternativa} printf( "Alternativa a entonces: %s\n", yytext );

{separador} printf( "Separador: %s\n", yytext );

{tipo_booleano} printf( "Booleano: %s\n", yytext );

{tipo_caracter} printf( "Caracter: %s\n", yytext );

{tipo_cadena} printf( "Cadena: %s\n", yytext );

{tipo_entero} printf( "Numero Entero: %s\n", yytext );

{tipo_real} printf( "Numero Real: %s\n", yytext );

{precondicion} printf( "Precondicion: %s\n", yytext );

{postcondicion} printf( "Postcondicion: %s\n", yytext );

{comentario} printf( "Comentario: %s\n", yytext );

{composicionSecuencial} printf( "Composicion Secuencial: %s\n", yytext );

{subrango} printf( "Subrango: %s\n", yytext );

{defTipoVar} printf( "Definicion tipo variable: %s\n", yytext );

{inicioArray} printf( "Inicio Array: %s\n", yytext );

{finArray} printf( "Fin Array: %s\n", yytext );

{inicioParentesis} printf( "Parentesis inicial: %s\n", yytext );

{finalParentesis} printf( "Parentesis final: %s\n", yytext );

{comp_igual} printf( "Comparacion igualdad: %s\n", yytext );

{comp_menorigual} printf( "Comparacion menor o igual que: %s\n", yytext );

{comp_mayorigual} printf( "Comparacion mayor o igual que:  %s\n", yytext );

{comp_mayor} printf( "Comparacion mayor que:  %s\n", yytext );

{comp_menor} printf( "Comparacion menor que: %s\n", yytext );

{comp_desigual} printf( "Comparacion desigualdad: %s\n", yytext );

{id} printf( "Identificador: %s\n", yytext );

"{"[\^{}}\n]*"}"     /* Nos comemos loscomentarios de una linea */

[ \t\n]+          /* Nos comemos los espacios en blanco */

.           printf( "Caracter no reconocido: %s\n", yytext );

%%

int main( int argc, char **argv )
     {
     ++argv, --argc;  /* Nos saltamos el nombre del programa */
     if ( argc > 0 )
             yyin = fopen( argv[0], "r" );
     else
             yyin = stdin;

     yylex();
     }
