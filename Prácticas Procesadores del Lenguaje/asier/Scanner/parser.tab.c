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
  #include "lex.yy.c"
  int yylex (void);
  void yyerror (char const *);

#line 78 "parser.tab.c"

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
#define YYLAST   237

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  72
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  84
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  203

#define YYUNDEFTOK  2
#define YYMAXUTOK   326


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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   104,   104,   108,   112,   116,   117,   118,   122,   123,
     124,   127,   131,   135,   139,   143,   144,   148,   149,   150,
     154,   158,   159,   160,   161,   165,   169,   173,   177,   182,
     183,   187,   188,   189,   190,   191,   192,   196,   197,   201,
     202,   206,   207,   211,   212,   213,   217,   218,   222,   223,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   247,   248,   249,
     250,   254,   255,   259,   260,   261,   262,   266,   270,   274,
     275,   279,   280,   284,   288
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
  "BIS_VERDADERO", "BIS_FALSO", "BIS_MAS", "BIS_MENOS", "BIS_PRODUCTO",
  "BIS_DIV_REAL", "BIS_MOD", "BIS_DIV", "BIS_NEG", "BIS_O", "BIS_Y",
  "BIS_OPREL", "BIS_NO", "BIS_SI", "BIS_SI_NO_SI", "BIS_FSI",
  "BIS_ENTONCES", "BIS_MIENTRAS", "BIS_FMIENTRAS", "BIS_HACER", "BIS_PARA",
  "BIS_HASTA", "BIS_FPARA", "BIS_CONTINUAR", "BIS_ALGORITMO",
  "BIS_FALGORITMO", "BIS_FUNCION", "BIS_FFUNCION", "BIS_ACCION",
  "BIS_FACCION", "BIS_ENT", "BIS_SAL", "BIS_ENT_SAL", "BIS_DEV",
  "BIS_TIPO", "BIS_IGUAL", "BIS_FTIPO", "BIS_CONST", "BIS_FCONST",
  "BIS_VAR", "BIS_FVAR", "BIS_TUPLA", "BIS_FTUPLA", "BIS_TABLA", "BIS_DE",
  "BIS_SUBRANGO", "BIS_ASIG_TIPO", "BIS_COMA", "BIS_PAR_A", "BIS_PAR_C",
  "BIS_BOOLEANO", "BIS_CADENA", "BIS_CARACTER", "BIS_ENTERO", "BIS_REAL",
  "BIS_PUNTO", "BIS_REF", "BIS_COR_A", "BIS_COR_C", "$accept",
  "desc_algoritmo", "cabecera_alg", "bloque_alg", "decl_globales",
  "decl_a_f", "accion_d", "funcion_d", "a_cabecera", "f_cabecera",
  "d_par_form", "d_p_form", "bloque", "declaraciones", "declaracion_tipo",
  "declaracion_const", "declaracion_var", "decl_ent_sal", "lista_d_tipo",
  "d_tipo", "expresion_t", "lista_campos", "lista_d_cte", "lista_d_var",
  "lista_id", "expresion", "exp_a", "operando", "instrucciones",
  "instruccion", "asignacion", "alternativa", "lista_opciones",
  "iteracion", "it_cota_fija", "it_cota_exp", YY_NULLPTR
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
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326
};
# endif

