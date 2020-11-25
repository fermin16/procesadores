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
    BIS_IDENTIFICADOR = 258,
    BIS_LETRA_O_CIFRA = 259,
    BIS_DR_REAL = 260,
    BIS_DR_ENTERO = 261,
    BIS_PUNTO_COMA = 262,
    BIS_COMENTARIO = 263,
    BIS_ASIG = 264,
    BIS_LITERAL = 265,
    BIS_TIPO_BASE = 266,
    BIS_CADENA_LIT = 267,
    BIS_VERDADERO = 268,
    BIS_FALSO = 269,
    BIS_MAS = 270,
    BIS_MENOS = 271,
    BIS_PRODUCTO = 272,
    BIS_DIV_REAL = 273,
    BIS_MOD = 274,
    BIS_DIV = 275,
    BIS_NEG = 276,
    BIS_O = 277,
    BIS_Y = 278,
    BIS_OPREL = 279,
    BIS_NO = 280,
    BIS_SI = 281,
    BIS_SI_NO_SI = 282,
    BIS_FSI = 283,
    BIS_ENTONCES = 284,
    BIS_MIENTRAS = 285,
    BIS_FMIENTRAS = 286,
    BIS_HACER = 287,
    BIS_PARA = 288,
    BIS_HASTA = 289,
    BIS_FPARA = 290,
    BIS_CONTINUAR = 291,
    BIS_ALGORITMO = 292,
    BIS_FALGORITMO = 293,
    BIS_FUNCION = 294,
    BIS_FFUNCION = 295,
    BIS_ACCION = 296,
    BIS_FACCION = 297,
    BIS_ENT = 298,
    BIS_SAL = 299,
    BIS_ENT_SAL = 300,
    BIS_DEV = 301,
    BIS_TIPO = 302,
    BIS_IGUAL = 303,
    BIS_FTIPO = 304,
    BIS_CONST = 305,
    BIS_FCONST = 306,
    BIS_VAR = 307,
    BIS_FVAR = 308,
    BIS_TUPLA = 309,
    BIS_FTUPLA = 310,
    BIS_TABLA = 311,
    BIS_DE = 312,
    BIS_SUBRANGO = 313,
    BIS_ASIG_TIPO = 314,
    BIS_COMA = 315,
    BIS_PAR_A = 316,
    BIS_PAR_C = 317,
    BIS_BOOLEANO = 318,
    BIS_CADENA = 319,
    BIS_CARACTER = 320,
    BIS_ENTERO = 321,
    BIS_REAL = 322,
    BIS_PUNTO = 323,
    BIS_REF = 324,
    BIS_COR_A = 325,
    BIS_COR_C = 326
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
