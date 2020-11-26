/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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
    FALSA = 279,
    bis_no = 280,
    bis_id = 281,
    bis_literal_entero = 282,
    bis_literal_real = 283,
    bis_literal_caracter = 284,
    bis_comentario = 285,
    bis_algoritmo = 286,
    bis_falgoritmo = 287,
    bis_funcion = 288,
    bis_ffuncion = 289,
    bis_accion = 290,
    bis_faccion = 291,
    bis_tipo = 292,
    bis_ftipo = 293,
    bis_const = 294,
    bis_fconst = 295,
    bis_var = 296,
    bis_fvar = 297,
    bis_tupla = 298,
    bis_ftupla = 299,
    bis_si = 300,
    bis_fsi = 301,
    bis_para = 302,
    bis_fpara = 303,
    bis_mientras = 304,
    bis_fmientras = 305,
    bis_hasta = 306,
    bis_hacer = 307,
    bis_ent = 308,
    bis_sal = 309,
    bis_sino = 310,
    bis_entradaSalida = 311,
    bis_continuar = 312,
    bis_de = 313,
    bis_tabla = 314,
    bis_parentesisAbrir = 315,
    bis_parentesisCerrar = 316,
    bis_corcheteAbrir = 317,
    bis_corcheteCerrar = 318,
    bis_punto = 319,
    bis_ref = 320
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
#line 93 "parser.y"
union YYSTYPE
{
#line 93 "parser.y"

	int entradaEntero;
    float entradaFloat;
	char* entradaChar;

#line 130 "parser.tab.h"

};
#line 93 "parser.y"
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
