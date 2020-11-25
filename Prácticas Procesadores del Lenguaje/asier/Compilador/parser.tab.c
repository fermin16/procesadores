/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parser.y" /* yacc.c:339  */

  #include <stdio.h>
  #include <math.h>
  #include <stdlib.h>
  #include "tablasimbolos.h"
  #include "cuadruplas.h"
  #include "funciones_bool.h"
  #define ENTERO 1
  #define REAL 2
  #define BOOL 3
  #define CHAR 4
  #define CADENA 5
  
  void yyerror (char const *);
  extern FILE *yyin;
  extern int yylex();
  extern int yyparse();
  lista tabla_s;
  tabla_cuadruplas tc;

#line 87 "parser.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.tab.h".  */
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
    BIS_MENOS = 270,
    BIS_MAS = 271,
    BIS_PRODUCTO = 272,
    BIS_DIV_REAL = 273,
    BIS_MOD = 274,
    BIS_DIV = 275,
    BIS_O = 276,
    BIS_Y = 277,
    BIS_OPREL = 278,
    BIS_NO = 279,
    BIS_SI = 280,
    BIS_SI_NO_SI = 281,
    BIS_FSI = 282,
    BIS_ENTONCES = 283,
    BIS_MIENTRAS = 284,
    BIS_FMIENTRAS = 285,
    BIS_HACER = 286,
    BIS_PARA = 287,
    BIS_HASTA = 288,
    BIS_FPARA = 289,
    BIS_CONTINUAR = 290,
    BIS_ALGORITMO = 291,
    BIS_FALGORITMO = 292,
    BIS_FUNCION = 293,
    BIS_FFUNCION = 294,
    BIS_ACCION = 295,
    BIS_FACCION = 296,
    BIS_ENT = 297,
    BIS_SAL = 298,
    BIS_ENT_SAL = 299,
    BIS_DEV = 300,
    BIS_TIPO = 301,
    BIS_IGUAL = 302,
    BIS_FTIPO = 303,
    BIS_CONST = 304,
    BIS_FCONST = 305,
    BIS_VAR = 306,
    BIS_FVAR = 307,
    BIS_TUPLA = 308,
    BIS_FTUPLA = 309,
    BIS_TABLA = 310,
    BIS_DE = 311,
    BIS_SUBRANGO = 312,
    BIS_ASIG_TIPO = 313,
    BIS_COMA = 314,
    BIS_PAR_A = 315,
    BIS_PAR_C = 316,
    BIS_BOOLEANO = 317,
    BIS_CADENA = 318,
    BIS_CARACTER = 319,
    BIS_ENTERO = 320,
    BIS_REAL = 321,
    BIS_PUNTO = 322,
    BIS_REF = 323,
    BIS_COR_A = 324,
    BIS_COR_C = 325
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
#line 22 "parser.y" /* yacc.c:355  */
union YYSTYPE
{
#line 22 "parser.y" /* yacc.c:355  */

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
    // Crear makelist(valor) -> Genera una BE con un indice
    // Crear merge(lista de listas) -> Devuelve union de las listas
    // Backpatch(lista,valor) -> Recorre la lista y completa diciendo que quad = valor

#line 217 "parser.tab.c" /* yacc.c:355  */
};
#line 22 "parser.y" /* yacc.c:355  */
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 234 "parser.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   248

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  92
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  212

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   325

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   141,   141,   145,   150,   154,   155,   156,   160,   161,
     162,   165,   169,   173,   177,   181,   182,   186,   187,   188,
     192,   196,   197,   198,   199,   203,   207,   211,   215,   216,
     217,   218,   222,   226,   231,   232,   236,   237,   238,   239,
     240,   241,   245,   246,   250,   251,   255,   256,   260,   262,
     263,   267,   273,   281,   282,   289,   299,   322,   345,   355,
     364,   374,   382,   405,   411,   418,   432,   448,   454,   459,
     467,   473,   480,   490,   494,   499,   500,   501,   505,   506,
     507,   511,   512,   513,   514,   518,   541,   545,   546,   550,
     551,   555,   559
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BIS_IDENTIFICADOR", "BIS_LETRA_O_CIFRA",
  "BIS_DR_REAL", "BIS_DR_ENTERO", "BIS_PUNTO_COMA", "BIS_COMENTARIO",
  "BIS_ASIG", "BIS_LITERAL", "BIS_TIPO_BASE", "BIS_CADENA_LIT",
  "BIS_VERDADERO", "BIS_FALSO", "BIS_MENOS", "BIS_MAS", "BIS_PRODUCTO",
  "BIS_DIV_REAL", "BIS_MOD", "BIS_DIV", "BIS_O", "BIS_Y", "BIS_OPREL",
  "BIS_NO", "BIS_SI", "BIS_SI_NO_SI", "BIS_FSI", "BIS_ENTONCES",
  "BIS_MIENTRAS", "BIS_FMIENTRAS", "BIS_HACER", "BIS_PARA", "BIS_HASTA",
  "BIS_FPARA", "BIS_CONTINUAR", "BIS_ALGORITMO", "BIS_FALGORITMO",
  "BIS_FUNCION", "BIS_FFUNCION", "BIS_ACCION", "BIS_FACCION", "BIS_ENT",
  "BIS_SAL", "BIS_ENT_SAL", "BIS_DEV", "BIS_TIPO", "BIS_IGUAL",
  "BIS_FTIPO", "BIS_CONST", "BIS_FCONST", "BIS_VAR", "BIS_FVAR",
  "BIS_TUPLA", "BIS_FTUPLA", "BIS_TABLA", "BIS_DE", "BIS_SUBRANGO",
  "BIS_ASIG_TIPO", "BIS_COMA", "BIS_PAR_A", "BIS_PAR_C", "BIS_BOOLEANO",
  "BIS_CADENA", "BIS_CARACTER", "BIS_ENTERO", "BIS_REAL", "BIS_PUNTO",
  "BIS_REF", "BIS_COR_A", "BIS_COR_C", "$accept", "desc_algoritmo",
  "cabecera_alg", "bloque_alg", "decl_globales", "decl_a_f", "accion_d",
  "funcion_d", "a_cabecera", "f_cabecera", "d_par_form", "d_p_form",
  "bloque", "declaraciones", "declaracion_tipo", "declaracion_const",
  "declaracion_var", "decl_ent_sal", "decl_ent", "decl_sal",
  "lista_d_tipo", "d_tipo", "expresion_t", "lista_campos", "lista_d_cte",
  "lista_d_var", "lista_id", "expresion", "exp_a", "exp_logicas",
  "operando", "instrucciones", "instruccion", "asignacion", "alternativa",
  "lista_opciones", "iteracion", "it_cota_fija", "it_cota_exp", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325
};
# endif

