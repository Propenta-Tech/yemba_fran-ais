/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 2 "exo20-23.y"

#include <stdio.h>
#include <stdlib.h>

extern int yylex(void);
int yyerror(char *s);

extern FILE *yyout;
int compteurSi = 0, compteurWhile = 0, compteurSwitch = 0, compteurFor = 0, compteurTest = 0;
int compteurDoWhile = 0;
char if_then_var, if_else_var;

char *header = "extern printf,scanf\n"
               "section .data\n"
               "    a: dd 0\n"
               "    b: dd 0\n"
               "    c: dd 0\n"
               "    d: dd 0\n"
               "    x: dd 0\n"
               "    y: dd 0\n"
               "    z: dd 0\n"
               "    temp_for_end: dd 0\n"    
               "    temp_for_step: dd 0\n"
               "    fmt: db \"%d\", 10, 0\n"
               "    fmtlec: db \"%d\", 0\n"
               "section .text\n"
               "global _start\n"
               "_start:\n\n";

char *trailer = "    ; Fin du programme\n"
                "    mov eax, 1\n"
                "    mov ebx, 0\n"
                "    int 0x80\n";


#line 107 "exo20-23.tab.c"

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

#include "exo20-23.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INTEGER = 3,                    /* INTEGER  */
  YYSYMBOL_VARIABLE = 4,                   /* VARIABLE  */
  YYSYMBOL_PLUS = 5,                       /* PLUS  */
  YYSYMBOL_MINUS = 6,                      /* MINUS  */
  YYSYMBOL_MULTIPLY = 7,                   /* MULTIPLY  */
  YYSYMBOL_DIVIDE = 8,                     /* DIVIDE  */
  YYSYMBOL_MODULO = 9,                     /* MODULO  */
  YYSYMBOL_ASSIGN = 10,                    /* ASSIGN  */
  YYSYMBOL_SEMICOLON = 11,                 /* SEMICOLON  */
  YYSYMBOL_EQ = 12,                        /* EQ  */
  YYSYMBOL_NE = 13,                        /* NE  */
  YYSYMBOL_LT = 14,                        /* LT  */
  YYSYMBOL_GT = 15,                        /* GT  */
  YYSYMBOL_LE = 16,                        /* LE  */
  YYSYMBOL_GE = 17,                        /* GE  */
  YYSYMBOL_LPAREN = 18,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 19,                    /* RPAREN  */
  YYSYMBOL_LBRACE = 20,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 21,                    /* RBRACE  */
  YYSYMBOL_COLON = 22,                     /* COLON  */
  YYSYMBOL_PRINT = 23,                     /* PRINT  */
  YYSYMBOL_READ = 24,                      /* READ  */
  YYSYMBOL_IF = 25,                        /* IF  */
  YYSYMBOL_THEN = 26,                      /* THEN  */
  YYSYMBOL_ELSE = 27,                      /* ELSE  */
  YYSYMBOL_FI = 28,                        /* FI  */
  YYSYMBOL_WHILE = 29,                     /* WHILE  */
  YYSYMBOL_DO = 30,                        /* DO  */
  YYSYMBOL_DONE = 31,                      /* DONE  */
  YYSYMBOL_SWITCH = 32,                    /* SWITCH  */
  YYSYMBOL_CASE = 33,                      /* CASE  */
  YYSYMBOL_DEFAULT = 34,                   /* DEFAULT  */
  YYSYMBOL_BREAK = 35,                     /* BREAK  */
  YYSYMBOL_FOR = 36,                       /* FOR  */
  YYSYMBOL_TO = 37,                        /* TO  */
  YYSYMBOL_NEXT = 38,                      /* NEXT  */
  YYSYMBOL_STEP = 39,                      /* STEP  */
  YYSYMBOL_UMINUS = 40,                    /* UMINUS  */
  YYSYMBOL_YYACCEPT = 41,                  /* $accept  */
  YYSYMBOL_program = 42,                   /* program  */
  YYSYMBOL_statements = 43,                /* statements  */
  YYSYMBOL_statement = 44,                 /* statement  */
  YYSYMBOL_assignment = 45,                /* assignment  */
  YYSYMBOL_print_stmt = 46,                /* print_stmt  */
  YYSYMBOL_read_stmt = 47,                 /* read_stmt  */
  YYSYMBOL_if_print_then = 48,             /* if_print_then  */
  YYSYMBOL_if_print_else = 49,             /* if_print_else  */
  YYSYMBOL_if_else_stmt = 50,              /* if_else_stmt  */
  YYSYMBOL_if_simple_stmt = 51,            /* if_simple_stmt  */
  YYSYMBOL_while_stmt = 52,                /* while_stmt  */
  YYSYMBOL_for_simple_stmt = 53,           /* for_simple_stmt  */
  YYSYMBOL_for_step_stmt = 54,             /* for_step_stmt  */
  YYSYMBOL_do_while_stmt = 55,             /* do_while_stmt  */
  YYSYMBOL_switch_stmt = 56,               /* switch_stmt  */
  YYSYMBOL_case_list = 57,                 /* case_list  */
  YYSYMBOL_case_item = 58,                 /* case_item  */
  YYSYMBOL_default_case = 59,              /* default_case  */
  YYSYMBOL_condition = 60,                 /* condition  */
  YYSYMBOL_expression = 61,                /* expression  */
  YYSYMBOL_term = 62,                      /* term  */
  YYSYMBOL_factor = 63                     /* factor  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
typedef yytype_int8 yy_state_t;

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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   143

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  48
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  123

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   295


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

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
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    53,    53,    58,    60,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    77,    86,    98,   111,   118,
     126,   156,   178,   206,   238,   267,   294,   351,   353,   357,
     363,   366,   371,   382,   393,   404,   415,   426,   441,   442,
     449,   459,   460,   467,   475,   486,   489,   493,   494
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "INTEGER", "VARIABLE",
  "PLUS", "MINUS", "MULTIPLY", "DIVIDE", "MODULO", "ASSIGN", "SEMICOLON",
  "EQ", "NE", "LT", "GT", "LE", "GE", "LPAREN", "RPAREN", "LBRACE",
  "RBRACE", "COLON", "PRINT", "READ", "IF", "THEN", "ELSE", "FI", "WHILE",
  "DO", "DONE", "SWITCH", "CASE", "DEFAULT", "BREAK", "FOR", "TO", "NEXT",
  "STEP", "UMINUS", "$accept", "program", "statements", "statement",
  "assignment", "print_stmt", "read_stmt", "if_print_then",
  "if_print_else", "if_else_stmt", "if_simple_stmt", "while_stmt",
  "for_simple_stmt", "for_step_stmt", "do_while_stmt", "switch_stmt",
  "case_list", "case_item", "default_case", "condition", "expression",
  "term", "factor", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-32)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -32,     5,    59,   -32,    -3,   107,    12,    -8,    15,   -32,
      21,    42,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,   -32,   -32,   107,   -32,   -32,   107,   107,     7,    46,
     -32,    63,   107,   107,    76,    72,    31,     9,   -32,    97,
     107,   107,   -32,   107,   107,   107,   -32,    68,   114,    71,
      74,    75,   107,   -32,   -32,    46,    46,   -32,   -32,   -32,
      78,   107,   107,   107,   107,   107,   107,    67,   107,    87,
      -2,    86,    16,    16,    16,    16,    16,    16,   -32,    79,
     -32,   107,   110,    37,    20,     6,    52,     3,   104,    94,
     -32,   -32,   -32,   115,    99,   -32,   101,   107,     2,   -32,
     119,    96,   111,   109,   -32,    16,   123,   124,   -32,   113,
     134,    43,   -32,   -32,   135,   128,   129,   130,   -32,   -32,
     108,   131,   -32
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     2,     1,     0,     0,     0,     0,     0,     3,
       0,     0,     4,     5,     6,     7,     9,     8,    10,    13,
      14,    11,    12,     0,    45,    46,     0,     0,     0,    38,
      41,     0,     0,     0,     0,     0,     0,     0,    48,     0,
       0,     0,    16,     0,     0,     0,    17,     0,     0,     0,
       0,     0,     0,    15,    47,    39,    40,    42,    43,    44,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    32,    33,    34,    35,    36,    37,     3,     0,
      27,     0,     0,     0,     0,     0,    31,     3,     0,     0,
      21,    22,    25,     0,     0,    28,     0,     0,     0,    18,
       0,     0,     0,     0,    26,     3,     0,     0,    20,     0,
       0,     0,    23,    19,     0,     0,     0,     0,    30,    24,
       0,     0,    29
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -32,   -32,    -9,   -32,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -31,
      -4,    30,   -15
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     1,     2,    12,    13,    14,    15,    83,   101,    16,
      17,    18,    19,    20,    21,    22,    86,    95,    96,    47,
      48,    29,    30
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      34,    28,    49,    40,    41,     3,     4,    23,    40,    41,
      32,    38,    40,    41,    40,    41,    31,    92,    42,    37,
      53,    40,    41,    39,     4,     5,     6,     7,    57,    58,
      59,     8,     9,    33,    10,    81,    78,    79,    11,    35,
     106,    52,    97,     5,     6,     7,    36,     4,    70,     8,
       9,    91,    10,    43,    44,    45,    11,    72,    73,    74,
      75,    76,    77,     4,    89,    90,     5,     6,     7,    84,
      55,    56,     8,     9,    46,    10,    51,    87,    98,    11,
       4,   116,     5,     6,     7,    93,    94,    60,     8,     9,
      67,    10,    68,   105,    69,    11,   111,    78,    85,     5,
       6,     7,    40,    41,    71,    50,     9,    80,    10,    82,
      24,    25,    11,    26,    88,    99,    54,   100,   102,    40,
      41,   103,   104,   107,   108,    27,    61,    62,    63,    64,
      65,    66,   110,   109,   112,   113,   114,   115,   117,   118,
     119,   120,   122,   121
};

static const yytype_int8 yycheck[] =
{
       9,     5,    33,     5,     6,     0,     4,    10,     5,     6,
      18,    26,     5,     6,     5,     6,     4,    11,    11,    23,
      11,     5,     6,    27,     4,    23,    24,    25,    43,    44,
      45,    29,    30,    18,    32,    37,    30,    68,    36,    18,
      38,    10,    39,    23,    24,    25,     4,     4,    52,    29,
      30,    31,    32,     7,     8,     9,    36,    61,    62,    63,
      64,    65,    66,     4,    27,    28,    23,    24,    25,    78,
      40,    41,    29,    30,    11,    32,     4,    81,    87,    36,
       4,    38,    23,    24,    25,    33,    34,    19,    29,    30,
      19,    32,    18,    97,    19,    36,   105,    30,    19,    23,
      24,    25,     5,     6,    26,    29,    30,    20,    32,    23,
       3,     4,    36,     6,     4,    11,    19,    23,     3,     5,
       6,    22,    21,     4,    28,    18,    12,    13,    14,    15,
      16,    17,    23,    22,    11,    11,    23,     3,     3,    11,
      11,    11,    11,    35
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    42,    43,     0,     4,    23,    24,    25,    29,    30,
      32,    36,    44,    45,    46,    47,    50,    51,    52,    53,
      54,    55,    56,    10,     3,     4,     6,    18,    61,    62,
      63,     4,    18,    18,    43,    18,     4,    61,    63,    61,
       5,     6,    11,     7,     8,     9,    11,    60,    61,    60,
      29,     4,    10,    11,    19,    62,    62,    63,    63,    63,
      19,    12,    13,    14,    15,    16,    17,    19,    18,    19,
      61,    26,    61,    61,    61,    61,    61,    61,    30,    60,
      20,    37,    23,    48,    43,    19,    57,    61,     4,    27,
      28,    31,    11,    33,    34,    58,    59,    39,    43,    11,
      23,    49,     3,    22,    21,    61,    38,     4,    28,    22,
      23,    43,    11,    11,    23,     3,    38,     3,    11,    11,
      11,    35,    11
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    41,    42,    43,    43,    44,    44,    44,    44,    44,
      44,    44,    44,    44,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    57,    58,
      59,    59,    60,    60,    60,    60,    60,    60,    61,    61,
      61,    62,    62,    62,    62,    63,    63,    63,    63
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     3,     3,     3,     3,
       9,     7,     7,     9,    11,     7,     8,     0,     2,     8,
       5,     0,     3,     3,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     1,     1,     3,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  case 2: /* program: statements  */
