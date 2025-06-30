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
#line 1 "exo20-23.y"

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

#line 112 "exo20-23.tab.c"

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
  YYSYMBOL_LIRE = 17,                      /* LIRE  */
  YYSYMBOL_AFFICHER = 18,                  /* AFFICHER  */
  YYSYMBOL_TYPE_ENTIER = 19,               /* TYPE_ENTIER  */
  YYSYMBOL_TYPE_REEL = 20,                 /* TYPE_REEL  */
  YYSYMBOL_TYPE_CHAINE = 21,               /* TYPE_CHAINE  */
  YYSYMBOL_PROGRAMME = 22,                 /* PROGRAMME  */
  YYSYMBOL_FINPROGRAMME = 23,              /* FINPROGRAMME  */
  YYSYMBOL_REPETER_JUSQUA = 24,            /* REPETER_JUSQUA  */
  YYSYMBOL_FIN_REPETER = 25,               /* FIN_REPETER  */
  YYSYMBOL_SWITCH = 26,                    /* SWITCH  */
  YYSYMBOL_CASE = 27,                      /* CASE  */
  YYSYMBOL_DEFAULT = 28,                   /* DEFAULT  */
  YYSYMBOL_BREAK = 29,                     /* BREAK  */
  YYSYMBOL_PLUS = 30,                      /* PLUS  */
  YYSYMBOL_MOINS = 31,                     /* MOINS  */
  YYSYMBOL_MULT = 32,                      /* MULT  */
  YYSYMBOL_DIV = 33,                       /* DIV  */
  YYSYMBOL_MODULO = 34,                    /* MODULO  */
  YYSYMBOL_AFFECTATION = 35,               /* AFFECTATION  */
  YYSYMBOL_EGAL = 36,                      /* EGAL  */
  YYSYMBOL_DIFFERENT = 37,                 /* DIFFERENT  */
  YYSYMBOL_INFERIEUR = 38,                 /* INFERIEUR  */
  YYSYMBOL_SUPERIEUR = 39,                 /* SUPERIEUR  */
  YYSYMBOL_INFERIEUR_EGAL = 40,            /* INFERIEUR_EGAL  */
  YYSYMBOL_SUPERIEUR_EGAL = 41,            /* SUPERIEUR_EGAL  */
  YYSYMBOL_ET = 42,                        /* ET  */
  YYSYMBOL_OU = 43,                        /* OU  */
  YYSYMBOL_NON = 44,                       /* NON  */
  YYSYMBOL_QUESTION = 45,                  /* QUESTION  */
  YYSYMBOL_DEUX_POINTS = 46,               /* DEUX_POINTS  */
  YYSYMBOL_INCREMENT = 47,                 /* INCREMENT  */
  YYSYMBOL_DECREMENT = 48,                 /* DECREMENT  */
  YYSYMBOL_PLUS_EGAL = 49,                 /* PLUS_EGAL  */
  YYSYMBOL_MOINS_EGAL = 50,                /* MOINS_EGAL  */
  YYSYMBOL_51_ = 51,                       /* '['  */
  YYSYMBOL_52_ = 52,                       /* ']'  */
  YYSYMBOL_53_ = 53,                       /* ';'  */
  YYSYMBOL_54_ = 54,                       /* '{'  */
  YYSYMBOL_55_ = 55,                       /* '}'  */
  YYSYMBOL_56_ = 56,                       /* ','  */
  YYSYMBOL_57_ = 57,                       /* '('  */
  YYSYMBOL_58_ = 58,                       /* ')'  */
  YYSYMBOL_59_ = 59,                       /* ':'  */
  YYSYMBOL_YYACCEPT = 60,                  /* $accept  */
  YYSYMBOL_programme = 61,                 /* programme  */
  YYSYMBOL_liste_instructions = 62,        /* liste_instructions  */
  YYSYMBOL_instruction = 63,               /* instruction  */
  YYSYMBOL_declaration = 64,               /* declaration  */
  YYSYMBOL_liste_valeurs = 65,             /* liste_valeurs  */
  YYSYMBOL_liste_valeurs_2d = 66,          /* liste_valeurs_2d  */
  YYSYMBOL_type_variable = 67,             /* type_variable  */
  YYSYMBOL_acces_tableau = 68,             /* acces_tableau  */
  YYSYMBOL_affectation = 69,               /* affectation  */
  YYSYMBOL_increment_decrement = 70,       /* increment_decrement  */
  YYSYMBOL_lecture = 71,                   /* lecture  */
  YYSYMBOL_affichage = 72,                 /* affichage  */
  YYSYMBOL_condition_si = 73,              /* condition_si  */
  YYSYMBOL_74_1 = 74,                      /* $@1  */
  YYSYMBOL_sinon_optionnel = 75,           /* sinon_optionnel  */
  YYSYMBOL_76_2 = 76,                      /* $@2  */
  YYSYMBOL_boucle_tant_que = 77,           /* boucle_tant_que  */
  YYSYMBOL_78_3 = 78,                      /* $@3  */
  YYSYMBOL_boucle_pour = 79,               /* boucle_pour  */
  YYSYMBOL_80_4 = 80,                      /* $@4  */
  YYSYMBOL_boucle_repeter_jusqua = 81,     /* boucle_repeter_jusqua  */
  YYSYMBOL_82_5 = 82,                      /* $@5  */
  YYSYMBOL_switch_case = 83,               /* switch_case  */
  YYSYMBOL_84_6 = 84,                      /* $@6  */
  YYSYMBOL_liste_cases = 85,               /* liste_cases  */
  YYSYMBOL_case = 86,                      /* case  */
  YYSYMBOL_87_7 = 87,                      /* $@7  */
  YYSYMBOL_88_8 = 88,                      /* $@8  */
  YYSYMBOL_break_optionnel = 89,           /* break_optionnel  */
  YYSYMBOL_default_optionnel = 90,         /* default_optionnel  */
  YYSYMBOL_91_9 = 91,                      /* $@9  */
  YYSYMBOL_92_10 = 92,                     /* $@10  */
  YYSYMBOL_bloc_instructions = 93,         /* bloc_instructions  */
  YYSYMBOL_94_11 = 94,                     /* $@11  */
  YYSYMBOL_condition = 95,                 /* condition  */
  YYSYMBOL_expression = 96                 /* expression  */
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
#define YYFINAL  62
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   520

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  95
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  196

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   305


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
      57,    58,     2,     2,    56,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    59,    53,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    51,     2,    52,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    54,     2,    55,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    84,    84,    87,    93,    94,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   113,   119,   127,
     134,   141,   149,   160,   163,   173,   179,   189,   190,   191,
     196,   203,   215,   221,   227,   233,   243,   248,   253,   258,
     266,   271,   279,   284,   292,   292,   308,   309,   309,   319,
     319,   334,   334,   352,   352,   367,   367,   383,   384,   388,
     394,   388,   400,   402,   408,   410,   415,   410,   422,   422,
     435,   442,   449,   456,   463,   470,   477,   484,   491,   497,
     507,   512,   517,   520,   524,   533,   539,   546,   552,   558,
     565,   572,   579,   586,   593,   599
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
  "FAIRE", "FINTANTQUE", "POUR", "A", "FINPOUR", "LIRE", "AFFICHER",
  "TYPE_ENTIER", "TYPE_REEL", "TYPE_CHAINE", "PROGRAMME", "FINPROGRAMME",
  "REPETER_JUSQUA", "FIN_REPETER", "SWITCH", "CASE", "DEFAULT", "BREAK",
  "PLUS", "MOINS", "MULT", "DIV", "MODULO", "AFFECTATION", "EGAL",
  "DIFFERENT", "INFERIEUR", "SUPERIEUR", "INFERIEUR_EGAL",
  "SUPERIEUR_EGAL", "ET", "OU", "NON", "QUESTION", "DEUX_POINTS",
  "INCREMENT", "DECREMENT", "PLUS_EGAL", "MOINS_EGAL", "'['", "']'", "';'",
  "'{'", "'}'", "','", "'('", "')'", "':'", "$accept", "programme",
  "liste_instructions", "instruction", "declaration", "liste_valeurs",
  "liste_valeurs_2d", "type_variable", "acces_tableau", "affectation",
  "increment_decrement", "lecture", "affichage", "condition_si", "$@1",
  "sinon_optionnel", "$@2", "boucle_tant_que", "$@3", "boucle_pour", "$@4",
  "boucle_repeter_jusqua", "$@5", "switch_case", "$@6", "liste_cases",
  "case", "$@7", "$@8", "break_optionnel", "default_optionnel", "$@9",
  "$@10", "bloc_instructions", "$@11", "condition", "expression", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-150)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     212,   -34,    63,    63,    12,    30,    17,  -150,  -150,  -150,
     369,  -150,   -47,    39,    62,  -150,    34,   369,  -150,    48,
      86,    67,    51,    55,    56,    60,  -150,  -150,  -150,  -150,
    -150,  -150,    63,  -150,  -150,    63,    63,    63,  -150,  -150,
       3,    63,    63,    91,   108,    63,  -150,    -5,   479,    -1,
     101,    71,  -150,  -150,    28,   479,   244,   369,    63,  -150,
    -150,   369,  -150,  -150,  -150,   -27,    63,  -150,  -150,  -150,
    -150,   479,   479,   479,   428,  -150,  -150,    45,  -150,  -150,
    -150,     4,   370,  -150,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,  -150,    63,
    -150,   269,   399,   173,    63,   120,   479,    74,  -150,  -150,
     369,  -150,    82,   462,    45,    45,  -150,  -150,  -150,   479,
     479,   479,   479,   479,   479,   369,   411,    63,    75,  -150,
     479,    79,    63,   294,    63,   319,    63,    28,  -150,   -26,
     445,  -150,   122,   479,  -150,   176,   106,    80,   133,  -150,
     369,  -150,  -150,   135,   -23,  -150,    63,    87,   369,   369,
      81,    83,  -150,    88,   -28,   479,   109,   344,  -150,  -150,
    -150,  -150,    63,    93,  -150,   369,   369,   479,    94,   369,
     369,    63,     0,   112,   112,    40,  -150,    99,    92,  -150,
    -150,  -150,    63,  -150,    44,  -150
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,    27,    28,    29,
       0,    53,     0,     0,     0,    68,     0,     3,     4,     0,
       0,     0,     0,     0,     0,     0,    10,    11,    12,    13,
      14,    15,     0,    36,    37,     0,     0,     0,    80,    81,
      82,     0,     0,     0,     0,     0,    83,     0,     0,     0,
       0,    40,    41,    43,     0,    42,     0,     0,     0,    38,
      39,     0,     1,     5,     6,    17,     0,     7,    16,     8,
       9,    32,    34,    35,     0,    87,    88,    94,    78,    85,
      86,     0,     0,    44,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    49,     0,
       2,     0,     0,     0,     0,     0,    33,    30,    79,    95,
       0,    76,    77,     0,    89,    90,    91,    92,    93,    70,
      71,    72,    73,    74,    75,     0,     0,     0,     0,    69,
      18,     0,     0,    46,     0,     0,     0,    54,    55,    19,
       0,    47,     0,    84,    50,     0,     0,     0,     0,    31,
       0,    45,    51,     0,    64,    57,     0,     0,    48,     0,
       0,     0,    58,     0,     0,    23,    20,     0,    59,    65,
      56,    21,     0,     0,    52,     0,     0,    24,     0,    60,
      66,     0,     0,    62,    62,     0,    22,     0,     0,    61,
      67,    25,     0,    63,     0,    26
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -150,  -150,    -4,    16,  -150,  -149,  -150,  -150,     2,  -150,
    -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,
    -150,  -150,  -150,  -150,  -150,  -150,     5,  -150,  -150,   -30,
    -150,  -150,  -150,  -150,  -150,    73,    -6
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    16,    17,    18,    19,   164,   182,    20,    46,    22,
      23,    24,    25,    26,   110,   142,   150,    27,   125,    28,
     159,    29,    57,    30,   146,   154,   155,   175,   183,   189,
     163,   176,   184,    31,    61,    54,    48
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      55,    32,    21,    83,   153,   161,    56,    52,   104,   147,
      58,    98,    21,    33,    34,    35,    36,    37,    50,    21,
      38,    39,    53,    40,   105,   148,    71,   171,   172,    72,
      73,    74,   185,    63,    62,    77,    51,    84,    85,    82,
      86,    84,    85,   194,    86,    59,    84,    85,    41,    86,
      75,    76,   102,   101,    37,   186,   187,   103,    21,    21,
     106,    42,   108,    21,    43,    44,    38,    39,    60,    40,
      84,    85,    63,    86,    45,    47,    49,    89,    90,    91,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,    65,   126,    41,   191,   172,    79,   130,   195,
     172,    64,    66,    21,    67,    21,   133,    42,    68,    69,
      43,    44,    21,    70,    80,    78,    99,    63,    81,    63,
      45,   135,    37,   131,    84,   132,   140,    21,   143,   138,
     145,   139,   151,   153,   156,    21,   157,    21,   160,   166,
     168,   188,   169,   170,   173,   193,   158,   178,   181,    63,
     165,    63,    21,   192,   190,   167,     0,   111,   112,   162,
      21,    21,     0,     0,     0,     0,   177,     0,     0,    21,
       0,   179,   180,     0,    63,   165,     0,    21,    21,     1,
       2,    21,    21,    63,     3,     0,   165,     4,   152,     0,
       5,     6,     7,     8,     9,    63,    63,    11,     0,    12,
     137,     0,     0,     0,     0,     0,    87,    88,    89,    90,
      91,     0,    92,    93,    94,    95,    96,    97,     1,     2,
      13,    14,     0,     3,     0,     0,     4,    15,   129,     5,
       6,     7,     8,     9,    10,     0,    11,     0,    12,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     2,     0,     0,     0,     3,     0,     0,     4,    13,
      14,     5,     6,     7,     8,     9,    15,   100,    11,     0,
      12,     0,     0,     0,     0,     1,     2,     0,     0,     0,
       3,     0,     0,     4,     0,     0,     5,     6,     7,     8,
       9,    13,    14,    11,   127,    12,     0,     0,    15,     0,
       1,     2,     0,   141,     0,     3,     0,     0,     4,     0,
       0,     5,     6,     7,     8,     9,    13,    14,    11,     0,
      12,     0,     0,    15,     0,     1,     2,     0,     0,     0,
       3,     0,   144,     4,     0,     0,     5,     6,     7,     8,
       9,    13,    14,    11,     0,    12,     0,     0,    15,     0,
       1,     2,     0,     0,     0,     3,     0,     0,     4,     0,
     174,     5,     6,     7,     8,     9,    13,    14,    11,     0,
      12,     0,     0,    15,     0,     1,     2,     0,     0,     0,
       3,     0,     0,     4,     0,     0,     5,     6,     7,     8,
       9,    13,    14,    11,     0,    12,     0,     0,    15,     0,
      87,    88,    89,    90,    91,     0,    92,    93,    94,    95,
      96,    97,     0,     0,     0,     0,    13,    14,     0,     0,
       0,     0,     0,    15,     0,     0,   136,     0,   109,    87,
      88,    89,    90,    91,     0,    92,    93,    94,    95,    96,
      97,    87,    88,    89,    90,    91,     0,    92,    93,    94,
      95,    96,    97,     0,     0,     0,     0,   128,    87,    88,
      89,    90,    91,     0,    92,    93,    94,    95,    96,    97,
       0,     0,     0,     0,     0,    87,    88,    89,    90,    91,
     107,    92,    93,    94,    95,    96,    97,     0,     0,     0,
       0,     0,    87,    88,    89,    90,    91,   149,    92,    93,
      94,    95,    96,    97,     0,     0,     0,     0,   134,    87,
      88,    89,    90,    91,     0,    92,    93,    94,    95,    96,
      97
};

