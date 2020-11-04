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

  #define YYSTYPE double
  #include <stdio.h>
  #include <math.h>
  #include <stdlib.h>
  void yyerror (char const *);
  extern FILE *yyin;
  extern int yylex();
  extern int yyparse();

#line 81 "parser.tab.c"

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
#define YYLAST   257

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  91
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  210

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
       0,    97,    97,   102,   103,   107,   108,   112,   113,   114,
     115,   119,   120,   121,   125,   129,   130,   131,   132,   136,
     140,   144,   148,   149,   153,   154,   155,   156,   157,   158,
     162,   163,   167,   168,   172,   173,   177,   178,   179,   183,
     184,   188,   189,   190,   194,   198,   202,   203,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   230,   231,   232,   233,   237,
     238,   242,   243,   244,   245,   249,   253,   257,   258,   262,
     266,   271,   272,   279,   283,   287,   291,   295,   296,   300,
     301,   302
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

#define YYTABLE_NINF (-47)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -4,    19,    41,    89,  -110,    86,    66,    75,   100,    86,
      45,    86,    86,  -110,   114,    90,   118,   110,   136,   112,
     155,   139,   159,   -10,    86,    86,    86,   165,   180,   -30,
      45,    45,  -110,  -110,   108,   202,   200,   206,   100,   207,
     149,   208,  -110,  -110,   104,   189,   104,  -110,     7,  -110,
     211,  -110,  -110,  -110,  -110,  -110,  -110,  -110,  -110,   157,
      86,   158,    86,   100,   100,   191,   168,  -110,  -110,  -110,
    -110,  -110,  -110,   104,   104,   214,  -110,  -110,  -110,   194,
     161,   104,   108,   219,   216,   203,   166,    51,  -110,   222,
    -110,  -110,  -110,   223,   224,  -110,     3,   225,    -9,   104,
     104,   204,  -110,   -10,   100,   220,   116,   195,  -110,  -110,
    -110,  -110,   203,   176,   212,   228,   192,   130,    35,  -110,
    -110,   130,   104,   104,   104,   104,   104,   104,   104,   104,
     104,    75,   100,   100,   -10,   104,   -10,   203,    -5,    88,
    -110,   177,   104,   100,   100,   100,   179,   232,  -110,   108,
    -110,   230,  -110,  -110,  -110,   176,   176,    52,    52,    52,
      52,   178,   212,  -110,  -110,  -110,   186,    -2,   193,  -110,
     233,    -3,   236,   238,   240,   242,   116,   243,   130,   104,
     205,   104,  -110,   108,  -110,   108,   108,   108,  -110,  -110,
     194,   187,    17,  -110,    -6,   244,  -110,  -110,  -110,  -110,
     196,   -10,   -10,  -110,   108,   186,   209,  -110,  -110,  -110
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     1,    10,    23,    35,    38,    18,
      13,    10,    10,     9,     0,     0,     0,     0,    40,     0,
       0,     0,     6,     0,    18,    18,    18,     0,     0,     0,
      13,    13,     7,     8,    47,     0,     0,     0,     0,     0,
      47,     0,     5,    65,    47,     0,    47,    71,     0,    14,
      70,    72,    73,    81,    82,    74,    15,    16,    17,     0,
      18,     0,    18,    38,    38,     4,    41,    43,    11,    12,
      29,    62,    63,    47,    47,    65,    57,    56,    31,    33,
       0,    47,    47,     0,     0,    30,    46,    55,    19,     0,
      20,    39,    21,    65,     0,     2,     0,     0,     0,    47,
      47,     0,    68,     0,    38,     0,    88,     0,    44,    45,
       3,    42,     0,    58,    61,     0,     0,    47,    46,    28,
      22,    47,    47,    47,    47,    47,    47,    47,    47,    47,
      47,    35,    38,    38,     0,    47,     0,    75,     0,    66,
      69,     0,    47,     0,     0,     0,     0,     0,    83,    47,
      24,     0,    54,    27,    64,    48,    49,    50,    53,    52,
      51,    60,    59,    34,    36,    37,    78,     0,     0,    67,
       0,     0,     0,     0,     0,     0,    88,     0,    47,    47,
       0,    47,    80,    47,    84,    47,    47,    47,    85,    87,
      33,     0,     0,    76,     0,     0,    89,    90,    91,    32,
       0,     0,     0,    86,    47,    78,     0,    25,    77,    79
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -110,  -110,  -110,  -110,   190,   173,   -31,    80,    16,    85,
      87,  -110,   -39,  -109,    61,   121,   -57,   -36,  -110,  -110,
     188,   -41,   -63,   -23,   -99,  -110,  -110,  -110,    50,  -110,
    -110,  -110,  -110,  -110,  -110,  -110,    81,  -110
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     9,    21,    10,    29,    22,    23,    24,    25,
      26,    15,    83,    84,   116,    17,    19,    20,    65,    66,
      67,    85,    86,    87,    49,    50,    51,    52,   180,    53,
      54,    55,    30,    31,    62,    60,   146,   147
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      48,    94,    91,    96,   140,    98,   108,   109,   151,   134,
     113,   114,   153,   122,    99,    43,   122,   122,   118,   122,
     122,    11,    63,    64,   201,   122,     1,    11,    11,   105,
     184,   107,   112,   112,    44,   166,    45,   168,    46,   122,
     112,     4,   136,   119,     3,   202,    47,   141,   181,   123,
     124,   125,   126,   127,   128,   129,   130,   169,   137,   138,
     155,   156,   157,   158,   159,   160,   161,   162,   100,   191,
     101,   102,   129,   130,   -46,   164,   165,    27,   139,    28,
      48,   154,   112,   112,   112,   112,   112,   112,   112,   112,
      12,    14,    13,     5,   167,   152,    12,    12,    13,    13,
      16,   171,   205,   206,    56,    57,    58,   172,   173,   174,
     177,    48,   100,    48,   101,   102,    71,    72,    70,    73,
      71,    72,     6,    73,     7,    18,     8,    35,    74,    43,
      76,    77,    74,    75,    76,    77,    78,    34,   192,    38,
     194,    36,    71,    72,   195,    73,   196,   197,   198,    37,
      79,   101,   102,    39,    74,    43,    76,    77,    78,    70,
      40,    71,    72,    81,    73,   207,    80,    81,   143,   144,
      41,   145,    82,    74,    93,    76,    77,    78,    48,    48,
     123,   124,   125,   126,   127,   128,   129,   130,    42,    81,
      59,    79,   125,   126,   127,   128,   129,   130,   -46,   130,
     -46,    32,    33,    68,    69,    61,    88,    80,    81,    89,
      90,    92,    95,    82,    97,   103,   104,   106,   -26,   115,
     110,    64,   117,   120,   121,   122,   131,   132,   133,    43,
     148,   142,   135,   149,   -46,   150,   176,   170,   178,   175,
     179,   185,   182,   186,   183,   187,   188,   190,   203,   200,
     193,   199,   163,   204,   111,   208,   209,   189
};

