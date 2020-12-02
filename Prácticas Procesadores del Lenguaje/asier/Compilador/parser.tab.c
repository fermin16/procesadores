/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

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

#line 91 "parser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 232 "parser.tab.c"

};
#line 22 "parser.y"
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
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
#define YYLAST   249

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  92
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  212

#define YYUNDEFTOK  2
#define YYMAXUTOK   319


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   143,   143,   147,   152,   156,   157,   158,   162,   163,
     164,   167,   171,   175,   179,   183,   184,   188,   189,   190,
     194,   198,   199,   200,   201,   205,   209,   213,   217,   218,
     219,   220,   224,   228,   233,   234,   238,   239,   240,   241,
     242,   243,   247,   248,   252,   253,   257,   258,   262,   264,
     265,   269,   279,   291,   292,   299,   309,   332,   355,   365,
     374,   384,   392,   415,   421,   428,   442,   458,   467,   477,
     485,   491,   498,   508,   512,   517,   518,   519,   523,   524,
     525,   529,   530,   531,   532,   536,   560,   564,   565,   569,
     570,   574,   578
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BIS_IDENTIFICADOR", "BIS_LETRA_O_CIFRA",
  "BIS_DR_REAL", "BIS_DR_ENTERO", "BIS_PUNTO_COMA", "BIS_COMENTARIO",
  "BIS_ASIG", "BIS_LITERAL", "BIS_TIPO_BASE", "BIS_VERDADERO", "BIS_FALSO",
  "BIS_MENOS", "BIS_MAS", "BIS_PRODUCTO", "BIS_DIV_REAL", "BIS_MOD",
  "BIS_DIV", "BIS_O", "BIS_Y", "BIS_OPREL", "BIS_NO", "BIS_SI",
  "BIS_SI_NO_SI", "BIS_FSI", "BIS_ENTONCES", "BIS_MIENTRAS",
  "BIS_FMIENTRAS", "BIS_HACER", "BIS_PARA", "BIS_HASTA", "BIS_FPARA",
  "BIS_CONTINUAR", "BIS_ALGORITMO", "BIS_FALGORITMO", "BIS_FUNCION",
  "BIS_FFUNCION", "BIS_ACCION", "BIS_FACCION", "BIS_ENT", "BIS_SAL",
  "BIS_ENT_SAL", "BIS_DEV", "BIS_TIPO", "BIS_IGUAL", "BIS_FTIPO",
  "BIS_CONST", "BIS_FCONST", "BIS_VAR", "BIS_FVAR", "BIS_TUPLA",
  "BIS_FTUPLA", "BIS_TABLA", "BIS_DE", "BIS_SUBRANGO", "BIS_ASIG_TIPO",
  "BIS_COMA", "BIS_PAR_A", "BIS_PAR_C", "BIS_PUNTO", "BIS_REF",
  "BIS_COR_A", "BIS_COR_C", "$accept", "desc_algoritmo", "cabecera_alg",
  "bloque_alg", "decl_globales", "decl_a_f", "accion_d", "funcion_d",
  "a_cabecera", "f_cabecera", "d_par_form", "d_p_form", "bloque",
  "declaraciones", "declaracion_tipo", "declaracion_const",
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
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319
};
# endif