#define YYPACT_NINF -110

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-110)))

#define YYTABLE_NINF -54

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -29,    17,    24,    23,  -110,   -35,    42,    47,   -11,   -28,
     -35,   -35,    11,    21,    35,    34,    86,    77,   114,    22,
     -11,   -11,   -11,   126,   129,    29,   -28,   -28,  -110,  -110,
     120,   136,   131,   139,    20,   100,   149,  -110,  -110,  -110,
     148,   148,   152,  -110,     7,  -110,   150,  -110,  -110,  -110,
    -110,  -110,  -110,  -110,  -110,   105,   -11,   106,   -11,    86,
      86,   151,   117,  -110,  -110,  -110,   160,  -110,  -110,  -110,
    -110,  -110,  -110,   148,   148,   148,   165,   102,   148,   120,
     162,   113,  -110,   194,    26,  -110,   167,  -110,   166,    86,
     169,    28,   153,   147,   170,   148,   179,  -110,   148,    22,
      86,   138,    56,   145,  -110,  -110,  -110,  -110,   201,   201,
    -110,   132,   133,   134,   180,  -110,  -110,   134,   148,   148,
     148,   148,   148,   148,  -110,  -110,   148,    47,  -110,  -110,
    -110,     2,   182,  -110,    22,    22,   148,  -110,    26,   121,
    -110,   143,   148,    86,    86,    86,   144,   185,  -110,   120,
    -110,   168,  -110,  -110,   201,   201,    85,    85,    85,    85,
     148,   148,  -110,  -110,    86,   181,   163,   173,  -110,   183,
     187,   171,   172,   174,   220,    56,   224,   134,    64,   210,
    -110,   148,   207,  -110,   148,   120,  -110,   120,   120,   120,
    -110,  -110,   165,   175,   208,  -110,   204,   230,  -110,  -110,
    -110,  -110,   184,    22,    22,  -110,   120,   181,   205,  -110,
    -110,  -110
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     7,    35,    47,    24,    10,
       7,     7,     0,     0,     0,     0,    50,     0,     0,    80,
      24,    24,    24,     0,     0,    31,    10,    10,     5,     6,
      53,     0,     0,     0,     0,     0,     0,     2,     4,    74,
      53,    53,     0,    81,     0,    20,    79,    82,    83,    84,
      89,    90,    21,    22,    23,     0,    24,     0,    24,    50,
      50,     0,    28,    30,     8,     9,    74,    43,    64,    63,
      41,    70,    71,     0,     0,     0,    45,     0,     0,    53,
       0,     0,    42,    54,    55,    25,     0,    26,     0,     0,
       0,    50,     0,     0,     0,    53,     0,    77,    53,    80,
      50,     0,    16,     0,    32,    33,     3,    29,    66,    65,
      69,     0,     0,    53,     0,    40,    34,    53,     0,     0,
       0,     0,     0,     0,    73,    73,     0,    47,    52,    51,
      27,    74,     0,    48,    80,    80,    53,    85,    75,     0,
      78,     0,    53,     0,     0,     0,     0,     0,    11,    53,
      36,     0,    61,    39,    56,    62,    57,    58,    59,    60,
       0,     0,    72,    46,    50,    88,     0,     0,    76,     0,
       0,     0,     0,     0,     0,    16,     0,    53,    68,    67,
      49,    53,     0,    92,    53,    53,    12,    53,    53,    53,
      13,    15,    45,     0,     0,    86,     0,     0,    17,    18,
      19,    44,     0,    80,    80,    14,    53,    88,     0,    37,
      87,    91
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -110,  -110,  -110,  -110,    91,   101,  -110,  -110,  -110,  -110,
      63,  -110,    -3,    99,    16,    18,  -110,  -110,  -110,   186,
    -110,   -76,  -109,    50,   116,   -54,   -53,   -39,   -56,   119,
     -19,   -86,  -110,  -110,  -110,    39,  -110,  -110,  -110
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     8,    17,     9,    25,    26,    27,    58,    56,
     146,   147,    18,    19,    20,    21,    22,    61,    62,    63,
      13,    80,    81,   112,    15,    35,    36,    82,    83,   160,
      84,    45,    46,    47,    48,   182,    49,    50,    51
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      44,    92,    93,   115,   151,   104,   105,     1,   153,   -38,
      23,     6,    24,   140,     7,   132,    95,   108,   109,   110,
       3,    10,   114,    11,     4,    39,    10,    10,    11,    11,
       5,   131,    67,    68,    69,     6,   129,   133,     7,    70,
      16,    71,    72,    73,    74,    12,   141,    40,   165,   166,
      14,    41,    75,   101,    42,   103,   137,    43,    30,   139,
      88,    89,   154,   155,   156,   157,   158,   159,   193,    31,
     162,    59,    60,   176,    96,    97,    98,   138,    88,    89,
      44,    76,    32,    77,    33,   -53,   125,   126,    78,    34,
     171,   172,   173,    96,    97,    98,    79,   167,   143,   144,
     145,    28,    29,   170,   178,   179,   124,   125,   126,   197,
     180,   198,   199,   200,    37,    44,    44,   207,   208,    52,
      53,    54,    38,    66,    67,    68,    69,    64,    65,    55,
     209,    70,    57,    71,    72,    73,    74,    39,    67,    68,
      69,    86,   194,    85,    75,   196,    87,    71,    72,    73,
      74,    39,    90,    68,    69,    94,    91,    99,    75,   106,
      60,    71,    72,    73,    74,   100,   102,   -38,   111,   116,
     117,   113,    75,    76,   127,    77,   130,   128,   135,   136,
      78,   134,    39,   142,    44,    44,   148,   150,    79,   164,
     149,   168,   175,   183,    78,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   169,   174,   184,   181,    78,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   120,   121,
     122,   123,   124,   125,   126,   177,   186,   190,   185,   187,
     188,   192,   189,   126,   195,   204,   203,   205,   191,   211,
     206,   152,   201,   163,   161,   202,   210,     0,   107
};