static const yytype_uint8 yycheck[] =
{
      23,    40,    38,    44,   103,    46,    63,    64,   117,     6,
      73,    74,   121,    22,     7,    25,    22,    22,    81,    22,
      22,     5,    52,    53,     7,    22,    30,    11,    12,    60,
      33,    62,    73,    74,    44,   134,    46,   136,    48,    22,
      81,     0,    51,    82,    25,    51,    56,   104,    50,    14,
      15,    16,    17,    18,    19,    20,    21,    62,    99,   100,
     123,   124,   125,   126,   127,   128,   129,   130,    61,   178,
      63,    64,    20,    21,    22,   132,   133,    32,   101,    34,
     103,   122,   123,   124,   125,   126,   127,   128,   129,   130,
       5,    25,     5,     4,   135,    60,    11,    12,    11,    12,
      25,   142,   201,   202,    24,    25,    26,   143,   144,   145,
     149,   134,    61,   136,    63,    64,    12,    13,    10,    15,
      12,    13,    36,    15,    38,    25,    40,    37,    24,    25,
      26,    27,    24,    25,    26,    27,    28,    23,   179,     3,
     181,    23,    12,    13,   183,    15,   185,   186,   187,    39,
      42,    63,    64,    41,    24,    25,    26,    27,    28,    10,
       5,    12,    13,    59,    15,   204,    58,    59,    52,    53,
      31,    55,    64,    24,    25,    26,    27,    28,   201,   202,
      14,    15,    16,    17,    18,    19,    20,    21,    29,    59,
      25,    42,    16,    17,    18,    19,    20,    21,    22,    21,
      22,    11,    12,    30,    31,    25,     4,    58,    59,     9,
       4,     4,     4,    64,    25,     4,    59,    59,     4,    25,
      29,    53,    61,     4,     8,    22,     4,     4,     4,    25,
      35,    11,     7,     5,    22,    43,     4,    60,     8,    60,
      54,     5,    49,     5,    11,     5,     4,     4,     4,    62,
      45,   190,   131,    57,    66,   205,    47,   176
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    30,    66,    25,     0,     4,    36,    38,    40,    67,
      69,    73,    74,    75,    25,    76,    25,    80,    25,    81,
      82,    68,    71,    72,    73,    74,    75,    32,    34,    70,
      97,    98,    69,    69,    23,    37,    23,    39,     3,    41,
       5,    31,    29,    25,    44,    46,    48,    56,    88,    89,
      90,    91,    92,    94,    95,    96,    72,    72,    72,    25,
     100,    25,    99,    52,    53,    83,    84,    85,    70,    70,
      10,    12,    13,    15,    24,    25,    26,    27,    28,    42,
      58,    59,    64,    77,    78,    86,    87,    88,     4,     9,
       4,    82,     4,    25,    77,     4,    86,    25,    86,     7,
      61,    63,    64,     4,    59,    71,    59,    71,    81,    81,
      29,    85,    86,    87,    87,    25,    79,    61,    87,    77,
       4,     8,    22,    14,    15,    16,    17,    18,    19,    20,
      21,     4,     4,     4,     6,     7,    51,    86,    86,    88,
      89,    81,    11,    52,    53,    55,   101,   102,    35,     5,
      43,    78,    60,    78,    86,    87,    87,    87,    87,    87,
      87,    87,    87,    80,    81,    81,    89,    86,    89,    62,
      60,    86,    82,    82,    82,    60,     4,    77,     8,    54,
      93,    50,    49,    11,    33,     5,     5,     5,     4,   101,
       4,    78,    86,    45,    86,    77,    77,    77,    77,    79,
      62,     7,    51,     4,    57,    89,    89,    77,    93,    47
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    65,    66,    67,    67,    68,    68,    69,    69,    69,
      69,    70,    70,    70,    71,    72,    72,    72,    72,    73,
      74,    75,    76,    76,    77,    77,    77,    77,    77,    77,
      78,    78,    79,    79,    80,    80,    81,    81,    81,    82,
      82,    83,    83,    83,    84,    85,    86,    86,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    88,    88,    88,    88,    89,
      89,    90,    90,    90,    90,    91,    92,    93,    93,    94,
      95,    96,    96,    97,    98,    99,   100,   101,   101,   102,
     102,   102
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     7,     4,     3,     2,     1,     2,     2,     1,
       0,     2,     2,     0,     2,     2,     2,     2,     0,     4,
       4,     4,     4,     0,     3,     8,     1,     3,     2,     1,
       1,     1,     5,     0,     5,     0,     5,     5,     0,     3,
       1,     1,     2,     1,     2,     2,     1,     0,     3,     3,
       3,     3,     3,     3,     3,     1,     1,     1,     2,     3,
       3,     2,     1,     1,     3,     1,     3,     4,     2,     3,
       1,     1,     1,     1,     1,     3,     6,     5,     0,     9,
       5,     1,     1,     4,     6,     5,     7,     3,     0,     4,
       4,     4
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
#line 98 "parser.y"
    {printf("desc_algoritmo: bis_algoritmo bis_id bis_puntoComa cabecera_alg bloque_alg bis_falgoritmo bis_punto\n");}
#line 1531 "parser.tab.c"
    break;

  case 3:
#line 102 "parser.y"
                                                       {printf ("cabecera_alg: decl_globales decl_a_f decl_ent_sal bis_comentario\n");}
#line 1537 "parser.tab.c"
    break;

  case 4:
#line 103 "parser.y"
                                          {printf ("cabecera_alg: decl_globales decl_a_f decl_ent_sal \n");}
#line 1543 "parser.tab.c"
    break;

  case 5:
#line 107 "parser.y"
                          {printf ("bloque_alg: bloque bis_comentario\n");}
#line 1549 "parser.tab.c"
    break;

  case 6:
#line 108 "parser.y"
             {printf ("bloque_alg: bloque \n");}
#line 1555 "parser.tab.c"
    break;

  case 7:
#line 112 "parser.y"
                                   {printf ("decl_globales: declaracion_tipo decl_globales\n");}
#line 1561 "parser.tab.c"
    break;

  case 8:
#line 113 "parser.y"
                                      {printf ("decl_globales: declaracion_const decl_globales\n");}
#line 1567 "parser.tab.c"
    break;

  case 9:
#line 114 "parser.y"
                      {printf ("decl_globales: declaracion_var\n");}
#line 1573 "parser.tab.c"
    break;

  case 10:
#line 115 "parser.y"
       {printf ("decl_globales: vacio\n");}
#line 1579 "parser.tab.c"
    break;

  case 11:
#line 119 "parser.y"
                      {printf ("decl_a_f: accion_d decl_a_f\n");}
#line 1585 "parser.tab.c"
    break;

  case 12:
#line 120 "parser.y"
                         {printf ("decl_a_f: uncion_d decl_a_f\n");}
#line 1591 "parser.tab.c"
    break;

  case 13:
#line 121 "parser.y"
       {printf ("decl_a_f: vacio\n");}
#line 1597 "parser.tab.c"
    break;

  case 14:
#line 125 "parser.y"
                                {printf ("bloque: declaraciones instrucciones \n");}
#line 1603 "parser.tab.c"
    break;

  case 15:
#line 129 "parser.y"
                                   {printf ("declaraciones: declaracion_tipo declaraciones\n");}
#line 1609 "parser.tab.c"
    break;

  case 16:
#line 130 "parser.y"
                                      {printf ("declaraciones: declaracion_const declaraciones\n");}
#line 1615 "parser.tab.c"
    break;

  case 17:
#line 131 "parser.y"
                                    {printf ("declaraciones: declaracion_var declaraciones\n");}
#line 1621 "parser.tab.c"
    break;

  case 18:
#line 132 "parser.y"
       {printf ("declaraciones: vacio\n");}
#line 1627 "parser.tab.c"
    break;

  case 19:
#line 136 "parser.y"
                                                  {printf ("declaracion_tipo: bis_tipo lista_d_tipo bis_ftipo bis_puntoComa\n");}
#line 1633 "parser.tab.c"
    break;

  case 20:
#line 140 "parser.y"
                                                   {printf ("declaracion_const:  bis_const lista_d_cte bis_fconst bis_puntoComa\n");}
#line 1639 "parser.tab.c"
    break;

  case 21:
#line 144 "parser.y"
                                               {printf ("declaracion_var: bis_var lista_d_var bis_fvar bis_puntoComa\n");}
#line 1645 "parser.tab.c"
    break;

  case 22:
#line 148 "parser.y"
                                          {printf ("lista_d_tipo: bis_id bis_igual d_tipo bis_puntoComa lista_d_tipo \n");}
#line 1651 "parser.tab.c"
    break;

  case 23:
#line 149 "parser.y"
       {printf ("lista_d_tipo: vacio\n");}
#line 1657 "parser.tab.c"
    break;

  case 24:
#line 153 "parser.y"
                                      {printf ("d_tipo : bis_tupla lista_campos bis_ftupla \n");}
#line 1663 "parser.tab.c"
    break;

  case 25:
#line 154 "parser.y"
                                                                                                        {printf ("d_tipo: bis_tabla bis_corcheteAbrir expresion_t bis_subrango expresion_t bis_corcheteCerrar bis_de d_tipo\n");}
#line 1669 "parser.tab.c"
    break;

  case 26:
#line 155 "parser.y"
             {printf ("d_tipo: bis_id\n");}
#line 1675 "parser.tab.c"
    break;

  case 27:
#line 156 "parser.y"
                                           {printf ("d_tipo: expresion_t bis_subrango expresion_t\n");}
#line 1681 "parser.tab.c"
    break;

  case 28:
#line 157 "parser.y"
                     {printf ("d_tipo: bis_ref d_tipo\n");}
#line 1687 "parser.tab.c"
    break;

  case 29:
#line 158 "parser.y"
                    {printf ("d_tipo: bis_tipo_base\n");}
#line 1693 "parser.tab.c"
    break;

  case 30:
#line 162 "parser.y"
              {printf ("expresion_t: expresion\n");}
#line 1699 "parser.tab.c"
    break;

  case 31:
#line 163 "parser.y"
                           {printf ("expresion_t: bis_literal_caracter\n");}
#line 1705 "parser.tab.c"
    break;

  case 32:
#line 167 "parser.y"
                                                           {printf ("lista_campos: bis_id bis_dosPuntos d_tipo bis_puntoComa lista_campos\n");}
#line 1711 "parser.tab.c"
    break;

  case 33:
#line 168 "parser.y"
       {printf ("lista_campos: vacio\n");}
#line 1717 "parser.tab.c"
    break;

  case 34:
#line 172 "parser.y"
                                                           {printf ("lista_d_cte: bis_id bis_igual bis_literal bis_puntoComa lista_d_cte\n");}
#line 1723 "parser.tab.c"
    break;

  case 35:
#line 173 "parser.y"
       {printf ("lista_d_cte: vacio\n");}
#line 1729 "parser.tab.c"
    break;

  case 36:
#line 177 "parser.y"
                                                            {printf ("lista_d_var: lista_id bis_dosPuntos bis_id bis_puntoComa lista_d_var\n");}
#line 1735 "parser.tab.c"
    break;

  case 37:
#line 178 "parser.y"
                                                              {printf ("lista_d_var: lista_id bis_dosPuntos d_tipo bis_puntoComa lista_d_var\n");}
#line 1741 "parser.tab.c"
    break;

  case 38:
#line 179 "parser.y"
       {printf ("lista_d_var: vacio\n");}
#line 1747 "parser.tab.c"
    break;

  case 39:
#line 183 "parser.y"
                             {printf ("lista_id: bis_id bis_coma lista_id\n");}
#line 1753 "parser.tab.c"
    break;

  case 40:
#line 184 "parser.y"
             {printf ("lista_id: bis_id\n");}
#line 1759 "parser.tab.c"
    break;

  case 41:
#line 188 "parser.y"
             {printf ("decl_ent_sal: decl_ent\n");}
#line 1765 "parser.tab.c"
    break;

  case 42:
#line 189 "parser.y"
                        {printf ("decl_ent_sal: decl_ent decl_sal\n");}
#line 1771 "parser.tab.c"
    break;

  case 43:
#line 190 "parser.y"
               {printf ("decl_ent_sal: decl_sal\n");}
#line 1777 "parser.tab.c"
    break;

  case 44:
#line 194 "parser.y"
                        {printf ("decl_ent: bis_ent lista_d_var\n");}
#line 1783 "parser.tab.c"
    break;

  case 45:
#line 198 "parser.y"
                        {printf ("decl_sal: bis_sal lista_d_var\n");}
#line 1789 "parser.tab.c"
    break;

  case 46:
#line 202 "parser.y"
          {printf ("expresion: exp_a\n");}
#line 1795 "parser.tab.c"
    break;

  case 47:
#line 203 "parser.y"
      {printf ("expresion: vacio\n");}
#line 1801 "parser.tab.c"
    break;

  case 48:
#line 207 "parser.y"
                         {printf ("exp_a: exp_a bis_suma exp_a\n");}
#line 1807 "parser.tab.c"
    break;

  case 49:
#line 208 "parser.y"
                            {printf ("exp_a: exp_a bis_resta exp_a\n");}
#line 1813 "parser.tab.c"
    break;

  case 50:
#line 209 "parser.y"
                                     {printf ("exp_a: exp_a bis_multiplicacion exp_a\n");}
#line 1819 "parser.tab.c"
    break;

  case 51:
#line 210 "parser.y"
                               {printf ("exp_a: exp_a bis_div_real exp_a \n");}
#line 1825 "parser.tab.c"
    break;

  case 52:
#line 211 "parser.y"
                          {printf ("exp_a: exp_a bis_mod exp_a \n");}
#line 1831 "parser.tab.c"
    break;

  case 53:
#line 212 "parser.y"
                          {printf ("exp_a: exp_a bis_div exp_a\n");}
#line 1837 "parser.tab.c"
    break;

  case 54:
#line 213 "parser.y"
                                                     {printf ("exp_a: bis_parentesisAbrir exp_a bis_parentesisCerrar\n");}
#line 1843 "parser.tab.c"
    break;

  case 55:
#line 214 "parser.y"
               {printf ("exp_a: operando\n");}
#line 1849 "parser.tab.c"
    break;

  case 56:
#line 215 "parser.y"
                       {printf ("exp_a: bis_literal_real\n");}
#line 1855 "parser.tab.c"
    break;

  case 57:
#line 216 "parser.y"
                         {printf ("exp_a: bis_literal_entero\n");}
#line 1861 "parser.tab.c"
    break;

  case 58:
#line 217 "parser.y"
                      {printf ("exp_a: bis_resta exp_a\n");}
#line 1867 "parser.tab.c"
    break;

  case 59:
#line 218 "parser.y"
                        {printf ("exp_a: exp_a bis_y exp_a\n");}
#line 1873 "parser.tab.c"
    break;

  case 60:
#line 219 "parser.y"
                        {printf ("exp_a: exp_a bis_o exp_a\n");}
#line 1879 "parser.tab.c"
    break;

  case 61:
#line 220 "parser.y"
                   {printf ("exp_a: bis_no exp_a\n");}
#line 1885 "parser.tab.c"
    break;

  case 62:
#line 221 "parser.y"
                    {printf ("exp_a: bis_verdadero\n");}
#line 1891 "parser.tab.c"
    break;

  case 63:
#line 222 "parser.y"
                {printf ("exp_a: bis_falso\n");}
#line 1897 "parser.tab.c"
    break;

  case 64:
#line 223 "parser.y"
                                    {printf ("exp_a: expresion bis_mayor expresion\n");}
#line 1903 "parser.tab.c"
    break;

  case 65:
#line 230 "parser.y"
           {printf ("operando: bis_id\n");}
#line 1909 "parser.tab.c"
    break;

  case 66:
#line 231 "parser.y"
                                  {printf ("operando: operando bis_punto operando \n");}
#line 1915 "parser.tab.c"
    break;

  case 67:
#line 232 "parser.y"
                                                              {printf ("operando: operando bis_corcheteAbrir expresion bis_corcheteCerrar \n");}
#line 1921 "parser.tab.c"
    break;

  case 68:
#line 233 "parser.y"
                       {printf ("operando: operando bis_ref \n");}
#line 1927 "parser.tab.c"
    break;

  case 69:
#line 237 "parser.y"
                                            {printf ("instrucciones: instruccion bis_puntoComa instrucciones \n");}
#line 1933 "parser.tab.c"
    break;

  case 70:
#line 238 "parser.y"
                 {printf ("instrucciones: instruccion \n");}
#line 1939 "parser.tab.c"
    break;

  case 71:
#line 242 "parser.y"
                  {printf ("instruccion: bis_continuar \n");}
#line 1945 "parser.tab.c"
    break;

  case 72:
#line 243 "parser.y"
                 {printf ("instruccion:asignacion \n");}
#line 1951 "parser.tab.c"
    break;

  case 73:
#line 244 "parser.y"
                  {printf ("instruccion: alternativa \n");}
#line 1957 "parser.tab.c"
    break;

  case 74:
#line 245 "parser.y"
                {printf ("iteracion \n");}
#line 1963 "parser.tab.c"
    break;

  case 75:
#line 249 "parser.y"
                                      {printf ("asignacion: operando bis_asignacion expresion \n");}
#line 1969 "parser.tab.c"
    break;

  case 76:
#line 253 "parser.y"
                                                                          {printf ("alternativa: bis_si expresion bis_alternativa instrucciones lista_opciones bis_fsi \n");}
#line 1975 "parser.tab.c"
    break;

  case 77:
#line 257 "parser.y"
                                                                   {printf ("lista_opciones: bis_sino expresion bis_asignacion instrucciones lista_opciones \n");}
#line 1981 "parser.tab.c"
    break;

  case 78:
#line 258 "parser.y"
      {printf ("lista_opciones: vacio \n");}
#line 1987 "parser.tab.c"
    break;

  case 79:
#line 262 "parser.y"
                                                                                                   {printf ("it_cota_fija: bis_para bis_id bis_asignacion expresion bis_hasta expresion bis_hacer instrucciones bis_fpara \n");}
#line 1993 "parser.tab.c"
    break;

  case 80:
#line 266 "parser.y"
                                                                 {printf ("it_cota_exp: bis_mientras expresion bis_hacer instrucciones bis_fmientras \n");}
#line 1999 "parser.tab.c"
    break;

  case 81:
#line 271 "parser.y"
                 {printf ("iteracion: it_cota_fija \n");}
#line 2005 "parser.tab.c"
    break;

  case 82:
#line 272 "parser.y"
                  {printf ("iteracion: it_cota_exp \n");}
#line 2011 "parser.tab.c"
    break;

  case 83:
#line 279 "parser.y"
                                             {printf ("accion_d: bis_accion a_cabecera bloque bis_faccion \n");}
#line 2017 "parser.tab.c"
    break;

  case 84:
#line 283 "parser.y"
                                                                 {printf ("funcion_d: bis_funcion f_cabecera bloque bis_dev expresion bis_ffuncion \n");}
#line 2023 "parser.tab.c"
    break;

  case 85:
#line 287 "parser.y"
                                                                             {printf ("a_cabecera: bis_id bis_parentesisAbrir d_par_form bis_parentesisCerrar bis_puntoComa \n");}
#line 2029 "parser.tab.c"
    break;

  case 86:
#line 291 "parser.y"
                                                                                             {printf ("f_cabecera: bis_id bis_parentesisAbrir lista_d_var bis_parentesisCerrar bis_dev d_tipo bis_puntoComa \n");}
#line 2035 "parser.tab.c"
    break;

  case 87:
#line 295 "parser.y"
                                      {printf ("d_par_form: d_p_form bis_puntoComa d_par_form \n");}
#line 2041 "parser.tab.c"
    break;

  case 88:
#line 296 "parser.y"
      {printf ("d_par_form: vacio \n");}
#line 2047 "parser.tab.c"
    break;

  case 89:
#line 300 "parser.y"
                                          {printf ("d_p_form: bis_ent lista_id bis_dosPuntos d_tipo \n");}
#line 2053 "parser.tab.c"
    break;

  case 90:
#line 301 "parser.y"
                                            {printf ("d_p_form: bis_sal lista_id bis_dosPuntos d_tipo \n");}
#line 2059 "parser.tab.c"
    break;

  case 91:
#line 302 "parser.y"
                                                      {printf ("d_p_form: bis_entradaSalida lista_id bis_dosPuntos d_tipo \n");}
#line 2065 "parser.tab.c"
    break;


#line 2069 "parser.tab.c"

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
#line 307 "parser.y"

int main( int argc, char **argv ){
    ++argv, --argc;
    if ( argc > 0 )
        yyin = fopen( argv[0], "r" );
    else
        yyin = stdin;
    yyparse();
}

void yyerror(const char *s){
    printf("Esto es un asco");
    exit(-1);
}
    






    
    
    
    
    
    




