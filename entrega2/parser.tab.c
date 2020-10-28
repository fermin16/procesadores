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
  void yyerror (char const *);
  extern FILE *yyin;
  extern int yylex();
  extern int yyparse();

#line 80 "parser.tab.c"

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
    bis_punto = 260,
    bis_dosPuntos = 261,
    bis_alternativa = 262,
    bis_asignacion = 263,
    bis_subrango = 264,
    bis_literal = 265,
    bis_tipo_base = 266,
    bis_dev = 267,
    bis_verdadero = 268,
    bis_falso = 269,
    bis_suma = 270,
    bis_resta = 271,
    bis_multiplicacion = 272,
    bis_div_real = 273,
    bis_mod = 274,
    bis_div = 275,
    bis_o = 276,
    bis_y = 277,
    bis_oprel = 278,
    bis_igual = 279,
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
    bis_ref = 314,
    bis_tabla = 315,
    bis_parentesisAbrir = 316,
    bis_parentesisCerrar = 317,
    bis_corcheteAbrir = 318,
    bis_corcheteCerrar = 319
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
#define YYLAST   255

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  88
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
       0,    97,    97,   102,   106,   110,   111,   112,   116,   117,
     118,   122,   126,   127,   128,   129,   133,   137,   141,   145,
     146,   150,   151,   152,   153,   154,   155,   159,   160,   164,
     165,   169,   170,   174,   175,   176,   180,   181,   185,   186,
     187,   191,   195,   199,   200,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   227,   228,   229,   230,   234,   235,   239,   240,
     241,   242,   246,   250,   254,   255,   259,   263,   268,   269,
     276,   280,   284,   288,   292,   293,   297,   298,   299
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "bis_coma", "bis_puntoComa", "bis_punto",
  "bis_dosPuntos", "bis_alternativa", "bis_asignacion", "bis_subrango",
  "bis_literal", "bis_tipo_base", "bis_dev", "bis_verdadero", "bis_falso",
  "bis_suma", "bis_resta", "bis_multiplicacion", "bis_div_real", "bis_mod",
  "bis_div", "bis_o", "bis_y", "bis_oprel", "bis_igual", "bis_no",
  "bis_id", "bis_literal_entero", "bis_literal_real",
  "bis_literal_caracter", "bis_comentario", "bis_algoritmo",
  "bis_falgoritmo", "bis_funcion", "bis_ffuncion", "bis_accion",
  "bis_faccion", "bis_tipo", "bis_ftipo", "bis_const", "bis_fconst",
  "bis_var", "bis_fvar", "bis_tupla", "bis_ftupla", "bis_si", "bis_fsi",
  "bis_para", "bis_fpara", "bis_mientras", "bis_fmientras", "bis_hasta",
  "bis_hacer", "bis_ent", "bis_sal", "bis_sino", "bis_entradaSalida",
  "bis_continuar", "bis_de", "bis_ref", "bis_tabla", "bis_parentesisAbrir",
  "bis_parentesisCerrar", "bis_corcheteAbrir", "bis_corcheteCerrar",
  "$accept", "desc_algoritmo", "cabecera_alg", "bloque_alg",
  "decl_globales", "decl_a_f", "bloque", "declaraciones",
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