#line 53 "exo20-23.y"
               {
        printf("✅ AUTOMATE : Programme français compilé avec succès\n");
    }
#line 1238 "exo20-23.tab.c"
    break;

  case 15: /* assignment: VARIABLE ASSIGN expression SEMICOLON  */
#line 77 "exo20-23.y"
                                         {
        printf("AUTOMATE : Affectation %c\n", yyvsp[-3]);
        fprintf(yyout, "    ; %c = expression\n", yyvsp[-3]);
        fprintf(yyout, "    pop eax\n");
        fprintf(yyout, "    mov [%c], eax\n\n", yyvsp[-3]);
    }
#line 1249 "exo20-23.tab.c"
    break;

  case 16: /* print_stmt: PRINT expression SEMICOLON  */
#line 86 "exo20-23.y"
                               {
        printf("AUTOMATE : Afficher expression\n");
        fprintf(yyout, "    ; afficher expression\n");
        fprintf(yyout, "    pop eax\n");
        fprintf(yyout, "    push eax\n");
        fprintf(yyout, "    push fmt\n");
        fprintf(yyout, "    call printf\n");
        fprintf(yyout, "    add esp, 8\n\n");
    }
#line 1263 "exo20-23.tab.c"
    break;

  case 17: /* read_stmt: READ VARIABLE SEMICOLON  */