static const yytype_int16 yycheck[] =
{
      19,    40,    41,    79,   113,    59,    60,    36,   117,     7,
      38,    46,    40,    99,    49,    91,     9,    73,    74,    75,
       3,     5,    78,     5,     0,     3,    10,    11,    10,    11,
       7,     3,     4,     5,     6,    46,    89,    91,    49,    11,
      51,    13,    14,    15,    16,     3,   100,    25,   134,   135,
       3,    29,    24,    56,    32,    58,    95,    35,    47,    98,
      58,    59,   118,   119,   120,   121,   122,   123,   177,    48,
     126,    42,    43,   149,    67,    68,    69,    96,    58,    59,
      99,    53,    47,    55,    50,    57,    22,    23,    60,     3,
     143,   144,   145,    67,    68,    69,    68,   136,    42,    43,
      44,    10,    11,   142,   160,   161,    21,    22,    23,   185,
     164,   187,   188,   189,    37,   134,   135,   203,   204,    20,
      21,    22,     8,     3,     4,     5,     6,    26,    27,     3,
     206,    11,     3,    13,    14,    15,    16,     3,     4,     5,
       6,    10,   181,     7,    24,   184,     7,    13,    14,    15,
      16,     3,    52,     5,     6,     3,     7,     7,    24,     8,
      43,    13,    14,    15,    16,    60,    60,     7,     3,     7,
      57,    69,    24,    53,     7,    55,     7,    11,    31,     9,
      60,    28,     3,    45,   203,   204,    41,    54,    68,     7,
      58,    70,     7,    30,    60,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    61,    61,    33,    26,    60,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    17,    18,
      19,    20,    21,    22,    23,    57,    39,     7,    45,    58,
      58,     7,    58,    23,    27,    31,    28,     7,   175,    34,
      56,    61,   192,   127,   125,    70,   207,    -1,    62
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    36,    72,     3,     0,     7,    46,    49,    73,    75,
      85,    86,     3,    91,     3,    95,    51,    74,    83,    84,
      85,    86,    87,    38,    40,    76,    77,    78,    75,    75,
      47,    48,    47,    50,     3,    96,    97,    37,     8,     3,
      25,    29,    32,    35,   101,   102,   103,   104,   105,   107,
     108,   109,    84,    84,    84,     3,    80,     3,    79,    42,
      43,    88,    89,    90,    76,    76,     3,     4,     5,     6,
      11,    13,    14,    15,    16,    24,    53,    55,    60,    68,
      92,    93,    98,    99,   101,     7,    10,     7,    58,    59,
      52,     7,    98,    98,     3,     9,    67,    68,    69,     7,
      60,    83,    60,    83,    96,    96,     8,    90,    99,    99,
      99,     3,    94,    69,    99,    92,     7,    57,    15,    16,
      17,    18,    19,    20,    21,    22,    23,     7,    11,    97,
       7,     3,    92,    96,    28,    31,     9,    98,   101,    98,
     102,    96,    45,    42,    43,    44,    81,    82,    41,    58,
      54,    93,    61,    93,    99,    99,    99,    99,    99,    99,
     100,   100,    99,    95,     7,   102,   102,    98,    70,    61,
      98,    97,    97,    97,    61,     7,    92,    57,    99,    99,
      96,    26,   106,    30,    33,    45,    39,    58,    58,    58,
       7,    81,     7,    93,    98,    27,    98,    92,    92,    92,
      92,    94,    70,    28,    31,     7,    56,   102,   102,    92,
     106,    34
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    71,    72,    73,    74,    75,    75,    75,    76,    76,
      76,    77,    78,    79,    80,    81,    81,    82,    82,    82,
      83,    84,    84,    84,    84,    85,    86,    87,    88,    88,
      88,    88,    89,    90,    91,    91,    92,    92,    92,    92,
      92,    92,    93,    93,    94,    94,    95,    95,    96,    96,
      96,    97,    97,    98,    98,    99,    99,    99,    99,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,   100,   101,   101,   101,   101,   102,   102,
     102,   103,   103,   103,   103,   104,   105,   106,   106,   107,
     107,   108,   109
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     4,     2,     2,     2,     0,     2,     2,
       0,     4,     6,     5,     7,     3,     0,     4,     4,     4,
       2,     2,     2,     2,     0,     4,     4,     4,     1,     2,
       1,     0,     2,     2,     4,     0,     3,     8,     1,     3,
       2,     1,     1,     1,     5,     0,     5,     0,     3,     5,
       0,     3,     3,     0,     1,     1,     3,     3,     3,     3,
       3,     3,     3,     1,     1,     2,     2,     4,     4,     2,
       1,     1,     3,     0,     1,     3,     4,     2,     3,     1,
       0,     1,     1,     1,     1,     3,     6,     5,     0,     1,
       1,     9,     5
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 141 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: desc_algoritmo 0\n");}
#line 1478 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 145 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: cabecera_alg 0\n");}
#line 1484 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 150 "parser.y" /* yacc.c:1646  */
    {printf("Recorriendo la tabla\n");}
#line 1490 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 154 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: decl_globales 0\n");}
#line 1496 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 155 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: decl_globales 1 \n");}
#line 1502 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 156 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: decl_globales 2 \n");}
#line 1508 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 160 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: decl_a_f 0\n");}
#line 1514 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 161 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: decl_a_f 1\n");}
#line 1520 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 162 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: decl_a_f 2\n");}
#line 1526 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 165 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: accion_d 0 \n");}
#line 1532 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 169 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: funcion_d 0\n");}
#line 1538 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 173 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: a_cabecera 0 \n");}
#line 1544 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 177 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: f_cabecera 0\n");}
#line 1550 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 181 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: d_par_form 0\n");}
#line 1556 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 182 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: d_par_form 1\n");}
#line 1562 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 186 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: d_p_form 0\n");}
#line 1568 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 187 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: d_p_form 1\n");}
#line 1574 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 188 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: d_p_form 2\n");}
#line 1580 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 192 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: bloque 0\n");}
#line 1586 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 196 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: declaraciones 0\n");}
#line 1592 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 197 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: declaraciones 1\n");}
#line 1598 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 198 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: declaraciones 2\n");}
#line 1604 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 199 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: declaraciones 3\n");}
#line 1610 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 203 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: declaracion_tipo 0\n");}
#line 1616 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 207 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: declaracion_const 0\n");}
#line 1622 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 211 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: declaracion_var 0\n");}
#line 1628 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 215 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: decl_ent_sal 0\n");}
#line 1634 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 216 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: decl_ent_sal 1\n");}
#line 1640 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 217 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: decl_ent_sal 2\n");}
#line 1646 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 218 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: decl_ent_sal 3\n");}
#line 1652 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 222 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: decl_ent 0\n");}
#line 1658 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 226 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: decl_sal 0\n");}
#line 1664 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 231 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: lista_d_tipo 0\n");}
#line 1670 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 232 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: lista_d_tipo 1\n");}
#line 1676 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 236 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: d_tipo 0\n");}
#line 1682 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 237 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: d_tipo 1\n");}
#line 1688 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 238 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: d_tipo 2\n");}
#line 1694 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 239 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: d_tipo 3\n");}
#line 1700 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 240 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: d_tipo 4\n");}
#line 1706 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 241 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: d_tipo 5\n");}
#line 1712 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 245 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: expresion_t 0\n");}
#line 1718 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 246 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: expresion_t 1\n");}
#line 1724 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 250 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: lista_campos 0\n");}
#line 1730 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 251 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: lista_campos 1\n");}
#line 1736 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 255 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: lista_d_cte 0\n");}
#line 1742 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 256 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: lista_d_cte 1\n");}
#line 1748 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 260 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: lista_d_var 0\n");
                                        }