#define YYPACT_NINF (-110)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-54)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -7,    13,    38,    44,  -110,   -18,    57,    58,   -36,    69,
     -18,   -18,    23,    60,    68,    71,   119,    91,   121,    47,
     -36,   -36,   -36,   125,   133,   -31,    69,    69,  -110,  -110,
     120,   137,   131,   144,   -37,   103,   148,  -110,  -110,  -110,
     147,   147,   153,  -110,    27,  -110,   151,  -110,  -110,  -110,
    -110,  -110,  -110,  -110,  -110,   104,   -36,   105,   -36,   119,
     119,   157,   124,  -110,  -110,  -110,   160,  -110,  -110,  -110,
    -110,  -110,  -110,   147,   147,   147,   165,   106,   147,   120,
     164,   117,  -110,   193,   -21,  -110,   168,  -110,   166,   119,
     169,    20,   154,   150,   174,   147,   175,  -110,   147,    47,
     119,   159,    50,   176,  -110,  -110,  -110,  -110,   170,   170,
    -110,   161,   152,   134,   180,  -110,  -110,   134,   147,   147,
     147,   147,   147,   147,  -110,  -110,   147,    58,  -110,  -110,
    -110,     0,   197,  -110,    47,    47,   147,  -110,   -21,   155,
    -110,   162,   147,   119,   119,   119,   163,   210,  -110,   120,
    -110,   171,  -110,  -110,   170,   170,    74,    74,    74,    74,
     147,   147,  -110,  -110,   119,   195,   192,   194,  -110,   181,
     186,   172,   173,   177,   221,    50,   224,   134,    33,   211,
    -110,   147,   206,  -110,   147,   120,  -110,   120,   120,   120,
    -110,  -110,   165,   178,   208,  -110,   207,   229,  -110,  -110,
    -110,  -110,   183,    47,    47,  -110,   120,   195,   212,  -110,
    -110,  -110
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
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
    -110,  -110,  -110,  -110,    76,    75,  -110,  -110,  -110,  -110,
      64,  -110,    63,    78,    34,    42,  -110,  -110,  -110,   179,
    -110,   -76,  -109,    51,   122,   -54,   -60,   -39,   -56,   123,
     -19,   -86,  -110,  -110,  -110,    37,  -110,  -110,  -110
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
      44,    92,    93,   115,   151,   104,   105,   -38,   153,     6,
      59,    60,     7,   140,    16,   132,     3,   108,   109,   110,
      88,    89,   114,   131,    67,    68,    69,     6,     1,   129,
       7,    70,    71,    72,    73,    74,    95,   133,     4,    10,
      96,    97,    98,    75,    10,    10,   141,    11,   165,   166,
      39,     5,    11,    11,   125,   126,   137,    88,    89,   139,
      12,    14,   154,   155,   156,   157,   158,   159,   193,    30,
     162,    40,    76,   176,    77,    41,   -53,   138,    42,    78,
      44,    43,    79,   171,   172,   173,    28,    29,    96,    97,
      98,   143,   144,   145,   124,   125,   126,   167,    52,    53,
      54,    64,    65,   170,   178,   179,    23,    31,    24,   197,
     180,   198,   199,   200,    32,    44,    44,   207,   208,   101,
      33,   103,    34,    66,    67,    68,    69,    37,    55,    38,
     209,    70,    71,    72,    73,    74,    57,    39,    67,    68,
      69,    86,   194,    75,    85,   196,    71,    72,    73,    74,
      39,    87,    68,    69,    90,    91,    94,    75,    99,    71,
      72,    73,    74,   100,   102,   106,    60,   -38,   111,   113,
      75,   116,    76,   117,    77,   127,   130,   128,    39,    78,
     135,   134,    79,   136,    44,    44,   120,   121,   122,   123,
     124,   125,   126,    78,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   142,   164,   150,    78,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   148,   175,   149,   168,
     181,   183,   169,   174,   186,   185,   184,   177,   190,   187,
     188,   192,   195,   126,   189,   203,   205,   204,   206,   191,
     152,   107,   202,   201,   210,   211,     0,     0,   161,   163
};

