/*Autores: Fermin  Gascon, Yaiza Gómez*/
/* escáner para un lenguaje de juguete al estilo de Pascal */


%{
/* Librerias*/
#include <math.h>
#include "parser.tab.h"
#include <string.h>

%}

/*Definiciones regulares*/

letra [A-Za-z]
cifra [0-9]


/*caracteres especiales*/
dr_comillas \"
dr_barraInclinada \\
dr_parentesisAbrir \(
dr_parentesisCerrar \)
dr_igual \=
dr_arrayAbrir \[
dr_arrayCerrar \]
dr_corcheteAbrir \{
dr_corcheteCerrar \}
dr_suma \+
dr_resta \-
dr_multiplicacion \*
dr_coma \,
dr_puntoComa \;
dr_punto \.
dr_dosPuntos \:
dr_barraBaja \_
dr_mayor \>
dr_menor \<
dr_alternativa \->
dr_asignacion \:=

/*comparaciones*/
dr_menorIgual \<=
dr_mayorIgual \>=
dr_desigual \<>

/*Separadores*/
dr_espacio " "
dr_tabulador "\t"
dr_saltoLinea "\n"

/*identificadores*/
id {letra}({letra}|{cifra})*
letraOcifra {letra}|{cifra}

/*literales*/
dr_literal_entero [+\-]?{cifra}{cifra}*([eE]{cifra}{cifra}*)?
dr_literal_real [+\-]?{cifra}{cifra}*(.{cifra}{cifra}*)?([eE]{cifra}{cifra}*)?
dr_literal_booleano (?i:"verdadero")|(?i:"falso")
dr_literal_caracter \"{letra}+\"
dr_literal_cadena "'"[^\"]*"'"

/* Comentarios */ 
dr_precondicion "{"Prec.*"}"
dr_postcondicion "{"Post.*"}"
dr_comentario "{".*"}"


/*palabras reservadas*/
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
pr_sino "[]"
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
{pr_o} {
    printf( "Palabra reservada. O : %s\n", yytext);
    return bis_o;
    }
{pr_y} { 
    printf( "Palabra reservada. Y: %s\n", yytext);
    return bis_y;}

{dr_parentesisAbrir} {
    printf( "Tipo de caracter. Parantesis abrir : %s\n", yytext);
    return bis_parentesisAbrir;}
{dr_parentesisCerrar} {
    printf( "Tipo de caracter. Parantesis cerrar : %s\n", yytext);
    return bis_parentesisCerrar;}
{dr_igual} {
    printf( "Tipo de caracter . Igual : %s\n", yytext);
    return bis_igual;}
{dr_corcheteAbrir} {
    printf( "Tipo de caracter. Abrir corchete : %s\n", yytext);
    return bis_corcheteAbrir;}
{dr_corcheteCerrar} {
    printf( "Tipo de caracter. Cerrer corchete: %s\n", yytext);
    return bis_corcheteCerrar;}
{dr_suma} {
    printf( "Tipo de operador. Suma : %s\n", yytext);
    return bis_suma;}
{dr_resta} {
    printf( "Tipo de operador. Resta : %s\n", yytext);
    return bis_resta;}
{dr_multiplicacion} {
    printf( "Tipo de operador. Multiplicacion : %s\n", yytext);
    return bis_multiplicacion;}
{dr_coma} {
    printf( "Tipo de caracter. Coma : %s\n", yytext);
    return bis_coma;}
{dr_puntoComa} {
    printf( "Tipo de caracter. Punto y coma: %s\n", yytext);
    return bis_puntoComa;}
{dr_punto} {
    printf( "Tipo de caracter. Punto : %s\n", yytext);
    return bis_punto;}
{dr_dosPuntos} {
    printf( "Tipo de caracter. Dos puntos : %s\n", yytext);
    return bis_dosPuntos;}
"<"|">"|"<="|">="|"=="|"<>" {
    printf( "Tipo de caracter. Operador logico : %s\n", yytext);
    return bis_oprel;}


{dr_asignacion} {
    printf( "Tipo de caracter. Asignacion: %s\n", yytext);
    return bis_asignacion;}


{letraOcifra} {
	printf( "Tipo de identificador. letra o cifra : %s\n", yytext);
	return bis_id;}


{dr_literal_entero} {
    printf( "Tipo de variable. Entero: %s\n", yytext);
    return bis_literal_entero;}
{dr_literal_real} {
    printf( "Tipo de variable. Real: %s\n", yytext);
    return bis_literal_real;}
{dr_literal_caracter} {
    printf( "Tipo de variable. Caracter: %s\n", yytext);
    return bis_literal_caracter;}

{dr_precondicion} {printf( "Tipo de comentario. Precondición : %s\n", yytext);
    return bis_comentario;}
{dr_postcondicion} {printf( "Tipo de comentario. Postcondicion : %s\n", yytext);
    return bis_comentario;}
{dr_comentario} {printf( "Comentario : %s\n", yytext);
    return bis_comentario;}

{pr_algoritmo} {
    printf( "Palabra reservada. Algoritmo : %s\n", yytext);
    return bis_algoritmo;}
{pr_falgoritmo} {
    printf( "Palabra reservada. Final algoritmo : %s\n", yytext);
    return bis_falgoritmo;}
{pr_funcion} {
    printf( "Palabra reservada. Funcion : %s\n", yytext);
    return bis_funcion;}
{pr_ffuncion} {
    printf( "Palabra reservada. Final funcion : %s\n", yytext);
    return bis_ffuncion;}
{pr_accion} {
    printf( "Palabra reservada. Accion: %s\n", yytext);
    return bis_accion;}
{pr_faccion} {
    printf( "Palabra reservada. Final accion: %s\n", yytext);
    return bis_faccion;}
{pr_tipo} {
    printf( "Palabra reservada. Tipo: %s\n", yytext);
    return bis_tipo;}
{pr_ftipo} {
    printf( "Palabra reservada. Final tipo: %s\n", yytext);
    return bis_ftipo;}
{pr_const} {
    printf( "Palabra reservada. Constante : %s\n", yytext);
    return bis_const;}
{pr_fconst} {
    printf( "Palabra reservada. Final constante : %s\n", yytext);
    return bis_fconst;}
{pr_var} {
    printf( "Palabra reservada. Variable : %s\n", yytext);
    return bis_var;}
{pr_fvar} {
    printf( "Palabra reservada. Final variable : %s\n", yytext);
    return bis_fvar;}
{pr_tupla} {
    printf( "Palabra reservada. Tupla : %s\n", yytext);
    return bis_tupla;}
{pr_ftupla} {
    printf( "Palabra reservada. Final tupla: %s\n", yytext);
    return bis_ftupla;}
{pr_si} {
    printf( "Palabra reservada. Si : %s\n", yytext);
    return bis_si;}
{pr_fsi} {
    printf( "Palabra reservada. Final si : %s\n", yytext);
    return bis_fsi;}
{pr_para} {
    printf( "Palabra reservada. Para: %s\n", yytext);
    return bis_para;}
{pr_fpara} {
    printf( "Palabra reservada. Final para : %s\n", yytext);
    return bis_fpara;}
{pr_mientras} {
    printf( "Palabra reservada. Mientras: %s\n", yytext);
    return bis_mientras;}
{pr_fmientras} {
    printf( "Palabra reservada. Final mientras: %s\n", yytext);
    return bis_fmientras;}
{pr_hasta} {
    printf( "Palabra reservada. Hasta: %s\n", yytext);
    return bis_hasta;}
{pr_hacer} {
    printf( "Palabra reservada. Hacer: %s\n", yytext);
    return bis_hacer;}
{pr_entonces} {printf( "Palabra reservada. Entonces: %s\n", yytext);}
{pr_ent} {
    printf( "Palabra reservada. Entrar : %s\n", yytext);
    return bis_ent;}
{pr_sal} {
    printf( "Palabra reservada. Salir : %s\n", yytext);
    return bis_sal;}
{pr_sino} {
    printf( "Palabra reservada. Sino : %s\n", yytext);
    return bis_sino;}
{pr_entradaSalida} {
    printf( "Palabra reservada. Entrada/Salida : %s\n", yytext);
    return bis_entradaSalida;}
{pr_continuar} {
    printf( "Palabra reservada. Continuar: %s\n", yytext);
    return bis_continuar;}
{pr_de} {
    printf( "Palabra reservada. De: %s\n", yytext);
    return bis_de;}
{pr_div} {
    printf( "Palabra reservada. Dividir: %s\n", yytext);
    return bis_div;}
{pr_mod} {
    printf( "Palabra reservada. Resto : %s\n", yytext);
    return bis_mod;}
{pr_no} {
    printf( "Palabra reservada. No : %s\n", yytext);
    return bis_no;}
{pr_ref} {
    printf( "Palabra reservada. Referencia : %s\n", yytext);
    return bis_ref;}
{pr_tabla} {
    printf( "Palabra reservada. Tabla : %s\n", yytext);
    return bis_tabla;}

{pr_booleano} {printf( "Palabra reservada. Booleano : %s\n", yytext);
return bis_tipo_base;}
{pr_entero} {printf( "Palabra reservada. Entero: %s\n", yytext);
return bis_tipo_base;}
{pr_caracter} {printf( "Palabra reservada. Caracter : %s\n", yytext);
return bis_tipo_base;}
{pr_real} {printf( "Palabra reservada. Real : %s\n", yytext);
return bis_tipo_base;}
{pr_cadena} {printf( "Palabra reservada. Cadena: %s\n", yytext);
return bis_tipo_base;}
{id} { printf( "Tipo de identificador. ID. : %s\n", yytext );
return bis_id;}

%%