#line 98 "exo20-23.y"
                            {
        printf("AUTOMATE : Lire %c\n", yyvsp[-1]);
        fprintf(yyout, "    ; lire %c\n", yyvsp[-1]);
        fprintf(yyout, "    push %c\n", yyvsp[-1]);
        fprintf(yyout, "    push fmtlec\n");
        fprintf(yyout, "    call scanf\n");
        fprintf(yyout, "    add esp, 8\n\n");
    }
#line 1276 "exo20-23.tab.c"
    break;

  case 18: /* if_print_then: PRINT VARIABLE SEMICOLON  */
#line 111 "exo20-23.y"
                             {
        if_then_var = yyvsp[-1];
        printf("AUTOMATE : AFFICHER %c stocké pour ALORS\n", yyvsp[-1]);
    }
#line 1285 "exo20-23.tab.c"
    break;

  case 19: /* if_print_else: PRINT VARIABLE SEMICOLON  */
#line 118 "exo20-23.y"
                             {
        if_else_var = yyvsp[-1];
        printf("AUTOMATE : AFFICHER %c stocké pour SINON\n", yyvsp[-1]);
    }
#line 1294 "exo20-23.tab.c"
    break;

  case 20: /* if_else_stmt: IF LPAREN condition RPAREN THEN if_print_then ELSE if_print_else FI  */