static const yytype_int16 yycheck[] =
{
      19,    40,    41,    79,   113,    59,    60,     7,   117,    45,
      41,    42,    48,    99,    50,    91,     3,    73,    74,    75,
      57,    58,    78,     3,     4,     5,     6,    45,    35,    89,
      48,    11,    12,    13,    14,    15,     9,    91,     0,     5,
      61,    62,    63,    23,    10,    11,   100,     5,   134,   135,
       3,     7,    10,    11,    21,    22,    95,    57,    58,    98,
       3,     3,   118,   119,   120,   121,   122,   123,   177,    46,
     126,    24,    52,   149,    54,    28,    56,    96,    31,    59,
      99,    34,    62,   143,   144,   145,    10,    11,    61,    62,
      63,    41,    42,    43,    20,    21,    22,   136,    20,    21,
      22,    26,    27,   142,   160,   161,    37,    47,    39,   185,
     164,   187,   188,   189,    46,   134,   135,   203,   204,    56,
      49,    58,     3,     3,     4,     5,     6,    36,     3,     8,
     206,    11,    12,    13,    14,    15,     3,     3,     4,     5,
       6,    10,   181,    23,     7,   184,    12,    13,    14,    15,
       3,     7,     5,     6,    51,     7,     3,    23,     7,    12,
      13,    14,    15,    59,    59,     8,    42,     7,     3,    63,
      23,     7,    52,    56,    54,     7,     7,    11,     3,    59,
      30,    27,    62,     9,   203,   204,    16,    17,    18,    19,
      20,    21,    22,    59,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    44,     7,    53,    59,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    40,     7,    57,    64,
      25,    29,    60,    60,    38,    44,    32,    56,     7,    57,
      57,     7,    26,    22,    57,    27,     7,    30,    55,   175,
      60,    62,    64,   192,   207,    33,    -1,    -1,   125,   127
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    35,    66,     3,     0,     7,    45,    48,    67,    69,
      79,    80,     3,    85,     3,    89,    50,    68,    77,    78,
      79,    80,    81,    37,    39,    70,    71,    72,    69,    69,
      46,    47,    46,    49,     3,    90,    91,    36,     8,     3,
      24,    28,    31,    34,    95,    96,    97,    98,    99,   101,
     102,   103,    78,    78,    78,     3,    74,     3,    73,    41,
      42,    82,    83,    84,    70,    70,     3,     4,     5,     6,
      11,    12,    13,    14,    15,    23,    52,    54,    59,    62,
      86,    87,    92,    93,    95,     7,    10,     7,    57,    58,
      51,     7,    92,    92,     3,     9,    61,    62,    63,     7,
      59,    77,    59,    77,    90,    90,     8,    84,    93,    93,
      93,     3,    88,    63,    93,    86,     7,    56,    14,    15,
      16,    17,    18,    19,    20,    21,    22,     7,    11,    91,
       7,     3,    86,    90,    27,    30,     9,    92,    95,    92,
      96,    90,    44,    41,    42,    43,    75,    76,    40,    57,
      53,    87,    60,    87,    93,    93,    93,    93,    93,    93,
      94,    94,    93,    89,     7,    96,    96,    92,    64,    60,
      92,    91,    91,    91,    60,     7,    86,    56,    93,    93,
      90,    25,   100,    29,    32,    44,    38,    57,    57,    57,
       7,    75,     7,    87,    92,    26,    92,    86,    86,    86,
      86,    88,    64,    27,    30,     7,    55,    96,    96,    86,
     100,    33
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    65,    66,    67,    68,    69,    69,    69,    70,    70,
      70,    71,    72,    73,    74,    75,    75,    76,    76,    76,
      77,    78,    78,    78,    78,    79,    80,    81,    82,    82,
      82,    82,    83,    84,    85,    85,    86,    86,    86,    86,
      86,    86,    87,    87,    88,    88,    89,    89,    90,    90,
      90,    91,    91,    92,    92,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    94,    95,    95,    95,    95,    96,    96,
      96,    97,    97,    97,    97,    98,    99,   100,   100,   101,
     101,   102,   103
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
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

#define YYBACKUP(Token, Value)                                    \
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
#line 143 "parser.y"
                                                                                          {printf("Reduce: desc_algoritmo 0\n");}
#line 1571 "parser.tab.c"
    break;

  case 3:
#line 147 "parser.y"
                                                       {printf("Reduce: cabecera_alg 0\n");}
#line 1577 "parser.tab.c"
    break;

  case 4:
#line 152 "parser.y"
                          {printf("Recorriendo la tabla\n");}
#line 1583 "parser.tab.c"
    break;

  case 5:
#line 156 "parser.y"
                                   {printf("Reduce: decl_globales 0\n");}
#line 1589 "parser.tab.c"
    break;

  case 6:
#line 157 "parser.y"
                                      {printf("Reduce: decl_globales 1 \n");}
#line 1595 "parser.tab.c"
    break;

  case 7:
#line 158 "parser.y"
             {printf("Reduce: decl_globales 2 \n");}
#line 1601 "parser.tab.c"
    break;

  case 8:
#line 162 "parser.y"
                      {printf("Reduce: decl_a_f 0\n");}
#line 1607 "parser.tab.c"
    break;

  case 9:
#line 163 "parser.y"
                         {printf("Reduce: decl_a_f 1\n");}
#line 1613 "parser.tab.c"
    break;

  case 10:
#line 164 "parser.y"
             {printf("Reduce: decl_a_f 2\n");}
#line 1619 "parser.tab.c"
    break;

  case 11:
#line 167 "parser.y"
                                             {printf("Reduce: accion_d 0 \n");}
#line 1625 "parser.tab.c"
    break;

  case 12:
#line 171 "parser.y"
                                                                 {printf("Reduce: funcion_d 0\n");}
#line 1631 "parser.tab.c"
    break;

  case 13:
#line 175 "parser.y"
                                                                    {printf("Reduce: a_cabecera 0 \n");}
#line 1637 "parser.tab.c"
    break;

  case 14:
#line 179 "parser.y"
                                                                                    {printf("Reduce: f_cabecera 0\n");}
#line 1643 "parser.tab.c"
    break;

  case 15:
#line 183 "parser.y"
                                       {printf("Reduce: d_par_form 0\n");}
#line 1649 "parser.tab.c"
    break;

  case 16:
#line 184 "parser.y"
             {printf("Reduce: d_par_form 1\n");}
#line 1655 "parser.tab.c"
    break;

  case 17:
#line 188 "parser.y"
                                          {printf("Reduce: d_p_form 0\n");}
#line 1661 "parser.tab.c"
    break;

  case 18:
#line 189 "parser.y"
                                            {printf("Reduce: d_p_form 1\n");}
#line 1667 "parser.tab.c"
    break;

  case 19:
#line 190 "parser.y"
                                                {printf("Reduce: d_p_form 2\n");}
#line 1673 "parser.tab.c"
    break;

  case 20:
#line 194 "parser.y"
                                {printf("Reduce: bloque 0\n");}
#line 1679 "parser.tab.c"
    break;

  case 21:
#line 198 "parser.y"
                                   {printf("Reduce: declaraciones 0\n");}
#line 1685 "parser.tab.c"
    break;

  case 22:
#line 199 "parser.y"
                                       {printf("Reduce: declaraciones 1\n");}
#line 1691 "parser.tab.c"
    break;

  case 23:
#line 200 "parser.y"
                                    {printf("Reduce: declaraciones 2\n");}
#line 1697 "parser.tab.c"
    break;

  case 24:
#line 201 "parser.y"
             {printf("Reduce: declaraciones 3\n");}
#line 1703 "parser.tab.c"
    break;

  case 25:
#line 205 "parser.y"
                                                   {printf("Reduce: declaracion_tipo 0\n");}
#line 1709 "parser.tab.c"
    break;

  case 26:
#line 209 "parser.y"
                                                    {printf("Reduce: declaracion_const 0\n");}
#line 1715 "parser.tab.c"
    break;

  case 27:
#line 213 "parser.y"
                                                {printf("Reduce: declaracion_var 0\n");}
#line 1721 "parser.tab.c"
    break;

  case 28:
#line 217 "parser.y"
             {printf("Reduce: decl_ent_sal 0\n");}
#line 1727 "parser.tab.c"
    break;

  case 29:
#line 218 "parser.y"
                        {printf("Reduce: decl_ent_sal 1\n");}
#line 1733 "parser.tab.c"
    break;

  case 30:
#line 219 "parser.y"
               {printf("Reduce: decl_ent_sal 2\n");}
#line 1739 "parser.tab.c"
    break;

  case 31:
#line 220 "parser.y"
             {printf("Reduce: decl_ent_sal 3\n");}
#line 1745 "parser.tab.c"
    break;

  case 32:
#line 224 "parser.y"
                        {printf("Reduce: decl_ent 0\n");}
#line 1751 "parser.tab.c"
    break;

  case 33:
#line 228 "parser.y"
                        {printf("Reduce: decl_sal 0\n");}
#line 1757 "parser.tab.c"
    break;

  case 34:
#line 233 "parser.y"
                                                      {printf("Reduce: lista_d_tipo 0\n");}
#line 1763 "parser.tab.c"
    break;

  case 35:
#line 234 "parser.y"
             {printf("Reduce: lista_d_tipo 1\n");}
#line 1769 "parser.tab.c"
    break;

  case 36:
#line 238 "parser.y"
                                      {printf("Reduce: d_tipo 0\n");}
#line 1775 "parser.tab.c"
    break;

  case 37:
#line 239 "parser.y"
                                                                                       {printf("Reduce: d_tipo 1\n");}
#line 1781 "parser.tab.c"
    break;

  case 38:
#line 240 "parser.y"
                        {printf("Reduce: d_tipo 2\n");}
#line 1787 "parser.tab.c"
    break;

  case 39:
#line 241 "parser.y"
                                           {printf("Reduce: d_tipo 3\n");}
#line 1793 "parser.tab.c"
    break;

  case 40:
#line 242 "parser.y"
                     {printf("Reduce: d_tipo 4\n");}
#line 1799 "parser.tab.c"
    break;

  case 41:
#line 243 "parser.y"
                    {printf("Reduce: d_tipo 5\n");}
#line 1805 "parser.tab.c"
    break;

  case 42:
#line 247 "parser.y"
              {printf("Reduce: expresion_t 0\n");}
#line 1811 "parser.tab.c"
    break;

  case 43:
#line 248 "parser.y"
                        {printf("Reduce: expresion_t 1\n");}
#line 1817 "parser.tab.c"
    break;

  case 44:
#line 252 "parser.y"
                                                                       {printf("Reduce: lista_campos 0\n");}
#line 1823 "parser.tab.c"
    break;

  case 45:
#line 253 "parser.y"
             {printf("Reduce: lista_campos 1\n");}
#line 1829 "parser.tab.c"
    break;

  case 46:
#line 257 "parser.y"
                                                                       {printf("Reduce: lista_d_cte 0\n");}
#line 1835 "parser.tab.c"
    break;

  case 47:
#line 258 "parser.y"
             {printf("Reduce: lista_d_cte 1\n");}
#line 1841 "parser.tab.c"
    break;

  case 48:
#line 262 "parser.y"
                                         {printf("Reduce: lista_d_var 0\n");
                                        }
#line 1848 "parser.tab.c"
    break;

  case 49:
#line 264 "parser.y"
                                                                {printf("Reduce: lista_d_var 1\n");}
#line 1854 "parser.tab.c"
    break;

  case 50:
#line 265 "parser.y"
             {printf("Reduce: lista_d_var 2\n");}
#line 1860 "parser.tab.c"
    break;

  case 51:
#line 269 "parser.y"
                                        {printf("Reduce: lista_id 0\n"); 
                                            printf("Nombre del identificador: %s\n",(yyvsp[-2].sval));
					    if (((celda*)buscar_variable_nombre(tabla_s,(yyvsp[-2].sval))) == NULL){
                                            	modificar_tipo(&tabla_s,nueva_entrada(&tabla_s,(yyvsp[-2].sval)),(yyvsp[0].ival));
                                            	(yyval.ival) = (yyvsp[0].ival);
					    }else{
						log_err(5,(yyvsp[-2].sval));
					    }
                                        }
#line 1874 "parser.tab.c"
    break;

  case 52:
#line 279 "parser.y"
                                                    {printf("Reduce: lista_id 1\n");
                            printf("Nombre del identificador: %s\n",(yyvsp[-2].sval));
			    if (((celda*)buscar_variable_nombre(tabla_s,(yyvsp[-2].sval))) == NULL){
                            	modificar_tipo(&tabla_s,nueva_entrada(&tabla_s,(yyvsp[-2].sval)),(yyvsp[0].ival));
                            	(yyval.ival) = (yyvsp[0].ival);
			    }else{
				log_err(5,(yyvsp[-2].sval));
			    }
                        }
#line 1888 "parser.tab.c"
    break;

  case 53:
#line 291 "parser.y"
           {printf("Reduce: expresion 0\n");}
#line 1894 "parser.tab.c"
    break;

  case 54:
#line 292 "parser.y"
            {printf("Reduce: expresion 1\n");
                (yyval.ExpArit).place = (yyvsp[0].ExpArit).place;
                (yyval.ExpArit).type = (yyvsp[0].ExpArit).type;
            }
#line 1903 "parser.tab.c"
    break;

  case 55:
#line 299 "parser.y"
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
#line 1918 "parser.tab.c"
    break;

  case 56:
#line 309 "parser.y"
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
                                        log_err(1);
                                    }
    }
