/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 1



/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
#line 1 "c_grammar/c_grammar_2011.y"

#include <cstdio>
#include <ezast.h>
#include <ezrule.h>
#include <c_grammar_2011.tab.h>

// stuff from flex that bison needs to know about
extern "C" int yylex();
extern "C" FILE *yyin;
extern ezrule rule;
void yyerror(const char *s);



/* Line 268 of yacc.c  */
#line 86 "c_grammar_2011.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDENTIFIER = 258,
     I_CONSTANT = 259,
     F_CONSTANT = 260,
     STRING_LITERAL = 261,
     FUNC_NAME = 262,
     SIZEOF = 263,
     PTR_OP = 264,
     INC_OP = 265,
     DEC_OP = 266,
     LEFT_OP = 267,
     RIGHT_OP = 268,
     LE_OP = 269,
     GE_OP = 270,
     EQ_OP = 271,
     NE_OP = 272,
     AND_OP = 273,
     OR_OP = 274,
     MUL_ASSIGN = 275,
     DIV_ASSIGN = 276,
     MOD_ASSIGN = 277,
     ADD_ASSIGN = 278,
     SUB_ASSIGN = 279,
     LEFT_ASSIGN = 280,
     RIGHT_ASSIGN = 281,
     AND_ASSIGN = 282,
     XOR_ASSIGN = 283,
     OR_ASSIGN = 284,
     TYPEDEF_NAME = 285,
     ENUMERATION_CONSTANT = 286,
     TYPEDEF = 287,
     EXTERN = 288,
     STATIC = 289,
     AUTO = 290,
     REGISTER = 291,
     INLINE = 292,
     CONST = 293,
     RESTRICT = 294,
     VOLATILE = 295,
     BOOL = 296,
     CHAR = 297,
     SHORT = 298,
     INT = 299,
     LONG = 300,
     SIGNED = 301,
     UNSIGNED = 302,
     FLOAT = 303,
     DOUBLE = 304,
     VOID = 305,
     COMPLEX = 306,
     IMAGINARY = 307,
     STRUCT = 308,
     UNION = 309,
     ENUM = 310,
     ELLIPSIS = 311,
     CASE = 312,
     DEFAULT = 313,
     IF = 314,
     ELSE = 315,
     SWITCH = 316,
     WHILE = 317,
     DO = 318,
     FOR = 319,
     GOTO = 320,
     CONTINUE = 321,
     BREAK = 322,
     RETURN = 323,
     ALIGNAS = 324,
     ALIGNOF = 325,
     ATOMIC = 326,
     GENERIC = 327,
     NORETURN = 328,
     STATIC_ASSERT = 329,
     THREAD_LOCAL = 330
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 293 of yacc.c  */
#line 16 "c_grammar/c_grammar_2011.y"

	double number;
	char * word;
	ezast * ast;