#define YYPACT_NINF (-105)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-44)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -27,    26,    24,    27,  -105,    53,    37,    48,    52,    16,
      53,    53,    19,    58,    96,    83,   100,   103,   113,    -3,
      52,    52,    52,   115,   119,   -14,    16,    16,  -105,  -105,
     111,   154,   150,   159,   162,   127,   172,   174,  -105,  -105,
     105,   155,   105,  -105,     5,  -105,   176,  -105,  -105,  -105,
    -105,  -105,  -105,  -105,  -105,   139,    52,   140,    52,   100,
     100,   173,   151,  -105,  -105,  -105,  -105,  -105,  -105,   105,
     105,   198,  -105,  -105,  -105,   178,   111,   143,   105,   214,
     210,   197,   195,     6,  -105,   217,  -105,   100,   218,   148,
    -105,    15,   215,    -7,   199,   105,  -105,   105,    -3,   100,
     212,    17,   190,  -105,  -105,  -105,  -105,   197,   167,   204,
     222,   185,  -105,     1,   177,    37,     1,   105,   105,   105,
     105,   105,   105,   105,   105,   105,    48,  -105,  -105,   226,
     227,    -3,   105,    -3,     6,   197,    -5,  -105,   170,   105,
     100,   100,   100,   171,   230,  -105,   111,  -105,   228,  -105,
    -105,  -105,  -105,   167,   167,    86,    86,    86,    86,    55,
     204,  -105,   100,   100,   180,     2,   186,  -105,   229,    14,
     232,   234,   236,   239,    17,   240,     1,  -105,  -105,   105,
     200,   105,  -105,   111,  -105,   111,   111,   111,  -105,  -105,
     178,   181,    12,  -105,    -2,   243,  -105,  -105,  -105,  -105,
     191,    -3,    -3,  -105,   111,   180,   202,  -105,  -105,  -105
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     1,     7,    20,    32,    15,    10,
       7,     7,     0,     0,     0,     0,    35,     0,     0,     0,
      15,    15,    15,     0,     0,     0,    10,    10,     5,     6,
      44,     0,     0,     0,    37,     0,     0,     0,     4,    62,
      44,     0,    44,    68,     0,    11,    67,    69,    70,    78,
      79,    71,    12,    13,    14,     0,    15,     0,    15,    35,
      35,     0,    38,    40,     8,     9,    26,    59,    60,    44,
      44,    62,    54,    53,    28,    30,    44,     0,    44,     0,
       0,    27,    43,    52,    16,     0,    17,     0,     0,    44,
       2,     0,     0,     0,     0,    44,    65,    44,     0,    35,
       0,    85,     0,    41,    42,     3,    39,     0,    55,    58,
       0,     0,    25,    44,    43,    20,    44,    44,    44,    44,
      44,    44,    44,    44,    44,    44,    32,    36,    18,    62,
       0,     0,    44,     0,    63,    72,     0,    66,     0,    44,
       0,     0,     0,     0,     0,    80,    44,    21,     0,    51,
      19,    24,    61,    45,    46,    47,    48,    49,    50,    57,
      56,    31,    35,    35,    75,     0,     0,    64,     0,     0,
       0,     0,     0,     0,    85,     0,    44,    33,    34,    44,
       0,    44,    77,    44,    81,    44,    44,    44,    82,    84,
      30,     0,     0,    73,     0,     0,    86,    87,    88,    29,
       0,     0,     0,    83,    44,    75,     0,    22,    74,    76
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -105,  -105,  -105,  -105,   118,   141,    45,   135,    56,    89,
    -105,   133,   -70,  -104,    61,   126,   -52,   -85,  -105,  -105,
     192,   -37,    28,   -19,   -97,  -105,  -105,  -105,    50,  -105,
    -105,  -105,  -105,  -105,  -105,  -105,    79,  -105
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
      44,   137,   127,    91,     1,    93,   112,   103,   104,   148,
      94,    94,   151,    95,    67,    68,   117,    69,   117,   130,
     201,   117,   131,    39,     4,   117,    70,    39,    72,    73,
      74,     5,   107,   107,   164,   117,   166,   117,   117,    59,
      60,   107,    40,    30,    41,   133,    42,   138,   184,    23,
     202,    24,     3,   181,    43,   170,   171,   172,   135,   167,
     136,    10,    78,    12,    96,    96,    10,    10,    97,    97,
     140,   141,   191,   142,    14,   134,   175,   125,   -43,    44,
     152,   107,   107,   107,   107,   107,   107,   107,   107,     6,
       6,     7,     7,    16,    11,   165,    31,   108,   109,    11,
      11,   100,   169,   102,   205,   206,   114,   124,   125,   -43,
     177,   178,    44,   195,    44,   196,   197,   198,    67,    68,
      32,    69,    66,    33,    67,    68,    34,    69,    28,    29,
      70,    39,    72,    73,   207,    37,    70,    71,    72,    73,
      74,    55,   192,    38,   194,    57,   153,   154,   155,   156,
     157,   158,   159,   160,    75,    52,    53,    54,    84,    66,
      85,    67,    68,    86,    69,    87,    78,    64,    65,    88,
      76,    77,    78,    70,   129,    72,    73,    74,    89,    90,
      98,    92,    44,    44,   120,   121,   122,   123,   124,   125,
     -43,    75,   118,   119,   120,   121,   122,   123,   124,   125,
      99,   101,   -23,   105,   110,    60,   113,    76,    77,    78,
     118,   119,   120,   121,   122,   123,   124,   125,   115,   116,
     117,   126,   128,   132,   139,    39,   145,   -43,   146,   147,
     162,   163,   168,   173,   174,   179,   182,   176,   185,   149,
     186,   183,   187,   188,   190,   200,   193,   203,   150,   204,
     209,   199,   161,   189,   106,   208
};