#line 1946 "parser.tab.c"
    break;

  case 57:
#line 332 "parser.y"
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
                                        log_err(1);
                                    }
                                }
#line 1974 "parser.tab.c"
    break;

  case 58:
#line 355 "parser.y"
                               {printf("Reduce: exp_a 3\n");
                                    if (((yyvsp[-2].ExpArit).type == ENTERO || (yyvsp[-2].ExpArit).type == REAL) && ((yyvsp[0].ExpArit).type == ENTERO || (yyvsp[0].ExpArit).type == REAL)){
                                        int ssid = nueva_entrada(&tabla_s,NULL);
                                        (yyval.ExpArit).place = ssid;
                                        gen(OP_DIV_REAL,(yyvsp[-2].ExpArit).place,(yyvsp[0].ExpArit).place,(yyval.ExpArit).place,&tc);
                                        (yyval.ExpArit).type = REAL;
                                    }else{
                                        log_err(1);
                                    }
                                }
#line 1989 "parser.tab.c"
    break;

  case 59:
#line 365 "parser.y"
                          {printf("Reduce: exp_a 4\n");
                                    if (((yyvsp[-2].ExpArit).type == ENTERO) && ((yyvsp[0].ExpArit).type == ENTERO)){
                                        int ssid = nueva_entrada(&tabla_s,NULL);
                                        (yyval.ExpArit).place = ssid;
                                        gen(OP_MOD,(yyvsp[-2].ExpArit).place,(yyvsp[0].ExpArit).place,(yyval.ExpArit).place,&tc);
                                        (yyval.ExpArit).type = ENTERO;
                                    }else{
                                        log_err(1);
                                    }}