#line 1755 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 262 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: lista_d_var 1\n");}
#line 1761 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 263 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: lista_d_var 2\n");}
#line 1767 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 267 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: lista_id 0\n"); 
                                            printf("Nombre del identificador: %s\n",(yyvsp[-2].sval));
                                            modificar_tipo(&tabla_s,nueva_entrada(&tabla_s,(yyvsp[-2].sval)),(yyvsp[0].ival));
                                            (yyval.ival) = (yyvsp[0].ival);
                                        }
#line 1777 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 273 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: lista_id 1\n");
                            printf("Nombre del identificador: %s\n",(yyvsp[-2].sval));
                            modificar_tipo(&tabla_s,nueva_entrada(&tabla_s,(yyvsp[-2].sval)),(yyvsp[0].ival));
                            (yyval.ival) = (yyvsp[0].ival);
                        }
#line 1787 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 281 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: expresion 0\n");}
#line 1793 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 282 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: expresion 1\n");
                (yyval.ExpArit).place = (yyvsp[0].ExpArit).place;
                (yyval.ExpArit).type = (yyvsp[0].ExpArit).type;
            }
#line 1802 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 289 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: exp_a 0\n");
            (yyval.ExpArit).place = (yyvsp[0].ExpArit).place;
            (yyval.ExpArit).type = (yyvsp[0].ExpArit).type;
            if ((yyvsp[0].ExpArit).type == BOOL){
                (yyval.ExpArit).l_true = makelist(tc.nextquad);
                (yyval.ExpArit).l_false = makelist(tc.nextquad+1);
                gen(OP_GOTO_COND,(yyvsp[0].ExpArit).place,NULL,NULL,&tc);
                gen(OP_GOTO,NULL,NULL,NULL,&tc);
            }
        }
