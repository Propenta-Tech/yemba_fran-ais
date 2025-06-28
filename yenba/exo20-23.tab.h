/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_EXO20_23_TAB_H_INCLUDED
# define YY_YY_EXO20_23_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ENTIER = 258,                  /* ENTIER  */
    REEL = 259,                    /* REEL  */
    CHAINE = 260,                  /* CHAINE  */
    VARIABLE = 261,                /* VARIABLE  */
    SI = 262,                      /* SI  */
    ALORS = 263,                   /* ALORS  */
    SINON = 264,                   /* SINON  */
    FINSI = 265,                   /* FINSI  */
    TANT_QUE = 266,                /* TANT_QUE  */
    FAIRE = 267,                   /* FAIRE  */
    FINTANTQUE = 268,              /* FINTANTQUE  */
    POUR = 269,                    /* POUR  */
    A = 270,                       /* A  */
    FINPOUR = 271,                 /* FINPOUR  */
    LIRE = 272,                    /* LIRE  */
    AFFICHER = 273,                /* AFFICHER  */
    TYPE_ENTIER = 274,             /* TYPE_ENTIER  */
    TYPE_REEL = 275,               /* TYPE_REEL  */
    TYPE_CHAINE = 276,             /* TYPE_CHAINE  */
    PROGRAMME = 277,               /* PROGRAMME  */
    FINPROGRAMME = 278,            /* FINPROGRAMME  */
    FONCTION = 279,                /* FONCTION  */
    RETOURNER = 280,               /* RETOURNER  */
    REPETER_JUSQUA = 281,          /* REPETER_JUSQUA  */
    FIN_REPETER = 282,             /* FIN_REPETER  */
    SWITCH = 283,                  /* SWITCH  */
    CASE = 284,                    /* CASE  */
    DEFAULT = 285,                 /* DEFAULT  */
    BREAK = 286,                   /* BREAK  */
    PLUS = 287,                    /* PLUS  */
    MOINS = 288,                   /* MOINS  */
    MULT = 289,                    /* MULT  */
    DIV = 290,                     /* DIV  */
    MODULO = 291,                  /* MODULO  */
    AFFECTATION = 292,             /* AFFECTATION  */
    EGAL = 293,                    /* EGAL  */
    DIFFERENT = 294,               /* DIFFERENT  */
    INFERIEUR = 295,               /* INFERIEUR  */
    SUPERIEUR = 296,               /* SUPERIEUR  */
    INFERIEUR_EGAL = 297,          /* INFERIEUR_EGAL  */
    SUPERIEUR_EGAL = 298,          /* SUPERIEUR_EGAL  */
    ET = 299,                      /* ET  */
    OU = 300,                      /* OU  */
    NON = 301                      /* NON  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 41 "exo20-23.y"

    int entier;
    double reel;
    char *chaine;

#line 116 "exo20-23.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_EXO20_23_TAB_H_INCLUDED  */