/* Line 293 of yacc.c  */
#line 205 "c_grammar_2011.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 230 "c_grammar_2011.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  67
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2499

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  100
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  78
/* YYNRULES -- Number of rules.  */
#define YYNRULES  275
/* YYNRULES -- Number of states.  */
#define YYNSTATES  480

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   330

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    90,     2,     2,     2,    92,    85,     2,
      76,    77,    86,    87,    78,    88,    82,    91,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    79,    99,
      93,    98,    94,    97,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    80,     2,    81,    95,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    83,    96,    84,    89,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    13,    15,    17,    19,
      21,    23,    25,    27,    34,    36,    40,    44,    48,    50,
      55,    59,    64,    68,    72,    75,    78,    85,    93,    95,
      99,   101,   104,   107,   110,   113,   118,   123,   125,   127,
     129,   131,   133,   135,   137,   142,   144,   148,   152,   156,
     158,   162,   166,   168,   172,   176,   178,   182,   186,   190,
     194,   196,   200,   204,   206,   210,   212,   216,   218,   222,
     224,   228,   230,   234,   236,   242,   244,   248,   250,   252,
     254,   256,   258,   260,   262,   264,   266,   268,   270,   272,
     276,   278,   281,   285,   287,   290,   292,   295,   297,   300,
     302,   305,   307,   310,   312,   314,   318,   322,   324,   326,
     328,   330,   332,   334,   336,   338,   340,   342,   344,   346,
     348,   350,   352,   354,   356,   358,   360,   362,   364,   366,
     368,   373,   379,   382,   384,   386,   388,   391,   394,   398,
     400,   403,   405,   408,   410,   412,   416,   419,   423,   425,
     430,   436,   442,   449,   452,   454,   458,   462,   464,   469,
     471,   473,   475,   477,   479,   481,   486,   491,   494,   496,
     498,   502,   506,   511,   518,   524,   530,   537,   543,   548,
     553,   558,   562,   567,   571,   574,   577,   579,   581,   584,
     588,   590,   592,   596,   599,   602,   604,   606,   610,   613,
     615,   618,   620,   622,   626,   629,   633,   639,   644,   650,
     655,   659,   663,   667,   672,   679,   685,   691,   698,   703,
     708,   711,   715,   719,   724,   728,   733,   735,   738,   740,
     745,   749,   752,   754,   757,   761,   764,   772,   774,   776,
     778,   780,   782,   784,   788,   793,   797,   800,   804,   806,
     809,   811,   813,   815,   818,   826,   832,   838,   844,   852,
     859,   867,   874,   882,   886,   889,   892,   895,   899,   901,
     904,   906,   908,   913,   917,   919
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     174,     0,    -1,     3,    -1,   102,    -1,   104,    -1,    76,
     126,    77,    -1,   105,    -1,     4,    -1,     5,    -1,    31,
      -1,     3,    -1,     6,    -1,     7,    -1,    72,    76,   124,
      78,   106,    77,    -1,   107,    -1,   106,    78,   107,    -1,
     156,    79,   124,    -1,    58,    79,   124,    -1,   101,    -1,
     108,    80,   126,    81,    -1,   108,    76,    77,    -1,   108,
      76,   109,    77,    -1,   108,    82,     3,    -1,   108,     9,
       3,    -1,   108,    10,    -1,   108,    11,    -1,    76,   156,
      77,    83,   160,    84,    -1,    76,   156,    77,    83,   160,
      78,    84,    -1,   124,    -1,   109,    78,   124,    -1,   108,
      -1,    10,   110,    -1,    11,   110,    -1,   111,   112,    -1,
       8,   110,    -1,     8,    76,   156,    77,    -1,    70,    76,
     156,    77,    -1,    85,    -1,    86,    -1,    87,    -1,    88,
      -1,    89,    -1,    90,    -1,   110,    -1,    76,   156,    77,
     112,    -1,   112,    -1,   113,    86,   112,    -1,   113,    91,
     112,    -1,   113,    92,   112,    -1,   113,    -1,   114,    87,
     113,    -1,   114,    88,   113,    -1,   114,    -1,   115,    12,
     114,    -1,   115,    13,   114,    -1,   115,    -1,   116,    93,
     115,    -1,   116,    94,   115,    -1,   116,    14,   115,    -1,
     116,    15,   115,    -1,   116,    -1,   117,    16,   116,    -1,
     117,    17,   116,    -1,   117,    -1,   118,    85,   117,    -1,
     118,    -1,   119,    95,   118,    -1,   119,    -1,   120,    96,
     119,    -1,   120,    -1,   121,    18,   120,    -1,   121,    -1,
     122,    19,   121,    -1,   122,    -1,   122,    97,   126,    79,
     123,    -1,   123,    -1,   110,   125,   124,    -1,    98,    -1,
      20,    -1,    21,    -1,    22,    -1,    23,    -1,    24,    -1,
      25,    -1,    26,    -1,    27,    -1,    28,    -1,    29,    -1,
     124,    -1,   126,    78,   124,    -1,   123,    -1,   129,    99,
      -1,   129,   130,    99,    -1,   164,    -1,   132,   129,    -1,
     132,    -1,   133,   129,    -1,   133,    -1,   145,   129,    -1,
     145,    -1,   146,   129,    -1,   146,    -1,   147,   129,    -1,
     147,    -1,   131,    -1,   130,    78,   131,    -1,   148,    98,
     159,    -1,   148,    -1,    32,    -1,    33,    -1,    34,    -1,
      75,    -1,    35,    -1,    36,    -1,    50,    -1,    42,    -1,
      43,    -1,    44,    -1,    45,    -1,    48,    -1,    49,    -1,
      46,    -1,    47,    -1,    41,    -1,    51,    -1,    52,    -1,
     144,    -1,   134,    -1,   141,    -1,    30,    -1,   135,    83,
     136,    84,    -1,   135,     3,    83,   136,    84,    -1,   135,
       3,    -1,    53,    -1,    54,    -1,   137,    -1,   136,   137,
      -1,   138,    99,    -1,   138,   139,    99,    -1,   164,    -1,
     133,   138,    -1,   133,    -1,   145,   138,    -1,   145,    -1,
     140,    -1,   139,    78,   140,    -1,    79,   127,    -1,   148,
      79,   127,    -1,   148,    -1,    55,    83,   142,    84,    -1,
      55,    83,   142,    78,    84,    -1,    55,     3,    83,   142,
      84,    -1,    55,     3,    83,   142,    78,    84,    -1,    55,
       3,    -1,   143,    -1,   142,    78,   143,    -1,   103,    98,
     127,    -1,   103,    -1,    71,    76,   156,    77,    -1,    38,
      -1,    39,    -1,    40,    -1,    71,    -1,    37,    -1,    73,
      -1,    69,    76,   156,    77,    -1,    69,    76,   127,    77,
      -1,   150,   149,    -1,   149,    -1,     3,    -1,    76,   148,
      77,    -1,   149,    80,    81,    -1,   149,    80,    86,    81,
      -1,   149,    80,    34,   151,   124,    81,    -1,   149,    80,
      34,   124,    81,    -1,   149,    80,   151,    86,    81,    -1,
     149,    80,   151,    34,   124,    81,    -1,   149,    80,   151,
     124,    81,    -1,   149,    80,   151,    81,    -1,   149,    80,
     124,    81,    -1,   149,    76,   152,    77,    -1,   149,    76,
      77,    -1,   149,    76,   155,    77,    -1,    86,   151,   150,
      -1,    86,   151,    -1,    86,   150,    -1,    86,    -1,   145,
      -1,   151,   145,    -1,   153,    78,    56,    -1,   153,    -1,
     154,    -1,   153,    78,   154,    -1,   129,   148,    -1,   129,
     157,    -1,   129,    -1,     3,    -1,   155,    78,     3,    -1,
     138,   157,    -1,   138,    -1,   150,   158,    -1,   150,    -1,
     158,    -1,    76,   157,    77,    -1,    80,    81,    -1,    80,
      86,    81,    -1,    80,    34,   151,   124,    81,    -1,    80,
      34,   124,    81,    -1,    80,   151,    34,   124,    81,    -1,
      80,   151,   124,    81,    -1,    80,   151,    81,    -1,    80,
     124,    81,    -1,   158,    80,    81,    -1,   158,    80,    86,
      81,    -1,   158,    80,    34,   151,   124,    81,    -1,   158,
      80,    34,   124,    81,    -1,   158,    80,   151,   124,    81,
      -1,   158,    80,   151,    34,   124,    81,    -1,   158,    80,
     151,    81,    -1,   158,    80,   124,    81,    -1,    76,    77,
      -1,    76,   152,    77,    -1,   158,    76,    77,    -1,   158,
      76,   152,    77,    -1,    83,   160,    84,    -1,    83,   160,
      78,    84,    -1,   124,    -1,   161,   159,    -1,   159,    -1,
     160,    78,   161,   159,    -1,   160,    78,   159,    -1,   162,
      98,    -1,   163,    -1,   162,   163,    -1,    80,   127,    81,
      -1,    82,     3,    -1,    74,    76,   127,    78,     6,    77,
      99,    -1,   166,    -1,   167,    -1,   170,    -1,   171,    -1,
     172,    -1,   173,    -1,     3,    79,   165,    -1,    57,   127,
      79,   165,    -1,    58,    79,   165,    -1,    83,    84,    -1,
      83,   168,    84,    -1,   169,    -1,   168,   169,    -1,   128,
      -1,   165,    -1,    99,    -1,   126,    99,    -1,    59,    76,
     126,    77,   165,    60,   165,    -1,    59,    76,   126,    77,
     165,    -1,    61,    76,   126,    77,   165,    -1,    62,    76,
     126,    77,   165,    -1,    63,   165,    62,    76,   126,    77,
      99,    -1,    64,    76,   170,   170,    77,   165,    -1,    64,
      76,   170,   170,   126,    77,   165,    -1,    64,    76,   128,
     170,    77,   165,    -1,    64,    76,   128,   170,   126,    77,
     165,    -1,    65,     3,    99,    -1,    66,    99,    -1,    67,
      99,    -1,    68,    99,    -1,    68,   126,    99,    -1,   175,
      -1,   174,   175,    -1,   176,    -1,   128,    -1,   129,   148,
     177,   167,    -1,   129,   148,   167,    -1,   128,    -1,   177,
     128,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   129,   129,   130,   131,   132,   133,   137,   138,   139,
     143,   147,   148,   152,   156,   157,   161,   162,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   179,   180,
     184,   185,   186,   187,   188,   189,   190,   194,   195,   196,
     197,   198,   199,   203,   204,   208,   209,   210,   211,   215,
     216,   217,   221,   222,   223,   227,   228,   229,   230,   231,
     235,   236,   237,   241,   242,   246,   247,   251,   252,   256,
     257,   261,   262,   266,   267,   271,   272,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   290,   291,
     295,   299,   300,   301,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   318,   319,   323,   324,   328,   329,
     330,   331,   332,   333,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     356,   357,   358,   362,   363,   367,   368,   372,   373,   374,
     378,   379,   380,   381,   385,   386,   390,   391,   392,   396,
     397,   398,   399,   400,   404,   405,   409,   410,   414,   418,
     419,   420,   421,   425,   426,   430,   431,   435,   436,   440,
     441,   442,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   453,   457,   458,   459,   460,   464,   465,   470,
     471,   475,   476,   480,   481,   482,   486,   487,   491,   492,
     496,   497,   498,   502,   503,   504,   505,   506,   507,   508,
     509,   510,   511,   512,   513,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   526,   527,   528,   532,   533,   534,
     535,   539,   543,   544,   548,   549,   553,   557,   558,   559,
     560,   561,   562,   566,   567,   568,   572,   573,   577,   578,
     582,   583,   587,   588,   592,   593,   594,   598,   599,   600,
     601,   602,   603,   607,   608,   609,   610,   611,   615,   616,
     620,   621,   625,   626,   630,   631
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "I_CONSTANT", "F_CONSTANT",
  "STRING_LITERAL", "FUNC_NAME", "SIZEOF", "PTR_OP", "INC_OP", "DEC_OP",
  "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP",
  "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN",
  "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN",
  "OR_ASSIGN", "TYPEDEF_NAME", "ENUMERATION_CONSTANT", "TYPEDEF", "EXTERN",
  "STATIC", "AUTO", "REGISTER", "INLINE", "CONST", "RESTRICT", "VOLATILE",
  "BOOL", "CHAR", "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED", "FLOAT",
  "DOUBLE", "VOID", "COMPLEX", "IMAGINARY", "STRUCT", "UNION", "ENUM",
  "ELLIPSIS", "CASE", "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE", "DO",
  "FOR", "GOTO", "CONTINUE", "BREAK", "RETURN", "ALIGNAS", "ALIGNOF",
  "ATOMIC", "GENERIC", "NORETURN", "STATIC_ASSERT", "THREAD_LOCAL", "'('",
  "')'", "','", "':'", "'['", "']'", "'.'", "'{'", "'}'", "'&'", "'*'",
  "'+'", "'-'", "'~'", "'!'", "'/'", "'%'", "'<'", "'>'", "'^'", "'|'",
  "'?'", "'='", "';'", "$accept", "primary_expression", "constant",
  "enumeration_constant", "string", "generic_selection",
  "generic_assoc_list", "generic_association", "postfix_expression",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "atomic_type_specifier", "type_qualifier", "function_specifier",
  "alignment_specifier", "declarator", "direct_declarator", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "designation", "designator_list", "designator",
  "static_assert_declaration", "statement", "labeled_statement",
  "compound_statement", "block_item_list", "block_item",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", "declaration_list", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,    40,    41,    44,    58,
      91,    93,    46,   123,   125,    38,    42,    43,    45,   126,
      33,    47,    37,    60,    62,    94,   124,    63,    61,    59
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   100,   101,   101,   101,   101,   101,   102,   102,   102,
     103,   104,   104,   105,   106,   106,   107,   107,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   109,   109,
     110,   110,   110,   110,   110,   110,   110,   111,   111,   111,
     111,   111,   111,   112,   112,   113,   113,   113,   113,   114,
     114,   114,   115,   115,   115,   116,   116,   116,   116,   116,
     117,   117,   117,   118,   118,   119,   119,   120,   120,   121,
     121,   122,   122,   123,   123,   124,   124,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   126,   126,
     127,   128,   128,   128,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   130,   130,   131,   131,   132,   132,
     132,   132,   132,   132,   133,   133,   133,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   133,
     134,   134,   134,   135,   135,   136,   136,   137,   137,   137,
     138,   138,   138,   138,   139,   139,   140,   140,   140,   141,
     141,   141,   141,   141,   142,   142,   143,   143,   144,   145,
     145,   145,   145,   146,   146,   147,   147,   148,   148,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   150,   150,   150,   150,   151,   151,   152,
     152,   153,   153,   154,   154,   154,   155,   155,   156,   156,
     157,   157,   157,   158,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   158,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   158,   159,   159,   159,   160,   160,   160,
     160,   161,   162,   162,   163,   163,   164,   165,   165,   165,
     165,   165,   165,   166,   166,   166,   167,   167,   168,   168,
     169,   169,   170,   170,   171,   171,   171,   172,   172,   172,
     172,   172,   172,   173,   173,   173,   173,   173,   174,   174,
     175,   175,   176,   176,   177,   177
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     6,     1,     3,     3,     3,     1,     4,
       3,     4,     3,     3,     2,     2,     6,     7,     1,     3,
       1,     2,     2,     2,     2,     4,     4,     1,     1,     1,
       1,     1,     1,     1,     4,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     5,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     2,     3,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     1,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     5,     2,     1,     1,     1,     2,     2,     3,     1,
       2,     1,     2,     1,     1,     3,     2,     3,     1,     4,
       5,     5,     6,     2,     1,     3,     3,     1,     4,     1,
       1,     1,     1,     1,     1,     4,     4,     2,     1,     1,
       3,     3,     4,     6,     5,     5,     6,     5,     4,     4,
       4,     3,     4,     3,     2,     2,     1,     1,     2,     3,
       1,     1,     3,     2,     2,     1,     1,     3,     2,     1,
       2,     1,     1,     3,     2,     3,     5,     4,     5,     4,
       3,     3,     3,     4,     6,     5,     5,     6,     4,     4,
       2,     3,     3,     4,     3,     4,     1,     2,     1,     4,
       3,     2,     1,     2,     3,     2,     7,     1,     1,     1,
       1,     1,     1,     3,     4,     3,     2,     3,     1,     2,
       1,     1,     1,     2,     7,     5,     5,     5,     7,     6,
       7,     6,     7,     3,     2,     2,     2,     3,     1,     2,
       1,     1,     4,     3,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   129,   108,   109,   110,   112,   113,   163,   159,   160,
     161,   123,   115,   116,   117,   118,   121,   122,   119,   120,
     114,   124,   125,   133,   134,     0,     0,   162,   164,     0,
     111,   271,     0,    95,    97,   127,     0,   128,   126,    99,
     101,   103,    93,     0,   268,   270,   153,     0,     0,     0,
       0,   169,     0,   186,    91,     0,   104,   107,   168,     0,
      94,    96,   132,     0,    98,   100,   102,     1,   269,     0,
      10,   157,     0,   154,     2,     7,     8,    11,    12,     0,
       0,     0,     9,     0,     0,     0,    37,    38,    39,    40,
      41,    42,    18,     3,     4,     6,    30,    43,     0,    45,
      49,    52,    55,    60,    63,    65,    67,    69,    71,    73,
      90,     0,   141,   199,   143,     0,     0,     0,     0,   162,
     187,   185,   184,     0,    92,     0,     0,   274,     0,   273,
       0,     0,     0,   167,     0,     0,   135,     0,   139,     0,
       0,     0,   149,     0,    34,     0,    31,    32,     0,     0,
      43,    75,    88,     0,     0,     0,    24,    25,     0,     0,
       0,    33,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   166,   140,     0,     0,   201,   198,   202,   142,   165,
     158,     0,   170,   188,   183,   105,   107,     2,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   246,
     252,     0,   250,   251,   237,   238,     0,   248,   239,   240,
     241,   242,     0,   226,   106,   275,   272,   196,   181,   195,
       0,   190,   191,     0,     0,   171,    38,     0,     0,     0,
     130,   136,     0,   137,     0,   144,   148,     0,   151,   156,
     150,   155,     0,     0,     0,     0,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    77,     0,     5,     0,
       0,    23,    20,     0,    28,     0,    22,    46,    47,    48,
      50,    51,    53,    54,    58,    59,    56,    57,    61,    62,
      64,    66,    68,    70,    72,     0,   220,     0,     0,     0,
     204,    38,     0,     0,   200,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   264,   265,   266,
       0,   253,   247,   249,     0,     0,   228,     0,     0,     0,
     232,     0,   193,   201,   194,   180,     0,   182,     0,     0,
       0,   172,   179,     0,   178,    38,     0,   131,   146,     0,
     138,     0,   152,    35,     0,    36,     0,    76,    89,     0,
      44,    21,     0,    19,     0,   221,   203,     0,     0,   205,
     211,     0,   210,     0,   222,     0,     0,   212,    38,     0,
       0,     0,   243,     0,   245,     0,     0,     0,     0,     0,
       0,   263,   267,     0,   235,     0,   224,   227,   231,   233,
     189,   192,   197,   174,     0,     0,   175,   177,   145,   147,
       0,     0,    14,     0,     0,    29,    74,   207,     0,     0,
     209,   223,     0,     0,   213,   219,     0,   218,     0,   236,
     244,     0,     0,     0,     0,     0,     0,   234,   225,   230,
       0,   173,   176,     0,    13,     0,     0,     0,    26,   206,
     208,   215,     0,     0,   216,   255,   256,   257,     0,     0,
       0,     0,     0,   229,    17,    15,    16,    27,   214,   217,
       0,     0,   261,     0,   259,     0,   254,   258,   262,   260
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    92,    93,    71,    94,    95,   411,   412,    96,   273,
     150,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   151,   152,   267,   211,   111,    31,   128,
      55,    56,    33,    34,    35,    36,   135,   136,   113,   244,
     245,    37,    72,    73,    38,    39,    40,    41,   118,    58,
      59,   122,   297,   231,   232,   233,   413,   298,   187,   326,
     327,   328,   329,   330,    42,   213,   214,   215,   216,   217,
     218,   219,   220,   221,    43,    44,    45,   130
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -370
static const yytype_int16 yypact[] =
{
    2229,  -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,
    -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,
    -370,  -370,  -370,  -370,  -370,    26,   -43,   -35,  -370,    -8,
    -370,  -370,    28,  2319,  2319,  -370,    39,  -370,  -370,  2319,
    2319,  2319,  -370,  1816,  -370,  -370,   -56,    46,   901,  2428,
    1649,  -370,    45,   162,  -370,   -40,  -370,  1915,   -46,    79,
    -370,  -370,     2,  2357,  -370,  -370,  -370,  -370,  -370,    46,
    -370,   -45,    10,  -370,  -370,  -370,  -370,  -370,  -370,  1671,
    1693,  1693,  -370,    61,    71,   901,  -370,  -370,  -370,  -370,
    -370,  -370,  -370,  -370,  -370,  -370,   163,  -370,  1649,  -370,
     -67,   -30,   156,   125,   209,    92,    64,    65,   166,    20,
    -370,   121,  2428,   109,  2428,   128,   155,   160,   165,  -370,
    -370,  -370,   162,    45,  -370,   457,  1407,  -370,    28,  -370,
    2131,  1869,   989,   -46,  2357,  2031,  -370,    72,  -370,   104,
    1649,    29,  -370,   901,  -370,   901,  -370,  -370,  2428,  1649,
     450,  -370,  -370,   150,   169,   251,  -370,  -370,  1429,  1649,
     253,  -370,  1649,  1649,  1649,  1649,  1649,  1649,  1649,  1649,
    1649,  1649,  1649,  1649,  1649,  1649,  1649,  1649,  1649,  1649,
    1649,  -370,  -370,  1982,  1011,   -20,  -370,    74,  -370,  -370,
    -370,   259,  -370,  -370,  -370,  -370,   174,   195,  1649,   197,
     206,   220,   221,   721,   222,   282,   200,   202,   765,  -370,
    -370,    50,  -370,  -370,  -370,  -370,   578,  -370,  -370,  -370,
    -370,  -370,  1385,  -370,  -370,  -370,  -370,  -370,  -370,    76,
     227,   228,  -370,   157,  1253,  -370,   224,   226,  1033,  2078,
    -370,  -370,  1649,  -370,    66,  -370,   231,    32,  -370,  -370,
    -370,  -370,   234,   238,   242,   249,  -370,  -370,  -370,  -370,
    -370,  -370,  -370,  -370,  -370,  -370,  -370,  1649,  -370,  1649,
    1517,  -370,  -370,   159,  -370,   136,  -370,  -370,  -370,  -370,
     -67,   -67,   -30,   -30,   156,   156,   156,   156,   125,   125,
     209,    92,    64,    65,   166,   171,  -370,   256,   257,  1253,
    -370,   254,   258,  1121,    74,  2183,  1143,   260,   721,   261,
     721,  1649,  1649,  1649,   268,   668,   239,  -370,  -370,  -370,
      67,  -370,  -370,  -370,  1649,   340,  -370,   129,  1407,   101,
    -370,  1759,  -370,    77,  -370,  -370,  2275,  -370,   341,   264,
    1253,  -370,  -370,  1649,  -370,   265,   267,  -370,  -370,   117,
    -370,  1649,  -370,   266,   266,  -370,  2394,  -370,  -370,  1385,
    -370,  -370,  1649,  -370,  1649,  -370,  -370,   270,  1253,  -370,
    -370,  1649,  -370,   274,  -370,   279,  1253,  -370,   276,   277,
    1165,   262,  -370,   721,  -370,   175,   182,   184,   283,   811,
     811,  -370,  -370,   281,  -370,  1275,  -370,  -370,  -370,  -370,
    -370,  -370,  -370,  -370,   284,   285,  -370,  -370,  -370,  -370,
     289,   186,  -370,   290,   131,  -370,  -370,  -370,   291,   292,
    -370,  -370,   293,  1253,  -370,  -370,  1649,  -370,   295,  -370,
    -370,   721,   721,   721,  1649,  1539,  1561,  -370,  -370,  -370,
    1407,  -370,  -370,  1649,  -370,  2394,  1649,  1297,  -370,  -370,
    -370,  -370,   296,   297,  -370,   300,  -370,  -370,   190,   721,
     193,   721,   201,  -370,  -370,  -370,  -370,  -370,  -370,  -370,
     721,   271,  -370,   721,  -370,   721,  -370,  -370,  -370,  -370
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -370,  -370,  -370,  -370,  -370,  -370,  -370,   -74,  -370,  -370,
     243,  -370,   -29,   122,   127,    52,   116,   188,   203,   205,
     207,   210,  -370,   -38,   -59,  -370,   -82,   -22,   -49,    11,
    -370,   263,  -370,   -42,  -370,  -370,   246,  -115,   -23,  -370,
      41,  -370,   322,  -124,  -370,   -48,  -370,  -370,   -18,   -50,
     -51,  -119,  -113,  -370,    56,  -370,    -2,   -91,  -169,  -122,
      34,  -369,  -370,    73,   -27,   -33,  -370,   -34,  -370,   178,
    -260,  -370,  -370,  -370,  -370,   352,  -370,  -370
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
     114,   114,   121,   153,   224,   120,   112,   112,   127,   133,
     110,    32,   110,   238,    57,   114,   304,   251,   230,   162,
     241,   112,   186,   129,   163,   164,   440,    69,   117,    46,
     131,    51,    70,    48,   132,    70,   138,   114,   123,   179,
     137,    49,    62,   112,    60,    61,   115,   116,    51,    70,
      64,    65,    66,   140,    32,   390,   183,   165,   166,   124,
     184,   153,   185,   153,   114,   303,   114,   223,    50,   161,
     112,   194,   112,   237,   193,    51,   212,   275,   440,    51,
      51,   225,    51,   154,   120,   134,   114,   114,   141,   182,
     255,   188,   112,   112,   142,   114,   226,   114,   295,   274,
     114,   112,   110,   112,    52,   196,   112,   138,   138,    47,
     196,   137,   137,   250,    53,   340,   352,   180,   249,   246,
      51,    52,    63,   251,   241,   302,   320,    54,   269,   435,
     436,    53,   185,   277,   278,   279,   120,   148,   334,   169,
     170,   252,   229,   253,   349,   269,   254,   149,    52,   321,
     305,   242,   331,   331,   306,    52,   184,   184,    53,   176,
     110,   177,    53,   223,   304,   350,   392,   212,   167,   168,
     314,   243,   155,   156,   157,   339,   309,   175,   333,   346,
     368,   324,   247,   325,   178,   183,   120,   380,   248,   184,
     193,   114,   375,    52,   229,    53,   242,   112,   181,   398,
       8,     9,    10,    53,   110,   189,   397,   395,   357,   447,
     358,   332,   138,   396,   269,   448,   137,   363,   171,   172,
     348,   284,   285,   286,   287,   173,   174,   268,   269,   385,
     386,   387,   190,   119,   337,   338,   361,   362,   191,   158,
     367,   360,   192,   159,   373,   160,   270,   379,    53,   269,
     364,   120,   431,   269,   271,   193,   276,   423,   120,   432,
     269,   433,   269,   444,   445,   307,   389,   471,   269,   223,
     473,   269,   126,   439,   308,   382,   310,   384,   475,   269,
     333,   404,   311,   133,   405,   316,   110,   280,   281,   288,
     289,    97,   193,    97,   282,   283,   312,   313,   315,   317,
     223,   318,   393,   415,   335,   341,   336,   342,   114,   418,
     351,   353,   419,   110,   112,   354,   229,   422,   463,   355,
     193,   428,   144,   146,   147,   439,   416,   356,   120,   409,
     388,   246,   193,   365,   366,   369,   223,   381,   391,   370,
     383,    97,   229,   394,   402,   403,   406,   229,   407,   359,
     430,   417,   458,   460,   462,   420,   421,   424,   425,   434,
     470,   429,   437,   290,   452,   441,   442,   453,   443,   446,
     477,   465,   449,   450,   451,   193,   454,   468,   469,   291,
     239,   223,   292,    97,   464,   293,   195,   466,   223,   294,
     408,   139,   401,   414,   323,    68,     0,   114,   455,   456,
     457,     0,   399,   112,     0,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,     0,     0,     0,   472,     0,   474,     0,
       0,     0,     0,     0,     0,     0,     0,   476,     0,     0,
     478,    97,   479,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     197,    75,    76,    77,    78,    79,     0,    80,    81,     0,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
       0,     0,     0,     0,     0,    97,     0,     1,    82,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    97,   198,   199,   200,     0,   201,   202,
     203,   204,   205,   206,   207,   208,    26,    83,    27,    84,
      28,    29,    30,    85,     0,     0,     0,     0,     0,     0,
     125,   209,    86,    87,    88,    89,    90,    91,   266,     0,
       0,     0,     0,     0,     0,     0,   210,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    97,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   197,    75,    76,    77,    78,    79,     0,    80,    81,
       0,     0,     0,     0,    97,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    97,     1,    82,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,   198,   199,   200,     0,   201,
     202,   203,   204,   205,   206,   207,   208,    26,    83,    27,
      84,    28,    29,    30,    85,     0,     0,     0,     0,     0,
       0,   125,   322,    86,    87,    88,    89,    90,    91,     0,
       0,    74,    75,    76,    77,    78,    79,   210,    80,    81,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,    82,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,   197,    75,    76,    77,    78,    79,
       0,    80,    81,     0,     0,     0,     0,    26,    83,    27,
      84,    28,    29,    30,    85,     0,     0,     0,     0,     0,
       0,     0,    82,    86,    87,    88,    89,    90,    91,     0,
       0,     0,     0,     0,     0,     0,     0,   210,    74,    75,
      76,    77,    78,    79,     0,    80,    81,     0,   198,   199,
     200,     0,   201,   202,   203,   204,   205,   206,   207,   208,
       0,    83,     0,    84,     0,     0,    82,    85,     0,     0,
       0,     0,     0,     0,   125,     0,    86,    87,    88,    89,
      90,    91,     0,     0,    74,    75,    76,    77,    78,    79,
     210,    80,    81,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    83,     0,    84,     0,     0,
       0,    85,    82,     0,     0,     0,     0,     0,     0,     0,
      86,    87,    88,    89,    90,    91,     0,     0,     0,     0,
       0,     0,     0,     0,   319,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    83,     0,    84,     0,     0,     0,    85,     0,     0,
       0,     0,     0,     0,     0,     0,    86,    87,    88,    89,
      90,    91,     0,     0,    74,    75,    76,    77,    78,    79,
     210,    80,    81,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,    82,     0,     0,     0,     0,     0,     0,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    83,    27,    84,     0,     0,     0,    85,     0,     0,
       0,     0,     0,     0,     0,     0,    86,    87,    88,    89,
      90,    91,    74,    75,    76,    77,    78,    79,     0,    80,
      81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    74,    75,    76,    77,    78,    79,
      82,    80,    81,   234,     0,     0,     0,     8,     9,    10,
       0,     0,     0,     0,     0,     0,    74,    75,    76,    77,
      78,    79,    82,    80,    81,   299,     0,     0,     0,     8,
       9,    10,     0,     0,     0,     0,     0,     0,     0,    83,
     119,    84,     0,     0,    82,    85,     0,   343,     0,     0,
     235,     8,     9,    10,    86,   236,    88,    89,    90,    91,
       0,    83,   119,    84,     0,     0,     0,    85,     0,     0,
       0,     0,   300,     0,     0,     0,    86,   301,    88,    89,
      90,    91,     0,    83,   119,    84,     0,     0,     0,    85,
       0,     0,     0,     0,   344,     0,     0,     0,    86,   345,
      88,    89,    90,    91,    74,    75,    76,    77,    78,    79,
       0,    80,    81,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    74,    75,    76,    77,
      78,    79,    82,    80,    81,   371,     0,     0,     0,     8,
       9,    10,     0,     0,     0,     0,     0,     0,    74,    75,
      76,    77,    78,    79,    82,    80,    81,   376,     0,     0,
       0,     8,     9,    10,     0,     0,     0,     0,     0,     0,
       0,    83,   119,    84,     0,     0,    82,    85,     0,   426,
       0,     0,   372,     8,     9,    10,    86,    87,    88,    89,
      90,    91,     0,    83,   119,    84,     0,     0,     0,    85,
       0,     0,     0,     0,   377,     0,     0,     0,    86,   378,
      88,    89,    90,    91,     0,    83,   119,    84,     0,     0,
       0,    85,     0,     0,     0,     0,   427,     0,     0,     0,
      86,    87,    88,    89,    90,    91,    74,    75,    76,    77,
      78,    79,     0,    80,    81,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    74,    75,
      76,    77,    78,    79,    82,    80,    81,     0,     0,     0,
       0,     8,     9,    10,     0,     0,     0,     0,     0,     0,
      74,    75,    76,    77,    78,    79,    82,    80,    81,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    83,   119,    84,     0,     0,    82,    85,
       0,     0,     0,     0,     0,     0,     0,     0,    86,    87,
      88,    89,    90,    91,     0,    83,     0,    84,     0,     0,
       0,    85,     0,     0,     0,   324,     0,   325,   222,   438,
      86,    87,    88,    89,    90,    91,     0,    83,     0,    84,
       0,     0,     0,    85,     0,     0,     0,   324,     0,   325,
     222,   467,    86,    87,    88,    89,    90,    91,    74,    75,
      76,    77,    78,    79,     0,    80,    81,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      74,    75,    76,    77,    78,    79,    82,    80,    81,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    74,    75,    76,    77,    78,    79,    82,    80,
      81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    83,     0,    84,     0,     0,
      82,    85,     0,     0,     0,   324,     0,   325,   222,     0,
      86,    87,    88,    89,    90,    91,     0,    83,     0,    84,
       0,     0,     0,    85,     0,     0,     0,     0,     0,     0,
     222,     0,    86,    87,    88,    89,    90,    91,     0,    83,
       0,    84,     0,     0,     0,    85,   272,     0,     0,     0,
       0,     0,     0,     0,    86,    87,    88,    89,    90,    91,
      74,    75,    76,    77,    78,    79,     0,    80,    81,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    74,    75,    76,    77,    78,    79,    82,    80,
      81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    74,    75,    76,    77,    78,    79,
      82,    80,    81,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    83,     0,    84,
       0,     0,    82,    85,     0,     0,     0,     0,     0,     0,
     359,     0,    86,    87,    88,    89,    90,    91,     0,    83,
       0,    84,     0,     0,     0,    85,   459,     0,     0,     0,
       0,     0,     0,     0,    86,    87,    88,    89,    90,    91,
       0,    83,     0,    84,     0,     0,     0,    85,   461,     0,
       0,     0,     0,     0,     0,     0,    86,    87,    88,    89,
      90,    91,    74,    75,    76,    77,    78,    79,     0,    80,
      81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    74,    75,    76,    77,    78,    79,
      82,    80,    81,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    74,    75,    76,    77,
      78,    79,    82,    80,    81,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    83,
       0,    84,     0,     0,    82,    85,     0,     0,     0,     0,
       0,     0,     0,     0,    86,    87,    88,    89,    90,    91,
       0,    83,     0,    84,     0,     0,     0,   143,     0,     0,
       0,     0,     0,     0,     0,     0,    86,    87,    88,    89,
      90,    91,    51,    83,     0,    84,     0,     0,     0,   145,
       0,     0,     0,     0,     0,     0,     0,     0,    86,    87,
      88,    89,    90,    91,     0,     0,     0,     0,     0,     1,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,    67,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,     0,
      27,     0,    28,     0,    30,   331,   296,     0,     0,   184,
       0,     0,     0,     0,     0,    53,     1,     0,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,   227,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    26,     0,    27,     0,    28,
      29,    30,     0,     0,     0,     0,     0,     0,     0,     1,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,     0,
      27,     0,    28,     0,    30,     1,   228,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,     0,    27,     0,    28,    29,
      30,     0,     0,     0,     0,     0,     0,     0,   125,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,   126,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    26,     0,    27,     0,    28,     0,    30,   183,   296,
       0,     1,   184,     0,     0,     0,     0,     0,    53,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    27,     0,     0,    29,     0,     0,     1,     0,
       0,     0,     0,     0,     0,   240,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    27,
       0,     0,    29,     0,     0,     0,     0,     0,     0,     0,
       0,     1,   347,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      26,     0,    27,     0,    28,    29,    30,     0,     0,     0,
       0,     0,     0,     1,   125,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,     0,    27,     0,    28,     0,    30,     1,
     374,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,     0,
      27,     0,    28,    29,    30,     1,     0,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,   400,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,     0,    27,     0,    28,     1,
      30,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     1,    26,     0,
      27,     0,    28,     0,    30,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     1,     0,     0,     0,    27,     0,
       0,    29,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,     0,   410,     0,     0,     0,     0,     0,     1,     0,
       0,     0,     0,     0,     0,    27,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    27
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-370))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      48,    49,    53,    85,   126,    53,    48,    49,    57,    59,
      48,     0,    50,   132,    32,    63,   185,   141,   131,    86,
     135,    63,   113,    57,    91,    92,   395,    83,    50,     3,
      76,     3,     3,    76,    80,     3,    63,    85,    78,    19,
      63,    76,     3,    85,    33,    34,    48,    49,     3,     3,
      39,    40,    41,    98,    43,   315,    76,    87,    88,    99,
      80,   143,   113,   145,   112,   184,   114,   126,    76,    98,
     112,   122,   114,   132,   122,     3,   125,   159,   447,     3,
       3,   130,     3,    85,   132,    83,   134,   135,    78,   112,
     149,   114,   134,   135,    84,   143,   130,   145,   180,   158,
     148,   143,   140,   145,    76,   123,   148,   134,   135,    83,
     128,   134,   135,    84,    86,   234,    84,    97,   140,   137,
       3,    76,    83,   247,   239,   184,   208,    99,    78,   389,
     390,    86,   183,   162,   163,   164,   184,    76,   229,    14,
      15,   143,   131,   145,    78,    78,   148,    76,    76,    99,
      76,    79,    76,    76,    80,    76,    80,    80,    86,    95,
     198,    96,    86,   222,   333,    99,    99,   216,    12,    13,
     203,    99,     9,    10,    11,   234,   198,    85,   229,   238,
     299,    80,    78,    82,    18,    76,   234,   306,    84,    80,
     238,   239,   305,    76,   183,    86,    79,   239,    77,    98,
      38,    39,    40,    86,   242,    77,   328,    78,   267,    78,
     269,   229,   239,    84,    78,    84,   239,    81,    93,    94,
     242,   169,   170,   171,   172,    16,    17,    77,    78,   311,
     312,   313,    77,    71,    77,    78,    77,    78,    78,    76,
     299,   270,    77,    80,   303,    82,    77,   306,    86,    78,
      79,   299,    77,    78,     3,   303,     3,   376,   306,    77,
      78,    77,    78,    77,    78,     6,   315,    77,    78,   328,
      77,    78,    98,   395,    79,   308,    79,   310,    77,    78,
     331,   340,    76,   333,   343,     3,   324,   165,   166,   173,
     174,    48,   340,    50,   167,   168,    76,    76,    76,    99,
     359,    99,   324,   362,    77,    81,    78,    81,   356,   368,
      79,    77,   371,   351,   356,    77,   305,   376,   440,    77,
     368,   380,    79,    80,    81,   447,   364,    78,   376,   351,
      62,   349,   380,    77,    77,    81,   395,    77,    99,    81,
      79,    98,   331,     3,     3,    81,    81,   336,    81,    83,
     383,    81,   434,   435,   436,    81,    77,    81,    81,    76,
      60,    99,    81,   175,   423,    81,    81,   426,    79,    79,
      99,   445,    81,    81,    81,   423,    81,    81,    81,   176,
     134,   440,   177,   140,   443,   178,   123,   446,   447,   179,
     349,    69,   336,   359,   216,    43,    -1,   445,   431,   432,
     433,    -1,   329,   445,    -1,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,    -1,    -1,    -1,   459,    -1,   461,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   470,    -1,    -1,
     473,   198,   475,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      -1,    -1,    -1,    -1,    -1,   242,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,   270,    57,    58,    59,    -1,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    84,    85,    86,    87,    88,    89,    90,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   324,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,   351,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   364,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    57,    58,    59,    -1,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    84,    85,    86,    87,    88,    89,    90,    -1,
      -1,     3,     4,     5,     6,     7,     8,    99,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    85,    86,    87,    88,    89,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    57,    58,
      59,    -1,    61,    62,    63,    64,    65,    66,    67,    68,
      -1,    70,    -1,    72,    -1,    -1,    31,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    -1,    85,    86,    87,    88,
      89,    90,    -1,    -1,     3,     4,     5,     6,     7,     8,
      99,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    -1,
      -1,    76,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    88,    89,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,    -1,    -1,     3,     4,     5,     6,     7,     8,
      99,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    71,    72,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      31,    10,    11,    34,    -1,    -1,    -1,    38,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,    31,    10,    11,    34,    -1,    -1,    -1,    38,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      71,    72,    -1,    -1,    31,    76,    -1,    34,    -1,    -1,
      81,    38,    39,    40,    85,    86,    87,    88,    89,    90,
      -1,    70,    71,    72,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    81,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,    -1,    70,    71,    72,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    85,    86,
      87,    88,    89,    90,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,    31,    10,    11,    34,    -1,    -1,    -1,    38,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    31,    10,    11,    34,    -1,    -1,
      -1,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    71,    72,    -1,    -1,    31,    76,    -1,    34,
      -1,    -1,    81,    38,    39,    40,    85,    86,    87,    88,
      89,    90,    -1,    70,    71,    72,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    85,    86,
      87,    88,    89,    90,    -1,    70,    71,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,
      85,    86,    87,    88,    89,    90,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    31,    10,    11,    -1,    -1,    -1,
      -1,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    31,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    71,    72,    -1,    -1,    31,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,
      87,    88,    89,    90,    -1,    70,    -1,    72,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    80,    -1,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    -1,    70,    -1,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    80,    -1,    82,
      83,    84,    85,    86,    87,    88,    89,    90,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    31,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    31,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    -1,
      31,    76,    -1,    -1,    -1,    80,    -1,    82,    83,    -1,
      85,    86,    87,    88,    89,    90,    -1,    70,    -1,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    -1,    85,    86,    87,    88,    89,    90,    -1,    70,
      -1,    72,    -1,    -1,    -1,    76,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    31,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      31,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,
      -1,    -1,    31,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    -1,    85,    86,    87,    88,    89,    90,    -1,    70,
      -1,    72,    -1,    -1,    -1,    76,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
      -1,    70,    -1,    72,    -1,    -1,    -1,    76,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      31,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      -1,    72,    -1,    -1,    31,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
      -1,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,     3,    70,    -1,    72,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,
      87,    88,    89,    90,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,     0,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,
      71,    -1,    73,    -1,    75,    76,    77,    -1,    -1,    80,
      -1,    -1,    -1,    -1,    -1,    86,    30,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,
      74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,
      71,    -1,    73,    -1,    75,    30,    77,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,    74,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    98,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    71,    -1,    73,    -1,    75,    76,    77,
      -1,    30,    80,    -1,    -1,    -1,    -1,    -1,    86,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    -1,    -1,    74,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    84,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    -1,    71,    -1,    73,    74,    75,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    83,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    71,    -1,    73,    -1,    75,    30,
      77,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,
      71,    -1,    73,    74,    75,    30,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,    30,
      75,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    69,    -1,
      71,    -1,    73,    -1,    75,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    71,    -1,
      -1,    74,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    30,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    69,    71,    73,    74,
      75,   128,   129,   132,   133,   134,   135,   141,   144,   145,
     146,   147,   164,   174,   175,   176,     3,    83,    76,    76,
      76,     3,    76,    86,    99,   130,   131,   148,   149,   150,
     129,   129,     3,    83,   129,   129,   129,     0,   175,    83,
       3,   103,   142,   143,     3,     4,     5,     6,     7,     8,
      10,    11,    31,    70,    72,    76,    85,    86,    87,    88,
      89,    90,   101,   102,   104,   105,   108,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   127,   133,   138,   145,   156,   156,   127,   148,    71,
     145,   150,   151,    78,    99,    83,    98,   128,   129,   167,
     177,    76,    80,   149,    83,   136,   137,   138,   164,   142,
      98,    78,    84,    76,   110,    76,   110,   110,    76,    76,
     110,   123,   124,   126,   156,     9,    10,    11,    76,    80,
      82,   112,    86,    91,    92,    87,    88,    12,    13,    14,
      15,    93,    94,    16,    17,    85,    95,    96,    18,    19,
      97,    77,   138,    76,    80,   150,   157,   158,   138,    77,
      77,    78,    77,   145,   150,   131,   148,     3,    57,    58,
      59,    61,    62,    63,    64,    65,    66,    67,    68,    84,
      99,   126,   128,   165,   166,   167,   168,   169,   170,   171,
     172,   173,    83,   124,   159,   128,   167,     3,    77,   129,
     152,   153,   154,   155,    34,    81,    86,   124,   151,   136,
      84,   137,    79,    99,   139,   140,   148,    78,    84,   127,
      84,   143,   156,   156,   156,   124,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    98,   125,    77,    78,
      77,     3,    77,   109,   124,   126,     3,   112,   112,   112,
     113,   113,   114,   114,   115,   115,   115,   115,   116,   116,
     117,   118,   119,   120,   121,   126,    77,   152,   157,    34,
      81,    86,   124,   151,   158,    76,    80,     6,    79,   127,
      79,    76,    76,    76,   165,    76,     3,    99,    99,    99,
     126,    99,    84,   169,    80,    82,   159,   160,   161,   162,
     163,    76,   148,   150,   157,    77,    78,    77,    78,   124,
     151,    81,    81,    34,    81,    86,   124,    84,   127,    78,
      99,    79,    84,    77,    77,    77,    78,   124,   124,    83,
     112,    77,    78,    81,    79,    77,    77,   124,   151,    81,
      81,    34,    81,   124,    77,   152,    34,    81,    86,   124,
     151,    77,   165,    79,   165,   126,   126,   126,    62,   128,
     170,    99,    99,   127,     3,    78,    84,   159,    98,   163,
      56,   154,     3,    81,   124,   124,    81,    81,   140,   127,
      58,   106,   107,   156,   160,   124,   123,    81,   124,   124,
      81,    77,   124,   151,    81,    81,    34,    81,   124,    99,
     165,    77,    77,    77,    76,   170,   170,    81,    84,   159,
     161,    81,    81,    79,    77,    78,    79,    78,    84,    81,
      81,    81,   124,   124,    81,   165,   165,   165,   126,    77,
     126,    77,   126,   159,   124,   107,   124,    84,    81,    81,
      60,    77,   165,    77,   165,    77,   165,    99,   165,   165
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
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

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

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

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Location data for the lookahead symbol.  */
YYLTYPE yylloc;

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.
       `yyls': related to locations.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;
  yylsp = yyls;

#if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 1;
#endif

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
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);

	yyls = yyls1;
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
	YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
      yychar = YYLEX;
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
  *++yyvsp = yylval;
  *++yylsp = yylloc;
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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1806 of yacc.c  */
#line 129 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.primary_expression__IDENTIFIER((yyvsp[(1) - (1)].word));}
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 130 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.primary_expression__constant();}
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 131 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.primary_expression__string();}
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 132 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.primary_expression__LP_expression_RP((yyvsp[(2) - (3)].ast));}
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 133 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.primary_expression__generic_selection((yyvsp[(1) - (1)].ast));}
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 137 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.constant__I_CONSTANT((yyvsp[(1) - (1)].number));}
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 138 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.constant__F_CONSTANT((yyvsp[(1) - (1)].number));}
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 139 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.constant__ENUMERATION_CONSTANT();}
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 143 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.enumeration_constant__IDENTIFIER();}
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 147 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.string__STRING_LITERAL((yyvsp[(1) - (1)].word));}
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 148 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.string__FUNC_NAME((yyvsp[(1) - (1)].word));}
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 152 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.generic_selection__GENERIC_LP_assignment_expression_COMMA_generic_assoc_list_RP((yyvsp[(3) - (6)].ast), (yyvsp[(5) - (6)].ast));}
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 156 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.generic_assoc_list__generic_association((yyvsp[(1) - (1)].ast));}
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 157 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.generic_assoc_list__generic_assoc_list_COMMA_generic_association((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast));}
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 161 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.generic_association__type_name_COLON_assignment_expression((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast));}
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 162 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.generic_association__DEFAULT_COLON_assignment_expression((yyvsp[(3) - (3)].ast));}
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 166 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.postfix_expression__primary_expression((yyvsp[(1) - (1)].ast));}
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 167 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.postfix_expression__postfix_expression_LSB_expression_RSB((yyvsp[(1) - (4)].ast), (yyvsp[(3) - (4)].ast));}
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 168 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.postfix_expression__postfix_expression_LP_RP((yyvsp[(1) - (3)].ast));}
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 169 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.postfix_expression__postfix_expression_LP_argument_expression_list_RP((yyvsp[(1) - (4)].ast), (yyvsp[(3) - (4)].ast));}
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 170 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.postfix_expression__postfix_expression_DOT_IDENTIFIER();}
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 171 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.postfix_expression__postfix_expression_PTR_OP_IDENTIFIER();}
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 172 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.postfix_expression__postfix_expression_INC_OP();}
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 173 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.postfix_expression__postfix_expression_DEC_OP();}
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 174 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.postfix_expression__LP_type_name_RP_LCB_initializer_list_RCB();}
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 175 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.postfix_expression__LP_type_name_RP_LCB_initializer_list_COMMA_RCB();}
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 179 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.argument_expression_list__assignment_expression();}
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 180 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.argument_expression_list__argument_expression_list_COMMA_assignment_expression();}
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 184 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.unary_expression__postfix_expression();}
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 185 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.unary_expression__INC_OP_unary_expression();}
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 186 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.unary_expression__DEC_OP_unary_expression();}
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 187 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.unary_expression__unary_operator_cast_expression();}
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 188 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.unary_expression__SIZEOF_unary_expression();}
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 189 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.unary_expression__SIZEOF_LP_type_name_RP();}
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 190 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.unary_expression__ALIGNOF_LP_type_name_RP();}
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 194 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.unary_operator__AMP();}
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 195 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.unary_operator__MULT();}
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 196 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.unary_operator__PLUS();}
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 197 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.unary_operator__MINUS();}
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 198 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.unary_operator__TILDE();}
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 199 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.unary_operator__EXM();}
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 203 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.cast_expression__unary_expression();}
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 204 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.cast_expression__LP_type_name_RP_cast_expression();}
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 208 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.multiplicative_expression__cast_expression();}
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 209 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.multiplicative_expression__multiplicative_expression_MULT_cast_expression();}
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 210 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.multiplicative_expression__multiplicative_expression_DIV_cast_expression();}
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 211 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.multiplicative_expression__multiplicative_expression_MOD_cast_expression();}
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 215 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.additive_expression__multiplicative_expression();}
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 216 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.additive_expression__additive_expression_PLUS_multiplicative_expression();}
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 217 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.additive_expression__additive_expression_MINUS_multiplicative_expression();}
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 221 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.shift_expression__additive_expression();}
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 222 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.shift_expression__shift_expression_LEFT_OP_additive_expression();}
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 223 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.shift_expression__shift_expression_RIGHT_OP_additive_expression();}
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 227 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.relational_expression__shift_expression();}
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 228 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.relational_expression__relational_expression_LT_shift_expression();}
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 229 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.relational_expression__relational_expression_GT_shift_expression();}
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 230 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.relational_expression__relational_expression_LE_OP_shift_expression();}
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 231 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.relational_expression__relational_expression_GE_OP_shift_expression();}
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 235 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.equality_expression__relational_expression();}
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 236 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.equality_expression__equality_expression_EQ_OP_relational_expression();}
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 237 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.equality_expression__equality_expression_NE_OP_relational_expression();}
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 241 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.and_expression__equality_expression();}
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 242 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.and_expression__and_expression_AMP_equality_expression();}
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 246 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.exclusive_or_expression__and_expression();}
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 247 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.exclusive_or_expression__exclusive_or_expression_XOR_and_expression();}
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 251 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.inclusive_or_expression__exclusive_or_expression();}
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 252 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.inclusive_or_expression__inclusive_or_expression_OR_exclusive_or_expression();}
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 256 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.logical_and_expression__inclusive_or_expression();}
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 257 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.logical_and_expression__logical_and_expression_AND_OP_inclusive_or_expression();}
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 261 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.logical_or_expression__logical_and_expression();}
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 262 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.logical_or_expression__logical_or_expression_OR_OP_logical_and_expression();}
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 266 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.conditional_expression__logical_or_expression();}
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 267 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.conditional_expression__logical_or_expression_QUM_expression_COLON_conditional_expression();}
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 271 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.assignment_expression__conditional_expression();}
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 272 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.assignment_expression__unary_expression_assignment_operator_assignment_expression();}
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 276 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.assignment_operator__EQ();}
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 277 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.assignment_operator__MUL_ASSIGN();}
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 278 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.assignment_operator__DIV_ASSIGN();}
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 279 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.assignment_operator__MOD_ASSIGN();}
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 280 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.assignment_operator__ADD_ASSIGN();}
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 281 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.assignment_operator__SUB_ASSIGN();}
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 282 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.assignment_operator__LEFT_ASSIGN();}
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 283 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.assignment_operator__RIGHT_ASSIGN();}
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 284 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.assignment_operator__AND_ASSIGN();}
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 285 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.assignment_operator__XOR_ASSIGN();}
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 286 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.assignment_operator__OR_ASSIGN();}
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 290 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.expression__assignment_expression();}
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 291 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.expression__expression_COMMA_assignment_expression();}
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 295 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.constant_expression__conditional_expression();}
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 299 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.declaration__declaration_specifiers_SCOLON((yyvsp[(1) - (2)].ast));}
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 300 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.declaration__declaration_specifiers_init_declarator_list_SCOLON((yyvsp[(1) - (3)].ast), (yyvsp[(2) - (3)].ast));}
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 301 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.declaration__static_assert_declaration((yyvsp[(1) - (1)].ast));}
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 305 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.declaration_specifiers__storage_class_specifier_declaration_specifiers();}
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 306 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.declaration_specifiers__storage_class_specifier();}
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 307 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.declaration_specifiers__type_specifier_declaration_specifiers();}
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 308 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.declaration_specifiers__type_specifier((yyvsp[(1) - (1)].ast));}
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 309 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.declaration_specifiers__type_qualifier_declaration_specifiers();}
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 310 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.declaration_specifiers__type_qualifier();}
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 311 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.declaration_specifiers__function_specifier_declaration_specifiers();}
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 312 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.declaration_specifiers__function_specifier();}
    break;

  case 102:

/* Line 1806 of yacc.c  */
#line 313 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.declaration_specifiers__alignment_specifier_declaration_specifiers();}
    break;

  case 103:

/* Line 1806 of yacc.c  */
#line 314 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.declaration_specifiers__alignment_specifier();}
    break;

  case 104:

/* Line 1806 of yacc.c  */
#line 318 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.init_declarator_list__init_declarator((yyvsp[(1) - (1)].ast));}
    break;

  case 105:

/* Line 1806 of yacc.c  */
#line 319 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.init_declarator_list__init_declarator_list_COMMA_init_declarator((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast));}
    break;

  case 106:

/* Line 1806 of yacc.c  */
#line 323 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.init_declarator__declarator_EQ_initializer((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast));}
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 324 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.init_declarator__declarator((yyvsp[(1) - (1)].ast));}
    break;

  case 108:

/* Line 1806 of yacc.c  */
#line 328 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.storage_class_specifier__TYPEDEF();}
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 329 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.storage_class_specifier__EXTERN();}
    break;

  case 110:

/* Line 1806 of yacc.c  */
#line 330 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.storage_class_specifier__STATIC();}
    break;

  case 111:

/* Line 1806 of yacc.c  */
#line 331 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.storage_class_specifier__THREAD_LOCAL();}
    break;

  case 112:

/* Line 1806 of yacc.c  */
#line 332 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.storage_class_specifier__AUTO();}
    break;

  case 113:

/* Line 1806 of yacc.c  */
#line 333 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.storage_class_specifier__REGISTER();}
    break;

  case 114:

/* Line 1806 of yacc.c  */
#line 337 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.type_specifier__VOID();}
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 338 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.type_specifier__CHAR();}
    break;

  case 116:

/* Line 1806 of yacc.c  */
#line 339 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.type_specifier__SHORT();}
    break;

  case 117:

/* Line 1806 of yacc.c  */
#line 340 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.type_specifier__INT();}
    break;

  case 118:

/* Line 1806 of yacc.c  */
#line 341 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.type_specifier__LONG();}
    break;

  case 119:

/* Line 1806 of yacc.c  */
#line 342 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.type_specifier__FLOAT();}
    break;

  case 120:

/* Line 1806 of yacc.c  */
#line 343 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.type_specifier__DOUBLE();}
    break;

  case 121:

/* Line 1806 of yacc.c  */
#line 344 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.type_specifier__SIGNED();}
    break;

  case 122:

/* Line 1806 of yacc.c  */
#line 345 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.type_specifier__UNSIGNED();}
    break;

  case 123:

/* Line 1806 of yacc.c  */
#line 346 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.type_specifier__BOOL();}
    break;

  case 124:

/* Line 1806 of yacc.c  */
#line 347 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.type_specifier__COMPLEX();}
    break;

  case 125:

/* Line 1806 of yacc.c  */
#line 348 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.type_specifier__IMAGINARY();}
    break;

  case 126:

/* Line 1806 of yacc.c  */
#line 349 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.type_specifier__atomic_type_specifier((yyvsp[(1) - (1)].ast));}
    break;

  case 127:

/* Line 1806 of yacc.c  */
#line 350 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.type_specifier__struct_or_union_specifier((yyvsp[(1) - (1)].ast));}
    break;

  case 128:

/* Line 1806 of yacc.c  */
#line 351 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.type_specifier__enum_specifier((yyvsp[(1) - (1)].ast));}
    break;

  case 129:

/* Line 1806 of yacc.c  */
#line 352 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.type_specifier__TYPEDEF_NAME((yyvsp[(1) - (1)].word));}
    break;

  case 130:

/* Line 1806 of yacc.c  */
#line 356 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.struct_or_union_specifier__struct_or_union_LCB_struct_declaration_list_RCB();}
    break;

  case 131:

/* Line 1806 of yacc.c  */
#line 357 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.struct_or_union_specifier__struct_or_union_IDENTIFIER_LCB_struct_declaration_list_RCB();}
    break;

  case 132:

/* Line 1806 of yacc.c  */
#line 358 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.struct_or_union_specifier__struct_or_union_IDENTIFIER();}
    break;

  case 133:

/* Line 1806 of yacc.c  */
#line 362 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.struct_or_union__STRUCT();}
    break;

  case 134:

/* Line 1806 of yacc.c  */
#line 363 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.struct_or_union__UNION();}
    break;

  case 135:

/* Line 1806 of yacc.c  */
#line 367 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.struct_declaration_list__struct_declaration();}
    break;

  case 136:

/* Line 1806 of yacc.c  */
#line 368 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.struct_declaration_list__struct_declaration_list_struct_declaration();}
    break;

  case 137:

/* Line 1806 of yacc.c  */
#line 372 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.struct_declaration__specifier_qualifier_list_SCOLON();}
    break;

  case 138:

/* Line 1806 of yacc.c  */
#line 373 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.struct_declaration__specifier_qualifier_list_struct_declarator_list_SCOLON();}
    break;

  case 139:

/* Line 1806 of yacc.c  */
#line 374 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.struct_declaration__static_assert_declaration();}
    break;

  case 140:

/* Line 1806 of yacc.c  */
#line 378 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.specifier_qualifier_list__type_specifier_specifier_qualifier_list();}
    break;

  case 141:

/* Line 1806 of yacc.c  */
#line 379 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.specifier_qualifier_list__type_specifier();}
    break;

  case 142:

/* Line 1806 of yacc.c  */
#line 380 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.specifier_qualifier_list__type_qualifier_specifier_qualifier_list();}
    break;

  case 143:

/* Line 1806 of yacc.c  */
#line 381 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.specifier_qualifier_list__type_qualifier();}
    break;

  case 144:

/* Line 1806 of yacc.c  */
#line 385 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.struct_declarator_list__struct_declarator();}
    break;

  case 145:

/* Line 1806 of yacc.c  */
#line 386 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.struct_declarator_list__struct_declarator_list_COMMA_struct_declarator();}
    break;

  case 146:

/* Line 1806 of yacc.c  */
#line 390 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.struct_declarator__COLON_constant_expression();}
    break;

  case 147:

/* Line 1806 of yacc.c  */
#line 391 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.struct_declarator__declarator_COLON_constant_expression();}
    break;

  case 148:

/* Line 1806 of yacc.c  */
#line 392 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.struct_declarator__declarator();}
    break;

  case 149:

/* Line 1806 of yacc.c  */
#line 396 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.enum_specifier__ENUM_LCB_enumerator_list_RCB();}
    break;

  case 150:

/* Line 1806 of yacc.c  */
#line 397 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.enum_specifier__ENUM_LCB_enumerator_list_COMMA_RCB();}
    break;

  case 151:

/* Line 1806 of yacc.c  */
#line 398 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.enum_specifier__ENUM_IDENTIFIER_LCB_enumerator_list_RCB();}
    break;

  case 152:

/* Line 1806 of yacc.c  */
#line 399 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.enum_specifier__ENUM_IDENTIFIER_LCB_enumerator_list_COMMA_RCB();}
    break;

  case 153:

/* Line 1806 of yacc.c  */
#line 400 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.enum_specifier__ENUM_IDENTIFIER();}
    break;

  case 154:

/* Line 1806 of yacc.c  */
#line 404 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.enumerator_list__enumerator();}
    break;

  case 155:

/* Line 1806 of yacc.c  */
#line 405 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.enumerator_list__enumerator_list_COMMA_enumerator();}
    break;

  case 156:

/* Line 1806 of yacc.c  */
#line 409 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.enumerator__enumeration_constant_EQ_constant_expression();}
    break;

  case 157:

/* Line 1806 of yacc.c  */
#line 410 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.enumerator__enumeration_constant();}
    break;

  case 158:

/* Line 1806 of yacc.c  */
#line 414 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.atomic_type_specifier__ATOMIC_LP_type_name_RP();}
    break;

  case 159:

/* Line 1806 of yacc.c  */
#line 418 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.type_qualifier__CONST();}
    break;

  case 160:

/* Line 1806 of yacc.c  */
#line 419 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.type_qualifier__RESTRICT();}
    break;

  case 161:

/* Line 1806 of yacc.c  */
#line 420 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.type_qualifier__VOLATILE();}
    break;

  case 162:

/* Line 1806 of yacc.c  */
#line 421 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.type_qualifier__ATOMIC();}
    break;

  case 163:

/* Line 1806 of yacc.c  */
#line 425 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.function_specifier__INLINE();}
    break;

  case 164:

/* Line 1806 of yacc.c  */
#line 426 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.function_specifier__NORETURN();}
    break;

  case 165:

/* Line 1806 of yacc.c  */
#line 430 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.alignment_specifier__ALIGNAS_LP_type_name_RP();}
    break;

  case 166:

/* Line 1806 of yacc.c  */
#line 431 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.alignment_specifier__ALIGNAS_LP_constant_expression_RP();}
    break;

  case 167:

/* Line 1806 of yacc.c  */
#line 435 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.declarator__pointer_direct_declarator((yyvsp[(1) - (2)].ast), (yyvsp[(2) - (2)].ast));}
    break;

  case 168:

/* Line 1806 of yacc.c  */
#line 436 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.declarator__direct_declarator((yyvsp[(1) - (1)].ast));}
    break;

  case 169:

/* Line 1806 of yacc.c  */
#line 440 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.direct_declarator__IDENTIFIER((yyvsp[(1) - (1)].word));}
    break;

  case 170:

/* Line 1806 of yacc.c  */
#line 441 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.direct_declarator__LP_declarator_RP((yyvsp[(2) - (3)].ast));}
    break;

  case 171:

/* Line 1806 of yacc.c  */
#line 442 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.direct_declarator__direct_declarator_LSB_RSB((yyvsp[(1) - (3)].ast));}
    break;

  case 172:

/* Line 1806 of yacc.c  */
#line 443 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.direct_declarator__direct_declarator_LSB_MULT_RSB((yyvsp[(1) - (4)].ast));}
    break;

  case 173:

/* Line 1806 of yacc.c  */
#line 444 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.direct_declarator__direct_declarator_LSB_STATIC_type_qualifier_list_assignment_expression_RSB((yyvsp[(1) - (6)].ast), (yyvsp[(4) - (6)].ast), (yyvsp[(5) - (6)].ast));}
    break;

  case 174:

/* Line 1806 of yacc.c  */
#line 445 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.direct_declarator__direct_declarator_LSB_STATIC_assignment_expression_RSB((yyvsp[(1) - (5)].ast), (yyvsp[(4) - (5)].ast));}
    break;

  case 175:

/* Line 1806 of yacc.c  */
#line 446 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.direct_declarator__direct_declarator_LSB_type_qualifier_list_MULT_RSB((yyvsp[(1) - (5)].ast), (yyvsp[(3) - (5)].ast));}
    break;

  case 176:

/* Line 1806 of yacc.c  */
#line 447 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.direct_declarator__direct_declarator_LSB_type_qualifier_list_STATIC_assignment_expression_RSB((yyvsp[(1) - (6)].ast), (yyvsp[(3) - (6)].ast), (yyvsp[(5) - (6)].ast));}
    break;

  case 177:

/* Line 1806 of yacc.c  */
#line 448 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.direct_declarator__direct_declarator_LSB_type_qualifier_list_assignment_expression_RSB((yyvsp[(1) - (5)].ast), (yyvsp[(3) - (5)].ast), (yyvsp[(4) - (5)].ast));}
    break;

  case 178:

/* Line 1806 of yacc.c  */
#line 449 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.direct_declarator__direct_declarator_LSB_type_qualifier_list_RSB((yyvsp[(1) - (4)].ast), (yyvsp[(3) - (4)].ast));}
    break;

  case 179:

/* Line 1806 of yacc.c  */
#line 450 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.direct_declarator__direct_declarator_LSB_assignment_expression_RSB((yyvsp[(1) - (4)].ast), (yyvsp[(3) - (4)].ast));}
    break;

  case 180:

/* Line 1806 of yacc.c  */
#line 451 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.direct_declarator__direct_declarator_LP_parameter_type_list_RP((yyvsp[(1) - (4)].ast), (yyvsp[(3) - (4)].ast));}
    break;

  case 181:

/* Line 1806 of yacc.c  */
#line 452 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.direct_declarator__direct_declarator_LP_RP((yyvsp[(1) - (3)].ast));}
    break;

  case 182:

/* Line 1806 of yacc.c  */
#line 453 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.direct_declarator__direct_declarator_LP_identifier_list_RP((yyvsp[(1) - (4)].ast), (yyvsp[(3) - (4)].ast));}
    break;

  case 183:

/* Line 1806 of yacc.c  */
#line 457 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.pointer__MULT_type_qualifier_list_pointer((yyvsp[(2) - (3)].ast), (yyvsp[(3) - (3)].ast));}
    break;

  case 184:

/* Line 1806 of yacc.c  */
#line 458 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.pointer__MULT_type_qualifier_list((yyvsp[(2) - (2)].ast));}
    break;

  case 185:

/* Line 1806 of yacc.c  */
#line 459 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.pointer__MULT_pointer((yyvsp[(2) - (2)].ast));}
    break;

  case 186:

/* Line 1806 of yacc.c  */
#line 460 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.pointer__MULT();}
    break;

  case 187:

/* Line 1806 of yacc.c  */
#line 464 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.type_qualifier_list__type_qualifier((yyvsp[(1) - (1)].ast));}
    break;

  case 188:

/* Line 1806 of yacc.c  */
#line 465 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.type_qualifier_list__type_qualifier_list_type_qualifier((yyvsp[(1) - (2)].ast), (yyvsp[(2) - (2)].ast));}
    break;

  case 189:

/* Line 1806 of yacc.c  */
#line 470 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.parameter_type_list__parameter_list_COMMA_ELLIPSIS((yyvsp[(1) - (3)].ast));}
    break;

  case 190:

/* Line 1806 of yacc.c  */
#line 471 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.parameter_type_list__parameter_list((yyvsp[(1) - (1)].ast));}
    break;

  case 191:

/* Line 1806 of yacc.c  */
#line 475 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.parameter_list__parameter_declaration((yyvsp[(1) - (1)].ast));}
    break;

  case 192:

/* Line 1806 of yacc.c  */
#line 476 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.parameter_list__parameter_list_COMMA_parameter_declaration((yyvsp[(1) - (3)].ast), (yyvsp[(3) - (3)].ast));}
    break;

  case 193:

/* Line 1806 of yacc.c  */
#line 480 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.parameter_declaration__declaration_specifiers_declarator();}
    break;

  case 194:

/* Line 1806 of yacc.c  */
#line 481 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.parameter_declaration__declaration_specifiers_abstract_declarator();}
    break;

  case 195:

/* Line 1806 of yacc.c  */
#line 482 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.parameter_declaration__declaration_specifiers();}
    break;

  case 196:

/* Line 1806 of yacc.c  */
#line 486 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.identifier_list__IDENTIFIER();}
    break;

  case 197:

/* Line 1806 of yacc.c  */
#line 487 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.identifier_list__identifier_list_COMMA_IDENTIFIER();}
    break;

  case 198:

/* Line 1806 of yacc.c  */
#line 491 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.type_name__specifier_qualifier_list_abstract_declarator();}
    break;

  case 199:

/* Line 1806 of yacc.c  */
#line 492 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.type_name__specifier_qualifier_list();}
    break;

  case 200:

/* Line 1806 of yacc.c  */
#line 496 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.abstract_declarator__pointer_direct_abstract_declarator();}
    break;

  case 201:

/* Line 1806 of yacc.c  */
#line 497 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.abstract_declarator__pointer();}
    break;

  case 202:

/* Line 1806 of yacc.c  */
#line 498 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.abstract_declarator__direct_abstract_declarator();}
    break;

  case 203:

/* Line 1806 of yacc.c  */
#line 502 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.direct_abstract_declarator__LP_abstract_declarator_RP();}
    break;

  case 204:

/* Line 1806 of yacc.c  */
#line 503 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.direct_abstract_declarator__LSB_RSB();}
    break;

  case 205:

/* Line 1806 of yacc.c  */
#line 504 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.direct_abstract_declarator__LSB_MULT_RSB();}
    break;

  case 206:

/* Line 1806 of yacc.c  */
#line 505 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.direct_abstract_declarator__LSB_STATIC_type_qualifier_list_assignment_expression_RSB();}
    break;

  case 207:

/* Line 1806 of yacc.c  */
#line 506 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.direct_abstract_declarator__LSB_STATIC_assignment_expression_RSB();}
    break;

  case 208:

/* Line 1806 of yacc.c  */
#line 507 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.direct_abstract_declarator__LSB_type_qualifier_list_STATIC_assignment_expression_RSB();}
    break;

  case 209:

/* Line 1806 of yacc.c  */
#line 508 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.direct_abstract_declarator__LSB_type_qualifier_list_assignment_expression_RSB();}
    break;

  case 210:

/* Line 1806 of yacc.c  */
#line 509 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.direct_abstract_declarator__LSB_type_qualifier_list_RSB();}
    break;

  case 211:

/* Line 1806 of yacc.c  */
#line 510 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.direct_abstract_declarator__LSB_assignment_expression_RSB();}
    break;

  case 212:

/* Line 1806 of yacc.c  */
#line 511 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.direct_abstract_declarator__direct_abstract_declarator_LSB_RSB();}
    break;

  case 213:

/* Line 1806 of yacc.c  */
#line 512 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.direct_abstract_declarator__direct_abstract_declarator_LSB_MULT_RSB();}
    break;

  case 214:

/* Line 1806 of yacc.c  */
#line 513 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.direct_abstract_declarator__direct_abstract_declarator_LSB_STATIC_type_qualifier_list_assignment_expression_RSB();}
    break;

  case 215:

/* Line 1806 of yacc.c  */
#line 514 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.direct_abstract_declarator__direct_abstract_declarator_LSB_STATIC_assignment_expression_RSB();}
    break;

  case 216:

/* Line 1806 of yacc.c  */
#line 515 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.direct_abstract_declarator__direct_abstract_declarator_LSB_type_qualifier_list_assignment_expression_RSB();}
    break;

  case 217:

/* Line 1806 of yacc.c  */
#line 516 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.direct_abstract_declarator__direct_abstract_declarator_LSB_type_qualifier_list_STATIC_assignment_expression_RSB();}
    break;

  case 218:

/* Line 1806 of yacc.c  */
#line 517 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.direct_abstract_declarator__direct_abstract_declarator_LSB_type_qualifier_list_RSB();}
    break;

  case 219:

/* Line 1806 of yacc.c  */
#line 518 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.direct_abstract_declarator__direct_abstract_declarator_LSB_assignment_expression_RSB();}
    break;

  case 220:

/* Line 1806 of yacc.c  */
#line 519 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.direct_abstract_declarator__LP_RP();}
    break;

  case 221:

/* Line 1806 of yacc.c  */
#line 520 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.direct_abstract_declarator__LP_parameter_type_list_RP();}
    break;

  case 222:

/* Line 1806 of yacc.c  */
#line 521 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.direct_abstract_declarator__direct_abstract_declarator_LP_RP();}
    break;

  case 223:

/* Line 1806 of yacc.c  */
#line 522 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.direct_abstract_declarator__direct_abstract_declarator_LP_parameter_type_list_RP();}
    break;

  case 224:

/* Line 1806 of yacc.c  */
#line 526 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.initializer__LCB_initializer_list_RCB();}
    break;

  case 225:

/* Line 1806 of yacc.c  */
#line 527 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.initializer__LCB_initializer_list_COMMA_RCB();}
    break;

  case 226:

/* Line 1806 of yacc.c  */
#line 528 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.initializer__assignment_expression();}
    break;

  case 227:

/* Line 1806 of yacc.c  */
#line 532 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.initializer_list__designation_initializer();}
    break;

  case 228:

/* Line 1806 of yacc.c  */
#line 533 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.initializer_list__initializer();}
    break;

  case 229:

/* Line 1806 of yacc.c  */
#line 534 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.initializer_list__initializer_list_COMMA_designation_initializer();}
    break;

  case 230:

/* Line 1806 of yacc.c  */
#line 535 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.initializer_list__initializer_list_COMMA_initializer();}
    break;

  case 231:

/* Line 1806 of yacc.c  */
#line 539 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.designation__designator_list_EQ();}
    break;

  case 232:

/* Line 1806 of yacc.c  */
#line 543 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.designator_list__designator();}
    break;

  case 233:

/* Line 1806 of yacc.c  */
#line 544 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.designator_list__designator_list_designator();}
    break;

  case 234:

/* Line 1806 of yacc.c  */
#line 548 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.designator__LSB_constant_expression_RSB();}
    break;

  case 235:

/* Line 1806 of yacc.c  */
#line 549 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.designator__DOT_IDENTIFIER();}
    break;

  case 236:

/* Line 1806 of yacc.c  */
#line 553 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.static_assert_declaration__STATIC_ASSERT_LP_constant_expression_COMMA_STRING_LITERAL_RP_SCOLON();}
    break;

  case 237:

/* Line 1806 of yacc.c  */
#line 557 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.statement__labeled_statement();}
    break;

  case 238:

/* Line 1806 of yacc.c  */
#line 558 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.statement__compound_statement();}
    break;

  case 239:

/* Line 1806 of yacc.c  */
#line 559 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.statement__expression_statement();}
    break;

  case 240:

/* Line 1806 of yacc.c  */
#line 560 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.statement__selection_statement();}
    break;

  case 241:

/* Line 1806 of yacc.c  */
#line 561 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.statement__iteration_statement();}
    break;

  case 242:

/* Line 1806 of yacc.c  */
#line 562 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.statement__jump_statement();}
    break;

  case 243:

/* Line 1806 of yacc.c  */
#line 566 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.labeled_statement__IDENTIFIER_COLON_statement();}
    break;

  case 244:

/* Line 1806 of yacc.c  */
#line 567 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.labeled_statement__CASE_constant_expression_COLON_statement();}
    break;

  case 245:

/* Line 1806 of yacc.c  */
#line 568 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.labeled_statement__DEFAULT_COLON_statement();}
    break;

  case 246:

/* Line 1806 of yacc.c  */
#line 572 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.compound_statement__LCB_RCB();}
    break;

  case 247:

/* Line 1806 of yacc.c  */
#line 573 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.compound_statement__LCB__block_item_list_RCB();}
    break;

  case 248:

/* Line 1806 of yacc.c  */
#line 577 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.block_item_list__block_item();}
    break;

  case 249:

/* Line 1806 of yacc.c  */
#line 578 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.block_item_list__block_item_list_block_item();}
    break;

  case 250:

/* Line 1806 of yacc.c  */
#line 582 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.block_item__declaration();}
    break;

  case 251:

/* Line 1806 of yacc.c  */
#line 583 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.block_item__statement();}
    break;

  case 252:

/* Line 1806 of yacc.c  */
#line 587 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.expression_statement__SCOLON();}
    break;

  case 253:

/* Line 1806 of yacc.c  */
#line 588 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.expression_statement__expression_SCOLON();}
    break;

  case 254:

/* Line 1806 of yacc.c  */
#line 592 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.selection_statement__IF_LP_expression_RP_statement_ELSE_statement();}
    break;

  case 255:

/* Line 1806 of yacc.c  */
#line 593 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.selection_statement__IF_LP_expression_RP_statement();}
    break;

  case 256:

/* Line 1806 of yacc.c  */
#line 594 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.selection_statement__SWITCH_LP_expression_RP_statement();}
    break;

  case 257:

/* Line 1806 of yacc.c  */
#line 598 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.iteration_statement__WHILE_LP_expression_RP_statement();}
    break;

  case 258:

/* Line 1806 of yacc.c  */
#line 599 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.iteration_statement__DO_statement_WHILE_LP_expression_RP_SCOLON();}
    break;

  case 259:

/* Line 1806 of yacc.c  */
#line 600 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.iteration_statement__FOR_LP_expression_statement_expression_statement_RP_statement();}
    break;

  case 260:

/* Line 1806 of yacc.c  */
#line 601 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.iteration_statement__FOR_LP_expression_statement_expression_statement_expression_RP_statement();}
    break;

  case 261:

/* Line 1806 of yacc.c  */
#line 602 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.iteration_statement__FOR_LP_declaration_expression_statement_RP_statement();}
    break;

  case 262:

/* Line 1806 of yacc.c  */
#line 603 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.iteration_statement__FOR_LP_declaration_expression_statement_expression_RP_statement();}
    break;

  case 263:

/* Line 1806 of yacc.c  */
#line 607 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.jump_statement__GOTO_IDENTIFIER_SCOLON();}
    break;

  case 264:

/* Line 1806 of yacc.c  */
#line 608 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.jump_statement__CONTINUE_SCOLON();}
    break;

  case 265:

/* Line 1806 of yacc.c  */
#line 609 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.jump_statement__BREAK_SCOLON();}
    break;

  case 266:

/* Line 1806 of yacc.c  */
#line 610 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.jump_statement__RETURN_SCOLON();}
    break;

  case 267:

/* Line 1806 of yacc.c  */
#line 611 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.jump_statement__RETURN_expression_SCOLON();}
    break;

  case 268:

/* Line 1806 of yacc.c  */
#line 615 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.translation_unit__external_declaration((yyvsp[(1) - (1)].ast));}
    break;

  case 269:

/* Line 1806 of yacc.c  */
#line 616 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.translation_unit__translation_unit_external_declaration((yyvsp[(1) - (2)].ast), (yyvsp[(2) - (2)].ast));}
    break;

  case 270:

/* Line 1806 of yacc.c  */
#line 620 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.external_declaration__function_definition((yyvsp[(1) - (1)].ast));}
    break;

  case 271:

/* Line 1806 of yacc.c  */
#line 621 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.external_declaration__declaration((yyvsp[(1) - (1)].ast));}
    break;

  case 272:

/* Line 1806 of yacc.c  */
#line 625 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.function_definition__declaration_specifiers_declarator_declaration_list_compound_statement();}
    break;

  case 273:

/* Line 1806 of yacc.c  */
#line 626 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.function_definition__declaration_specifiers_declarator_compound_statement();}
    break;

  case 274:

/* Line 1806 of yacc.c  */
#line 630 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.declaration_list__declaration();}
    break;

  case 275:

/* Line 1806 of yacc.c  */
#line 631 "c_grammar/c_grammar_2011.y"
    {(yyval.ast) = rule.declaration_list__declaration_list_declaration();}
    break;



/* Line 1806 of yacc.c  */
#line 4311 "c_grammar_2011.tab.c"
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
  *++yylsp = yyloc;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
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

  yyerror_range[1] = yylloc;

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
		      yytoken, &yylval, &yylloc);
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

  yyerror_range[1] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp);
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 2067 of yacc.c  */
#line 634 "c_grammar/c_grammar_2011.y"

#include <stdio.h>

void yyerror(const char *s)
{
	fflush(stdout);
	fprintf(stderr, "*** %s\n", s);
}
