%{
  #include <stdio.h>
  #include <math.h>
  #include <stdlib.h>
%}


letra [A-Za-z]
cifra [0-9]


/*caracteres especiales*/
%token bis_dr_comillas \"
%token bis_dr_barraInclinada \\
%token bis_dr_parentesisAbrir \(
%token bis_dr_parentesisCerrar \)
%token bis_dr_igual \=
%token bis_dr_arrayAbrir \[
%token bis_dr_arrayCerrar \]
%token bis_dr_corcheteAbrir \{
%token bis_dr_corcheteCerrar \}
%token bis_dr_suma \+
%token bis_dr_resta \-
%token bis_dr_multiplicacion \*
%token bis_dr_coma \,
%token bis_dr_puntoComa \;
%token bis_dr_punto \.
%token bis_dr_dosPuntos \:
%token bis_dr_barraBaja \_
%token bis_dr_mayor \>
%token bis_dr_menor \<
%token bis_dr_alternativa \->
%token bis_dr_asignacion \:=

/*comparaciones*/
%token bis_dr_menorIgual \<=
%token bis_dr_mayorIgual \>=
%token bis_dr_desigual \<>

/*Separadores*/
%token bis_dr_espacio " "
%token bis_dr_tabulador "\t"
%token bis_dr_saltoLinea "\n"

/*identificadores*/
id {letra}({letra}|{cifra})*
letraOcifra {letra}|{cifra}

/*literales*/
%token bis_dr_literal_entero [+\-]?{cifra}{cifra}*([eE]{cifra}{cifra}*)?
%token bis_dr_literal_real [+\-]?{cifra}{cifra}*(.{cifra}{cifra}*)?([eE]{cifra}{cifra}*)?
%token bis_dr_literal_booleano (?i:"verdadero")|(?i:"falso")
%token bis_dr_literal_caracter \"{letra}+\"
%token bis_dr_literal_cadena "'"[^\"]*"'"

/* Comentarios */ 
%token bis_dr_precondicion "{"Pre.*"}"
%token bis_dr_postcondicion "{"Post.*"}"
%token bis_dr_comentario "{".*"}"


/*palabras reservadas*/
%token bis_pr_algoritmo (?i:"algoritmo")
%token bis_pr_falgoritmo (?i:"falgoritmo")
%token bis_pr_funcion (?i:"funcion")
%token bis_pr_ffuncion (?i:"ffuncion")
%token bis_pr_accion (?i:"accion")
%token bis_pr_faccion (?i:"faccion")
%token bis_pr_tipo (?i:"tipo")
%token bis_pr_ftipo (?i:"ftipo")
%token bis_pr_const (?i:"const")
%token bis_pr_fconst (?i:"fconst")
%token bis_pr_var (?i:"var")
%token bis_pr_fvar (?i:"fvar")
%token bis_pr_tupla (?i:"tupla")
%token bis_pr_ftupla (?i:"ftupla")
%token bis_pr_si (?i:"si")
%token bis_pr_fsi (?i:"fsi")
%token bis_pr_para (?i:"para")
%token bis_pr_fpara (?i:"fpara")
%token bis_pr_mientras (?i:"mientras")
%token bis_pr_fmientras (?i:"fmientras")
%token bis_pr_hasta (?i:"hasta")
%token bis_pr_hacer (?i:"hacer")
%token bis_pr_entonces (?i:"entonces")
%token bis_pr_ent (?i:"ent")
%token bis_pr_sal (?i:"sal")
%token bis_pr_sino "[]"
%token bis_pr_entradaSalida (?i:"e/s")
%token bis_pr_continuar (?i:"continuar")
%token bis_pr_de (?i:"de")
%token bis_pr_div (?i:"div")
%token bis_pr_mod (?i:"mod")
%token bis_pr_no (?i:"no")
%token bis_pr_ref (?i:"ref")
%token bis_pr_tabla (?i:"tabla")
%token bis_pr_o (?i:"o")
%token bis_pr_y (?i:"y")
%token bis_pr_booleano (?i:"booleano")
%token bis_pr_entero (?i:"entero")
%token bis_pr_caracter (?i:"caracter")
%token bis_pr_real (?i:"real")
%token bis_pr_cadena (?i:"cadena")