#line 1817 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 299 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: exp_a 1\n");
                                    int ssid = nueva_entrada(&tabla_s,NULL);
                                    (yyval.ExpArit).place = ssid;
                                    if ((yyvsp[-2].ExpArit).type == ENTERO && (yyvsp[0].ExpArit).type == ENTERO){
                                        modificar_tipo(&tabla_s,ssid, ENTERO);
                                        gen(OP_RESTA_ENTERO,(yyvsp[-2].ExpArit).place,(yyvsp[0].ExpArit).place,(yyval.ExpArit).place,&tc);
                                        (yyval.ExpArit).type = ENTERO;
                                    }else if ((yyvsp[-2].ExpArit).type == REAL && (yyvsp[0].ExpArit).type == ENTERO){
                                        modificar_tipo(&tabla_s,ssid, REAL);
                                        gen(OP_RESTA_REAL,(yyvsp[-2].ExpArit).place,(yyvsp[0].ExpArit).place,(yyval.ExpArit).place,&tc);
                                        (yyval.ExpArit).type = REAL;
                                    }else if((yyvsp[-2].ExpArit).type == ENTERO && (yyvsp[0].ExpArit).type == REAL){
                                        modificar_tipo(&tabla_s,ssid, REAL);
                                        gen(OP_RESTA_REAL,(yyvsp[-2].ExpArit).place,(yyvsp[0].ExpArit).place,(yyval.ExpArit).place,&tc);
                                        (yyval.ExpArit).type = REAL;                                    
                                    }else if((yyvsp[-2].ExpArit).type == REAL && (yyvsp[0].ExpArit).type == REAL){
                                        modificar_tipo(&tabla_s,ssid, REAL);
                                        gen(OP_RESTA_REAL,(yyvsp[-2].ExpArit).place,(yyvsp[0].ExpArit).place,(yyval.ExpArit).place,&tc);
                                        (yyval.ExpArit).type = REAL;                                    
                                    }else{
                                        printf("Error, tipos en el producto incorrectos\n");
                                    }
    }