static const yytype_int16 yycheck[] =
{
       6,    35,     0,     8,    27,    28,    10,     5,    35,    35,
      57,    12,    10,    47,    48,    49,    50,    51,     6,    17,
       3,     4,     5,     6,    51,    51,    32,    55,    56,    35,
      36,    37,   181,    17,     0,    41,     6,    42,    43,    45,
      45,    42,    43,   192,    45,     6,    42,    43,    31,    45,
      47,    48,    58,    57,    51,    55,    56,    61,    56,    57,
      66,    44,    58,    61,    47,    48,     3,     4,     6,     6,
      42,    43,    56,    45,    57,     2,     3,    32,    33,    34,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,     6,    99,    31,    55,    56,     6,   104,    55,
      56,    53,    35,   101,    53,   103,   110,    44,    53,    53,
      47,    48,   110,    53,     6,    42,    15,   101,    45,   103,
      57,   125,    51,     3,    42,    51,   132,   125,   134,    54,
     136,    52,    10,    27,    54,   133,     3,   135,     3,    52,
      59,    29,    59,    55,    35,    53,   150,    54,    54,   133,
     156,   135,   150,    54,   184,   159,    -1,    84,    85,   154,
     158,   159,    -1,    -1,    -1,    -1,   172,    -1,    -1,   167,
      -1,   175,   176,    -1,   158,   181,    -1,   175,   176,     6,
       7,   179,   180,   167,    11,    -1,   192,    14,    12,    -1,
      17,    18,    19,    20,    21,   179,   180,    24,    -1,    26,
     127,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    -1,    36,    37,    38,    39,    40,    41,     6,     7,
      47,    48,    -1,    11,    -1,    -1,    14,    54,    55,    17,
      18,    19,    20,    21,    22,    -1,    24,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       6,     7,    -1,    -1,    -1,    11,    -1,    -1,    14,    47,
      48,    17,    18,    19,    20,    21,    54,    23,    24,    -1,
      26,    -1,    -1,    -1,    -1,     6,     7,    -1,    -1,    -1,
      11,    -1,    -1,    14,    -1,    -1,    17,    18,    19,    20,
      21,    47,    48,    24,    25,    26,    -1,    -1,    54,    -1,
       6,     7,    -1,     9,    -1,    11,    -1,    -1,    14,    -1,
      -1,    17,    18,    19,    20,    21,    47,    48,    24,    -1,
      26,    -1,    -1,    54,    -1,     6,     7,    -1,    -1,    -1,
      11,    -1,    13,    14,    -1,    -1,    17,    18,    19,    20,
      21,    47,    48,    24,    -1,    26,    -1,    -1,    54,    -1,
       6,     7,    -1,    -1,    -1,    11,    -1,    -1,    14,    -1,
      16,    17,    18,    19,    20,    21,    47,    48,    24,    -1,
      26,    -1,    -1,    54,    -1,     6,     7,    -1,    -1,    -1,
      11,    -1,    -1,    14,    -1,    -1,    17,    18,    19,    20,
      21,    47,    48,    24,    -1,    26,    -1,    -1,    54,    -1,
      30,    31,    32,    33,    34,    -1,    36,    37,    38,    39,
      40,    41,    -1,    -1,    -1,    -1,    47,    48,    -1,    -1,
      -1,    -1,    -1,    54,    -1,    -1,    15,    -1,    58,    30,
      31,    32,    33,    34,    -1,    36,    37,    38,    39,    40,
      41,    30,    31,    32,    33,    34,    -1,    36,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,    58,    30,    31,
      32,    33,    34,    -1,    36,    37,    38,    39,    40,    41,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      52,    36,    37,    38,    39,    40,    41,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    52,    36,    37,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,    46,    30,
      31,    32,    33,    34,    -1,    36,    37,    38,    39,    40,
      41
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     6,     7,    11,    14,    17,    18,    19,    20,    21,
      22,    24,    26,    47,    48,    54,    61,    62,    63,    64,
      67,    68,    69,    70,    71,    72,    73,    77,    79,    81,
      83,    93,    35,    47,    48,    49,    50,    51,     3,     4,
       6,    31,    44,    47,    48,    57,    68,    95,    96,    95,
       6,     6,    68,     5,    95,    96,    62,    82,    57,     6,
       6,    94,     0,    63,    53,     6,    35,    53,    53,    53,
      53,    96,    96,    96,    96,    47,    48,    96,    95,     6,
       6,    95,    96,     8,    42,    43,    45,    30,    31,    32,
      33,    34,    36,    37,    38,    39,    40,    41,    12,    15,
      23,    62,    96,    62,    35,    51,    96,    52,    58,    58,
      74,    95,    95,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    78,    96,    25,    58,    55,
      96,     3,    51,    62,    46,    62,    15,    95,    54,    52,
      96,     9,    75,    96,    13,    96,    84,    35,    51,    52,
      76,    10,    12,    27,    85,    86,    54,     3,    62,    80,
       3,    28,    86,    90,    65,    96,    52,    62,    59,    59,
      55,    55,    56,    35,    16,    87,    91,    96,    54,    62,
      62,    54,    66,    88,    92,    65,    55,    56,    29,    89,
      89,    55,    54,    53,    65,    55
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    60,    61,    61,    62,    62,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    64,    64,    64,
      64,    64,    64,    65,    65,    66,    66,    67,    67,    67,
      68,    68,    69,    69,    69,    69,    70,    70,    70,    70,
      71,    71,    72,    72,    74,    73,    75,    76,    75,    78,
      77,    80,    79,    82,    81,    84,    83,    85,    85,    87,
      88,    86,    89,    89,    90,    91,    92,    90,    94,    93,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     1,     1,     2,     2,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     2,     2,     4,     5,
       8,     9,    12,     1,     3,     3,     5,     1,     1,     1,
       4,     7,     3,     3,     3,     3,     2,     2,     2,     2,
       2,     2,     2,     2,     0,     7,     0,     0,     3,     0,
       6,     0,    10,     0,     5,     0,     9,     1,     2,     0,
       0,     7,     0,     2,     0,     0,     0,     6,     0,     4,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     3,
       1,     1,     1,     1,     5,     2,     2,     2,     2,     3,
       3,     3,     3,     3,     2,     3
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
#line 84 "exo20-23.y"
                                              {
        printf("Kemak yisue! (Compilation terminée avec succès!)\n");
    }
#line 1397 "exo20-23.tab.c"
    break;

  case 3: /* programme: liste_instructions  */
#line 87 "exo20-23.y"
                         {
        printf("Kemak yisue! (Compilation terminée avec succès!)\n");
    }
#line 1405 "exo20-23.tab.c"
    break;

  case 17: /* declaration: type_variable VARIABLE  */
#line 113 "exo20-23.y"
                           {
        indenter();
        fprintf(fichier_sortie, "%s %s;\n", (yyvsp[-1].chaine), (yyvsp[0].chaine));
        free((yyvsp[-1].chaine));
        free((yyvsp[0].chaine));
    }
#line 1416 "exo20-23.tab.c"
    break;

  case 18: /* declaration: type_variable VARIABLE AFFECTATION expression  */
#line 119 "exo20-23.y"
                                                    {
        indenter();
        fprintf(fichier_sortie, "%s %s = %s;\n", (yyvsp[-3].chaine), (yyvsp[-2].chaine), (yyvsp[0].chaine));
        free((yyvsp[-3].chaine));
        free((yyvsp[-2].chaine));
        free((yyvsp[0].chaine));
    }
#line 1428 "exo20-23.tab.c"
    break;

  case 19: /* declaration: type_variable VARIABLE '[' ENTIER ']'  */
#line 127 "exo20-23.y"
                                            {
        indenter();
        fprintf(fichier_sortie, "%s %s[%d];\n", (yyvsp[-4].chaine), (yyvsp[-3].chaine), (yyvsp[-1].entier));
        free((yyvsp[-4].chaine));
        free((yyvsp[-3].chaine));
    }
#line 1439 "exo20-23.tab.c"
    break;

  case 20: /* declaration: type_variable VARIABLE '[' ENTIER ']' '[' ENTIER ']'  */
#line 134 "exo20-23.y"
                                                           {
        indenter();
        fprintf(fichier_sortie, "%s %s[%d][%d];\n", (yyvsp[-7].chaine), (yyvsp[-6].chaine), (yyvsp[-4].entier), (yyvsp[-1].entier));
        free((yyvsp[-7].chaine));
        free((yyvsp[-6].chaine));
    }
#line 1450 "exo20-23.tab.c"
    break;

  case 21: /* declaration: type_variable VARIABLE '[' ENTIER ']' AFFECTATION '{' liste_valeurs '}'  */
#line 141 "exo20-23.y"
                                                                              {
        indenter();
        fprintf(fichier_sortie, "%s %s[%d] = {%s};\n", (yyvsp[-8].chaine), (yyvsp[-7].chaine), (yyvsp[-5].entier), (yyvsp[-1].chaine));
        free((yyvsp[-8].chaine));
        free((yyvsp[-7].chaine));
        free((yyvsp[-1].chaine));
    }
#line 1462 "exo20-23.tab.c"
    break;

  case 22: /* declaration: type_variable VARIABLE '[' ENTIER ']' '[' ENTIER ']' AFFECTATION '{' liste_valeurs_2d '}'  */
#line 149 "exo20-23.y"
                                                                                                {
        indenter();
        fprintf(fichier_sortie, "%s %s[%d][%d] = {%s};\n", (yyvsp[-11].chaine), (yyvsp[-10].chaine), (yyvsp[-8].entier), (yyvsp[-5].entier), (yyvsp[-1].chaine));
        free((yyvsp[-11].chaine));
        free((yyvsp[-10].chaine));
        free((yyvsp[-1].chaine));
    }
#line 1474 "exo20-23.tab.c"
    break;

  case 23: /* liste_valeurs: expression  */
#line 160 "exo20-23.y"
               {
        (yyval.chaine) = (yyvsp[0].chaine);
    }
#line 1482 "exo20-23.tab.c"
    break;

  case 24: /* liste_valeurs: liste_valeurs ',' expression  */
#line 163 "exo20-23.y"
                                   {
        char *result = malloc(strlen((yyvsp[-2].chaine)) + strlen((yyvsp[0].chaine)) + 5);
        sprintf(result, "%s, %s", (yyvsp[-2].chaine), (yyvsp[0].chaine));
        free((yyvsp[-2].chaine));
        free((yyvsp[0].chaine));
        (yyval.chaine) = result;
    }
#line 1494 "exo20-23.tab.c"
    break;

  case 25: /* liste_valeurs_2d: '{' liste_valeurs '}'  */
#line 173 "exo20-23.y"
                          {
        char *result = malloc(strlen((yyvsp[-1].chaine)) + 5);
        sprintf(result, "{%s}", (yyvsp[-1].chaine));
        free((yyvsp[-1].chaine));
        (yyval.chaine) = result;
    }
#line 1505 "exo20-23.tab.c"
    break;

  case 26: /* liste_valeurs_2d: liste_valeurs_2d ',' '{' liste_valeurs '}'  */
#line 179 "exo20-23.y"
                                                 {
        char *result = malloc(strlen((yyvsp[-4].chaine)) + strlen((yyvsp[-1].chaine)) + 10);
        sprintf(result, "%s, {%s}", (yyvsp[-4].chaine), (yyvsp[-1].chaine));
        free((yyvsp[-4].chaine));
        free((yyvsp[-1].chaine));
        (yyval.chaine) = result;
    }
#line 1517 "exo20-23.tab.c"
    break;

  case 27: /* type_variable: TYPE_ENTIER  */
#line 189 "exo20-23.y"
                { (yyval.chaine) = strdup("int"); }
#line 1523 "exo20-23.tab.c"
    break;

  case 28: /* type_variable: TYPE_REEL  */
#line 190 "exo20-23.y"
                { (yyval.chaine) = strdup("double"); }
#line 1529 "exo20-23.tab.c"
    break;

  case 29: /* type_variable: TYPE_CHAINE  */
#line 191 "exo20-23.y"
                  { (yyval.chaine) = strdup("char*"); }
#line 1535 "exo20-23.tab.c"
    break;

  case 30: /* acces_tableau: VARIABLE '[' expression ']'  */
#line 196 "exo20-23.y"
                                {
        char *result = malloc(strlen((yyvsp[-3].chaine)) + strlen((yyvsp[-1].chaine)) + 5);
        sprintf(result, "%s[%s]", (yyvsp[-3].chaine), (yyvsp[-1].chaine));
        free((yyvsp[-3].chaine));
        free((yyvsp[-1].chaine));
        (yyval.chaine) = result;
    }
#line 1547 "exo20-23.tab.c"
    break;

  case 31: /* acces_tableau: VARIABLE '[' expression ']' '[' expression ']'  */
#line 203 "exo20-23.y"
                                                     {
        char *result = malloc(strlen((yyvsp[-6].chaine)) + strlen((yyvsp[-4].chaine)) + strlen((yyvsp[-1].chaine)) + 8);
        sprintf(result, "%s[%s][%s]", (yyvsp[-6].chaine), (yyvsp[-4].chaine), (yyvsp[-1].chaine));
        free((yyvsp[-6].chaine));
        free((yyvsp[-4].chaine));
        free((yyvsp[-1].chaine));
        (yyval.chaine) = result;
    }
#line 1560 "exo20-23.tab.c"
    break;

  case 32: /* affectation: VARIABLE AFFECTATION expression  */
#line 215 "exo20-23.y"
                                    {
        indenter();
        fprintf(fichier_sortie, "%s = %s;\n", (yyvsp[-2].chaine), (yyvsp[0].chaine));
        free((yyvsp[-2].chaine));
        free((yyvsp[0].chaine));
    }
#line 1571 "exo20-23.tab.c"
    break;

  case 33: /* affectation: acces_tableau AFFECTATION expression  */
#line 221 "exo20-23.y"
                                           {
        indenter();
        fprintf(fichier_sortie, "%s = %s;\n", (yyvsp[-2].chaine), (yyvsp[0].chaine));
        free((yyvsp[-2].chaine));
        free((yyvsp[0].chaine));
    }
#line 1582 "exo20-23.tab.c"
    break;

  case 34: /* affectation: VARIABLE PLUS_EGAL expression  */
#line 227 "exo20-23.y"
                                    {
        indenter();
        fprintf(fichier_sortie, "%s += %s;\n", (yyvsp[-2].chaine), (yyvsp[0].chaine));
        free((yyvsp[-2].chaine));
        free((yyvsp[0].chaine));
    }
#line 1593 "exo20-23.tab.c"
    break;

  case 35: /* affectation: VARIABLE MOINS_EGAL expression  */
#line 233 "exo20-23.y"
                                     {
        indenter();
        fprintf(fichier_sortie, "%s -= %s;\n", (yyvsp[-2].chaine), (yyvsp[0].chaine));
        free((yyvsp[-2].chaine));
        free((yyvsp[0].chaine));
    }
#line 1604 "exo20-23.tab.c"
    break;

  case 36: /* increment_decrement: VARIABLE INCREMENT  */
#line 243 "exo20-23.y"
                       {
        indenter();
        fprintf(fichier_sortie, "%s++;\n", (yyvsp[-1].chaine));
        free((yyvsp[-1].chaine));
    }
#line 1614 "exo20-23.tab.c"
    break;

  case 37: /* increment_decrement: VARIABLE DECREMENT  */
#line 248 "exo20-23.y"
                         {
        indenter();
        fprintf(fichier_sortie, "%s--;\n", (yyvsp[-1].chaine));
        free((yyvsp[-1].chaine));
    }
#line 1624 "exo20-23.tab.c"
    break;

  case 38: /* increment_decrement: INCREMENT VARIABLE  */
#line 253 "exo20-23.y"
                         {
        indenter();
        fprintf(fichier_sortie, "++%s;\n", (yyvsp[0].chaine));
        free((yyvsp[0].chaine));
    }
#line 1634 "exo20-23.tab.c"
    break;

  case 39: /* increment_decrement: DECREMENT VARIABLE  */
#line 258 "exo20-23.y"
                         {
        indenter();
        fprintf(fichier_sortie, "--%s;\n", (yyvsp[0].chaine));
        free((yyvsp[0].chaine));
    }
#line 1644 "exo20-23.tab.c"
    break;

  case 40: /* lecture: LIRE VARIABLE  */
#line 266 "exo20-23.y"
                  {
        indenter();
        fprintf(fichier_sortie, "scanf(\"%%d\", &%s);\n", (yyvsp[0].chaine));
        free((yyvsp[0].chaine));
    }
#line 1654 "exo20-23.tab.c"
    break;

  case 41: /* lecture: LIRE acces_tableau  */
#line 271 "exo20-23.y"
                         {
        indenter();
        fprintf(fichier_sortie, "scanf(\"%%d\", &%s);\n", (yyvsp[0].chaine));
        free((yyvsp[0].chaine));
    }
#line 1664 "exo20-23.tab.c"
    break;

  case 42: /* affichage: AFFICHER expression  */
#line 279 "exo20-23.y"
                        {
        indenter();
        fprintf(fichier_sortie, "printf(\"%%d\\n\", %s);\n", (yyvsp[0].chaine));
        free((yyvsp[0].chaine));
    }
#line 1674 "exo20-23.tab.c"
    break;

  case 43: /* affichage: AFFICHER CHAINE  */
#line 284 "exo20-23.y"
                      {
        indenter();
        fprintf(fichier_sortie, "printf(%s);\n", (yyvsp[0].chaine));
        free((yyvsp[0].chaine));
    }
#line 1684 "exo20-23.tab.c"
    break;

  case 44: /* $@1: %empty  */
#line 292 "exo20-23.y"
                       {
        indenter();
        fprintf(fichier_sortie, "if (%s) {\n", (yyvsp[-1].chaine));
        niveau_indentation++;
        free((yyvsp[-1].chaine));
    }
#line 1695 "exo20-23.tab.c"
    break;

  case 45: /* condition_si: SI condition ALORS $@1 liste_instructions sinon_optionnel FINSI  */
#line 300 "exo20-23.y"
          {
        niveau_indentation--;
        indenter();
        fprintf(fichier_sortie, "}\n");
    }
#line 1705 "exo20-23.tab.c"
    break;

  case 46: /* sinon_optionnel: %empty  */
#line 308 "exo20-23.y"
               { /* rien à faire */ }
#line 1711 "exo20-23.tab.c"
    break;

  case 47: /* $@2: %empty  */
#line 309 "exo20-23.y"
            {
        niveau_indentation--;
        indenter();
        fprintf(fichier_sortie, "} else {\n");
        niveau_indentation++;
    }
#line 1722 "exo20-23.tab.c"
    break;

  case 49: /* $@3: %empty  */
#line 319 "exo20-23.y"
                             {
        indenter();
        fprintf(fichier_sortie, "while (%s) {\n", (yyvsp[-1].chaine));
        niveau_indentation++;
        free((yyvsp[-1].chaine));
    }
#line 1733 "exo20-23.tab.c"
    break;

  case 50: /* boucle_tant_que: TANT_QUE condition FAIRE $@3 liste_instructions FINTANTQUE  */
#line 326 "exo20-23.y"
               {
        niveau_indentation--;
        indenter();
        fprintf(fichier_sortie, "}\n");
    }
#line 1743 "exo20-23.tab.c"
    break;

  case 51: /* $@4: %empty  */
#line 334 "exo20-23.y"
                                                  {
        indenter();
        fprintf(fichier_sortie, "for (%s = %s; %s <= %s; %s++) {\n", 
                (yyvsp[-5].chaine), (yyvsp[-3].chaine), (yyvsp[-5].chaine), (yyvsp[-1].chaine), (yyvsp[-5].chaine));
        niveau_indentation++;
        free((yyvsp[-5].chaine));
        free((yyvsp[-3].chaine));
        free((yyvsp[-1].chaine));
    }
#line 1757 "exo20-23.tab.c"
    break;

  case 52: /* boucle_pour: POUR VARIABLE A expression A expression FAIRE $@4 liste_instructions FINPOUR  */
#line 344 "exo20-23.y"
            {
        niveau_indentation--;
        indenter();
        fprintf(fichier_sortie, "}\n");
    }
#line 1767 "exo20-23.tab.c"
    break;

  case 53: /* $@5: %empty  */
#line 352 "exo20-23.y"
                   {
        indenter();
        fprintf(fichier_sortie, "do {\n");
        niveau_indentation++;
    }
#line 1777 "exo20-23.tab.c"
    break;

  case 54: /* boucle_repeter_jusqua: REPETER_JUSQUA $@5 liste_instructions FIN_REPETER condition  */
#line 358 "exo20-23.y"
                          {
        niveau_indentation--;
        indenter();
        fprintf(fichier_sortie, "} while (!(%s));\n", (yyvsp[0].chaine));
        free((yyvsp[0].chaine));
    }
#line 1788 "exo20-23.tab.c"
    break;

  case 55: /* $@6: %empty  */
#line 367 "exo20-23.y"
                                  {
        indenter();
        fprintf(fichier_sortie, "switch (%s) {\n", (yyvsp[-2].chaine));
        niveau_indentation++;
        free((yyvsp[-2].chaine));
    }
#line 1799 "exo20-23.tab.c"
    break;

  case 56: /* switch_case: SWITCH '(' expression ')' '{' $@6 liste_cases default_optionnel '}'  */
#line 375 "exo20-23.y"
        {
        niveau_indentation--;
        indenter();
        fprintf(fichier_sortie, "}\n");
    }
#line 1809 "exo20-23.tab.c"
    break;

  case 59: /* $@7: %empty  */
#line 388 "exo20-23.y"
                    {
        current_case_value = (yyvsp[-1].entier);
        indenter();
        fprintf(fichier_sortie, "case %d:\n", current_case_value);
        niveau_indentation++;
    }
#line 1820 "exo20-23.tab.c"
    break;

  case 60: /* $@8: %empty  */
#line 394 "exo20-23.y"
                       {
        niveau_indentation--;
    }
#line 1828 "exo20-23.tab.c"
    break;

  case 63: /* break_optionnel: BREAK ';'  */
#line 402 "exo20-23.y"
                {
        indenter();
        fprintf(fichier_sortie, "break;\n");
    }
#line 1837 "exo20-23.tab.c"
    break;

  case 65: /* $@9: %empty  */
#line 410 "exo20-23.y"
                  {
        indenter();
        fprintf(fichier_sortie, "default:\n");
        niveau_indentation++;
    }
#line 1847 "exo20-23.tab.c"
    break;

  case 66: /* $@10: %empty  */
#line 415 "exo20-23.y"
                       {
        niveau_indentation--;
    }
#line 1855 "exo20-23.tab.c"
    break;

  case 68: /* $@11: %empty  */
#line 422 "exo20-23.y"
        {
        fprintf(fichier_sortie, "{\n");
        niveau_indentation++;
    }
#line 1864 "exo20-23.tab.c"
    break;

  case 69: /* bloc_instructions: '{' $@11 liste_instructions '}'  */
#line 427 "exo20-23.y"
        {
        niveau_indentation--;
        indenter();
        fprintf(fichier_sortie, "}\n");
    }
#line 1874 "exo20-23.tab.c"
    break;

  case 70: /* condition: expression EGAL expression  */
#line 435 "exo20-23.y"
                               {
        char *result = malloc(strlen((yyvsp[-2].chaine)) + strlen((yyvsp[0].chaine)) + 10);
        sprintf(result, "%s == %s", (yyvsp[-2].chaine), (yyvsp[0].chaine));
        free((yyvsp[-2].chaine));
        free((yyvsp[0].chaine));
        (yyval.chaine) = result;
    }
#line 1886 "exo20-23.tab.c"
    break;

  case 71: /* condition: expression DIFFERENT expression  */
#line 442 "exo20-23.y"
                                      {
        char *result = malloc(strlen((yyvsp[-2].chaine)) + strlen((yyvsp[0].chaine)) + 10);
        sprintf(result, "%s != %s", (yyvsp[-2].chaine), (yyvsp[0].chaine));
        free((yyvsp[-2].chaine));
        free((yyvsp[0].chaine));
        (yyval.chaine) = result;
    }
#line 1898 "exo20-23.tab.c"
    break;

  case 72: /* condition: expression INFERIEUR expression  */
#line 449 "exo20-23.y"
                                      {
        char *result = malloc(strlen((yyvsp[-2].chaine)) + strlen((yyvsp[0].chaine)) + 10);
        sprintf(result, "%s < %s", (yyvsp[-2].chaine), (yyvsp[0].chaine));
        free((yyvsp[-2].chaine));
        free((yyvsp[0].chaine));
        (yyval.chaine) = result;
    }
#line 1910 "exo20-23.tab.c"
    break;

  case 73: /* condition: expression SUPERIEUR expression  */
#line 456 "exo20-23.y"
                                      {
        char *result = malloc(strlen((yyvsp[-2].chaine)) + strlen((yyvsp[0].chaine)) + 10);
        sprintf(result, "%s > %s", (yyvsp[-2].chaine), (yyvsp[0].chaine));
        free((yyvsp[-2].chaine));
        free((yyvsp[0].chaine));
        (yyval.chaine) = result;
    }
#line 1922 "exo20-23.tab.c"
    break;

  case 74: /* condition: expression INFERIEUR_EGAL expression  */
#line 463 "exo20-23.y"
                                           {
        char *result = malloc(strlen((yyvsp[-2].chaine)) + strlen((yyvsp[0].chaine)) + 10);
        sprintf(result, "%s <= %s", (yyvsp[-2].chaine), (yyvsp[0].chaine));
        free((yyvsp[-2].chaine));
        free((yyvsp[0].chaine));
        (yyval.chaine) = result;
    }
#line 1934 "exo20-23.tab.c"
    break;

  case 75: /* condition: expression SUPERIEUR_EGAL expression  */
#line 470 "exo20-23.y"
                                           {
        char *result = malloc(strlen((yyvsp[-2].chaine)) + strlen((yyvsp[0].chaine)) + 10);
        sprintf(result, "%s >= %s", (yyvsp[-2].chaine), (yyvsp[0].chaine));
        free((yyvsp[-2].chaine));
        free((yyvsp[0].chaine));
        (yyval.chaine) = result;
    }
#line 1946 "exo20-23.tab.c"
    break;

  case 76: /* condition: condition ET condition  */
#line 477 "exo20-23.y"
                             {
        char *result = malloc(strlen((yyvsp[-2].chaine)) + strlen((yyvsp[0].chaine)) + 10);
        sprintf(result, "%s && %s", (yyvsp[-2].chaine), (yyvsp[0].chaine));
        free((yyvsp[-2].chaine));
        free((yyvsp[0].chaine));
        (yyval.chaine) = result;
    }
#line 1958 "exo20-23.tab.c"
    break;

  case 77: /* condition: condition OU condition  */
#line 484 "exo20-23.y"
                             {
        char *result = malloc(strlen((yyvsp[-2].chaine)) + strlen((yyvsp[0].chaine)) + 10);
        sprintf(result, "%s || %s", (yyvsp[-2].chaine), (yyvsp[0].chaine));
        free((yyvsp[-2].chaine));
        free((yyvsp[0].chaine));
        (yyval.chaine) = result;
    }
#line 1970 "exo20-23.tab.c"
    break;

  case 78: /* condition: NON condition  */
#line 491 "exo20-23.y"
                    {
        char *result = malloc(strlen((yyvsp[0].chaine)) + 10);
        sprintf(result, "!(%s)", (yyvsp[0].chaine));
        free((yyvsp[0].chaine));
        (yyval.chaine) = result;
    }
#line 1981 "exo20-23.tab.c"
    break;

  case 79: /* condition: '(' condition ')'  */
#line 497 "exo20-23.y"
                        {
        char *result = malloc(strlen((yyvsp[-1].chaine)) + 10);
        sprintf(result, "(%s)", (yyvsp[-1].chaine));
        free((yyvsp[-1].chaine));
        (yyval.chaine) = result;
    }
#line 1992 "exo20-23.tab.c"
    break;

  case 80: /* expression: ENTIER  */
#line 507 "exo20-23.y"
           {
        char *result = malloc(20);
        sprintf(result, "%d", (yyvsp[0].entier));
        (yyval.chaine) = result;
    }
#line 2002 "exo20-23.tab.c"
    break;

  case 81: /* expression: REEL  */
#line 512 "exo20-23.y"
           {
        char *result = malloc(30);
        sprintf(result, "%.6f", (yyvsp[0].reel));
        (yyval.chaine) = result;
    }
#line 2012 "exo20-23.tab.c"
    break;

  case 82: /* expression: VARIABLE  */
#line 517 "exo20-23.y"
               {
        (yyval.chaine) = (yyvsp[0].chaine);
    }
#line 2020 "exo20-23.tab.c"
    break;

  case 83: /* expression: acces_tableau  */
#line 520 "exo20-23.y"
                    {
        (yyval.chaine) = (yyvsp[0].chaine);
    }
#line 2028 "exo20-23.tab.c"
    break;

  case 84: /* expression: condition QUESTION expression DEUX_POINTS expression  */
#line 524 "exo20-23.y"
                                                                          {
        char *result = malloc(strlen((yyvsp[-4].chaine)) + strlen((yyvsp[-2].chaine)) + strlen((yyvsp[0].chaine)) + 20);
        sprintf(result, "(%s) ? (%s) : (%s)", (yyvsp[-4].chaine), (yyvsp[-2].chaine), (yyvsp[0].chaine));
        free((yyvsp[-4].chaine));
        free((yyvsp[-2].chaine));
        free((yyvsp[0].chaine));
        (yyval.chaine) = result;
    }
#line 2041 "exo20-23.tab.c"
    break;

  case 85: /* expression: INCREMENT VARIABLE  */
#line 533 "exo20-23.y"
                                         {
        char *result = malloc(strlen((yyvsp[0].chaine)) + 5);
        sprintf(result, "++%s", (yyvsp[0].chaine));
        free((yyvsp[0].chaine));
        (yyval.chaine) = result;
    }
#line 2052 "exo20-23.tab.c"
    break;

  case 86: /* expression: DECREMENT VARIABLE  */
#line 539 "exo20-23.y"
                                         {
        char *result = malloc(strlen((yyvsp[0].chaine)) + 5);
        sprintf(result, "--%s", (yyvsp[0].chaine));
        free((yyvsp[0].chaine));
        (yyval.chaine) = result;
    }
#line 2063 "exo20-23.tab.c"
    break;

  case 87: /* expression: VARIABLE INCREMENT  */
#line 546 "exo20-23.y"
                                         {
        char *result = malloc(strlen((yyvsp[-1].chaine)) + 5);
        sprintf(result, "%s++", (yyvsp[-1].chaine));
        free((yyvsp[-1].chaine));
        (yyval.chaine) = result;
    }
#line 2074 "exo20-23.tab.c"
    break;

  case 88: /* expression: VARIABLE DECREMENT  */
#line 552 "exo20-23.y"
                                         {
        char *result = malloc(strlen((yyvsp[-1].chaine)) + 5);
        sprintf(result, "%s--", (yyvsp[-1].chaine));
        free((yyvsp[-1].chaine));
        (yyval.chaine) = result;
    }
#line 2085 "exo20-23.tab.c"
    break;

  case 89: /* expression: expression PLUS expression  */
#line 558 "exo20-23.y"
                                 {
        char *result = malloc(strlen((yyvsp[-2].chaine)) + strlen((yyvsp[0].chaine)) + 10);
        sprintf(result, "%s + %s", (yyvsp[-2].chaine), (yyvsp[0].chaine));
        free((yyvsp[-2].chaine));
        free((yyvsp[0].chaine));
        (yyval.chaine) = result;
    }
#line 2097 "exo20-23.tab.c"
    break;

  case 90: /* expression: expression MOINS expression  */
#line 565 "exo20-23.y"
                                  {
        char *result = malloc(strlen((yyvsp[-2].chaine)) + strlen((yyvsp[0].chaine)) + 10);
        sprintf(result, "%s - %s", (yyvsp[-2].chaine), (yyvsp[0].chaine));
        free((yyvsp[-2].chaine));
        free((yyvsp[0].chaine));
        (yyval.chaine) = result;
    }
#line 2109 "exo20-23.tab.c"
    break;

  case 91: /* expression: expression MULT expression  */
#line 572 "exo20-23.y"
                                 {
        char *result = malloc(strlen((yyvsp[-2].chaine)) + strlen((yyvsp[0].chaine)) + 10);
        sprintf(result, "%s * %s", (yyvsp[-2].chaine), (yyvsp[0].chaine));
        free((yyvsp[-2].chaine));
        free((yyvsp[0].chaine));
        (yyval.chaine) = result;
    }
#line 2121 "exo20-23.tab.c"
    break;

  case 92: /* expression: expression DIV expression  */
#line 579 "exo20-23.y"
                                {
        char *result = malloc(strlen((yyvsp[-2].chaine)) + strlen((yyvsp[0].chaine)) + 10);
        sprintf(result, "%s / %s", (yyvsp[-2].chaine), (yyvsp[0].chaine));
        free((yyvsp[-2].chaine));
        free((yyvsp[0].chaine));
        (yyval.chaine) = result;
    }
#line 2133 "exo20-23.tab.c"
    break;

  case 93: /* expression: expression MODULO expression  */
#line 586 "exo20-23.y"
                                   {
        char *result = malloc(strlen((yyvsp[-2].chaine)) + strlen((yyvsp[0].chaine)) + 10);
        sprintf(result, "%s %% %s", (yyvsp[-2].chaine), (yyvsp[0].chaine));
        free((yyvsp[-2].chaine));
        free((yyvsp[0].chaine));
        (yyval.chaine) = result;
    }
#line 2145 "exo20-23.tab.c"
    break;

  case 94: /* expression: MOINS expression  */
#line 593 "exo20-23.y"
                       {
        char *result = malloc(strlen((yyvsp[0].chaine)) + 10);
        sprintf(result, "-%s", (yyvsp[0].chaine));
        free((yyvsp[0].chaine));
        (yyval.chaine) = result;
    }
#line 2156 "exo20-23.tab.c"
    break;

  case 95: /* expression: '(' expression ')'  */
#line 599 "exo20-23.y"
                         {
        char *result = malloc(strlen((yyvsp[-1].chaine)) + 10);
        sprintf(result, "(%s)", (yyvsp[-1].chaine));
        free((yyvsp[-1].chaine));
        (yyval.chaine) = result;
    }
#line 2167 "exo20-23.tab.c"
    break;


#line 2171 "exo20-23.tab.c"

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

#line 607 "exo20-23.y"


void yyerror(const char *s) {
    fprintf(stderr, "Keme yi dzem %d: %s (Erreur de syntaxe à la ligne %d: %s)\n", ligne, s, ligne, s);
}

int main(int argc, char **argv) {
    if (argc != 3) {
        printf("Le yi: %s <fichier_source.yemba> <fichier_sortie.c>\n", argv[0]);
        printf("Usage: %s <fichier_source.yemba> <fichier_sortie.c>\n", argv[0]);
        return 1;
    }

    FILE *fichier_source = fopen(argv[1], "r");
    if (!fichier_source) {
        printf("Keme: tene yi dzem %s (Erreur: impossible d'ouvrir le fichier source %s)\n", argv[1], argv[1]);
        return 1;
    }

    fichier_sortie = fopen(argv[2], "w");
    if (!fichier_sortie) {
        printf("Keme: tene yi kemak dzem %s (Erreur: impossible de créer le fichier de sortie %s)\n", argv[2], argv[2]);
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
        printf("Kemak C yi (Code C compilé avec succès)\n");
    }
    
    return result;
}
