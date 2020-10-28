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
  void yyerror (char const *);
  extern FILE *yyin;
  extern int yylex();
  extern int yyparse();

#line 76 "parser.tab.c" /* yacc.c:339  */

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

/* Copy the second part of user declarations.  */

#line 192 "parser.tab.c" /* yacc.c:358  */

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
#define YYLAST   257

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  88
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  210

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   319

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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    96,    96,   101,   105,   109,   110,   111,   115,   116,
     117,   121,   125,   126,   127,   128,   132,   136,   140,   144,
     145,   149,   150,   151,   152,   153,   154,   158,   159,   163,
     164,   168,   169,   173,   174,   175,   179,   180,   184,   185,
     186,   190,   194,   198,   199,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   226,   227,   228,   229,   233,   234,   238,   239,
     240,   241,   245,   249,   253,   254,   258,   262,   267,   268,
     275,   279,   283,   287,   291,   292,   296,   297,   298
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "bis_coma", "bis_puntoComa",
  "bis_dosPuntos", "bis_alternativa", "bis_asignacion", "bis_subrango",
  "bis_literal", "bis_tipo_base", "bis_dev", "bis_verdadero", "bis_falso",
  "bis_suma", "bis_resta", "bis_multiplicacion", "bis_div", "bis_mod",
  "bis_div_real", "bis_o", "bis_y", "bis_oprel", "bis_igual", "bis_no",
  "bis_id", "bis_literal_entero", "bis_literal_real",
  "bis_literal_caracter", "bis_comentario", "bis_algoritmo",
  "bis_falgoritmo", "bis_funcion", "bis_ffuncion", "bis_accion",
  "bis_faccion", "bis_tipo", "bis_ftipo", "bis_const", "bis_fconst",
  "bis_var", "bis_fvar", "bis_tupla", "bis_ftupla", "bis_si", "bis_fsi",
  "bis_para", "bis_fpara", "bis_mientras", "bis_fmientras", "bis_hasta",
  "bis_hacer", "bis_ent", "bis_sal", "bis_sino", "bis_entradaSalida",
  "bis_continuar", "bis_de", "bis_tabla", "bis_parentesisAbrir",
  "bis_parentesisCerrar", "bis_corcheteAbrir", "bis_corcheteCerrar",
  "bis_punto", "bis_ref", "$accept", "desc_algoritmo", "cabecera_alg",
  "bloque_alg", "decl_globales", "decl_a_f", "bloque", "declaraciones",
  "declaracion_tipo", "declaracion_const", "declaracion_var",
  "lista_d_tipo", "d_tipo", "expresion_t", "lista_campos", "lista_d_cte",
  "lista_d_var", "lista_id", "decl_ent_sal", "decl_ent", "decl_sal",
  "expresion", "exp_a", "operando", "instrucciones", "instruccion",
  "asignacion", "alternativa", "lista_opciones", "it_cota_fija",
  "it_cota_exp", "iteracion", "accion_d", "funcion_d", "a_cabecera",
  "f_cabecera", "d_par_form", "d_p_form", YY_NULLPTR
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
     315,   316,   317,   318,   319
};
# endif

#define YYPACT_NINF -111

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-111)))