#line 1845 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 322 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: exp_a 2\n");
                                    int ssid = nueva_entrada(&tabla_s,NULL);
                                    (yyval.ExpArit).place = ssid;
                                    if ((yyvsp[-2].ExpArit).type == ENTERO && (yyvsp[0].ExpArit).type == ENTERO){
                                        modificar_tipo(&tabla_s,ssid, ENTERO);
                                        gen(OP_MULTI_ENTERO,(yyvsp[-2].ExpArit).place,(yyvsp[0].ExpArit).place,(yyval.ExpArit).place,&tc);
                                        (yyval.ExpArit).type = ENTERO;
                                    }else if ((yyvsp[-2].ExpArit).type == REAL && (yyvsp[0].ExpArit).type == ENTERO){
                                        modificar_tipo(&tabla_s,ssid, REAL);
                                        gen(OP_MULTI_REAL,(yyvsp[-2].ExpArit).place,(yyvsp[0].ExpArit).place,(yyval.ExpArit).place,&tc);
                                        (yyval.ExpArit).type = REAL;
                                    }else if((yyvsp[-2].ExpArit).type == ENTERO && (yyvsp[0].ExpArit).type == REAL){
                                        modificar_tipo(&tabla_s,ssid, REAL);
                                        gen(OP_MULTI_REAL,(yyvsp[-2].ExpArit).place,(yyvsp[0].ExpArit).place,(yyval.ExpArit).place,&tc);
                                        (yyval.ExpArit).type = REAL;                                    
                                    }else if((yyvsp[-2].ExpArit).type == REAL && (yyvsp[0].ExpArit).type == REAL){
                                        modificar_tipo(&tabla_s,ssid, REAL);
                                        gen(OP_MULTI_REAL,(yyvsp[-2].ExpArit).place,(yyvsp[0].ExpArit).place,(yyval.ExpArit).place,&tc);
                                        (yyval.ExpArit).type = REAL;                                    
                                    }else{
                                        printf("Error, tipos en el producto incorrectos\n");
                                    }
                                }
#line 1873 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 345 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: exp_a 3\n");
                                    if (((yyvsp[-2].ExpArit).type == ENTERO || (yyvsp[-2].ExpArit).type == REAL) && ((yyvsp[0].ExpArit).type == ENTERO || (yyvsp[0].ExpArit).type == REAL)){
                                        int ssid = nueva_entrada(&tabla_s,NULL);
                                        (yyval.ExpArit).place = ssid;
                                        gen(OP_DIV_REAL,(yyvsp[-2].ExpArit).place,(yyvsp[0].ExpArit).place,(yyval.ExpArit).place,&tc);
                                        (yyval.ExpArit).type = REAL;
                                    }else{
                                        printf("Error en tipos incompatibles\n");
                                    }
                                }
#line 1888 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 355 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: exp_a 4\n");
                                    if (((yyvsp[-2].ExpArit).type == ENTERO) && ((yyvsp[0].ExpArit).type == ENTERO)){
                                        int ssid = nueva_entrada(&tabla_s,NULL);
                                        (yyval.ExpArit).place = ssid;
                                        gen(OP_MOD,(yyvsp[-2].ExpArit).place,(yyvsp[0].ExpArit).place,(yyval.ExpArit).place,&tc);
                                        (yyval.ExpArit).type = ENTERO;
                                    }else{
                                        printf("Error en tipos incompatibles\n");
                                    }}
#line 1902 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 364 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: exp_a 5\n");
                            if (((yyvsp[-2].ExpArit).type == ENTERO) && ((yyvsp[0].ExpArit).type == ENTERO)){
                                        int ssid = nueva_entrada(&tabla_s,NULL);
                                        (yyval.ExpArit).place = ssid;
                                        gen(OP_DIV_ENT,(yyvsp[-2].ExpArit).place,(yyvsp[0].ExpArit).place,(yyval.ExpArit).place,&tc);
                                        (yyval.ExpArit).type = ENTERO;
                                    }else{
                                        printf("Error en tipos incompatibles\n");
                                    }
                            }
#line 1917 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 374 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: exp_a 6\n");
                                    (yyval.ExpArit).place = (yyvsp[-1].ExpArit).place;
                                    (yyval.ExpArit).type = (yyvsp[-1].ExpArit).type;
                                    if ((yyval.ExpArit).type == BOOL){
                                            (yyval.ExpArit).l_true = (yyvsp[-1].ExpArit).l_true;
                                            (yyval.ExpArit).l_false = (yyvsp[-1].ExpArit).l_false;
                                    }
                                }
#line 1930 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 382 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: exp_a 7\n");
                                int ssid = nueva_entrada(&tabla_s,NULL);
                                (yyval.ExpArit).place = ssid;
                                if ((yyvsp[-2].ExpArit).type == ENTERO && (yyvsp[0].ExpArit).type == ENTERO){
                                    modificar_tipo(&tabla_s,ssid, ENTERO);
                                    gen(OP_SUMA_ENTERO,(yyvsp[-2].ExpArit).place,(yyvsp[0].ExpArit).place,(yyval.ExpArit).place,&tc);
                                    (yyval.ExpArit).type = ENTERO;
                                }else if ((yyvsp[-2].ExpArit).type == REAL && (yyvsp[0].ExpArit).type == ENTERO){
                                    modificar_tipo(&tabla_s,ssid, REAL);
                                    gen(OP_SUMA_REAL,(yyvsp[-2].ExpArit).place,(yyvsp[0].ExpArit).place,(yyval.ExpArit).place,&tc);
                                    (yyval.ExpArit).type = REAL;
                                }else if((yyvsp[-2].ExpArit).type == ENTERO && (yyvsp[0].ExpArit).type == REAL){
                                    modificar_tipo(&tabla_s,ssid, REAL);
                                    gen(OP_SUMA_REAL,(yyvsp[-2].ExpArit).place,(yyvsp[0].ExpArit).place,(yyval.ExpArit).place,&tc);
                                    (yyval.ExpArit).type = REAL;                                    
                                }else if((yyvsp[-2].ExpArit).type == REAL && (yyvsp[0].ExpArit).type == REAL){
                                    modificar_tipo(&tabla_s,ssid, REAL);
                                    gen(OP_SUMA_REAL,(yyvsp[-2].ExpArit).place,(yyvsp[0].ExpArit).place,(yyval.ExpArit).place,&tc);
                                    (yyval.ExpArit).type = REAL;                                    
                                }else{
                                    printf("Error, tipos en el producto incorrectos\n");
                                }
                            }