#line 2003 "parser.tab.c"
    break;

  case 60:
#line 374 "parser.y"
                          {printf("Reduce: exp_a 5\n");
                            if (((yyvsp[-2].ExpArit).type == ENTERO) && ((yyvsp[0].ExpArit).type == ENTERO)){
                                        int ssid = nueva_entrada(&tabla_s,NULL);
                                        (yyval.ExpArit).place = ssid;
                                        gen(OP_DIV_ENT,(yyvsp[-2].ExpArit).place,(yyvsp[0].ExpArit).place,(yyval.ExpArit).place,&tc);
                                        (yyval.ExpArit).type = ENTERO;
                                    }else{
                                        log_err(1);
                                    }
                            }
#line 2018 "parser.tab.c"
    break;

  case 61:
#line 384 "parser.y"
                                {printf("Reduce: exp_a 6\n");
                                    (yyval.ExpArit).place = (yyvsp[-1].ExpArit).place;
                                    (yyval.ExpArit).type = (yyvsp[-1].ExpArit).type;
                                    if ((yyval.ExpArit).type == BOOL){
                                            (yyval.ExpArit).l_true = (yyvsp[-1].ExpArit).l_true;
                                            (yyval.ExpArit).l_false = (yyvsp[-1].ExpArit).l_false;
                                    }
                                }