#define YYTABLE_NINF -44

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       6,    24,    42,    61,  -111,     7,    65,    80,    38,    69,
       7,     7,    84,    74,    90,    76,    95,    91,    96,    -9,
      38,    38,    38,   118,   138,    88,    69,    69,  -111,  -111,
     111,   162,   159,   170,   178,   145,   188,   129,  -111,  -111,
     172,   184,   172,  -111,     0,  -111,   191,  -111,  -111,  -111,
    -111,  -111,  -111,  -111,  -111,   153,    38,   154,    38,    95,
      95,   185,   165,  -111,  -111,  -111,  -111,  -111,  -111,   172,
     172,   211,  -111,  -111,  -111,   192,   158,   172,   111,   216,
     213,   200,   187,    28,  -111,   219,  -111,    95,   220,   152,
    -111,    12,   218,     3,   172,   172,   201,  -111,    -9,    95,
     217,   -24,   194,  -111,  -111,  -111,  -111,   200,   112,   205,
     225,   189,    -4,   140,  -111,    65,    -4,   172,   172,   172,
     172,   172,   172,   172,   172,   172,    80,  -111,  -111,   229,
     230,    -9,   172,    -9,   200,   -18,    30,  -111,   175,   172,
      95,    95,    95,   176,   233,  -111,   111,  -111,   231,  -111,
    -111,  -111,  -111,   112,   112,    78,    78,    78,    78,   167,
     205,  -111,    95,    95,   186,   -12,   193,  -111,   227,    -3,
     236,   238,   239,   241,   -24,   242,    -4,  -111,  -111,   172,
     202,   172,  -111,   111,  -111,   111,   111,   111,  -111,  -111,
     192,   190,    19,  -111,     5,   244,  -111,  -111,  -111,  -111,
     196,    -9,    -9,  -111,   111,   186,   203,  -111,  -111,  -111
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     7,    20,    32,    15,    10,
       7,     7,     0,     0,     0,     0,    35,     0,     0,     0,
      15,    15,    15,     0,     0,     0,    10,    10,     5,     6,
      44,     0,     0,     0,    37,     0,     0,     0,     4,    62,
      44,     0,    44,    68,     0,    11,    67,    69,    70,    78,
      79,    71,    12,    13,    14,     0,    15,     0,    15,    35,
      35,     0,    38,    40,     8,     9,    26,    59,    60,    44,
      44,    62,    54,    53,    28,    30,     0,    44,    44,     0,
       0,    27,    43,    52,    16,     0,    17,     0,     0,    44,
       2,     0,     0,     0,    44,    44,     0,    65,     0,    35,
       0,    85,     0,    41,    42,     3,    39,     0,    55,    58,
       0,     0,    44,    43,    25,    20,    44,    44,    44,    44,
      44,    44,    44,    44,    44,    44,    32,    36,    18,    62,
       0,     0,    44,     0,    72,     0,    63,    66,     0,    44,
       0,     0,     0,     0,     0,    80,    44,    21,     0,    51,
      19,    24,    61,    45,    46,    47,    50,    49,    48,    57,
      56,    31,    35,    35,    75,     0,     0,    64,     0,     0,
       0,     0,     0,     0,    85,     0,    44,    33,    34,    44,
       0,    44,    77,    44,    81,    44,    44,    44,    82,    84,
      30,     0,     0,    73,     0,     0,    86,    87,    88,    29,
       0,     0,     0,    83,    44,    75,     0,    22,    74,    76
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -111,  -111,  -111,  -111,    49,   164,    17,   151,    41,    57,
    -111,   134,   -77,  -110,    64,   125,   -46,   -70,  -111,  -111,
     195,   -37,    27,   -19,   -83,  -111,  -111,  -111,    50,  -111,
    -111,  -111,  -111,  -111,  -111,  -111,    82,  -111
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     8,    17,     9,    25,    18,    19,    20,    21,
      22,    13,    79,    80,   111,    15,    35,    36,    61,    62,
      63,    81,    82,    83,    45,    46,    47,    48,   180,    49,
      50,    51,    26,    27,    58,    56,   143,   144
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      44,   114,   148,    91,   117,    93,   151,    94,    67,    68,
     117,    69,   130,   103,   104,   137,    39,   127,   131,   117,
      70,    39,    72,    73,    74,   117,   201,   117,   140,   141,
     184,   142,   107,   107,   117,    40,     1,    41,   181,    42,
     107,   117,     4,     6,   167,     7,    10,    43,   164,     3,
     166,    10,    10,   138,   133,    77,   202,   134,   135,    28,
      29,    95,    11,    96,    97,     5,   191,    11,    11,   175,
     170,   171,   172,   100,     6,   102,     7,   136,    16,    44,
     152,   107,   107,   107,   107,   107,   107,   107,   107,    95,
      12,    96,    97,    96,    97,   165,   108,   109,   124,   125,
     -43,    23,   169,    24,   113,    14,   195,    30,   196,   197,
     198,    31,    44,    32,    44,    33,   177,   178,   205,   206,
      34,    66,    37,    67,    68,    38,    69,   207,   120,   121,
     122,   123,   124,   125,   -43,    70,    71,    72,    73,    74,
      59,    60,   192,    55,   194,   153,   154,   155,   156,   157,
     158,   159,   160,    75,   118,   119,   120,   121,   122,   123,
     124,   125,    66,    57,    67,    68,    84,    69,    85,    76,
      77,    52,    53,    54,    86,    78,    70,   129,    72,    73,
      74,    87,    44,    44,    67,    68,    88,    69,   125,   -43,
      64,    65,    90,    89,    75,    98,    70,    39,    72,    73,
     149,   118,   119,   120,   121,   122,   123,   124,   125,    92,
      76,    77,    99,   101,   105,   -23,    78,   110,    60,   112,
     115,   116,   117,   126,   128,   132,    39,   -43,   139,   145,
     146,    77,   147,   162,   163,   168,   173,   174,   183,   176,
     179,   185,   182,   186,   187,   188,   190,   193,   203,   150,
     209,   161,   200,   204,   199,   208,   189,   106
};