#line 1958 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 405 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: exp_a bis_entero\n");
                    int sid = nueva_entrada(&tabla_s,NULL);
                    modificar_tipo(&tabla_s,sid,ENTERO);
                    (yyval.ExpArit).place = sid;
                    (yyval.ExpArit).type = ENTERO;
                    }
#line 1969 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 411 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: exp_a 8\n");
                    int sid = nueva_entrada(&tabla_s,NULL);
                    modificar_tipo(&tabla_s,sid,REAL);
                    (yyval.ExpArit).place = sid;
                    (yyval.ExpArit).type = REAL;
                    }
#line 1980 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 418 "parser.y" /* yacc.c:1646  */
    {printf("Suma unaria\n");
                        int ssid = nueva_entrada(&tabla_s,NULL);
                        modificar_tipo(&tabla_s, ssid, (yyvsp[0].ExpArit).type);
                        (yyval.ExpArit).place = ssid;
                        if (((yyvsp[0].ExpArit).type == ENTERO)){
                            gen(OP_SUMA_ENTERO_UNARIO,NULL,(yyvsp[0].ExpArit).place,(yyval.ExpArit).place, &tc);
                            (yyval.ExpArit).type = (yyvsp[0].ExpArit).type;
                        }else if ((yyvsp[0].ExpArit).type == REAL){
                            gen(OP_SUMA_REAL_UNARIO,NULL,(yyvsp[0].ExpArit).place,(yyval.ExpArit).place, &tc);
                            (yyval.ExpArit).type = (yyvsp[0].ExpArit).type;
                        }else{
                            printf("Error, tipos incorrectos\n");
                        }
                    }
#line 1999 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 432 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: exp_a 9\n");
                        int ssid = nueva_entrada(&tabla_s,NULL);
                        modificar_tipo(&tabla_s, ssid, (yyvsp[0].ExpArit).type);
                        (yyval.ExpArit).place = ssid;
                        if (((yyvsp[0].ExpArit).type == ENTERO)){
                            gen(OP_RESTA_ENTERO_UNARIO,NULL,(yyvsp[0].ExpArit).place,(yyval.ExpArit).place, &tc);
                            (yyval.ExpArit).type = (yyvsp[0].ExpArit).type;
                        }else if ((yyvsp[0].ExpArit).type == REAL){
                            gen(OP_RESTA_REAL_UNARIO,NULL,(yyvsp[0].ExpArit).place,(yyval.ExpArit).place, &tc);
                            (yyval.ExpArit).type = (yyvsp[0].ExpArit).type;
                        }else{
                            printf("Error, tipos incorrectos\n");
                        }
                    }
#line 2018 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 448 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: exp_a 10\n");
                                        printf("Nextquad: %d\n",tc.nextquad);
                                        backpatch((yyvsp[-3].ExpArit).l_true,(yyvsp[-1].ExpArit).quad);
                                        (yyval.ExpArit).l_false = merge_lists((yyvsp[-3].ExpArit).l_false, (yyvsp[0].ExpArit).l_false);
                                        (yyval.ExpArit).l_true = (yyvsp[0].ExpArit).l_true;
                                    }
#line 2029 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 454 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: exp_a 11\n");
                                        backpatch((yyvsp[-3].ExpArit).l_false,(yyvsp[-1].ExpArit).quad);
                                        (yyval.ExpArit).l_true = merge_lists((yyvsp[-3].ExpArit).l_true, (yyvsp[0].ExpArit).l_true);
                                        (yyval.ExpArit).l_false = (yyvsp[0].ExpArit).l_false;
                                    }
#line 2039 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 459 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: exp_a 12\n");
                        if ((yyvsp[0].ExpArit).type == BOOL){
                                (yyval.ExpArit).l_true = (yyvsp[0].ExpArit).l_false;
                                (yyval.ExpArit).l_false = (yyvsp[0].ExpArit).l_true;
                        }else{
                            printf("Error, tipo booleano no introducido\n");
                        }
                    }
#line 2052 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 467 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: exp_a 13\n");
                        int sid = nueva_entrada(&tabla_s,NULL);
                        modificar_tipo(&tabla_s,sid,BOOL);
                        (yyval.ExpArit).place = sid;
                        (yyval.ExpArit).type = BOOL;
                    }
#line 2063 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 473 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: exp_a 14\n");
                    int sid = nueva_entrada(&tabla_s,NULL);
                    modificar_tipo(&tabla_s,sid,BOOL);
                    (yyval.ExpArit).place = sid;
                    (yyval.ExpArit).type = BOOL;
                }