#line 2031 "parser.tab.c"
    break;

  case 62:
#line 392 "parser.y"
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
                                    log_err(1);
                                }
                            }
#line 2059 "parser.tab.c"
    break;

  case 63:
#line 415 "parser.y"
                    {printf("Reduce: exp_a bis_entero\n");
                    int sid = nueva_entrada(&tabla_s,NULL);
                    modificar_tipo(&tabla_s,sid,ENTERO);
                    (yyval.ExpArit).place = sid;
                    (yyval.ExpArit).type = ENTERO;
                    }
#line 2070 "parser.tab.c"
    break;

  case 64:
#line 421 "parser.y"
                  {printf("Reduce: exp_a 8\n");
                    int sid = nueva_entrada(&tabla_s,NULL);
                    modificar_tipo(&tabla_s,sid,REAL);
                    (yyval.ExpArit).place = sid;
                    (yyval.ExpArit).type = REAL;
                    }
#line 2081 "parser.tab.c"
    break;

  case 65:
#line 428 "parser.y"
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
                            log_err(2);
                        }
                    }
#line 2100 "parser.tab.c"
    break;

  case 66:
#line 442 "parser.y"
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
                            log_err(2);
                        }
                    }
#line 2119 "parser.tab.c"
    break;

  case 67:
#line 458 "parser.y"
                                    {printf("Reduce: exp_a 10\n");
					if ((yyvsp[-3].ExpArit).type == BOOL && (yyvsp[-1].ExpArit).type == BOOL){
		                                backpatch((yyvsp[-3].ExpArit).l_true,(yyvsp[-1].ExpArit).quad);
		                                (yyval.ExpArit).l_false = merge_lists((yyvsp[-3].ExpArit).l_false, (yyvsp[0].ExpArit).l_false);
		                                (yyval.ExpArit).l_true = (yyvsp[0].ExpArit).l_true;
					}else{
						log_err(4);
					}
                                    }