#define YYPACT_NINF (-102)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-50)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -4,    15,    29,    33,  -102,   -33,    49,    55,   -22,    10,
     -33,   -33,    14,    23,    27,    37,    99,    83,   114,     8,
     -22,   -22,   -22,   121,   127,  -102,    10,    10,  -102,  -102,
      42,   132,   126,   133,    95,   103,    -5,    89,  -102,  -102,
     129,   129,   155,  -102,     1,  -102,   152,  -102,  -102,  -102,
    -102,  -102,  -102,  -102,  -102,   100,   -22,   109,   -22,   163,
    -102,  -102,   153,  -102,  -102,  -102,  -102,  -102,  -102,   129,
     129,   169,   104,   129,    42,   179,   130,   159,   176,    59,
    -102,   180,  -102,    99,   182,    42,   194,  -102,    -3,    -9,
     195,   129,   205,  -102,   129,     8,    99,   164,   101,   167,
    -102,   159,   125,   187,   154,   157,   112,   162,  -102,  -102,
     112,   129,   129,   129,   129,   129,   129,   129,   129,   129,
      55,  -102,  -102,   207,   208,     8,     8,   129,   159,    59,
     -21,  -102,   156,   129,    99,    99,    99,   158,   209,  -102,
      42,  -102,   161,  -102,  -102,  -102,   183,   183,   125,   125,
     125,   125,    67,   187,  -102,    99,    99,   190,   191,   -12,
    -102,   175,   -20,   166,   168,   170,   216,   101,   219,   112,
    -102,  -102,   129,   200,  -102,   129,    42,  -102,    42,    42,
      42,  -102,  -102,   169,   160,    68,  -102,    -8,   223,  -102,
    -102,  -102,  -102,   177,     8,     8,  -102,    42,   190,   197,
    -102,  -102,  -102
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     1,     7,    30,    42,    24,    10,
       7,     7,     0,     0,     0,     0,    45,     0,     0,     0,
      24,    24,    24,     0,     0,    28,    10,    10,     5,     6,
      48,     0,     0,     0,    47,     0,     0,     0,     4,    67,
      48,    48,     0,    73,     0,    20,    72,    74,    75,    76,
      81,    82,    21,    22,    23,     0,    24,     0,    24,     0,
       8,     9,    67,    38,    58,    59,    36,    64,    65,    48,
      48,    40,     0,    48,    48,     0,     0,    37,    49,    57,
      25,     0,    26,     0,     0,    48,     0,     2,     0,     0,
       0,    48,     0,    70,    48,     0,    45,     0,    16,     0,
       3,     0,    60,    63,     0,     0,    48,    49,    35,    29,
      48,    48,    48,    48,    48,    48,    48,    48,    48,    48,
      42,    46,    27,     0,     0,     0,     0,    48,    77,    68,
       0,    71,     0,    48,     0,     0,     0,     0,     0,    11,
      48,    31,     0,    56,    34,    66,    50,    51,    52,    53,
      54,    55,    62,    61,    41,    45,    45,    80,     0,     0,
      69,     0,     0,     0,     0,     0,     0,    16,     0,    48,
      44,    43,    48,     0,    84,    48,    48,    12,    48,    48,
      48,    13,    15,    40,     0,     0,    78,     0,     0,    17,
      18,    19,    39,     0,     0,     0,    14,    48,    80,     0,
      32,    79,    83
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -102,  -102,  -102,  -102,    94,    82,  -102,  -102,  -102,  -102,
      66,  -102,     3,   131,    32,    84,  -102,  -102,  -102,   -66,
    -101,    52,   116,   -69,   -70,   -34,    50,   -19,   -94,  -102,
    -102,  -102,    39,  -102,  -102,  -102
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     8,    17,     9,    25,    26,    27,    58,    56,
     137,   138,    18,    19,    20,    21,    22,    59,    13,    75,
      76,   105,    15,    35,    36,    77,    78,    79,    45,    46,
      47,    48,   173,    49,    50,    51
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      44,   131,    85,   111,   111,   142,    88,    89,   108,   144,
      91,    39,   111,   121,     6,   111,   111,     7,     3,   123,
     177,   111,   175,   126,   195,     6,   125,   132,     7,     4,
      16,   157,   158,     1,    40,   101,   101,    10,    41,   101,
       5,    42,    10,    10,    43,    62,    63,    64,    65,    23,
     160,    24,    12,    66,    86,    67,    68,   128,    14,    97,
     130,    99,    30,    69,   163,   164,   165,    70,   184,    92,
      93,    94,    31,   129,   168,    32,    44,   145,   101,   101,
     101,   101,   101,   101,   101,   101,   170,   171,    33,    11,
     119,   -49,   111,   159,    11,    11,    71,   194,    72,   162,
     198,   199,    34,    73,    28,    29,    44,    44,    60,    61,
     188,    74,   189,   190,   191,    39,    63,    64,    65,   102,
     103,    37,    38,   107,    55,    67,    68,    92,    93,    94,
      57,   200,    39,    69,    64,    65,    81,    70,   185,    80,
      82,   187,    67,    68,   134,   135,   136,   118,   119,   -49,
      69,    52,    53,    54,    70,    83,    84,    87,    90,    95,
     -33,    96,   146,   147,   148,   149,   150,   151,   152,   153,
      98,   100,   104,    73,   106,    44,    44,   112,   113,   114,
     115,   116,   117,   111,   118,   119,   109,   120,   110,   122,
      73,   112,   113,   114,   115,   116,   117,   124,   118,   119,
     114,   115,   116,   117,   127,   118,   119,   -49,    39,   139,
     133,   -49,   141,   140,   155,   156,   167,   172,   161,   169,
     166,   176,   174,   181,   143,   178,   183,   179,   186,   180,
     196,   193,   202,   182,   197,   192,   154,   201
};