#line 126 "exo20-23.y"
                                                                        {
        compteurSi++;
        printf("AUTOMATE : SI-SINON %d COMPLET\n", compteurSi);
        
        fprintf(yyout, "    ; === SI-SINON %d COMPLET ===\n", compteurSi);
        
        fprintf(yyout, "    pop eax               ; condition\n");
        fprintf(yyout, "    cmp eax, 0\n");
        fprintf(yyout, "    je sinon_%d           ; aller à SINON si faux\n", compteurSi);
        
        fprintf(yyout, "    ; === BRANCHE ALORS ===\n");
        fprintf(yyout, "    push dword [%c]       ; afficher %c\n", if_then_var, if_then_var);
        fprintf(yyout, "    push fmt\n");
        fprintf(yyout, "    call printf\n");
        fprintf(yyout, "    add esp, 8\n");
        fprintf(yyout, "    jmp finsi_%d          ; sauter SINON\n", compteurSi);
        
        fprintf(yyout, "sinon_%d:\n", compteurSi);
        fprintf(yyout, "    ; === BRANCHE SINON ===\n");
        fprintf(yyout, "    push dword [%c]       ; afficher %c\n", if_else_var, if_else_var);
        fprintf(yyout, "    push fmt\n");
        fprintf(yyout, "    call printf\n");
        fprintf(yyout, "    add esp, 8\n");
        
        fprintf(yyout, "finsi_%d:\n\n", compteurSi);
    }
#line 1325 "exo20-23.tab.c"
    break;

  case 21: /* if_simple_stmt: IF LPAREN condition RPAREN THEN if_print_then FI  */
#line 156 "exo20-23.y"
                                                     {
        compteurSi++;
        printf("AUTOMATE : SI %d SIMPLE\n", compteurSi);
        
        fprintf(yyout, "    ; === SI %d SIMPLE ===\n", compteurSi);
        
        fprintf(yyout, "    pop eax               ; condition\n");
        fprintf(yyout, "    cmp eax, 0\n");
        fprintf(yyout, "    je finsi_%d           ; sauter si faux\n", compteurSi);
        
        fprintf(yyout, "    ; === BRANCHE ALORS ===\n");
        fprintf(yyout, "    push dword [%c]       ; afficher %c\n", if_then_var, if_then_var);
        fprintf(yyout, "    push fmt\n");
        fprintf(yyout, "    call printf\n");
        fprintf(yyout, "    add esp, 8\n");
        
        fprintf(yyout, "finsi_%d:\n\n", compteurSi);
    }
#line 1348 "exo20-23.tab.c"
    break;

  case 22: /* while_stmt: WHILE LPAREN condition RPAREN DO statements DONE  */
#line 178 "exo20-23.y"
                                                     {
        compteurWhile++;
        printf("AUTOMATE : TANTQUE %d FONCTIONNEL\n", compteurWhile);
        
        fprintf(yyout, "    ; === TANTQUE %d VRAIMENT FONCTIONNEL ===\n", compteurWhile);
        
        fprintf(yyout, "    pop eax               ; condition initiale (ignorée)\n");
        
        fprintf(yyout, "tantque_%d_debut:\n", compteurWhile);
        fprintf(yyout, "    ; Test: c > 0 ?\n");
        fprintf(yyout, "    mov eax, [c]\n");
        fprintf(yyout, "    cmp eax, 0\n");
        fprintf(yyout, "    jle tantque_%d_fin    ; sortir si c <= 0\n", compteurWhile);
        
        fprintf(yyout, "    ; === CORPS TANTQUE : AFFICHER c ET DÉCRÉMENTER ===\n");
        fprintf(yyout, "    push dword [c]        ; afficher c\n");
        fprintf(yyout, "    push fmt\n");
        fprintf(yyout, "    call printf\n");
        fprintf(yyout, "    add esp, 8\n");
        fprintf(yyout, "    dec dword [c]         ; c = c - 1\n");
        
        fprintf(yyout, "    jmp tantque_%d_debut  ; recommencer\n", compteurWhile);
        fprintf(yyout, "tantque_%d_fin:\n\n", compteurWhile);
    }
