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
    BIS_VERDADERO = 267,
    BIS_FALSO = 268,
    BIS_MENOS = 269,
    BIS_MAS = 270,
    BIS_PRODUCTO = 271,
    BIS_DIV_REAL = 272,
    BIS_MOD = 273,
    BIS_DIV = 274,
    BIS_O = 275,
    BIS_Y = 276,
    BIS_OPREL = 277,
    BIS_NO = 278,
    BIS_SI = 279,
    BIS_SI_NO_SI = 280,
    BIS_FSI = 281,
    BIS_ENTONCES = 282,
    BIS_MIENTRAS = 283,
    BIS_FMIENTRAS = 284,
    BIS_HACER = 285,
    BIS_PARA = 286,
    BIS_HASTA = 287,
    BIS_FPARA = 288,
    BIS_CONTINUAR = 289,
    BIS_ALGORITMO = 290,
    BIS_FALGORITMO = 291,
    BIS_FUNCION = 292,
    BIS_FFUNCION = 293,
    BIS_ACCION = 294,
    BIS_FACCION = 295,
    BIS_ENT = 296,
    BIS_SAL = 297,
    BIS_ENT_SAL = 298,
    BIS_DEV = 299,
    BIS_TIPO = 300,
    BIS_IGUAL = 301,
    BIS_FTIPO = 302,
    BIS_CONST = 303,
    BIS_FCONST = 304,
    BIS_VAR = 305,
    BIS_FVAR = 306,
    BIS_TUPLA = 307,
    BIS_FTUPLA = 308,
    BIS_TABLA = 309,
    BIS_DE = 310,
    BIS_SUBRANGO = 311,
    BIS_ASIG_TIPO = 312,
    BIS_COMA = 313,
    BIS_PAR_A = 314,
    BIS_PAR_C = 315,
    BIS_PUNTO = 316,
    BIS_REF = 317,
    BIS_COR_A = 318,
    BIS_COR_C = 319
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
#line 22 "parser.y"
union YYSTYPE
{
#line 22 "parser.y"

    char* sval;
    int ival;
    float fval;
    struct AE{
        int place;
        int type;
        
        //Las siguientes se utilizan sólo en el caso de las expresiones booleanas
        struct lista_bool *l_true;
        struct lista_bool *l_false;
        struct lista_bool *next;
        int quad;
    }ExpArit;
/*
    struct CF{
    	struct lista_bool *next
    }*/
    // Crear makelist(valor) -> Genera una BE con un indice
    // Crear merge(lista de listas) -> Devuelve union de las listas
    // Backpatch(lista,valor) -> Recorre la lista y completa diciendo que quad = valor

#line 146 "parser.tab.h"

};
#line 22 "parser.y"
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