static const yytype_uint8 yycheck[] =
{
      19,    98,    87,    40,    31,    42,    76,    59,    60,   113,
       5,     5,   116,     8,    13,    14,    23,    16,    23,    89,
       8,    23,     7,    26,     0,    23,    25,    26,    27,    28,
      29,     4,    69,    70,   131,    23,   133,    23,    23,    53,
      54,    78,    45,    24,    47,    52,    49,    99,    34,    33,
      52,    35,    26,    51,    57,   140,   141,   142,    95,    64,
      97,     5,    61,    26,    59,    59,    10,    11,    63,    63,
      53,    54,   176,    56,    26,    94,   146,    22,    23,    98,
     117,   118,   119,   120,   121,   122,   123,   124,   125,    37,
      37,    39,    39,    41,     5,   132,    38,    69,    70,    10,
      11,    56,   139,    58,   201,   202,    78,    21,    22,    23,
     162,   163,   131,   183,   133,   185,   186,   187,    13,    14,
      24,    16,    11,    40,    13,    14,    26,    16,    10,    11,
      25,    26,    27,    28,   204,    32,    25,    26,    27,    28,
      29,    26,   179,    30,   181,    26,   118,   119,   120,   121,
     122,   123,   124,   125,    43,    20,    21,    22,     4,    11,
      10,    13,    14,     4,    16,     3,    61,    26,    27,    42,
      59,    60,    61,    25,    26,    27,    28,    29,     6,     5,
       4,    26,   201,   202,    17,    18,    19,    20,    21,    22,
      23,    43,    15,    16,    17,    18,    19,    20,    21,    22,
      61,    61,     4,    30,    26,    54,    63,    59,    60,    61,
      15,    16,    17,    18,    19,    20,    21,    22,     4,     9,
      23,     4,     4,     8,    12,    26,    36,    23,     6,    44,
       4,     4,    62,    62,     4,    55,    50,     9,     6,    62,
       6,    12,     6,     4,     4,    64,    46,     4,   115,    58,
      48,   190,   126,   174,    62,   205
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    31,    66,    26,     0,     4,    37,    39,    67,    69,
      73,    74,    26,    76,    26,    80,    41,    68,    71,    72,
      73,    74,    75,    33,    35,    70,    97,    98,    69,    69,
      24,    38,    24,    40,    26,    81,    82,    32,    30,    26,
      45,    47,    49,    57,    88,    89,    90,    91,    92,    94,
      95,    96,    72,    72,    72,    26,   100,    26,    99,    53,
      54,    83,    84,    85,    70,    70,    11,    13,    14,    16,
      25,    26,    27,    28,    29,    43,    59,    60,    61,    77,
      78,    86,    87,    88,     4,    10,     4,     3,    42,     6,
       5,    86,    26,    86,     5,     8,    59,    63,     4,    61,
      71,    61,    71,    81,    81,    30,    85,    86,    87,    87,
      26,    79,    77,    63,    87,     4,     9,    23,    15,    16,
      17,    18,    19,    20,    21,    22,     4,    82,     4,    26,
      77,     7,     8,    52,    88,    86,    86,    89,    81,    12,
      53,    54,    56,   101,   102,    36,     6,    44,    78,    62,
      76,    78,    86,    87,    87,    87,    87,    87,    87,    87,
      87,    80,     4,     4,    89,    86,    89,    64,    62,    86,
      82,    82,    82,    62,     4,    77,     9,    81,    81,    55,
      93,    51,    50,    12,    34,     6,     6,     6,     4,   101,
       4,    78,    86,    46,    86,    77,    77,    77,    77,    79,
      64,     8,    52,     4,    58,    89,    89,    77,    93,    48
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
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
static const yytype_int8 yyr2[] =
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
#line 1527 "parser.tab.c"
    break;

  case 3:
#line 102 "parser.y"
                                                       {printf ("cabecera_alg: decl_globales decl_a_f decl_ent_sal bis_comentario\n");}
#line 1533 "parser.tab.c"
    break;

  case 4:
#line 106 "parser.y"
                          {printf ("bloque_alg: bloque bis_comentario\n");}
#line 1539 "parser.tab.c"
    break;

  case 5:
#line 110 "parser.y"
                                   {printf ("decl_globales: declaracion_tipo decl_globales\n");}
#line 1545 "parser.tab.c"
    break;

  case 6:
#line 111 "parser.y"
                                      {printf ("decl_globales: declaracion_const decl_globales\n");}
#line 1551 "parser.tab.c"
    break;

  case 7:
#line 112 "parser.y"
       {printf ("decl_globales: vacio\n");}
#line 1557 "parser.tab.c"
    break;

  case 8:
#line 116 "parser.y"
                      {printf ("decl_a_f: accion_d decl_a_f\n");}
#line 1563 "parser.tab.c"
    break;

  case 9:
#line 117 "parser.y"
                         {printf ("decl_a_f: uncion_d decl_a_f\n");}
#line 1569 "parser.tab.c"
    break;

  case 10:
#line 118 "parser.y"
       {printf ("decl_a_f: vacio\n");}
#line 1575 "parser.tab.c"
    break;

  case 11:
#line 122 "parser.y"
                                {printf ("bloque: declaraciones instrucciones \n");}
#line 1581 "parser.tab.c"
    break;

  case 12:
#line 126 "parser.y"
                                   {printf ("declaraciones: declaracion_tipo declaraciones\n");}
#line 1587 "parser.tab.c"
    break;

  case 13:
#line 127 "parser.y"
                                      {printf ("declaraciones: declaracion_const declaraciones\n");}
#line 1593 "parser.tab.c"
    break;

  case 14:
#line 128 "parser.y"
                                    {printf ("declaraciones: declaracion_var declaraciones\n");}
#line 1599 "parser.tab.c"
    break;

  case 15:
#line 129 "parser.y"
       {printf ("declaraciones: vacio\n");}
#line 1605 "parser.tab.c"
    break;

  case 16:
#line 133 "parser.y"
                                                  {printf ("declaracion_tipo: bis_tipo lista_d_tipo bis_ftipo bis_puntoComa\n");}
#line 1611 "parser.tab.c"
    break;

  case 17:
#line 137 "parser.y"
                                                   {printf ("declaracion_const:  bis_const lista_d_cte bis_fconst bis_puntoComa\n");}
#line 1617 "parser.tab.c"
    break;

  case 18:
#line 141 "parser.y"
                                               {printf ("declaracion_var: bis_var lista_d_var bis_fvar bis_puntoComa\n");}
#line 1623 "parser.tab.c"
    break;

  case 19:
#line 145 "parser.y"
                                                       {printf ("lista_d_tipo: bis_id bis_igual d_tipo bis_puntoComa lista_d_tipo \n");}
#line 1629 "parser.tab.c"
    break;

  case 20:
#line 146 "parser.y"
       {printf ("lista_d_tipo: vacio\n");}
#line 1635 "parser.tab.c"
    break;

  case 21:
#line 150 "parser.y"
                                      {printf ("d_tipo : bis_tupla lista_campos bis_ftupla \n");}
#line 1641 "parser.tab.c"
    break;

  case 22:
#line 151 "parser.y"
                                                                                                        {printf ("d_tipo: bis_tabla bis_corcheteAbrir expresion_t bis_subrango expresion_t bis_corcheteCerrar bis_de d_tipo\n");}
#line 1647 "parser.tab.c"
    break;

  case 23:
#line 152 "parser.y"
             {printf ("d_tipo: bis_id\n");}
#line 1653 "parser.tab.c"
    break;

  case 24:
#line 153 "parser.y"
                                           {printf ("d_tipo: expresion_t bis_subrango expresion_t\n");}
#line 1659 "parser.tab.c"
    break;

  case 25:
#line 154 "parser.y"
                     {printf ("d_tipo: bis_ref d_tipo\n");}
#line 1665 "parser.tab.c"
    break;

  case 26:
#line 155 "parser.y"
                    {printf ("d_tipo: bis_tipo_base\n");}
#line 1671 "parser.tab.c"
    break;

  case 27:
#line 159 "parser.y"
              {printf ("expresion_t: expresion\n");}
#line 1677 "parser.tab.c"
    break;

  case 28:
#line 160 "parser.y"
                           {printf ("expresion_t: bis_literal_caracter\n");}
#line 1683 "parser.tab.c"
    break;

  case 29:
#line 164 "parser.y"
                                                           {printf ("lista_campos: bis_id bis_dosPuntos d_tipo bis_puntoComa lista_campos\n");}
#line 1689 "parser.tab.c"
    break;

  case 30:
#line 165 "parser.y"
       {printf ("lista_campos: vacio\n");}
#line 1695 "parser.tab.c"
    break;

  case 31:
#line 169 "parser.y"
                                                           {printf ("lista_d_cte: bis_id bis_igual bis_literal bis_puntoComa lista_d_cte\n");}
#line 1701 "parser.tab.c"
    break;

  case 32:
#line 170 "parser.y"
       {printf ("lista_d_cte: vacio\n");}
#line 1707 "parser.tab.c"
    break;

  case 33:
#line 174 "parser.y"
                                                            {printf ("lista_d_var: lista_id bis_dosPuntos bis_id bis_puntoComa lista_d_var\n");}
#line 1713 "parser.tab.c"
    break;

  case 34:
#line 175 "parser.y"
                                                              {printf ("lista_d_var: lista_id bis_dosPuntos d_tipo bis_puntoComa lista_d_var\n");}
#line 1719 "parser.tab.c"
    break;

  case 35:
#line 176 "parser.y"
       {printf ("lista_d_var: vacio\n");}
#line 1725 "parser.tab.c"
    break;

  case 36:
#line 180 "parser.y"
                             {printf ("lista_id: bis_id bis_coma lista_id\n");}
#line 1731 "parser.tab.c"
    break;

  case 37:
#line 181 "parser.y"
             {printf ("lista_id: bis_id\n");}
#line 1737 "parser.tab.c"
    break;

  case 38:
#line 185 "parser.y"
             {printf ("decl_ent_sal: decl_ent\n");}
#line 1743 "parser.tab.c"
    break;

  case 39:
#line 186 "parser.y"
                        {printf ("decl_ent_sal: decl_ent decl_sal\n");}
#line 1749 "parser.tab.c"
    break;

  case 40:
#line 187 "parser.y"
               {printf ("decl_ent_sal: decl_sal\n");}
#line 1755 "parser.tab.c"
    break;

  case 41:
#line 191 "parser.y"
                        {printf ("decl_ent: bis_ent lista_d_var\n");}
#line 1761 "parser.tab.c"
    break;

  case 42:
#line 195 "parser.y"
                        {printf ("decl_sal: bis_sal lista_d_var\n");}
#line 1767 "parser.tab.c"
    break;

  case 43:
#line 199 "parser.y"
          {printf ("expresion: exp_a\n");}
#line 1773 "parser.tab.c"
    break;

  case 44:
#line 200 "parser.y"
      {printf ("expresion: vacio\n");}
#line 1779 "parser.tab.c"
    break;

  case 45:
#line 204 "parser.y"
                         {printf ("exp_a: exp_a bis_suma exp_a\n");}
#line 1785 "parser.tab.c"
    break;

  case 46:
#line 205 "parser.y"
                            {printf ("exp_a: exp_a bis_resta exp_a\n");}
#line 1791 "parser.tab.c"
    break;

  case 47:
#line 206 "parser.y"
                                     {printf ("exp_a: exp_a bis_multiplicacion exp_a\n");}
#line 1797 "parser.tab.c"
    break;

  case 48:
#line 207 "parser.y"
                               {printf ("exp_a: exp_a bis_div_real exp_a \n");}
#line 1803 "parser.tab.c"
    break;

  case 49:
#line 208 "parser.y"
                          {printf ("exp_a: exp_a bis_mod exp_a \n");}
#line 1809 "parser.tab.c"
    break;

  case 50:
#line 209 "parser.y"
                          {printf ("exp_a: exp_a bis_div exp_a\n");}
#line 1815 "parser.tab.c"
    break;

  case 51:
#line 210 "parser.y"
                                                     {printf ("exp_a: bis_parentesisAbrir exp_a bis_parentesisCerrar\n");}
#line 1821 "parser.tab.c"
    break;

  case 52:
#line 211 "parser.y"
               {printf ("exp_a: operando\n");}
#line 1827 "parser.tab.c"
    break;

  case 53:
#line 212 "parser.y"
                       {printf ("exp_a: bis_literal_real\n");}
#line 1833 "parser.tab.c"
    break;

  case 54:
#line 213 "parser.y"
                         {printf ("exp_a: bis_literal_entero\n");}
#line 1839 "parser.tab.c"
    break;

  case 55:
#line 214 "parser.y"
                      {printf ("exp_a: bis_resta exp_a\n");}
#line 1845 "parser.tab.c"
    break;

  case 56:
#line 215 "parser.y"
                        {printf ("exp_a: exp_a bis_y exp_a\n");}
#line 1851 "parser.tab.c"
    break;

  case 57:
#line 216 "parser.y"
                        {printf ("exp_a: exp_a bis_o exp_a\n");}
#line 1857 "parser.tab.c"
    break;

  case 58:
#line 217 "parser.y"
                   {printf ("exp_a: bis_no exp_a\n");}
#line 1863 "parser.tab.c"
    break;

  case 59:
#line 218 "parser.y"
                    {printf ("exp_a: bis_verdadero\n");}
#line 1869 "parser.tab.c"
    break;

  case 60:
#line 219 "parser.y"
                {printf ("exp_a: bis_falso\n");}
#line 1875 "parser.tab.c"
    break;

  case 61:
#line 220 "parser.y"
                                    {printf ("exp_a: expresion bis_mayor expresion\n");}
#line 1881 "parser.tab.c"
    break;

  case 62:
#line 227 "parser.y"
           {printf ("operando: bis_id\n");}
#line 1887 "parser.tab.c"
    break;

  case 63:
#line 228 "parser.y"
                                  {printf ("operando: operando bis_punto operando \n");}
#line 1893 "parser.tab.c"
    break;

  case 64:
#line 229 "parser.y"
                                                              {printf ("operando: operando bis_corcheteAbrir expresion bis_corcheteCerrar \n");}
#line 1899 "parser.tab.c"
    break;

  case 65:
#line 230 "parser.y"
                       {printf ("operando: operando bis_ref \n");}
#line 1905 "parser.tab.c"
    break;

  case 66:
#line 234 "parser.y"
                                            {printf ("instrucciones: instruccion bis_puntoComa instrucciones \n");}
#line 1911 "parser.tab.c"
    break;

  case 67:
#line 235 "parser.y"
                 {printf ("instrucciones: instruccion \n");}
#line 1917 "parser.tab.c"
    break;

  case 68:
#line 239 "parser.y"
                  {printf ("instruccion: bis_continuar \n");}
#line 1923 "parser.tab.c"
    break;

  case 69:
#line 240 "parser.y"
                 {printf ("instruccion:asignacion \n");}
#line 1929 "parser.tab.c"
    break;

  case 70:
#line 241 "parser.y"
                  {printf ("instruccion: alternativa \n");}
#line 1935 "parser.tab.c"
    break;

  case 71:
#line 242 "parser.y"
                {printf ("iteracion \n");}
#line 1941 "parser.tab.c"
    break;

  case 72:
#line 246 "parser.y"
                                      {printf ("asignacion: operando bis_asignacion expresion \n");}
#line 1947 "parser.tab.c"
    break;

  case 73:
#line 250 "parser.y"
                                                                          {printf ("alternativa: bis_si expresion bis_alternativa instrucciones lista_opciones bis_fsi \n");}
#line 1953 "parser.tab.c"
    break;

  case 74:
#line 254 "parser.y"
                                                                   {printf ("lista_opciones: bis_sino expresion bis_asignacion instrucciones lista_opciones \n");}
#line 1959 "parser.tab.c"
    break;

  case 75:
#line 255 "parser.y"
      {printf ("lista_opciones: vacio \n");}
#line 1965 "parser.tab.c"
    break;

  case 76:
#line 259 "parser.y"
                                                                                                   {printf ("it_cota_fija: bis_para bis_id bis_asignacion expresion bis_hasta expresion bis_hacer instrucciones bis_fpara \n");}
#line 1971 "parser.tab.c"
    break;

  case 77:
#line 263 "parser.y"
                                                                 {printf ("it_cota_exp: bis_mientras expresion bis_hacer instrucciones bis_fmientras \n");}
#line 1977 "parser.tab.c"
    break;

  case 78:
#line 268 "parser.y"
                 {printf ("iteracion: it_cota_fija \n");}
#line 1983 "parser.tab.c"
    break;

  case 79:
#line 269 "parser.y"
                  {printf ("iteracion: it_cota_exp \n");}
#line 1989 "parser.tab.c"
    break;

  case 80:
#line 276 "parser.y"
                                             {printf ("accion_d: bis_accion a_cabecera bloque bis_faccion \n");}
#line 1995 "parser.tab.c"
    break;

  case 81:
#line 280 "parser.y"
                                                                 {printf ("funcion_d: bis_funcion f_cabecera bloque bis_dev expresion bis_ffuncion \n");}
#line 2001 "parser.tab.c"
    break;

  case 82:
#line 284 "parser.y"
                                                                             {printf ("a_cabecera: bis_id bis_parentesisAbrir d_par_form bis_parentesisCerrar bis_puntoComa \n");}
#line 2007 "parser.tab.c"
    break;

  case 83:
#line 288 "parser.y"
                                                                                             {printf ("f_cabecera: bis_id bis_parentesisAbrir lista_d_var bis_parentesisCerrar bis_dev d_tipo bis_puntoComa \n");}
#line 2013 "parser.tab.c"
    break;

  case 84:
#line 292 "parser.y"
                                      {printf ("d_par_form: d_p_form bis_puntoComa d_par_form \n");}
#line 2019 "parser.tab.c"
    break;

  case 85:
#line 293 "parser.y"
      {printf ("d_par_form: vacio \n");}
#line 2025 "parser.tab.c"
    break;

  case 86:
#line 297 "parser.y"
                                          {printf ("d_p_form: bis_ent lista_id bis_dosPuntos d_tipo \n");}
#line 2031 "parser.tab.c"
    break;

  case 87:
#line 298 "parser.y"
                                            {printf ("d_p_form: bis_sal lista_id bis_dosPuntos d_tipo \n");}
#line 2037 "parser.tab.c"
    break;

  case 88:
#line 299 "parser.y"
                                                      {printf ("d_p_form: bis_entradaSalida lista_id bis_dosPuntos d_tipo \n");}
#line 2043 "parser.tab.c"
    break;


#line 2047 "parser.tab.c"

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
#line 304 "parser.y"

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
    






    
    
    
    
    
    