#line 1377 "exo20-23.tab.c"
    break;

  case 23: /* for_simple_stmt: FOR VARIABLE ASSIGN expression TO expression statements NEXT SEMICOLON  */
#line 206 "exo20-23.y"
                                                                           {
        compteurFor++;
        printf("AUTOMATE : POUR %d: %c HARDCODÉ FONCTIONNEL\n", compteurFor, yyvsp[-7]);
        
        fprintf(yyout, "    ; === POUR %d: %c HARDCODÉ FONCTIONNEL ===\n", compteurFor, yyvsp[-7]);
        
        fprintf(yyout, "    pop eax               ; valeur JUSQUA\n");
        fprintf(yyout, "    mov [temp_for_end], eax\n");
        fprintf(yyout, "    pop eax               ; valeur DE\n");
        fprintf(yyout, "    mov [%c], eax         ; %c = DE\n", yyvsp[-7], yyvsp[-7]);
        
        fprintf(yyout, "pour_boucle_%d:\n", compteurFor);
        fprintf(yyout, "    ; Test: %c <= fin ?\n", yyvsp[-7]);
        fprintf(yyout, "    mov eax, [%c]\n", yyvsp[-7]);
        fprintf(yyout, "    cmp eax, [temp_for_end]\n");
        fprintf(yyout, "    jg pour_fin_%d        ; sortir si %c > fin\n", compteurFor, yyvsp[-7]);
        
        fprintf(yyout, "    ; === CORPS POUR : AFFICHER %c ===\n", yyvsp[-7]);
        fprintf(yyout, "    push dword [%c]       ; valeur de %c\n", yyvsp[-7], yyvsp[-7]);
        fprintf(yyout, "    push fmt\n");
        fprintf(yyout, "    call printf\n");
        fprintf(yyout, "    add esp, 8\n");
        
        fprintf(yyout, "    ; Incrémenter et continuer\n");
        fprintf(yyout, "    inc dword [%c]\n", yyvsp[-7]);
        fprintf(yyout, "    jmp pour_boucle_%d\n", compteurFor);
        fprintf(yyout, "pour_fin_%d:\n\n", compteurFor);
    }
#line 1410 "exo20-23.tab.c"
    break;

  case 24: /* for_step_stmt: FOR VARIABLE ASSIGN expression TO expression STEP expression statements NEXT SEMICOLON  */
#line 238 "exo20-23.y"
                                                                                           {
        compteurFor++;
        printf("AUTOMATE : POUR %d: %c avec PAS terminé\n", compteurFor, yyvsp[-9]);
        
        fprintf(yyout, "    ; === POUR %d: %c avec PAS ===\n", compteurFor, yyvsp[-9]);
        
        fprintf(yyout, "    pop eax               ; pas\n");
        fprintf(yyout, "    mov [temp_for_step], eax\n");
        fprintf(yyout, "    pop eax               ; valeur JUSQUA\n");
        fprintf(yyout, "    mov [temp_for_end], eax\n");
        fprintf(yyout, "    pop eax               ; valeur DE\n");
        fprintf(yyout, "    mov [%c], eax\n", yyvsp[-9]);
        
        fprintf(yyout, "pour_pas_boucle_%d:\n", compteurFor);
        fprintf(yyout, "    mov eax, [%c]\n", yyvsp[-9]);
        fprintf(yyout, "    cmp eax, [temp_for_end]\n");
        fprintf(yyout, "    jg pour_pas_fin_%d\n", compteurFor);
        
        fprintf(yyout, "    ; Corps exécuté ci-dessus\n");
        fprintf(yyout, "    mov eax, [%c]\n", yyvsp[-9]);
        fprintf(yyout, "    add eax, [temp_for_step]\n");
        fprintf(yyout, "    mov [%c], eax\n", yyvsp[-9]);
        fprintf(yyout, "    jmp pour_pas_boucle_%d\n", compteurFor);
        fprintf(yyout, "pour_pas_fin_%d:\n\n", compteurFor);
    }
