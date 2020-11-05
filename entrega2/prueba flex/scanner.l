/*Autores: Fermin  Gascon, Yaiza Gómez*/
/* escáner para un lenguaje de juguete al estilo de Pascal */


%{
/* Librerias*/
#include <math.h>
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
    
    }
{pr_y} { 
    printf( "Palabra reservada. Y: %s\n", yytext);
    }

{dr_parentesisAbrir} {
    printf( "Tipo de caracter. Parantesis abrir : %s\n", yytext);
    }
{dr_parentesisCerrar} {
    printf( "Tipo de caracter. Parantesis cerrar : %s\n", yytext);
    }
{dr_igual} {
    printf( "Tipo de caracter . Igual : %s\n", yytext);
    }
{dr_corcheteAbrir} {
    printf( "Tipo de caracter. Abrir corchete : %s\n", yytext);
    }
{dr_corcheteCerrar} {
    printf( "Tipo de caracter. Cerrer corchete: %s\n", yytext);
    }
{dr_suma} {
    printf( "Tipo de operador. Suma : %s\n", yytext);
    }
{dr_resta} {
    printf( "Tipo de operador. Resta : %s\n", yytext);
    }
{dr_multiplicacion} {
    printf( "Tipo de operador. Multiplicacion : %s\n", yytext);
    }
{dr_coma} {
    printf( "Tipo de caracter. Coma : %s\n", yytext);
    }
{dr_puntoComa} {
    printf( "Tipo de caracter. Punto y coma: %s\n", yytext);
    }
{dr_punto} {
    printf( "Tipo de caracter. Punto : %s\n", yytext);
    }
{dr_dosPuntos} {
    printf( "Tipo de caracter. Dos puntos : %s\n", yytext);
    }
"<"|">"|"<="|">="|"=="|"<>" {
    printf( "Tipo de caracter. Operador logico : %s\n", yytext);
    } 
{dr_asignacion} {
    printf( "Tipo de caracter. Asignacion: %s\n", yytext);
    }
{letraOcifra} printf( "Tipo de identificador. letra o cifra : %s\n", yytext);

{dr_literal_entero} {
    printf( "Tipo de variable. Entero: %s\n", yytext);
    }
{dr_literal_real} {
    printf( "Tipo de variable. Real: %s\n", yytext);
    }
{dr_literal_caracter} {
    printf( "Tipo de variable. Caracter: %s\n", yytext);
    }

{dr_precondicion} {printf( "Tipo de comentario. Precondición : %s\n", yytext);
    }
{dr_postcondicion} {printf( "Tipo de comentario. Postcondicion : %s\n", yytext);
    }
{dr_comentario} {printf( "Comentario : %s\n", yytext);
    }

{pr_algoritmo} {
    printf( "Palabra reservada. Algoritmo : %s\n", yytext);
    }
{pr_falgoritmo} {
    printf( "Palabra reservada. Final algoritmo : %s\n", yytext);
    }
{pr_funcion} {
    printf( "Palabra reservada. Funcion : %s\n", yytext);
    }
{pr_ffuncion} {
    printf( "Palabra reservada. Final funcion : %s\n", yytext);
    }
{pr_accion} {
    printf( "Palabra reservada. Accion: %s\n", yytext);
    }
{pr_faccion} {
    printf( "Palabra reservada. Final accion: %s\n", yytext);
    }
{pr_tipo} {
    printf( "Palabra reservada. Tipo: %s\n", yytext);
    }
{pr_ftipo} {
    printf( "Palabra reservada. Final tipo: %s\n", yytext);
    }
{pr_const} {
    printf( "Palabra reservada. Constante : %s\n", yytext);
    }
{pr_fconst} {
    printf( "Palabra reservada. Final constante : %s\n", yytext);
    }
{pr_var} {
    printf( "Palabra reservada. Variable : %s\n", yytext);
    }
{pr_fvar} {
    printf( "Palabra reservada. Final variable : %s\n", yytext);
    }
{pr_tupla} {
    printf( "Palabra reservada. Tupla : %s\n", yytext);
    }
{pr_ftupla} {
    printf( "Palabra reservada. Final tupla: %s\n", yytext);
    }
{pr_si} {
    printf( "Palabra reservada. Si : %s\n", yytext);
    }
{pr_fsi} {
    printf( "Palabra reservada. Final si : %s\n", yytext);
    }
{pr_para} {
    printf( "Palabra reservada. Para: %s\n", yytext);
    }
{pr_fpara} {
    printf( "Palabra reservada. Final para : %s\n", yytext);
    }
{pr_mientras} {
    printf( "Palabra reservada. Mientras: %s\n", yytext);
    }
{pr_fmientras} {
    printf( "Palabra reservada. Final mientras: %s\n", yytext);
    }
{pr_hasta} {
    printf( "Palabra reservada. Hasta: %s\n", yytext);
    }
{pr_hacer} {
    printf( "Palabra reservada. Hacer: %s\n", yytext);
    }
{pr_entonces} {printf( "Palabra reservada. Entonces: %s\n", yytext);}
{pr_ent} {
    printf( "Palabra reservada. Entrar : %s\n", yytext);
    }
{pr_sal} {
    printf( "Palabra reservada. Salir : %s\n", yytext);
    }
{pr_sino} {
    printf( "Palabra reservada. Sino : %s\n", yytext);
    }
{pr_entradaSalida} {
    printf( "Palabra reservada. Entrada/Salida : %s\n", yytext);
    }
{pr_continuar} {
    printf( "Palabra reservada. Continuar: %s\n", yytext);
    }
{pr_de} {
    printf( "Palabra reservada. De: %s\n", yytext);
    }
{pr_div} {
    printf( "Palabra reservada. Dividir: %s\n", yytext);
    }
{pr_mod} {
    printf( "Palabra reservada. Resto : %s\n", yytext);
    }
{pr_no} {
    printf( "Palabra reservada. No : %s\n", yytext);
    }
{pr_ref} {
    printf( "Palabra reservada. Referencia : %s\n", yytext);
    }
{pr_tabla} {
    printf( "Palabra reservada. Tabla : %s\n", yytext);
    }

{pr_booleano} {printf( "Palabra reservada. Booleano : %s\n", yytext);}
{pr_entero} {printf( "Palabra reservada. Entero: %s\n", yytext);}
{pr_caracter} {printf( "Palabra reservada. Caracter : %s\n", yytext);}
{pr_real} {printf( "Palabra reservada. Real : %s\n", yytext);}
{pr_cadena} {printf( "Palabra reservada. Cadena: %s\n", yytext);}
{id} { printf( "Tipo de identificador. ID. : %s\n", yytext );}

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
