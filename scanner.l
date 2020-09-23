/*Autores: Fermin  Gascon, Yaiza Gómez*/
/* escáner para un lenguaje de juguete al estilo de Pascal */


%{
/* Librerias*/
#include <math.h>
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
dr_cocheteCerrar \}
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
dr_literal_booleano "verdadero"|"falso"
dr_literal_caracter \"{letra}+\"
dr_literal_cadena "'"[^\"]*"'"

/* Comentarios */ 
dr_precondicion "{"Pre.*"}"
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
pr_i (?i:"i")
pr_booleano (?i:"booleano")
pr_entero (?i:"entero")
pr_caracter (?i:"caracter")
pr_real (?i:"real")
pr_cadena (?i:"cadena")




%%
{dr_literal_entero} printf( "Tipo de variable. Entero: %s\n", yytext);
{dr_literal_booleano} printf( "Tipo de variable. Booleana: %s\n", yytext);
{dr_literal_real} printf( "Tipo de variable. Real: %s\n", yytext);
{dr_literal_caracter} printf( "Tipo de variable. Caracter: %s\n", yytext);
{dr_literal_cadena} printf( "Tipo de variable. Cadena: %s\n", yytext);
{dr_algoritmo} printf( "Tipo de variable. Cadena: %s\n", yytext);
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