static const yytype_uint8 yycheck[] =
{
      19,    78,   112,    40,    22,    42,   116,     7,    12,    13,
      22,    15,    89,    59,    60,    98,    25,    87,     6,    22,
      24,    25,    26,    27,    28,    22,     7,    22,    52,    53,
      33,    55,    69,    70,    22,    44,    30,    46,    50,    48,
      77,    22,     0,    36,    62,    38,     5,    56,   131,    25,
     133,    10,    11,    99,    51,    59,    51,    94,    95,    10,
      11,    61,     5,    63,    64,     4,   176,    10,    11,   146,
     140,   141,   142,    56,    36,    58,    38,    96,    40,    98,
     117,   118,   119,   120,   121,   122,   123,   124,   125,    61,
      25,    63,    64,    63,    64,   132,    69,    70,    20,    21,
      22,    32,   139,    34,    77,    25,   183,    23,   185,   186,
     187,    37,   131,    23,   133,    39,   162,   163,   201,   202,
      25,    10,    31,    12,    13,    29,    15,   204,    16,    17,
      18,    19,    20,    21,    22,    24,    25,    26,    27,    28,
      52,    53,   179,    25,   181,   118,   119,   120,   121,   122,
     123,   124,   125,    42,    14,    15,    16,    17,    18,    19,
      20,    21,    10,    25,    12,    13,     4,    15,     9,    58,
      59,    20,    21,    22,     4,    64,    24,    25,    26,    27,
      28,     3,   201,   202,    12,    13,    41,    15,    21,    22,
      26,    27,    63,     5,    42,     4,    24,    25,    26,    27,
      60,    14,    15,    16,    17,    18,    19,    20,    21,    25,
      58,    59,    59,    59,    29,     4,    64,    25,    53,    61,
       4,     8,    22,     4,     4,     7,    25,    22,    11,    35,
       5,    59,    43,     4,     4,    60,    60,     4,    11,     8,
      54,     5,    49,     5,     5,     4,     4,    45,     4,   115,
      47,   126,    62,    57,   190,   205,   174,    62
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    30,    66,    25,     0,     4,    36,    38,    67,    69,
      73,    74,    25,    76,    25,    80,    40,    68,    71,    72,
      73,    74,    75,    32,    34,    70,    97,    98,    69,    69,
      23,    37,    23,    39,    25,    81,    82,    31,    29,    25,
      44,    46,    48,    56,    88,    89,    90,    91,    92,    94,
      95,    96,    72,    72,    72,    25,   100,    25,    99,    52,
      53,    83,    84,    85,    70,    70,    10,    12,    13,    15,
      24,    25,    26,    27,    28,    42,    58,    59,    64,    77,
      78,    86,    87,    88,     4,     9,     4,     3,    41,     5,
      63,    86,    25,    86,     7,    61,    63,    64,     4,    59,
      71,    59,    71,    81,    81,    29,    85,    86,    87,    87,
      25,    79,    61,    87,    77,     4,     8,    22,    14,    15,
      16,    17,    18,    19,    20,    21,     4,    82,     4,    25,
      77,     6,     7,    51,    86,    86,    88,    89,    81,    11,
      52,    53,    55,   101,   102,    35,     5,    43,    78,    60,
      76,    78,    86,    87,    87,    87,    87,    87,    87,    87,
      87,    80,     4,     4,    89,    86,    89,    62,    60,    86,
      82,    82,    82,    60,     4,    77,     8,    81,    81,    54,
      93,    50,    49,    11,    33,     5,     5,     5,     4,   101,
       4,    78,    86,    45,    86,    77,    77,    77,    77,    79,
      62,     7,    51,     4,    57,    89,    89,    77,    93,    47
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    65,    66,    67,    68,    69,    69,    69,    70,    70,
      70,    71,    72,    72,    72,    72,    73,    74,    75,    76,
      76,    77,    77,    77,    77,    77,    77,    78,    78,    79,
      79,    80,    80,    81,    81,    81,    82,    82,    83,    83,
      83,    84,    85,    86,    86,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    88,    88,    88,    88,    89,    89,    90,    90,
      90,    90,    91,    92,    93,    93,    94,    95,    96,    96,
      97,    98,    99,   100,   101,   101,   102,   102,   102
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     7,     4,     2,     2,     2,     0,     2,     2,
       0,     2,     2,     2,     2,     0,     4,     4,     4,     5,
       0,     3,     8,     1,     3,     2,     1,     1,     1,     5,
       0,     5,     0,     5,     5,     0,     3,     1,     1,     2,
       1,     2,     2,     1,     0,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     1,     2,     3,     3,     2,     1,
       1,     3,     1,     3,     4,     2,     3,     1,     1,     1,
       1,     1,     3,     6,     5,     0,     9,     5,     1,     1,
       4,     6,     5,     7,     3,     0,     4,     4,     4
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
#line 97 "parser.y" /* yacc.c:1646  */
    {printf("desc_algoritmo: bis_algoritmo bis_id bis_puntoComa cabecera_alg bloque_alg bis_falgoritmo bis_punto\n");}
#line 1430 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 101 "parser.y" /* yacc.c:1646  */
    {printf ("cabecera_alg: decl_globales decl_a_f decl_ent_sal bis_comentario\n");}
#line 1436 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 105 "parser.y" /* yacc.c:1646  */
    {printf ("bloque_alg: bloque bis_comentario\n");}
#line 1442 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 109 "parser.y" /* yacc.c:1646  */
    {printf ("decl_globales: declaracion_tipo decl_globales\n");}
#line 1448 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 110 "parser.y" /* yacc.c:1646  */
    {printf ("decl_globales: declaracion_const decl_globales\n");}
#line 1454 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 111 "parser.y" /* yacc.c:1646  */
    {printf ("decl_globales: vacio\n");}
#line 1460 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 115 "parser.y" /* yacc.c:1646  */
    {printf ("decl_a_f: accion_d decl_a_f\n");}
#line 1466 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 116 "parser.y" /* yacc.c:1646  */
    {printf ("decl_a_f: uncion_d decl_a_f\n");}
#line 1472 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 117 "parser.y" /* yacc.c:1646  */
    {printf ("decl_a_f: vacio\n");}
#line 1478 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 121 "parser.y" /* yacc.c:1646  */
    {printf ("bloque: declaraciones instrucciones \n");}
#line 1484 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 125 "parser.y" /* yacc.c:1646  */
    {printf ("declaraciones: declaracion_tipo declaraciones\n");}
#line 1490 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 126 "parser.y" /* yacc.c:1646  */
    {printf ("declaraciones: declaracion_const declaraciones\n");}
#line 1496 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 127 "parser.y" /* yacc.c:1646  */
    {printf ("declaraciones: declaracion_var declaraciones\n");}
#line 1502 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 128 "parser.y" /* yacc.c:1646  */
    {printf ("declaraciones: vacio\n");}
#line 1508 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 132 "parser.y" /* yacc.c:1646  */
    {printf ("declaracion_tipo: bis_tipo lista_d_tipo bis_ftipo bis_puntoComa\n");}
#line 1514 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 136 "parser.y" /* yacc.c:1646  */
    {printf ("declaracion_const:  bis_const lista_d_cte bis_fconst bis_puntoComa\n");}
#line 1520 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 140 "parser.y" /* yacc.c:1646  */
    {printf ("declaracion_var: bis_var lista_d_var bis_fvar bis_puntoComa\n");}
#line 1526 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 144 "parser.y" /* yacc.c:1646  */
    {printf ("lista_d_tipo: bis_id bis_igual d_tipo bis_puntoComa lista_d_tipo \n");}
#line 1532 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 145 "parser.y" /* yacc.c:1646  */
    {printf ("lista_d_tipo: vacio\n");}
#line 1538 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 149 "parser.y" /* yacc.c:1646  */
    {printf ("d_tipo : bis_tupla lista_campos bis_ftupla \n");}
#line 1544 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 150 "parser.y" /* yacc.c:1646  */
    {printf ("d_tipo: bis_tabla bis_corcheteAbrir expresion_t bis_subrango expresion_t bis_corcheteCerrar bis_de d_tipo\n");}
#line 1550 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 151 "parser.y" /* yacc.c:1646  */
    {printf ("d_tipo: bis_id\n");}
#line 1556 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 152 "parser.y" /* yacc.c:1646  */
    {printf ("d_tipo: expresion_t bis_subrango expresion_t\n");}
#line 1562 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 153 "parser.y" /* yacc.c:1646  */
    {printf ("d_tipo: bis_ref d_tipo\n");}
#line 1568 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 154 "parser.y" /* yacc.c:1646  */
    {printf ("d_tipo: bis_tipo_base\n");}
#line 1574 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 158 "parser.y" /* yacc.c:1646  */
    {printf ("expresion_t: expresion\n");}
#line 1580 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 159 "parser.y" /* yacc.c:1646  */
    {printf ("expresion_t: bis_literal_caracter\n");}
#line 1586 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 163 "parser.y" /* yacc.c:1646  */
    {printf ("lista_campos: bis_id bis_dosPuntos d_tipo bis_puntoComa lista_campos\n");}
#line 1592 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 164 "parser.y" /* yacc.c:1646  */
    {printf ("lista_campos: vacio\n");}
#line 1598 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 168 "parser.y" /* yacc.c:1646  */
    {printf ("lista_d_cte: bis_id bis_igual bis_literal bis_puntoComa lista_d_cte\n");}
#line 1604 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 169 "parser.y" /* yacc.c:1646  */
    {printf ("lista_d_cte: vacio\n");}
#line 1610 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 173 "parser.y" /* yacc.c:1646  */
    {printf ("lista_d_var: lista_id bis_dosPuntos bis_id bis_puntoComa lista_d_var\n");}
#line 1616 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 174 "parser.y" /* yacc.c:1646  */
    {printf ("lista_d_var: lista_id bis_dosPuntos d_tipo bis_puntoComa lista_d_var\n");}
#line 1622 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 175 "parser.y" /* yacc.c:1646  */
    {printf ("lista_d_var: vacio\n");}
#line 1628 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 179 "parser.y" /* yacc.c:1646  */
    {printf ("lista_id: bis_id bis_coma lista_id\n");}
#line 1634 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 180 "parser.y" /* yacc.c:1646  */
    {printf ("lista_id: bis_id\n");}
#line 1640 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 184 "parser.y" /* yacc.c:1646  */
    {printf ("decl_ent_sal: decl_ent\n");}
#line 1646 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 185 "parser.y" /* yacc.c:1646  */
    {printf ("decl_ent_sal: decl_ent decl_sal\n");}
#line 1652 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 186 "parser.y" /* yacc.c:1646  */
    {printf ("decl_ent_sal: decl_sal\n");}
#line 1658 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 190 "parser.y" /* yacc.c:1646  */
    {printf ("decl_ent: bis_ent lista_d_var\n");}
#line 1664 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 194 "parser.y" /* yacc.c:1646  */
    {printf ("decl_sal: bis_sal lista_d_var\n");}
#line 1670 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 198 "parser.y" /* yacc.c:1646  */
    {printf ("expresion: exp_a\n");}
#line 1676 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 199 "parser.y" /* yacc.c:1646  */
    {printf ("expresion: vacio\n");}
#line 1682 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 203 "parser.y" /* yacc.c:1646  */
    {printf ("exp_a: exp_a bis_suma exp_a\n");}
#line 1688 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 204 "parser.y" /* yacc.c:1646  */
    {printf ("exp_a: exp_a bis_resta exp_a\n");}
#line 1694 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 205 "parser.y" /* yacc.c:1646  */
    {printf ("exp_a: exp_a bis_multiplicacion exp_a\n");}
#line 1700 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 206 "parser.y" /* yacc.c:1646  */
    {printf ("exp_a: exp_a bis_div_real exp_a \n");}
#line 1706 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 207 "parser.y" /* yacc.c:1646  */
    {printf ("exp_a: exp_a bis_mod exp_a \n");}
#line 1712 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 208 "parser.y" /* yacc.c:1646  */
    {printf ("exp_a: exp_a bis_div exp_a\n");}
#line 1718 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 209 "parser.y" /* yacc.c:1646  */
    {printf ("exp_a: bis_parentesisAbrir exp_a bis_parentesisCerrar\n");}
#line 1724 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 210 "parser.y" /* yacc.c:1646  */
    {printf ("exp_a: operando\n");}
#line 1730 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 211 "parser.y" /* yacc.c:1646  */
    {printf ("exp_a: bis_literal_real\n");}
#line 1736 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 212 "parser.y" /* yacc.c:1646  */
    {printf ("exp_a: bis_literal_entero\n");}
#line 1742 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 213 "parser.y" /* yacc.c:1646  */
    {printf ("exp_a: bis_resta exp_a\n");}
#line 1748 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 214 "parser.y" /* yacc.c:1646  */
    {printf ("exp_a: exp_a bis_y exp_a\n");}
#line 1754 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 215 "parser.y" /* yacc.c:1646  */
    {printf ("exp_a: exp_a bis_o exp_a\n");}
#line 1760 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 216 "parser.y" /* yacc.c:1646  */
    {printf ("exp_a: bis_no exp_a\n");}
#line 1766 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 217 "parser.y" /* yacc.c:1646  */
    {printf ("exp_a: bis_verdadero\n");}
#line 1772 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 218 "parser.y" /* yacc.c:1646  */
    {printf ("exp_a: bis_falso\n");}
#line 1778 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 219 "parser.y" /* yacc.c:1646  */
    {printf ("exp_a: expresion bis_mayor expresion\n");}
#line 1784 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 226 "parser.y" /* yacc.c:1646  */
    {printf ("operando: bis_id\n");}
#line 1790 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 227 "parser.y" /* yacc.c:1646  */
    {printf ("operando: operando bis_punto operando \n");}
#line 1796 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 228 "parser.y" /* yacc.c:1646  */
    {printf ("operando: operando bis_corcheteAbrir expresion bis_corcheteCerrar \n");}
#line 1802 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 229 "parser.y" /* yacc.c:1646  */
    {printf ("operando: operando bis_ref \n");}
#line 1808 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 233 "parser.y" /* yacc.c:1646  */
    {printf ("instrucciones: instruccion bis_puntoComa instrucciones \n");}
#line 1814 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 234 "parser.y" /* yacc.c:1646  */
    {printf ("instrucciones: instruccion \n");}
#line 1820 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 238 "parser.y" /* yacc.c:1646  */
    {printf ("instruccion: bis_continuar \n");}
#line 1826 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 239 "parser.y" /* yacc.c:1646  */
    {printf ("instruccion:asignacion \n");}
#line 1832 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 240 "parser.y" /* yacc.c:1646  */
    {printf ("instruccion: alternativa \n");}
#line 1838 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 241 "parser.y" /* yacc.c:1646  */
    {printf ("iteracion \n");}
#line 1844 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 245 "parser.y" /* yacc.c:1646  */
    {printf ("asignacion: operando bis_asignacion expresion \n");}
#line 1850 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 249 "parser.y" /* yacc.c:1646  */
    {printf ("alternativa: bis_si expresion bis_alternativa instrucciones lista_opciones bis_fsi \n");}
#line 1856 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 253 "parser.y" /* yacc.c:1646  */
    {printf ("lista_opciones: bis_sino expresion bis_asignacion instrucciones lista_opciones \n");}
#line 1862 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 254 "parser.y" /* yacc.c:1646  */
    {printf ("lista_opciones: vacio \n");}
#line 1868 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 258 "parser.y" /* yacc.c:1646  */
    {printf ("it_cota_fija: bis_para bis_id bis_asignacion expresion bis_hasta expresion bis_hacer instrucciones bis_fpara \n");}
#line 1874 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 262 "parser.y" /* yacc.c:1646  */
    {printf ("it_cota_exp: bis_mientras expresion bis_hacer instrucciones bis_fmientras \n");}
#line 1880 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 267 "parser.y" /* yacc.c:1646  */
    {printf ("iteracion: it_cota_fija \n");}
#line 1886 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 268 "parser.y" /* yacc.c:1646  */
    {printf ("iteracion: it_cota_exp \n");}
#line 1892 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 275 "parser.y" /* yacc.c:1646  */
    {printf ("accion_d: bis_accion a_cabecera bloque bis_faccion \n");}
#line 1898 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 279 "parser.y" /* yacc.c:1646  */
    {printf ("funcion_d: bis_funcion f_cabecera bloque bis_dev expresion bis_ffuncion \n");}
#line 1904 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 283 "parser.y" /* yacc.c:1646  */
    {printf ("a_cabecera: bis_id bis_parentesisAbrir d_par_form bis_parentesisCerrar bis_puntoComa \n");}
#line 1910 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 287 "parser.y" /* yacc.c:1646  */
    {printf ("f_cabecera: bis_id bis_parentesisAbrir lista_d_var bis_parentesisCerrar bis_dev d_tipo bis_puntoComa \n");}
#line 1916 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 291 "parser.y" /* yacc.c:1646  */
    {printf ("d_par_form: d_p_form bis_puntoComa d_par_form \n");}
#line 1922 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 292 "parser.y" /* yacc.c:1646  */
    {printf ("d_par_form: vacio \n");}
#line 1928 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 296 "parser.y" /* yacc.c:1646  */
    {printf ("d_p_form: bis_ent lista_id bis_dosPuntos d_tipo \n");}
#line 1934 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 297 "parser.y" /* yacc.c:1646  */
    {printf ("d_p_form: bis_sal lista_id bis_dosPuntos d_tipo \n");}
#line 1940 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 298 "parser.y" /* yacc.c:1646  */
    {printf ("d_p_form: bis_entradaSalida lista_id bis_dosPuntos d_tipo \n");}
#line 1946 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 1950 "parser.tab.c" /* yacc.c:1646  */
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
#line 303 "parser.y" /* yacc.c:1906  */

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
    






    
    
    
    
    
    