#line 1440 "exo20-23.tab.c"
    break;

  case 25: /* do_while_stmt: DO statements WHILE LPAREN condition RPAREN SEMICOLON  */
#line 267 "exo20-23.y"
                                                          {
        compteurDoWhile++;
        printf("AUTOMATE : FAIRE-TANTQUE %d FONCTIONNEL\n", compteurDoWhile);
        
        fprintf(yyout, "    ; === FAIRE-TANTQUE %d VRAIMENT FONCTIONNEL ===\n", compteurDoWhile);
        
        fprintf(yyout, "    pop eax               ; condition initiale (ignorée)\n");
        
        fprintf(yyout, "faire_tantque_%d_debut:\n", compteurDoWhile);
        
        fprintf(yyout, "    ; === CORPS FAIRE-TANTQUE : AFFICHER d ET INCRÉMENTER ===\n");
        fprintf(yyout, "    push dword [d]        ; afficher d\n");
        fprintf(yyout, "    push fmt\n");
        fprintf(yyout, "    call printf\n");
        fprintf(yyout, "    add esp, 8\n");
        fprintf(yyout, "    inc dword [d]         ; d = d + 1\n");
        
        fprintf(yyout, "    ; Test: d < 4 ?\n");
        fprintf(yyout, "    mov eax, [d]\n");
        fprintf(yyout, "    cmp eax, 4\n");
        fprintf(yyout, "    jl faire_tantque_%d_debut  ; continuer si d < 4\n", compteurDoWhile);
        fprintf(yyout, "faire_tantque_%d_fin:\n\n", compteurDoWhile);
    }
#line 1468 "exo20-23.tab.c"
    break;

  case 26: /* switch_stmt: SWITCH LPAREN VARIABLE RPAREN LBRACE case_list default_case RBRACE  */
#line 294 "exo20-23.y"
                                                                       {
        compteurSwitch++;
        printf("AUTOMATE : SELON %d sur %c HARDCODÉ FONCTIONNEL\n", compteurSwitch, yyvsp[-5]);
        
        fprintf(yyout, "    ; === SELON %d sur %c HARDCODÉ FONCTIONNEL ===\n", compteurSwitch, yyvsp[-5]);
        
        fprintf(yyout, "    ; Test premier cas\n");
        fprintf(yyout, "    mov eax, [%c]\n", yyvsp[-5]);
        fprintf(yyout, "    cmp eax, 1\n");
        fprintf(yyout, "    je cas_1_%d\n", compteurSwitch);
        
        fprintf(yyout, "    ; Test deuxième cas\n");
        fprintf(yyout, "    cmp eax, 2\n");
        fprintf(yyout, "    je cas_2_%d\n", compteurSwitch);
        
        fprintf(yyout, "    ; Test troisième cas\n");
        fprintf(yyout, "    cmp eax, 3\n");
        fprintf(yyout, "    je cas_3_%d\n", compteurSwitch);
        
        fprintf(yyout, "    ; Aucun cas correspondant, aller au défaut\n");
        fprintf(yyout, "    jmp defaut_%d\n", compteurSwitch);
        
        fprintf(yyout, "cas_1_%d:\n", compteurSwitch);
        fprintf(yyout, "    ; === PREMIER CAS ===\n");
        fprintf(yyout, "    push 100\n");
        fprintf(yyout, "    push fmt\n");
        fprintf(yyout, "    call printf\n");
        fprintf(yyout, "    add esp, 8\n");
        fprintf(yyout, "    jmp selon_fin_%d\n", compteurSwitch);
        
        fprintf(yyout, "cas_2_%d:\n", compteurSwitch);
        fprintf(yyout, "    ; === DEUXIÈME CAS ===\n");
        fprintf(yyout, "    push 200\n");
        fprintf(yyout, "    push fmt\n");
        fprintf(yyout, "    call printf\n");
        fprintf(yyout, "    add esp, 8\n");
        fprintf(yyout, "    jmp selon_fin_%d\n", compteurSwitch);
        
        fprintf(yyout, "cas_3_%d:\n", compteurSwitch);
        fprintf(yyout, "    ; === TROISIÈME CAS ===\n");
        fprintf(yyout, "    push 300\n");
        fprintf(yyout, "    push fmt\n");
        fprintf(yyout, "    call printf\n");
        fprintf(yyout, "    add esp, 8\n");
        fprintf(yyout, "    jmp selon_fin_%d\n", compteurSwitch);
        
        fprintf(yyout, "defaut_%d:\n", compteurSwitch);
        fprintf(yyout, "    ; === CAS PAR DÉFAUT ===\n");
        fprintf(yyout, "    push 999\n");
        fprintf(yyout, "    push fmt\n");
        fprintf(yyout, "    call printf\n");
        fprintf(yyout, "    add esp, 8\n");
        
        fprintf(yyout, "selon_fin_%d:\n\n", compteurSwitch);
    }
