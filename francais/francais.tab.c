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
#line 1 "francais.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int yylex();
extern int yyparse();
extern FILE *yyin;
extern int ligne;

void yyerror(const char *s);

FILE *fichier_sortie;
int niveau_indentation = 0;
int current_case_value;

void indenter() {
    for(int i = 0; i < niveau_indentation; i++) {
        fprintf(fichier_sortie, "    ");
    }
}

void generer_en_tete() {
    fprintf(fichier_sortie, "#include <stdio.h>\n");
    fprintf(fichier_sortie, "#include <stdlib.h>\n");
    fprintf(fichier_sortie, "#include <string.h>\n\n");
}

void generer_main_debut() {
    fprintf(fichier_sortie, "int main() {\n");
    niveau_indentation++;
}

void generer_main_fin() {
    niveau_indentation--;
    indenter();
    fprintf(fichier_sortie, "return 0;\n");
    fprintf(fichier_sortie, "}\n");
}

#line 112 "francais.tab.c"

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

#include "francais.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ENTIER = 3,                     /* ENTIER  */
  YYSYMBOL_REEL = 4,                       /* REEL  */
  YYSYMBOL_CHAINE = 5,                     /* CHAINE  */
  YYSYMBOL_VARIABLE = 6,                   /* VARIABLE  */
  YYSYMBOL_SI = 7,                         /* SI  */
  YYSYMBOL_ALORS = 8,                      /* ALORS  */
  YYSYMBOL_SINON = 9,                      /* SINON  */
  YYSYMBOL_FINSI = 10,                     /* FINSI  */
  YYSYMBOL_TANT_QUE = 11,                  /* TANT_QUE  */
  YYSYMBOL_FAIRE = 12,                     /* FAIRE  */
  YYSYMBOL_FINTANTQUE = 13,                /* FINTANTQUE  */
  YYSYMBOL_POUR = 14,                      /* POUR  */
  YYSYMBOL_A = 15,                         /* A  */
  YYSYMBOL_FINPOUR = 16,                   /* FINPOUR  */
  YYSYMBOL_PAS = 17,                       /* PAS  */
  YYSYMBOL_LIRE = 18,                      /* LIRE  */
  YYSYMBOL_AFFICHER = 19,                  /* AFFICHER  */
  YYSYMBOL_TYPE_ENTIER = 20,               /* TYPE_ENTIER  */
  YYSYMBOL_TYPE_REEL = 21,                 /* TYPE_REEL  */
  YYSYMBOL_TYPE_CHAINE = 22,               /* TYPE_CHAINE  */
  YYSYMBOL_PROGRAMME = 23,                 /* PROGRAMME  */
  YYSYMBOL_FINPROGRAMME = 24,              /* FINPROGRAMME  */
  YYSYMBOL_FONCTION = 25,                  /* FONCTION  */
  YYSYMBOL_RETOURNER = 26,                 /* RETOURNER  */
  YYSYMBOL_REPETER_JUSQUA = 27,            /* REPETER_JUSQUA  */
  YYSYMBOL_FIN_REPETER = 28,               /* FIN_REPETER  */
  YYSYMBOL_SWITCH = 29,                    /* SWITCH  */
  YYSYMBOL_CASE = 30,                      /* CASE  */
  YYSYMBOL_DEFAULT = 31,                   /* DEFAULT  */
  YYSYMBOL_BREAK = 32,                     /* BREAK  */
  YYSYMBOL_PLUS = 33,                      /* PLUS  */
  YYSYMBOL_MOINS = 34,                     /* MOINS  */
  YYSYMBOL_MULT = 35,                      /* MULT  */
  YYSYMBOL_DIV = 36,                       /* DIV  */
  YYSYMBOL_MODULO = 37,                    /* MODULO  */
  YYSYMBOL_AFFECTATION = 38,               /* AFFECTATION  */
  YYSYMBOL_EGAL = 39,                      /* EGAL  */
  YYSYMBOL_DIFFERENT = 40,                 /* DIFFERENT  */
  YYSYMBOL_INFERIEUR = 41,                 /* INFERIEUR  */
  YYSYMBOL_SUPERIEUR = 42,                 /* SUPERIEUR  */
  YYSYMBOL_INFERIEUR_EGAL = 43,            /* INFERIEUR_EGAL  */
  YYSYMBOL_SUPERIEUR_EGAL = 44,            /* SUPERIEUR_EGAL  */
  YYSYMBOL_ET = 45,                        /* ET  */
  YYSYMBOL_OU = 46,                        /* OU  */
  YYSYMBOL_NON = 47,                       /* NON  */
  YYSYMBOL_48_ = 48,                       /* ';'  */
  YYSYMBOL_49_ = 49,                       /* '{'  */
  YYSYMBOL_50_ = 50,                       /* '}'  */
  YYSYMBOL_51_ = 51,                       /* '('  */
  YYSYMBOL_52_ = 52,                       /* ')'  */
  YYSYMBOL_53_ = 53,                       /* ':'  */
  YYSYMBOL_YYACCEPT = 54,                  /* $accept  */
  YYSYMBOL_programme = 55,                 /* programme  */
  YYSYMBOL_liste_instructions = 56,        /* liste_instructions  */
  YYSYMBOL_instruction = 57,               /* instruction  */
  YYSYMBOL_bloc_instructions = 58,         /* bloc_instructions  */
  YYSYMBOL_59_1 = 59,                      /* $@1  */
  YYSYMBOL_declaration = 60,               /* declaration  */
  YYSYMBOL_type_variable = 61,             /* type_variable  */
  YYSYMBOL_affectation = 62,               /* affectation  */
  YYSYMBOL_lecture = 63,                   /* lecture  */
  YYSYMBOL_affichage = 64,                 /* affichage  */
  YYSYMBOL_condition_si = 65,              /* condition_si  */
  YYSYMBOL_66_2 = 66,                      /* $@2  */
  YYSYMBOL_sinon_optionnel = 67,           /* sinon_optionnel  */
  YYSYMBOL_68_3 = 68,                      /* $@3  */
  YYSYMBOL_boucle_tant_que = 69,           /* boucle_tant_que  */
  YYSYMBOL_70_4 = 70,                      /* $@4  */
  YYSYMBOL_boucle_pour = 71,               /* boucle_pour  */
  YYSYMBOL_72_5 = 72,                      /* $@5  */
  YYSYMBOL_boucle_repeter_jusqua = 73,     /* boucle_repeter_jusqua  */
  YYSYMBOL_74_6 = 74,                      /* $@6  */
  YYSYMBOL_switch_case = 75,               /* switch_case  */
  YYSYMBOL_76_7 = 76,                      /* $@7  */
  YYSYMBOL_liste_cases = 77,               /* liste_cases  */
  YYSYMBOL_case = 78,                      /* case  */
  YYSYMBOL_79_8 = 79,                      /* $@8  */
  YYSYMBOL_80_9 = 80,                      /* $@9  */
  YYSYMBOL_break_optionnel = 81,           /* break_optionnel  */
  YYSYMBOL_default_optionnel = 82,         /* default_optionnel  */
  YYSYMBOL_83_10 = 83,                     /* $@10  */
  YYSYMBOL_84_11 = 84,                     /* $@11  */
  YYSYMBOL_condition = 85,                 /* condition  */
  YYSYMBOL_expression = 86                 /* expression  */
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
#define YYFINAL  47
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   334

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  70
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  140

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   302


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
      51,    52,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    53,    48,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    49,     2,    50,     2,     2,     2,     2,
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
      45,    46,    47
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    75,    75,    78,    84,    85,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,   102,   102,   115,   121,
     131,   132,   133,   137,   146,   154,   159,   167,   167,   183,
     184,   184,   194,   194,   209,   209,   227,   227,   242,   242,
     258,   259,   263,   269,   263,   275,   277,   283,   285,   290,
     285,   297,   304,   311,   318,   325,   332,   339,   346,   353,
     359,   368,   373,   378,   381,   388,   395,   402,   409,   416,
     422
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
  "\"end of file\"", "error", "\"invalid token\"", "ENTIER", "REEL",
  "CHAINE", "VARIABLE", "SI", "ALORS", "SINON", "FINSI", "TANT_QUE",
  "FAIRE", "FINTANTQUE", "POUR", "A", "FINPOUR", "PAS", "LIRE", "AFFICHER",
  "TYPE_ENTIER", "TYPE_REEL", "TYPE_CHAINE", "PROGRAMME", "FINPROGRAMME",
  "FONCTION", "RETOURNER", "REPETER_JUSQUA", "FIN_REPETER", "SWITCH",
  "CASE", "DEFAULT", "BREAK", "PLUS", "MOINS", "MULT", "DIV", "MODULO",
  "AFFECTATION", "EGAL", "DIFFERENT", "INFERIEUR", "SUPERIEUR",
  "INFERIEUR_EGAL", "SUPERIEUR_EGAL", "ET", "OU", "NON", "';'", "'{'",
  "'}'", "'('", "')'", "':'", "$accept", "programme", "liste_instructions",
  "instruction", "bloc_instructions", "$@1", "declaration",
  "type_variable", "affectation", "lecture", "affichage", "condition_si",
  "$@2", "sinon_optionnel", "$@3", "boucle_tant_que", "$@4", "boucle_pour",
  "$@5", "boucle_repeter_jusqua", "$@6", "switch_case", "$@7",
  "liste_cases", "case", "$@8", "$@9", "break_optionnel",
  "default_optionnel", "$@10", "$@11", "condition", "expression", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-33)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     133,   -32,     1,     1,     7,    10,     5,   -33,   -33,   -33,
     256,   -33,   -13,   -33,    47,   256,   -33,   -33,     3,    52,
      13,    16,    23,   -33,   -33,   -33,   -33,   -33,    11,   -33,
     -33,   -33,    11,     1,     1,     4,   282,     9,    57,   -33,
     -33,    11,   297,   157,   256,    11,   256,   -33,   -33,   -33,
      50,   -33,   -33,   -33,   297,     6,   -33,   -15,   257,   -33,
       1,     1,    11,    11,    11,    11,    11,    11,    11,    11,
      11,    11,    11,   -33,    11,    33,   -33,   181,   277,   116,
      11,   -33,   -33,   256,   -33,    46,     6,     6,   -33,   -33,
     -33,   297,   297,   297,   297,   297,   297,   256,    79,     1,
      44,   -33,   297,   205,   222,    11,   -26,   -33,   -33,    85,
     -33,    -9,    66,   256,   -33,   -33,    94,    -8,   -33,   256,
     256,    48,    49,   -33,    54,   239,   -33,   -33,   -33,   -33,
     256,   256,   256,   256,    67,    67,    58,   -33,   -33,   -33
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,    20,    21,    22,
       0,    36,     0,    16,     0,     3,     4,    15,     0,     0,
       0,     0,     0,    10,    11,    12,    13,    14,     0,    61,
      62,    63,     0,     0,     0,     0,     0,     0,     0,    24,
      26,     0,    25,     0,     0,     0,     0,     1,     5,     6,
      18,     7,     8,     9,    23,    69,    59,     0,     0,    27,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    32,     0,     0,     2,     0,     0,     0,
       0,    60,    70,     0,    57,    58,    64,    65,    66,    67,
      68,    51,    52,    53,    54,    55,    56,     0,     0,     0,
       0,    17,    19,    29,     0,     0,    37,    38,    30,     0,
      33,     0,     0,     0,    28,    34,     0,    47,    40,    31,
       0,     0,     0,    41,     0,     0,    42,    48,    39,    35,
       0,     0,    43,    49,    45,    45,     0,    44,    50,    46
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -33,   -33,   -10,   -14,   -33,   -33,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,   -33,   -17,   -33,   -33,   -28,   -33,   -33,
     -33,    -1,    12
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    14,    15,    16,    17,    46,    18,    19,    20,    21,
      22,    23,    83,   109,   113,    24,    97,    25,   120,    26,
      44,    27,   112,   117,   118,   130,   134,   137,   124,   131,
     135,    35,    36
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      43,    48,    37,   115,    29,    30,    28,    31,    29,    30,
      40,    31,    59,    38,    29,    30,    39,    31,    42,    60,
      61,    73,   116,   122,    62,    63,    64,    65,    66,    48,
      60,    61,    56,    57,    77,    32,    79,    81,    45,    32,
      54,    64,    65,    66,    55,    32,    58,    47,    33,    60,
      61,    49,    34,    75,    60,    61,    41,    78,    50,    84,
      85,    51,    41,    48,    52,    48,    62,    63,    64,    65,
      66,    53,    74,   103,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    82,    98,   104,    80,    48,
      48,    60,   102,   107,   105,   114,   116,   121,   106,   136,
     123,   126,   127,   119,   128,    48,   139,   138,     0,     0,
     125,    48,    62,    63,    64,    65,    66,   111,    48,    48,
     132,   133,     1,     2,     0,     0,     0,     3,     0,     0,
       4,     0,     0,     0,     5,     6,     7,     8,     9,     1,
       2,     0,     0,    11,     3,    12,     0,     4,     0,     0,
       0,     5,     6,     7,     8,     9,    10,     0,     0,     0,
      11,     0,    12,     1,     2,    13,   101,     0,     3,     0,
       0,     4,     0,     0,     0,     5,     6,     7,     8,     9,
       0,    76,    13,     0,    11,     0,    12,     1,     2,     0,
       0,     0,     3,     0,     0,     4,     0,     0,     0,     5,
       6,     7,     8,     9,     0,     0,    13,     0,    11,    99,
      12,     1,     2,     0,   108,     0,     3,     0,     0,     4,
       0,     0,     0,     5,     6,     7,     8,     9,     1,     2,
      13,     0,    11,     3,    12,   110,     4,     0,     0,     0,
       5,     6,     7,     8,     9,     1,     2,     0,     0,    11,
       3,    12,     0,     4,    13,   129,     0,     5,     6,     7,
       8,     9,     1,     2,     0,     0,    11,     3,    12,     0,
       4,    13,     0,     0,     5,     6,     7,     8,     9,     0,
       0,     0,     0,    11,     0,    12,     0,     0,    13,     0,
      62,    63,    64,    65,    66,     0,    67,    68,    69,    70,
      71,    72,     0,     0,     0,    13,     0,     0,     0,    82,
      62,    63,    64,    65,    66,    62,    63,    64,    65,    66,
       0,    67,    68,    69,    70,    71,    72,     0,     0,   100,
      62,    63,    64,    65,    66
};