static const yytype_uint8 yycheck[] =
{
      19,    95,     7,    24,    24,   106,    40,    41,    74,   110,
       9,     3,    24,    83,    47,    24,    24,    50,     3,    85,
      40,    24,    34,    32,    32,    47,    29,    96,    50,     0,
      52,   125,   126,    37,    26,    69,    70,     5,    30,    73,
       7,    33,    10,    11,    36,     3,     4,     5,     6,    39,
      71,    41,     3,    11,    59,    13,    14,    91,     3,    56,
      94,    58,    48,    21,   134,   135,   136,    25,   169,    68,
      69,    70,    49,    92,   140,    48,    95,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   155,   156,    51,     5,
      23,    24,    24,   127,    10,    11,    54,    29,    56,   133,
     194,   195,     3,    61,    10,    11,   125,   126,    26,    27,
     176,    69,   178,   179,   180,     3,     4,     5,     6,    69,
      70,    38,     8,    73,     3,    13,    14,    68,    69,    70,
       3,   197,     3,    21,     5,     6,    10,    25,   172,     7,
       7,   175,    13,    14,    43,    44,    45,    22,    23,    24,
      21,    20,    21,    22,    25,    60,    53,    68,     3,     7,
       7,    61,   112,   113,   114,   115,   116,   117,   118,   119,
      61,     8,     3,    61,    70,   194,   195,    15,    16,    17,
      18,    19,    20,    24,    22,    23,     7,     7,    58,     7,
      61,    15,    16,    17,    18,    19,    20,     3,    22,    23,
      17,    18,    19,    20,     9,    22,    23,    24,     3,    42,
      46,    24,    55,    59,     7,     7,     7,    27,    62,    58,
      62,    46,    31,     7,    62,    59,     7,    59,    28,    59,
       7,    71,    35,   167,    57,   183,   120,   198
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    37,    73,     3,     0,     7,    47,    50,    74,    76,
      86,    87,     3,    90,     3,    94,    52,    75,    84,    85,
      86,    87,    88,    39,    41,    77,    78,    79,    76,    76,
      48,    49,    48,    51,     3,    95,    96,    38,     8,     3,
      26,    30,    33,    36,    99,   100,   101,   102,   103,   105,
     106,   107,    85,    85,    85,     3,    81,     3,    80,    89,
      77,    77,     3,     4,     5,     6,    11,    13,    14,    21,
      25,    54,    56,    61,    69,    91,    92,    97,    98,    99,
       7,    10,     7,    60,    53,     7,    59,    68,    97,    97,
       3,     9,    68,    69,    70,     7,    61,    84,    61,    84,
       8,    97,    98,    98,     3,    93,    70,    98,    91,     7,
      58,    24,    15,    16,    17,    18,    19,    20,    22,    23,
       7,    96,     7,    91,     3,    29,    32,     9,    97,    99,
      97,   100,    95,    46,    43,    44,    45,    82,    83,    42,
      59,    55,    92,    62,    92,    97,    98,    98,    98,    98,
      98,    98,    98,    98,    94,     7,     7,   100,   100,    97,
      71,    62,    97,    96,    96,    96,    62,     7,    91,    58,
      95,    95,    27,   104,    31,    34,    46,    40,    59,    59,
      59,     7,    82,     7,    92,    97,    28,    97,    91,    91,
      91,    91,    93,    71,    29,    32,     7,    57,   100,   100,
      91,   104,    35
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    72,    73,    74,    75,    76,    76,    76,    77,    77,
      77,    78,    79,    80,    81,    82,    82,    83,    83,    83,
      84,    85,    85,    85,    85,    86,    87,    88,    89,    90,
      90,    91,    91,    91,    91,    91,    91,    92,    92,    93,
      93,    94,    94,    95,    95,    95,    96,    96,    97,    97,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    99,    99,    99,
      99,   100,   100,   101,   101,   101,   101,   102,   103,   104,
     104,   105,   105,   106,   107
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     7,     4,     2,     2,     2,     0,     2,     2,
       0,     4,     6,     5,     7,     3,     0,     4,     4,     4,
       2,     2,     2,     2,     0,     4,     4,     4,     0,     4,
       0,     3,     8,     1,     3,     2,     1,     1,     1,     5,
       0,     5,     0,     5,     5,     0,     3,     1,     0,     1,
       3,     3,     3,     3,     3,     3,     3,     1,     1,     1,
       2,     3,     3,     2,     1,     1,     3,     1,     3,     4,
       2,     3,     1,     1,     1,     1,     1,     3,     6,     5,
       0,     1,     1,     9,     5
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
#line 104 "parser.y"
                                                                                                    {printf("desc_algoritmo 0\n");}
#line 1530 "parser.tab.c"
    break;

  case 3:
#line 108 "parser.y"
                                                       {printf("cabecera_alg 0\n");}
#line 1536 "parser.tab.c"
    break;

  case 4:
#line 112 "parser.y"
                          {printf("bloque_alg 0\n");}
#line 1542 "parser.tab.c"
    break;

  case 5:
#line 116 "parser.y"
                                   {printf("decl_globales 0\n");}
#line 1548 "parser.tab.c"
    break;

  case 6:
#line 117 "parser.y"
                                      {printf("decl_globales 1 \n");}
#line 1554 "parser.tab.c"
    break;

  case 7:
#line 118 "parser.y"
             {printf("decl_globales 2 \n");}
#line 1560 "parser.tab.c"
    break;

  case 8:
#line 122 "parser.y"
                      {printf("decl_a_f 0\n");}
#line 1566 "parser.tab.c"
    break;

  case 9:
#line 123 "parser.y"
                         {printf("decl_a_f 1\n");}
#line 1572 "parser.tab.c"
    break;

  case 10:
#line 124 "parser.y"
             {printf("decl_a_f 2\n");}
#line 1578 "parser.tab.c"
    break;

  case 11:
#line 127 "parser.y"
                                             {printf("accion_d 0 \n");}
#line 1584 "parser.tab.c"
    break;

  case 12:
#line 131 "parser.y"
                                                                 {printf("funcion_d 0\n");}
#line 1590 "parser.tab.c"
    break;

  case 13:
#line 135 "parser.y"
                                                                    {printf("a_cabecera 0 \n");}
#line 1596 "parser.tab.c"
    break;

  case 14:
#line 139 "parser.y"
                                                                                    {printf("f_cabecera 0\n");}
#line 1602 "parser.tab.c"
    break;

  case 15:
#line 143 "parser.y"
                                       {printf("d_par_form 0\n");}
#line 1608 "parser.tab.c"
    break;

  case 16:
#line 144 "parser.y"
             {printf("d_par_form 1\n");}
#line 1614 "parser.tab.c"
    break;

  case 17:
#line 148 "parser.y"
                                          {printf("d_p_form 0\n");}
#line 1620 "parser.tab.c"
    break;

  case 18:
#line 149 "parser.y"
                                            {printf("d_p_form 1\n");}
#line 1626 "parser.tab.c"
    break;

  case 19:
#line 150 "parser.y"
                                                {printf("d_p_form 2\n");}
#line 1632 "parser.tab.c"
    break;

  case 20:
#line 154 "parser.y"
                                {printf("bloque 0\n");}
#line 1638 "parser.tab.c"
    break;

  case 21:
#line 158 "parser.y"
                                   {printf("declaraciones 0\n");}
#line 1644 "parser.tab.c"
    break;

  case 22:
#line 159 "parser.y"
                                       {printf("declaraciones 1\n");}
#line 1650 "parser.tab.c"
    break;

  case 23:
#line 160 "parser.y"
                                    {printf("declaraciones 2\n");}
#line 1656 "parser.tab.c"
    break;

  case 24:
#line 161 "parser.y"
             {printf("declaraciones 3\n");}
#line 1662 "parser.tab.c"
    break;

  case 25:
#line 165 "parser.y"
                                                   {printf("declaracion_tipo 0\n");}
#line 1668 "parser.tab.c"
    break;

  case 26:
#line 169 "parser.y"
                                                    {printf("declaracion_const 0\n");}
#line 1674 "parser.tab.c"
    break;

  case 27:
#line 173 "parser.y"
                                                {printf("declaracion_var 0\n");}
#line 1680 "parser.tab.c"
    break;

  case 28:
#line 177 "parser.y"
           {printf("decl_ent_sal 0\n");}
#line 1686 "parser.tab.c"
    break;

  case 29:
#line 182 "parser.y"
                                                      {printf("lista_d_tipo 0\n");}
#line 1692 "parser.tab.c"
    break;

  case 30:
#line 183 "parser.y"
             {printf("lista_d_tipo 1\n");}
#line 1698 "parser.tab.c"
    break;

  case 31:
#line 187 "parser.y"
                                      {printf("d_tipo 0\n");}
#line 1704 "parser.tab.c"
    break;

  case 32:
#line 188 "parser.y"
                                                                                       {printf("d_tipo 1\n");}
#line 1710 "parser.tab.c"
    break;

  case 33:
#line 189 "parser.y"
                        {printf("d_tipo 2\n");}
#line 1716 "parser.tab.c"
    break;

  case 34:
#line 190 "parser.y"
                                           {printf("d_tipo 3\n");}
#line 1722 "parser.tab.c"
    break;

  case 35:
#line 191 "parser.y"
                     {printf("d_tipo 4\n");}
#line 1728 "parser.tab.c"
    break;

  case 36:
#line 192 "parser.y"
                    {printf("d_tipo 5\n");}
#line 1734 "parser.tab.c"
    break;

  case 37:
#line 196 "parser.y"
              {printf("expresion_t 0\n");}
#line 1740 "parser.tab.c"
    break;

  case 38:
#line 197 "parser.y"
                        {printf("expresion_t 1\n");}
#line 1746 "parser.tab.c"
    break;

  case 39:
#line 201 "parser.y"
                                                                       {printf("lista_campos 0\n");}
#line 1752 "parser.tab.c"
    break;

  case 40:
#line 202 "parser.y"
             {printf("lista_campos 1\n");}
#line 1758 "parser.tab.c"
    break;

  case 41:
#line 206 "parser.y"
                                                                       {printf("lista_d_cte 0\n");}
#line 1764 "parser.tab.c"
    break;

  case 42:
#line 207 "parser.y"
             {printf("lista_d_cte 1\n");}
#line 1770 "parser.tab.c"
    break;

  case 43:
#line 211 "parser.y"
                                                                        {printf("lista_d_var 0\n");}
#line 1776 "parser.tab.c"
    break;

  case 44:
#line 212 "parser.y"
                                                                {printf("lista_d_var 1\n");}
#line 1782 "parser.tab.c"
    break;

  case 45:
#line 213 "parser.y"
             {printf("lista_d_var 2\n");}
#line 1788 "parser.tab.c"
    break;

  case 46:
#line 217 "parser.y"
                                        {printf("lista_id 0\n");}
#line 1794 "parser.tab.c"
    break;

  case 47:
#line 218 "parser.y"
                        {printf("lista_id 1\n");}
#line 1800 "parser.tab.c"
    break;

  case 49:
#line 223 "parser.y"
            {printf("expresion 0\n");}
#line 1806 "parser.tab.c"
    break;

  case 50:
#line 227 "parser.y"
                        {printf("exp_a 0\n");}
#line 1812 "parser.tab.c"
    break;

  case 51:
#line 228 "parser.y"
                            {printf("exp_a 1\n");}
#line 1818 "parser.tab.c"
    break;

  case 52:
#line 229 "parser.y"
                               {printf("exp_a 2\n");}
#line 1824 "parser.tab.c"
    break;

  case 53:
#line 230 "parser.y"
                               {printf("exp_a 3\n");}
#line 1830 "parser.tab.c"
    break;

  case 54:
#line 231 "parser.y"
                          {printf("exp_a 4\n");}
#line 1836 "parser.tab.c"
    break;

  case 55:
#line 232 "parser.y"
                          {printf("exp_a 5\n");}
#line 1842 "parser.tab.c"
    break;

  case 56:
#line 233 "parser.y"
                                {printf("exp_a 6\n");}
#line 1848 "parser.tab.c"
    break;

  case 57:
#line 234 "parser.y"
               {printf("exp_a 7\n");}
#line 1854 "parser.tab.c"
    break;

  case 58:
#line 235 "parser.y"
                  {printf("exp_a 8\n");}
#line 1860 "parser.tab.c"
    break;

  case 59:
#line 236 "parser.y"
                    {printf("exp_a bis_entero\n");}
#line 1866 "parser.tab.c"
    break;

  case 60:
#line 237 "parser.y"
                    {printf("exp_a 9\n");}
#line 1872 "parser.tab.c"
    break;

  case 61:
#line 238 "parser.y"
                        {printf("exp_a 10\n");}
#line 1878 "parser.tab.c"
    break;

  case 62:
#line 239 "parser.y"
                        {printf("exp_a 11\n");}
#line 1884 "parser.tab.c"
    break;

  case 63:
#line 240 "parser.y"
                   {printf("exp_a 12\n");}
#line 1890 "parser.tab.c"
    break;

  case 64:
#line 241 "parser.y"
                    {printf("exp_a 13\n");}
#line 1896 "parser.tab.c"
    break;

  case 65:
#line 242 "parser.y"
                {printf("exp_a 14\n");}
#line 1902 "parser.tab.c"
    break;

  case 66:
#line 243 "parser.y"
                                    {printf("exp_a 15\n");}
#line 1908 "parser.tab.c"
    break;

  case 67:
#line 247 "parser.y"
                      {printf("operando 0\n");}
#line 1914 "parser.tab.c"
    break;

  case 68:
#line 248 "parser.y"
                                  {printf("operando 1\n");}
#line 1920 "parser.tab.c"
    break;

  case 69:
#line 249 "parser.y"
                                             {printf("operando 2\n");}
#line 1926 "parser.tab.c"
    break;

  case 70:
#line 250 "parser.y"
                       {printf("operando 3\n");}
#line 1932 "parser.tab.c"
    break;

  case 71:
#line 254 "parser.y"
                                              {printf("instrucciones 0\n");}
#line 1938 "parser.tab.c"
    break;

  case 72:
#line 255 "parser.y"
                 {printf("instrucciones 1\n");}
#line 1944 "parser.tab.c"
    break;

  case 73:
#line 259 "parser.y"
                  {printf("instruccion 0\n");}
#line 1950 "parser.tab.c"
    break;

  case 74:
#line 260 "parser.y"
                 {printf("instruccion 1\n");}
#line 1956 "parser.tab.c"
    break;

  case 75:
#line 261 "parser.y"
                  {printf("instruccion 2\n");}
#line 1962 "parser.tab.c"
    break;

  case 76:
#line 262 "parser.y"
                {printf("instruccion 3\n");}
#line 1968 "parser.tab.c"
    break;

  case 77:
#line 266 "parser.y"
                                {printf("asignacion\n");}
#line 1974 "parser.tab.c"
    break;

  case 78:
#line 270 "parser.y"
                                                                       {printf("alternativa\n");}
#line 1980 "parser.tab.c"
    break;

  case 79:
#line 274 "parser.y"
                                                                      {printf("lista_opciones 0\n");}
#line 1986 "parser.tab.c"
    break;

  case 80:
#line 275 "parser.y"
             {printf("lista_opciones 1\n");}
#line 1992 "parser.tab.c"
    break;

  case 81:
#line 279 "parser.y"
                 {printf("iteracion 0\n");}
#line 1998 "parser.tab.c"
    break;

  case 82:
#line 280 "parser.y"
                  {printf("iteracion 1\n");}
#line 2004 "parser.tab.c"
    break;

  case 83:
#line 284 "parser.y"
                                                                                                        {printf("it_cota_fija\n");}
#line 2010 "parser.tab.c"
    break;

  case 84:
#line 288 "parser.y"
                                                                 {printf("it_cota_exp\n");}
#line 2016 "parser.tab.c"
    break;


#line 2020 "parser.tab.c"

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
#line 290 "parser.y"

extern FILE *yyin;
int main( int argc, char **argv ){
    ++argv, --argc;
    if ( argc > 0 )
        yyin = fopen( argv[0], "r" );
    else
        yyin = stdin;
    yyparse();
}

void yyerror(const char *s){
    exit(-1);
}