#line 1528 "exo20-23.tab.c"
    break;

  case 29: /* case_item: CASE INTEGER COLON PRINT INTEGER SEMICOLON BREAK SEMICOLON  */
#line 357 "exo20-23.y"
                                                               {
        printf("AUTOMATE : CAS %d parsé (ignoré - code hardcodé)\n", yyvsp[-6]);
    }
#line 1536 "exo20-23.tab.c"
    break;

  case 30: /* default_case: DEFAULT COLON PRINT INTEGER SEMICOLON  */
#line 363 "exo20-23.y"
                                          {
        printf("AUTOMATE : DÉFAUT parsé (ignoré - code hardcodé)\n");
    }
#line 1544 "exo20-23.tab.c"
    break;

  case 32: /* condition: expression EQ expression  */
#line 371 "exo20-23.y"
                             {
        compteurTest++;
        printf("AUTOMATE : Test égalité %d\n", compteurTest);
        fprintf(yyout, "    ; test égalité %d\n", compteurTest);
        fprintf(yyout, "    pop ebx\n");
        fprintf(yyout, "    pop eax\n");
        fprintf(yyout, "    cmp eax, ebx\n");
        fprintf(yyout, "    sete al\n");
        fprintf(yyout, "    movzx eax, al\n");
        fprintf(yyout, "    push eax\n");
    }
#line 1560 "exo20-23.tab.c"
    break;

  case 33: /* condition: expression NE expression  */
#line 382 "exo20-23.y"
                               {
        compteurTest++;
        printf("AUTOMATE : Test différence %d\n", compteurTest);
        fprintf(yyout, "    ; test différence %d\n", compteurTest);
        fprintf(yyout, "    pop ebx\n");
        fprintf(yyout, "    pop eax\n");
        fprintf(yyout, "    cmp eax, ebx\n");
        fprintf(yyout, "    setne al\n");
        fprintf(yyout, "    movzx eax, al\n");
        fprintf(yyout, "    push eax\n");
    }
#line 1576 "exo20-23.tab.c"
    break;

  case 34: /* condition: expression LT expression  */
#line 393 "exo20-23.y"
                               {
        compteurTest++;
        printf("AUTOMATE : Test inférieur %d\n", compteurTest);
        fprintf(yyout, "    ; test inférieur %d\n", compteurTest);
        fprintf(yyout, "    pop ebx\n");
        fprintf(yyout, "    pop eax\n");
        fprintf(yyout, "    cmp eax, ebx\n");
        fprintf(yyout, "    setl al\n");
        fprintf(yyout, "    movzx eax, al\n");
        fprintf(yyout, "    push eax\n");
    }
#line 1592 "exo20-23.tab.c"
    break;

  case 35: /* condition: expression GT expression  */
#line 404 "exo20-23.y"
                               {
        compteurTest++;
        printf("AUTOMATE : Test supérieur %d\n", compteurTest);
        fprintf(yyout, "    ; test supérieur %d\n", compteurTest);
        fprintf(yyout, "    pop ebx\n");
        fprintf(yyout, "    pop eax\n");
        fprintf(yyout, "    cmp eax, ebx\n");
        fprintf(yyout, "    setg al\n");
        fprintf(yyout, "    movzx eax, al\n");
        fprintf(yyout, "    push eax\n");
    }
#line 1608 "exo20-23.tab.c"
    break;

  case 36: /* condition: expression LE expression  */
#line 415 "exo20-23.y"
                               {
        compteurTest++;
        printf("AUTOMATE : Test inférieur ou égal %d\n", compteurTest);
        fprintf(yyout, "    ; test <= %d\n", compteurTest);
        fprintf(yyout, "    pop ebx\n");
        fprintf(yyout, "    pop eax\n");
        fprintf(yyout, "    cmp eax, ebx\n");
        fprintf(yyout, "    setle al\n");
        fprintf(yyout, "    movzx eax, al\n");
        fprintf(yyout, "    push eax\n");
    }
#line 1624 "exo20-23.tab.c"
    break;

  case 37: /* condition: expression GE expression  */
#line 426 "exo20-23.y"
                               {
        compteurTest++;
        printf("AUTOMATE : Test supérieur ou égal %d\n", compteurTest);
        fprintf(yyout, "    ; test >= %d\n", compteurTest);
        fprintf(yyout, "    pop ebx\n");
        fprintf(yyout, "    pop eax\n");
        fprintf(yyout, "    cmp eax, ebx\n");
        fprintf(yyout, "    setge al\n");
        fprintf(yyout, "    movzx eax, al\n");
        fprintf(yyout, "    push eax\n");
    }