#line 2133 "parser.tab.c"
    break;

  case 68:
#line 467 "parser.y"
                                    {printf("Reduce: exp_a 11\n");
					if ((yyvsp[-3].ExpArit).type == BOOL && (yyvsp[-1].ExpArit).type == BOOL){
		                                backpatch((yyvsp[-3].ExpArit).l_false,(yyvsp[-1].ExpArit).quad);
		                                (yyval.ExpArit).l_true = merge_lists((yyvsp[-3].ExpArit).l_true, (yyvsp[0].ExpArit).l_true);
		                                (yyval.ExpArit).l_false = (yyvsp[0].ExpArit).l_false;

					}else{
						log_err(4);
                                    	}
				    }
#line 2148 "parser.tab.c"
    break;

  case 69:
#line 477 "parser.y"
                   {printf("Reduce: exp_a 12\n");
                        if ((yyvsp[0].ExpArit).type == BOOL){
                                (yyval.ExpArit).l_true = (yyvsp[0].ExpArit).l_false;
                                (yyval.ExpArit).l_false = (yyvsp[0].ExpArit).l_true;
                        }else{
                            log_err(3);
                        }
                    }
#line 2161 "parser.tab.c"
    break;

  case 70:
#line 485 "parser.y"
                    {printf("Reduce: exp_a 13\n");
                        int sid = nueva_entrada(&tabla_s,NULL);
                        modificar_tipo(&tabla_s,sid,BOOL);
                        (yyval.ExpArit).place = sid;
                        (yyval.ExpArit).type = BOOL;
                    }
#line 2172 "parser.tab.c"
    break;

  case 71:
#line 491 "parser.y"
                {printf("Reduce: exp_a 14\n");
                    int sid = nueva_entrada(&tabla_s,NULL);
                    modificar_tipo(&tabla_s,sid,BOOL);
                    (yyval.ExpArit).place = sid;
                    (yyval.ExpArit).type = BOOL;
                }
#line 2183 "parser.tab.c"
    break;

  case 72:
#line 498 "parser.y"
                            {printf("Reduce: exp_a 15\n");
                                        (yyval.ExpArit).type = BOOL;
                                        (yyval.ExpArit).l_true = makelist(tc.nextquad);
                                        (yyval.ExpArit).l_false = makelist(tc.nextquad+1);
                                        gen((yyvsp[-1].ival),(yyvsp[-2].ExpArit).place,(yyvsp[0].ExpArit).place,NULL,&tc);
                                        gen(OP_GOTO,NULL,NULL,NULL,&tc);
                                    }
#line 2195 "parser.tab.c"
    break;

  case 73:
#line 508 "parser.y"
           {(yyval.ExpArit).quad = tc.nextquad;}
#line 2201 "parser.tab.c"
    break;

  case 74:
#line 512 "parser.y"
                      {printf("Reduce: operando 0\n");
                        printf("Valor del ID: %s\n",(yyvsp[0].sval));
                        (yyval.ExpArit).place = ((celda*)buscar_variable_nombre(tabla_s,(yyvsp[0].sval)))->sid;
                        (yyval.ExpArit).type = ((celda*)buscar_variable_nombre(tabla_s,(yyvsp[0].sval)))->tipo;
                        }
#line 2211 "parser.tab.c"
    break;

  case 75:
#line 517 "parser.y"
                                  {printf("Reduce: operando 1\n");}
#line 2217 "parser.tab.c"
    break;

  case 76:
#line 518 "parser.y"
                                             {printf("Reduce: operando 2\n");}
#line 2223 "parser.tab.c"
    break;

  case 77:
#line 519 "parser.y"
                       {printf("Reduce: operando 3\n");}
#line 2229 "parser.tab.c"
    break;

  case 78:
#line 523 "parser.y"
                                              {printf("Reduce: instrucciones 0\n");}
#line 2235 "parser.tab.c"
    break;

  case 79:
#line 524 "parser.y"
                 {printf("Reduce: instrucciones 1\n");}
#line 2241 "parser.tab.c"
    break;

  case 80:
#line 525 "parser.y"
            {printf("Reduce: instrucciones 2\n");}
#line 2247 "parser.tab.c"
    break;

  case 81:
#line 529 "parser.y"
                  {printf("Reduce: instruccion 0\n");}
#line 2253 "parser.tab.c"
    break;

  case 82:
#line 530 "parser.y"
                 {printf("Reduce: instruccion 1\n");}
#line 2259 "parser.tab.c"
    break;

  case 83:
#line 531 "parser.y"
                  {printf("Reduce: instruccion 2\n");}
#line 2265 "parser.tab.c"
    break;

  case 84:
#line 532 "parser.y"
                {printf("Reduce: instruccion 3\n");}
#line 2271 "parser.tab.c"
    break;

  case 85:
#line 536 "parser.y"
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
					printf("Distintos tipos\n");
                                        gen(OP_INTTOREAL,(yyvsp[0].ExpArit).place,NULL,(yyvsp[0].ExpArit).place, &tc);
                                        gen(OP_ASIG,(yyvsp[0].ExpArit).place,NULL,(yyvsp[-2].ExpArit).place, &tc);
                                        (yyval.ExpArit).type = REAL;
                                    }else{
                                            log_err(1);
                                    }
                                }
#line 2297 "parser.tab.c"
    break;

  case 86:
#line 560 "parser.y"
                                                                       {printf("Reduce: alternativa\n");}
#line 2303 "parser.tab.c"
    break;

  case 87:
#line 564 "parser.y"
                                                                      {printf("Reduce: lista_opciones 0\n");}
#line 2309 "parser.tab.c"
    break;

  case 88:
#line 565 "parser.y"
             {printf("Reduce: lista_opciones 1\n");}
#line 2315 "parser.tab.c"
    break;

  case 89:
#line 569 "parser.y"
                 {printf("Reduce: iteracion 0\n");}
#line 2321 "parser.tab.c"
    break;

  case 90:
#line 570 "parser.y"
                  {printf("Reduce: iteracion 1\n");}
#line 2327 "parser.tab.c"
    break;

  case 91:
#line 574 "parser.y"
                                                                                                        {printf("Reduce: it_cota_fija\n");}
#line 2333 "parser.tab.c"
    break;

  case 92:
#line 578 "parser.y"
                                                                 {printf("Reduce: it_cota_exp\n");}
#line 2339 "parser.tab.c"
    break;


#line 2343 "parser.tab.c"

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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
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
#line 580 "parser.y"

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
    if (A != NULL){
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
}

void log_err(int error,char* val){
   switch(error){
	case 1: printf("ERROR, tipos incompatibles\n");
		break;
	case 2: printf("ERROR, tipo incorrecto\n");
	   	break;
        case 3: printf("ERROR, se necesita un tipo booleano\n");
	   	break;
	case 4: printf("ERROR, los operadores Y y O sólo admiten expresiones booleanas\n");
		break;
	case 5: printf("ERROR, la variable %s ya está siendo utilizada\n",val);
		break;
	
   }
}