#line 2074 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 480 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: exp_a 15\n");
                                        (yyval.ExpArit).type = BOOL;
                                        (yyval.ExpArit).l_true = makelist(tc.nextquad);
                                        (yyval.ExpArit).l_false = makelist(tc.nextquad+1);
                                        gen((yyvsp[-1].ival),(yyvsp[-2].ExpArit).place,(yyvsp[0].ExpArit).place,NULL,&tc);
                                        gen(OP_GOTO,NULL,NULL,NULL,&tc);
                                    }
#line 2086 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 490 "parser.y" /* yacc.c:1646  */
    {(yyval.ExpArit).quad = tc.nextquad;}
#line 2092 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 494 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: operando 0\n");
                        printf("Valor del ID: %s\n",(yyvsp[0].sval));
                        (yyval.ExpArit).place = ((celda*)buscar_variable_nombre(tabla_s,(yyvsp[0].sval)))->sid;
                        (yyval.ExpArit).type = ((celda*)buscar_variable_nombre(tabla_s,(yyvsp[0].sval)))->tipo;
                        }
#line 2102 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 499 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: operando 1\n");}
#line 2108 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 500 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: operando 2\n");}
#line 2114 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 501 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: operando 3\n");}
#line 2120 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 505 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: instrucciones 0\n");}
#line 2126 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 506 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: instrucciones 1\n");}
#line 2132 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 507 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: instrucciones 2\n");}
#line 2138 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 511 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: instruccion 0\n");}
#line 2144 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 512 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: instruccion 1\n");}
#line 2150 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 513 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: instruccion 2\n");}
#line 2156 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 514 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: instruccion 3\n");}
#line 2162 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 518 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: asignacion\n");
                                    if ((yyvsp[-2].ExpArit).type == (yyvsp[0].ExpArit).type){
                                        if ((yyvsp[-2].ExpArit).type == BOOL && (yyvsp[0].ExpArit).type == BOOL){
                                            backpatch((yyvsp[0].ExpArit).l_false,tc.nextquad);
                                            gen(OP_ASSIGN_FALSE,NULL,NULL,(yyvsp[-2].ExpArit).place,&tc);
                                            gen(OP_GOTO,NULL,NULL,tc.nextquad+2,&tc);
                                            backpatch((yyvsp[0].ExpArit).l_true,tc.nextquad);
                                            gen(OP_ASSIGN_TRUE,NULL,NULL,(yyvsp[-2].ExpArit).place,&tc);
                                        }else{
                                            gen(OP_ASIG,(yyvsp[0].ExpArit).place,NULL,(yyvsp[-2].ExpArit).place, &tc);
                                            (yyval.ExpArit).type = (yyvsp[-2].ExpArit).type;
                                        }
                                    }else if ((yyvsp[-2].ExpArit).type == REAL && (yyvsp[0].ExpArit).type == ENTERO){
                                        gen(OP_INTTOREAL,(yyvsp[0].ExpArit).place,NULL,(yyvsp[0].ExpArit).place, &tc);
                                        gen(OP_ASIG,(yyvsp[0].ExpArit).place,NULL,(yyvsp[-2].ExpArit).place, &tc);
                                        (yyval.ExpArit).type = REAL;
                                    }else{
                                            printf("Tipos incompatibles\n");
                                    }
                                }
#line 2187 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 541 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: alternativa\n");}
#line 2193 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 545 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: lista_opciones 0\n");}
#line 2199 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 546 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: lista_opciones 1\n");}
#line 2205 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 550 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: iteracion 0\n");}
#line 2211 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 551 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: iteracion 1\n");}
#line 2217 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 555 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: it_cota_fija\n");}
#line 2223 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 559 "parser.y" /* yacc.c:1646  */
    {printf("Reduce: it_cota_exp\n");}
#line 2229 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 2233 "parser.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 561 "parser.y" /* yacc.c:1906  */

int main( int argc, char **argv ){
    ++argv, --argc;
    ini_tabla(&tabla_s);
    inicializar_tabla_cuadruplas(&tc);
    if ( argc > 0 )
        yyin = fopen( argv[0], "r" );
    else
        yyin = stdin;
    yyparse();
    printf("\n\n------------------Constantes usadas en la tabla de cuadruplas-------------------------\n");
    mostrar_ctes_TC();
    printf("\n\n----------------------Tabla de cuadruplas-------------------------\n");
    recorrer(tc);
    printf("\n\n------------------------Tabla de simbolos-------------------------\n");
    recorrer_tabla_simbolos(tabla_s);
}

void yyerror(const char *s){
    exit(-1);
}

void backpatch (lista_bool *A, int quad){
    if (A->primero != NULL){
        celda_bool *aux = A->primero;
        while (aux->sig != NULL){
            modificar_cuadrupla(&tc, aux->inst, 3, quad);
            aux = aux->sig;
        }
        modificar_cuadrupla(&tc, aux->inst, 3, quad);
    }else{
        printf("Lista vacía\n");
    }
}