static const yytype_int16 yycheck[] =
{
      10,    15,     3,    12,     3,     4,    38,     6,     3,     4,
       5,     6,     8,     6,     3,     4,     6,     6,     6,    45,
      46,    12,    30,    31,    33,    34,    35,    36,    37,    43,
      45,    46,    33,    34,    44,    34,    46,    52,    51,    34,
      28,    35,    36,    37,    32,    34,    34,     0,    47,    45,
      46,    48,    51,    41,    45,    46,    51,    45,     6,    60,
      61,    48,    51,    77,    48,    79,    33,    34,    35,    36,
      37,    48,    15,    83,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    52,    74,    97,    38,   103,
     104,    45,    80,    49,    15,    10,    30,     3,    99,    32,
     117,    53,    53,   113,    50,   119,    48,   135,    -1,    -1,
     120,   125,    33,    34,    35,    36,    37,   105,   132,   133,
     130,   131,     6,     7,    -1,    -1,    -1,    11,    -1,    -1,
      14,    -1,    -1,    -1,    18,    19,    20,    21,    22,     6,
       7,    -1,    -1,    27,    11,    29,    -1,    14,    -1,    -1,
      -1,    18,    19,    20,    21,    22,    23,    -1,    -1,    -1,
      27,    -1,    29,     6,     7,    49,    50,    -1,    11,    -1,
      -1,    14,    -1,    -1,    -1,    18,    19,    20,    21,    22,
      -1,    24,    49,    -1,    27,    -1,    29,     6,     7,    -1,
      -1,    -1,    11,    -1,    -1,    14,    -1,    -1,    -1,    18,
      19,    20,    21,    22,    -1,    -1,    49,    -1,    27,    28,
      29,     6,     7,    -1,     9,    -1,    11,    -1,    -1,    14,
      -1,    -1,    -1,    18,    19,    20,    21,    22,     6,     7,
      49,    -1,    27,    11,    29,    13,    14,    -1,    -1,    -1,
      18,    19,    20,    21,    22,     6,     7,    -1,    -1,    27,
      11,    29,    -1,    14,    49,    16,    -1,    18,    19,    20,
      21,    22,     6,     7,    -1,    -1,    27,    11,    29,    -1,
      14,    49,    -1,    -1,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    27,    -1,    29,    -1,    -1,    49,    -1,
      33,    34,    35,    36,    37,    -1,    39,    40,    41,    42,
      43,    44,    -1,    -1,    -1,    49,    -1,    -1,    -1,    52,
      33,    34,    35,    36,    37,    33,    34,    35,    36,    37,
      -1,    39,    40,    41,    42,    43,    44,    -1,    -1,    52,
      33,    34,    35,    36,    37
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     6,     7,    11,    14,    18,    19,    20,    21,    22,
      23,    27,    29,    49,    55,    56,    57,    58,    60,    61,
      62,    63,    64,    65,    69,    71,    73,    75,    38,     3,
       4,     6,    34,    47,    51,    85,    86,    85,     6,     6,
       5,    51,    86,    56,    74,    51,    59,     0,    57,    48,
       6,    48,    48,    48,    86,    86,    85,    85,    86,     8,
      45,    46,    33,    34,    35,    36,    37,    39,    40,    41,
      42,    43,    44,    12,    15,    86,    24,    56,    86,    56,
      38,    52,    52,    66,    85,    85,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    70,    86,    28,
      52,    50,    86,    56,    56,    15,    85,    49,     9,    67,
      13,    86,    76,    68,    10,    12,    30,    77,    78,    56,
      72,     3,    31,    78,    82,    56,    53,    53,    50,    16,
      79,    83,    56,    56,    80,    84,    32,    81,    81,    48
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    54,    55,    55,    56,    56,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    59,    58,    60,    60,
      61,    61,    61,    62,    63,    64,    64,    66,    65,    67,
      68,    67,    70,    69,    72,    71,    74,    73,    76,    75,
      77,    77,    79,    80,    78,    81,    81,    82,    83,    84,
      82,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    86,    86,    86,    86,    86,    86,    86,    86,    86,
      86
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     1,     1,     2,     2,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     0,     4,     2,     4,
       1,     1,     1,     3,     2,     2,     2,     0,     7,     0,
       0,     3,     0,     6,     0,    10,     0,     5,     0,     9,
       1,     2,     0,     0,     7,     0,     2,     0,     0,     0,
       6,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       3,     1,     1,     1,     3,     3,     3,     3,     3,     2,
       3
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
  case 2: /* programme: PROGRAMME liste_instructions FINPROGRAMME  */
#line 75 "francais.y"
                                              {
        printf("Compilation terminée avec succès !\n");
    }
#line 1323 "francais.tab.c"
    break;

  case 3: /* programme: liste_instructions  */
#line 78 "francais.y"
                         {
        printf("Compilation terminée avec succès !\n");
    }
#line 1331 "francais.tab.c"
    break;

  case 16: /* $@1: %empty  */
#line 102 "francais.y"
        {
        fprintf(fichier_sortie, "{\n");
        niveau_indentation++;
    }
#line 1340 "francais.tab.c"
    break;

  case 17: /* bloc_instructions: '{' $@1 liste_instructions '}'  */
#line 107 "francais.y"
        {
        niveau_indentation--;
        indenter();
        fprintf(fichier_sortie, "}\n");
    }
#line 1350 "francais.tab.c"
    break;

  case 18: /* declaration: type_variable VARIABLE  */
#line 115 "francais.y"
                           {
        indenter();
        fprintf(fichier_sortie, "%s %s;\n", (yyvsp[-1].chaine), (yyvsp[0].chaine));
        free((yyvsp[-1].chaine));
        free((yyvsp[0].chaine));
    }
#line 1361 "francais.tab.c"
    break;

  case 19: /* declaration: type_variable VARIABLE AFFECTATION expression  */
#line 121 "francais.y"
                                                    {
        indenter();
        fprintf(fichier_sortie, "%s %s = %s;\n", (yyvsp[-3].chaine), (yyvsp[-2].chaine), (yyvsp[0].chaine));
        free((yyvsp[-3].chaine));
        free((yyvsp[-2].chaine));
        free((yyvsp[0].chaine));
    }
#line 1373 "francais.tab.c"
    break;

  case 20: /* type_variable: TYPE_ENTIER  */
#line 131 "francais.y"
                { (yyval.chaine) = strdup("int"); }
#line 1379 "francais.tab.c"
    break;

  case 21: /* type_variable: TYPE_REEL  */
#line 132 "francais.y"
                { (yyval.chaine) = strdup("double"); }
#line 1385 "francais.tab.c"
    break;

  case 22: /* type_variable: TYPE_CHAINE  */
#line 133 "francais.y"
                  { (yyval.chaine) = strdup("char*"); }
#line 1391 "francais.tab.c"
    break;

  case 23: /* affectation: VARIABLE AFFECTATION expression  */
#line 137 "francais.y"
                                    {
        indenter();
        fprintf(fichier_sortie, "%s = %s;\n", (yyvsp[-2].chaine), (yyvsp[0].chaine));
        free((yyvsp[-2].chaine));
        free((yyvsp[0].chaine));
    }
#line 1402 "francais.tab.c"
    break;

  case 24: /* lecture: LIRE VARIABLE  */
#line 146 "francais.y"
                  {
        indenter();
        fprintf(fichier_sortie, "scanf(\"%%d\", &%s);\n", (yyvsp[0].chaine));
        free((yyvsp[0].chaine));
    }
#line 1412 "francais.tab.c"
    break;

  case 25: /* affichage: AFFICHER expression  */
#line 154 "francais.y"
                        {
        indenter();
        fprintf(fichier_sortie, "printf(\"%%d\\n\", %s);\n", (yyvsp[0].chaine));
        free((yyvsp[0].chaine));
    }
#line 1422 "francais.tab.c"
    break;

  case 26: /* affichage: AFFICHER CHAINE  */
#line 159 "francais.y"
                      {
        indenter();
        fprintf(fichier_sortie, "printf(%s);\n", (yyvsp[0].chaine));
        free((yyvsp[0].chaine));
    }
#line 1432 "francais.tab.c"
    break;

  case 27: /* $@2: %empty  */
#line 167 "francais.y"
                       {
        indenter();
        fprintf(fichier_sortie, "if (%s) {\n", (yyvsp[-1].chaine));
        niveau_indentation++;
        free((yyvsp[-1].chaine));
    }
#line 1443 "francais.tab.c"
    break;

  case 28: /* condition_si: SI condition ALORS $@2 liste_instructions sinon_optionnel FINSI  */
#line 175 "francais.y"
          {
        niveau_indentation--;
        indenter();
        fprintf(fichier_sortie, "}\n");
    }
#line 1453 "francais.tab.c"
    break;

  case 29: /* sinon_optionnel: %empty  */
#line 183 "francais.y"
               { /* rien à faire */ }
#line 1459 "francais.tab.c"
    break;

  case 30: /* $@3: %empty  */
#line 184 "francais.y"
            {
        niveau_indentation--;
        indenter();
        fprintf(fichier_sortie, "} else {\n");
        niveau_indentation++;
    }
#line 1470 "francais.tab.c"
    break;

  case 32: /* $@4: %empty  */
#line 194 "francais.y"
                             {
        indenter();
        fprintf(fichier_sortie, "while (%s) {\n", (yyvsp[-1].chaine));
        niveau_indentation++;
        free((yyvsp[-1].chaine));
    }
#line 1481 "francais.tab.c"
    break;

  case 33: /* boucle_tant_que: TANT_QUE condition FAIRE $@4 liste_instructions FINTANTQUE  */
#line 201 "francais.y"
               {
        niveau_indentation--;
        indenter();
        fprintf(fichier_sortie, "}\n");
    }
#line 1491 "francais.tab.c"
    break;

  case 34: /* $@5: %empty  */
#line 209 "francais.y"
                                                  {
        indenter();
        fprintf(fichier_sortie, "for (%s = %s; %s <= %s; %s++) {\n", 
                (yyvsp[-5].chaine), (yyvsp[-3].chaine), (yyvsp[-5].chaine), (yyvsp[-1].chaine), (yyvsp[-5].chaine));
        niveau_indentation++;
        free((yyvsp[-5].chaine));
        free((yyvsp[-3].chaine));
        free((yyvsp[-1].chaine));
    }
#line 1505 "francais.tab.c"
    break;

  case 35: /* boucle_pour: POUR VARIABLE A expression A expression FAIRE $@5 liste_instructions FINPOUR  */
#line 219 "francais.y"
            {
        niveau_indentation--;
        indenter();
        fprintf(fichier_sortie, "}\n");
    }
#line 1515 "francais.tab.c"
    break;

  case 36: /* $@6: %empty  */
#line 227 "francais.y"
                   {
        indenter();
        fprintf(fichier_sortie, "do {\n");
        niveau_indentation++;
    }
#line 1525 "francais.tab.c"
    break;

  case 37: /* boucle_repeter_jusqua: REPETER_JUSQUA $@6 liste_instructions FIN_REPETER condition  */
#line 233 "francais.y"
                          {
        niveau_indentation--;
        indenter();
        fprintf(fichier_sortie, "} while (!(%s));\n", (yyvsp[0].chaine));
        free((yyvsp[0].chaine));
    }
#line 1536 "francais.tab.c"
    break;

  case 38: /* $@7: %empty  */
#line 242 "francais.y"
                                  {
        indenter();
        fprintf(fichier_sortie, "switch (%s) {\n", (yyvsp[-2].chaine));
        niveau_indentation++;
        free((yyvsp[-2].chaine));
    }
#line 1547 "francais.tab.c"
    break;

  case 39: /* switch_case: SWITCH '(' expression ')' '{' $@7 liste_cases default_optionnel '}'  */
#line 250 "francais.y"
        {
        niveau_indentation--;
        indenter();
        fprintf(fichier_sortie, "}\n");
    }
#line 1557 "francais.tab.c"
    break;

  case 42: /* $@8: %empty  */
#line 263 "francais.y"
                    {
        current_case_value = (yyvsp[-1].entier);
        indenter();
        fprintf(fichier_sortie, "case %d:\n", current_case_value);
        niveau_indentation++;
    }
#line 1568 "francais.tab.c"
    break;

  case 43: /* $@9: %empty  */
#line 269 "francais.y"
                       {
        niveau_indentation--;
    }
#line 1576 "francais.tab.c"
    break;

  case 46: /* break_optionnel: BREAK ';'  */
#line 277 "francais.y"
                {
        indenter();
        fprintf(fichier_sortie, "break;\n");
    }
#line 1585 "francais.tab.c"
    break;

  case 48: /* $@10: %empty  */
#line 285 "francais.y"
                  {
        indenter();
        fprintf(fichier_sortie, "default:\n");
        niveau_indentation++;
    }
#line 1595 "francais.tab.c"
    break;

  case 49: /* $@11: %empty  */
#line 290 "francais.y"
                       {
        niveau_indentation--;
    }
#line 1603 "francais.tab.c"
    break;

  case 51: /* condition: expression EGAL expression  */
#line 297 "francais.y"
                               {
        char *result = malloc(strlen((yyvsp[-2].chaine)) + strlen((yyvsp[0].chaine)) + 10);
        sprintf(result, "%s == %s", (yyvsp[-2].chaine), (yyvsp[0].chaine));
        free((yyvsp[-2].chaine));
        free((yyvsp[0].chaine));
        (yyval.chaine) = result;
    }
#line 1615 "francais.tab.c"
    break;

  case 52: /* condition: expression DIFFERENT expression  */
#line 304 "francais.y"
                                      {
        char *result = malloc(strlen((yyvsp[-2].chaine)) + strlen((yyvsp[0].chaine)) + 10);
        sprintf(result, "%s != %s", (yyvsp[-2].chaine), (yyvsp[0].chaine));
        free((yyvsp[-2].chaine));
        free((yyvsp[0].chaine));
        (yyval.chaine) = result;
    }
#line 1627 "francais.tab.c"
    break;

  case 53: /* condition: expression INFERIEUR expression  */
#line 311 "francais.y"
                                      {
        char *result = malloc(strlen((yyvsp[-2].chaine)) + strlen((yyvsp[0].chaine)) + 10);
        sprintf(result, "%s < %s", (yyvsp[-2].chaine), (yyvsp[0].chaine));
        free((yyvsp[-2].chaine));
        free((yyvsp[0].chaine));
        (yyval.chaine) = result;
    }
#line 1639 "francais.tab.c"
    break;

  case 54: /* condition: expression SUPERIEUR expression  */
#line 318 "francais.y"
                                      {
        char *result = malloc(strlen((yyvsp[-2].chaine)) + strlen((yyvsp[0].chaine)) + 10);
        sprintf(result, "%s > %s", (yyvsp[-2].chaine), (yyvsp[0].chaine));
        free((yyvsp[-2].chaine));
        free((yyvsp[0].chaine));
        (yyval.chaine) = result;
    }
#line 1651 "francais.tab.c"
    break;

  case 55: /* condition: expression INFERIEUR_EGAL expression  */
#line 325 "francais.y"
                                           {
        char *result = malloc(strlen((yyvsp[-2].chaine)) + strlen((yyvsp[0].chaine)) + 10);
        sprintf(result, "%s <= %s", (yyvsp[-2].chaine), (yyvsp[0].chaine));
        free((yyvsp[-2].chaine));
        free((yyvsp[0].chaine));
        (yyval.chaine) = result;
    }
#line 1663 "francais.tab.c"
    break;

  case 56: /* condition: expression SUPERIEUR_EGAL expression  */
#line 332 "francais.y"
                                           {
        char *result = malloc(strlen((yyvsp[-2].chaine)) + strlen((yyvsp[0].chaine)) + 10);
        sprintf(result, "%s >= %s", (yyvsp[-2].chaine), (yyvsp[0].chaine));
        free((yyvsp[-2].chaine));
        free((yyvsp[0].chaine));
        (yyval.chaine) = result;
    }
#line 1675 "francais.tab.c"
    break;

  case 57: /* condition: condition ET condition  */
#line 339 "francais.y"
                             {
        char *result = malloc(strlen((yyvsp[-2].chaine)) + strlen((yyvsp[0].chaine)) + 10);
        sprintf(result, "%s && %s", (yyvsp[-2].chaine), (yyvsp[0].chaine));
        free((yyvsp[-2].chaine));
        free((yyvsp[0].chaine));
        (yyval.chaine) = result;
    }
#line 1687 "francais.tab.c"
    break;

  case 58: /* condition: condition OU condition  */
#line 346 "francais.y"
                             {
        char *result = malloc(strlen((yyvsp[-2].chaine)) + strlen((yyvsp[0].chaine)) + 10);
        sprintf(result, "%s || %s", (yyvsp[-2].chaine), (yyvsp[0].chaine));
        free((yyvsp[-2].chaine));
        free((yyvsp[0].chaine));
        (yyval.chaine) = result;
    }
#line 1699 "francais.tab.c"
    break;

  case 59: /* condition: NON condition  */
#line 353 "francais.y"
                    {
        char *result = malloc(strlen((yyvsp[0].chaine)) + 10);
        sprintf(result, "!(%s)", (yyvsp[0].chaine));
        free((yyvsp[0].chaine));
        (yyval.chaine) = result;
    }
#line 1710 "francais.tab.c"
    break;

  case 60: /* condition: '(' condition ')'  */
#line 359 "francais.y"
                        {
        char *result = malloc(strlen((yyvsp[-1].chaine)) + 10);
        sprintf(result, "(%s)", (yyvsp[-1].chaine));
        free((yyvsp[-1].chaine));
        (yyval.chaine) = result;
    }
#line 1721 "francais.tab.c"
    break;

  case 61: /* expression: ENTIER  */
#line 368 "francais.y"
           {
        char *result = malloc(20);
        sprintf(result, "%d", (yyvsp[0].entier));
        (yyval.chaine) = result;
    }
#line 1731 "francais.tab.c"
    break;

  case 62: /* expression: REEL  */
#line 373 "francais.y"
           {
        char *result = malloc(30);
        sprintf(result, "%.6f", (yyvsp[0].reel));
        (yyval.chaine) = result;
    }
#line 1741 "francais.tab.c"
    break;

  case 63: /* expression: VARIABLE  */
#line 378 "francais.y"
               {
        (yyval.chaine) = (yyvsp[0].chaine);
    }
#line 1749 "francais.tab.c"
    break;

  case 64: /* expression: expression PLUS expression  */
#line 381 "francais.y"
                                 {
        char *result = malloc(strlen((yyvsp[-2].chaine)) + strlen((yyvsp[0].chaine)) + 10);
        sprintf(result, "%s + %s", (yyvsp[-2].chaine), (yyvsp[0].chaine));
        free((yyvsp[-2].chaine));
        free((yyvsp[0].chaine));
        (yyval.chaine) = result;
    }
#line 1761 "francais.tab.c"
    break;

  case 65: /* expression: expression MOINS expression  */
#line 388 "francais.y"
                                  {
        char *result = malloc(strlen((yyvsp[-2].chaine)) + strlen((yyvsp[0].chaine)) + 10);
        sprintf(result, "%s - %s", (yyvsp[-2].chaine), (yyvsp[0].chaine));
        free((yyvsp[-2].chaine));
        free((yyvsp[0].chaine));
        (yyval.chaine) = result;
    }
#line 1773 "francais.tab.c"
    break;

  case 66: /* expression: expression MULT expression  */
#line 395 "francais.y"
                                 {
        char *result = malloc(strlen((yyvsp[-2].chaine)) + strlen((yyvsp[0].chaine)) + 10);
        sprintf(result, "%s * %s", (yyvsp[-2].chaine), (yyvsp[0].chaine));
        free((yyvsp[-2].chaine));
        free((yyvsp[0].chaine));
        (yyval.chaine) = result;
    }
#line 1785 "francais.tab.c"
    break;

  case 67: /* expression: expression DIV expression  */
#line 402 "francais.y"
                                {
        char *result = malloc(strlen((yyvsp[-2].chaine)) + strlen((yyvsp[0].chaine)) + 10);
        sprintf(result, "%s / %s", (yyvsp[-2].chaine), (yyvsp[0].chaine));
        free((yyvsp[-2].chaine));
        free((yyvsp[0].chaine));
        (yyval.chaine) = result;
    }
#line 1797 "francais.tab.c"
    break;

  case 68: /* expression: expression MODULO expression  */
#line 409 "francais.y"
                                   {
        char *result = malloc(strlen((yyvsp[-2].chaine)) + strlen((yyvsp[0].chaine)) + 10);
        sprintf(result, "%s %% %s", (yyvsp[-2].chaine), (yyvsp[0].chaine));
        free((yyvsp[-2].chaine));
        free((yyvsp[0].chaine));
        (yyval.chaine) = result;
    }
#line 1809 "francais.tab.c"
    break;

  case 69: /* expression: MOINS expression  */
#line 416 "francais.y"
                       {
        char *result = malloc(strlen((yyvsp[0].chaine)) + 10);
        sprintf(result, "-%s", (yyvsp[0].chaine));
        free((yyvsp[0].chaine));
        (yyval.chaine) = result;
    }
#line 1820 "francais.tab.c"
    break;

  case 70: /* expression: '(' expression ')'  */
#line 422 "francais.y"
                         {
        char *result = malloc(strlen((yyvsp[-1].chaine)) + 10);
        sprintf(result, "(%s)", (yyvsp[-1].chaine));
        free((yyvsp[-1].chaine));
        (yyval.chaine) = result;
    }
#line 1831 "francais.tab.c"
    break;


#line 1835 "francais.tab.c"

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

#line 430 "francais.y"


void yyerror(const char *s) {
    fprintf(stderr, "Erreur de syntaxe à la ligne %d: %s\n", ligne, s);
}

int main(int argc, char **argv) {
    if (argc != 3) {
        printf("Usage: %s <fichier_source.fr> <fichier_sortie.c>\n", argv[0]);
        return 1;
    }

    FILE *fichier_source = fopen(argv[1], "r");
    if (!fichier_source) {
        printf("Erreur: impossible d'ouvrir le fichier source %s\n", argv[1]);
        return 1;
    }

    fichier_sortie = fopen(argv[2], "w");
    if (!fichier_sortie) {
        printf("Erreur: impossible de créer le fichier de sortie\n");
        fclose(fichier_source);
        return 1;
    }

    yyin = fichier_source;
    
    generer_en_tete();
    generer_main_debut();
    
    int result = yyparse();
    
    generer_main_fin();
    
    fclose(fichier_source);
    fclose(fichier_sortie);
    
    if (result == 0) {
        printf("Code généré \n" );
    }
    
    return result;
}
