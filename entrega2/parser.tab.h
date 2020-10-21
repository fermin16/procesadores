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
    bis_parentesisAbrir = 258,
    bis_parentesisCerrar = 259,
    bis_corcheteAbrir = 260,
    bis_corcheteCerrar = 261,
    bis_suma = 262,
    bis_resta = 263,
    bis_multiplicacion = 264,
    bis_div = 265,
    bis_mod = 266,
    bis_div_real = 267,
    bis_o = 268,
    bis_y = 269,
    bis_coma = 270,
    bis_puntoComa = 271,
    bis_punto = 272,
    bis_dosPuntos = 273,
    bis_alternativa = 274,
    bis_asignacion = 275,
    bis_subrango = 276,
    bis_literal = 277,
    bis_tipo_base = 278,
    bis_dev = 279,
    bis_menorIgual = 280,
    bis_desigual = 281,
    bis_mayorIgual = 282,
    bis_menor = 283,
    bis_mayor = 284,
    bis_igual = 285,
    bis_id = 286,
    bis_literal_entero = 287,
    bis_literal_real = 288,
    bis_literal_caracter = 289,
    bis_comentario = 290,
    bis_verdadero = 291,
    bis_falso = 292,
    bis_algoritmo = 293,
    bis_falgoritmo = 294,
    bis_funcion = 295,
    bis_ffuncion = 296,
    bis_accion = 297,
    bis_faccion = 298,
    bis_tipo = 299,
    bis_ftipo = 300,
    bis_const = 301,
    bis_fconst = 302,
    bis_var = 303,
    bis_fvar = 304,
    bis_tupla = 305,
    bis_ftupla = 306,
    bis_si = 307,
    bis_fsi = 308,
    bis_para = 309,
    bis_fpara = 310,
    bis_mientras = 311,
    bis_fmientras = 312,
    bis_hasta = 313,
    bis_hacer = 314,
    bis_ent = 315,
    bis_sal = 316,
    bis_sino = 317,
    bis_entradaSalida = 318,
    bis_continuar = 319,
    bis_de = 320,
    bis_no = 321,
    bis_ref = 322,
    bis_tabla = 323
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
