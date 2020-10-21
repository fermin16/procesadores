/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    bis_comillas = 258,
    bis_barraInclinada = 259,
    bis_parentesisAbrir = 260,
    bis_parentesisCerrar = 261,
    bis_igual = 262,
    bis_arrayAbrir = 263,
    bis_arrayCerrar = 264,
    bis_corcheteAbrir = 265,
    bis_corcheteCerrar = 266,
    bis_suma = 267,
    bis_resta = 268,
    bis_multiplicacion = 269,
    bis_coma = 270,
    bis_puntoComa = 271,
    bis_punto = 272,
    bis_dosPuntos = 273,
    bis_barraBaja = 274,
    bis_mayor = 275,
    bis_menor = 276,
    bis_alternativa = 277,
    bis_asignacion = 278,
    bis_subrango = 279,
    bis_div_real = 280,
    bis_literal = 281,
    bis_tipo_base = 282,
    bis_dev = 283,
    bis_menorIgual = 284,
    bis_mayorIgual = 285,
    bis_desigual = 286,
    bis_espacio = 287,
    bis_tabulador = 288,
    bis_saltoLinea = 289,
    bis_id = 290,
    bis_letraOcifra = 291,
    bis_literal_entero = 292,
    bis_literal_real = 293,
    bis_literal_booleano = 294,
    bis_literal_caracter = 295,
    bis_literal_cadena = 296,
    bis_precondicion = 297,
    bis_postcondicion = 298,
    bis_comentario = 299,
    bis_verdadero = 300,
    bis_falso = 301,
    bis_algoritmo = 302,
    bis_falgoritmo = 303,
    bis_funcion = 304,
    bis_ffuncion = 305,
    bis_accion = 306,
    bis_faccion = 307,
    bis_tipo = 308,
    bis_ftipo = 309,
    bis_const = 310,
    bis_fconst = 311,
    bis_var = 312,
    bis_fvar = 313,
    bis_tupla = 314,
    bis_ftupla = 315,
    bis_si = 316,
    bis_fsi = 317,
    bis_para = 318,
    bis_fpara = 319,
    bis_mientras = 320,
    bis_fmientras = 321,
    bis_hasta = 322,
    bis_hacer = 323,
    bis_entonces = 324,
    bis_ent = 325,
    bis_sal = 326,
    bis_sino = 327,
    bis_entradaSalida = 328,
    bis_continuar = 329,
    bis_de = 330,
    bis_div = 331,
    bis_mod = 332,
    bis_no = 333,
    bis_ref = 334,
    bis_tabla = 335,
    bis_o = 336,
    bis_y = 337,
    bis_booleano = 338,
    bis_entero = 339,
    bis_caracter = 340,
    bis_real = 341,
    bis_cadena = 342
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