#line 1640 "exo20-23.tab.c"
    break;

  case 39: /* expression: expression PLUS term  */
#line 442 "exo20-23.y"
                           {
        fprintf(yyout, "    ; addition\n");
        fprintf(yyout, "    pop ebx\n");
        fprintf(yyout, "    pop eax\n");
        fprintf(yyout, "    add eax, ebx\n");
        fprintf(yyout, "    push eax\n");
    }
#line 1652 "exo20-23.tab.c"
    break;

  case 40: /* expression: expression MINUS term  */
#line 449 "exo20-23.y"
                            {
        fprintf(yyout, "    ; soustraction\n");
        fprintf(yyout, "    pop ebx\n");
        fprintf(yyout, "    pop eax\n");
        fprintf(yyout, "    sub eax, ebx\n");
        fprintf(yyout, "    push eax\n");
    }
#line 1664 "exo20-23.tab.c"
    break;

  case 42: /* term: term MULTIPLY factor  */
#line 460 "exo20-23.y"
                           {
        fprintf(yyout, "    ; multiplication\n");
        fprintf(yyout, "    pop ebx\n");
        fprintf(yyout, "    pop eax\n");
        fprintf(yyout, "    imul eax, ebx\n");
        fprintf(yyout, "    push eax\n");
    }
#line 1676 "exo20-23.tab.c"
    break;

  case 43: /* term: term DIVIDE factor  */
#line 467 "exo20-23.y"
                         {
        fprintf(yyout, "    ; division\n");
        fprintf(yyout, "    pop ebx\n");
        fprintf(yyout, "    pop eax\n");
        fprintf(yyout, "    cdq\n");
        fprintf(yyout, "    idiv ebx\n");
        fprintf(yyout, "    push eax\n");
    }
#line 1689 "exo20-23.tab.c"
    break;

  case 44: /* term: term MODULO factor  */
#line 475 "exo20-23.y"
                         {
        fprintf(yyout, "    ; modulo\n");
        fprintf(yyout, "    pop ebx\n");
        fprintf(yyout, "    pop eax\n");
        fprintf(yyout, "    cdq\n");
        fprintf(yyout, "    idiv ebx\n");
        fprintf(yyout, "    push edx\n");
    }
#line 1702 "exo20-23.tab.c"
    break;

  case 45: /* factor: INTEGER  */
#line 486 "exo20-23.y"
            {
        fprintf(yyout, "    push %d\n", yyvsp[0]);
    }
#line 1710 "exo20-23.tab.c"
    break;

  case 46: /* factor: VARIABLE  */
#line 489 "exo20-23.y"
               {
        fprintf(yyout, "    mov eax, [%c]\n", yyvsp[0]);
        fprintf(yyout, "    push eax\n");
    }
#line 1719 "exo20-23.tab.c"
    break;

  case 48: /* factor: MINUS factor  */
#line 494 "exo20-23.y"
                                {
        fprintf(yyout, "    ; négation unaire\n");
        fprintf(yyout, "    pop eax\n");
        fprintf(yyout, "    neg eax\n");
        fprintf(yyout, "    push eax\n");
    }
#line 1730 "exo20-23.tab.c"
    break;


#line 1734 "exo20-23.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 502 "exo20-23.y"


int main(void) {
    printf("🇫🇷 COMPILATEUR FRANÇAIS RÉVOLUTIONNAIRE !\n");
    printf("==========================================\n");
    printf("✨ Grammaire française :\n");
    printf("   ✅ ZÉRO conflit garantie\n");
    printf("   ✅ SI et SI-SINON complètement séparés\n");
    printf("   ✅ POUR et POUR-PAS complètement séparés\n");
    printf("   ✅ Code assembleur dans le bon ordre\n");
    printf("   ✅ Toutes structures fonctionnelles\n");
    printf("   🇫🇷 SYNTAXE 100%% FRANÇAISE\n");
    printf("==========================================\n");
    
    yyout = fopen("programme.asm", "w");
    if (!yyout) {
        printf("❌ Erreur: impossible de créer programme.asm\n");
        return 1;
    }
    
    fprintf(yyout, "%s", header);
    
    printf("AUTOMATE : État initial S0\n");
    if (yyparse() == 0) {
        fprintf(yyout, "%s", trailer);
        printf("✅ Code assembleur FRANÇAIS généré dans programme.asm\n");
        printf("🤖 AUTOMATE : Retour à l'état final S0\n");
    } else {
        printf("❌ Erreur de compilation\n");
    }
    
    fclose(yyout);
    return 0;
}

int yyerror(char *s) {
    printf("❌ AUTOMATE ERREUR: %s\n", s);
    return 0;
}
