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
    bis_coma = 258,
    bis_puntoComa = 259,
    bis_dosPuntos = 260,
    bis_alternativa = 261,
    bis_asignacion = 262,
    bis_subrango = 263,
    bis_literal = 264,
    bis_tipo_base = 265,
    bis_dev = 266,
    bis_verdadero = 267,
    bis_falso = 268,
    bis_suma = 269,
    bis_resta = 270,
    bis_multiplicacion = 271,
    bis_div = 272,
    bis_mod = 273,
    bis_div_real = 274,
    bis_o = 275,
    bis_y = 276,
    bis_oprel = 277,
    bis_igual = 278,
    bis_no = 279,
    bis_id = 280,
    bis_literal_entero = 281,
    bis_literal_real = 282,
    bis_literal_caracter = 283,
    bis_comentario = 284,
    bis_algoritmo = 285,
    bis_falgoritmo = 286,
    bis_funcion = 287,
    bis_ffuncion = 288,
    bis_accion = 289,
    bis_faccion = 290,
    bis_tipo = 291,
    bis_ftipo = 292,
    bis_const = 293,
    bis_fconst = 294,
    bis_var = 295,
    bis_fvar = 296,
    bis_tupla = 297,
    bis_ftupla = 298,
    bis_si = 299,
    bis_fsi = 300,
    bis_para = 301,
    bis_fpara = 302,
    bis_mientras = 303,
    bis_fmientras = 304,
    bis_hasta = 305,
    bis_hacer = 306,
    bis_ent = 307,
    bis_sal = 308,
    bis_sino = 309,
    bis_entradaSalida = 310,
    bis_continuar = 311,
    bis_de = 312,
    bis_tabla = 313,
    bis_parentesisAbrir = 314,
    bis_parentesisCerrar = 315,
    bis_corcheteAbrir = 316,
    bis_corcheteCerrar = 317,
    bis_punto = 318,
    bis_ref = 319
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
