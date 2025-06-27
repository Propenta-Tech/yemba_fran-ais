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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    INTEGER = 258,                 /* INTEGER  */
    VARIABLE = 259,                /* VARIABLE  */
    PLUS = 260,                    /* PLUS  */
    MINUS = 261,                   /* MINUS  */
    MULTIPLY = 262,                /* MULTIPLY  */
    DIVIDE = 263,                  /* DIVIDE  */
    MODULO = 264,                  /* MODULO  */
    ASSIGN = 265,                  /* ASSIGN  */
    SEMICOLON = 266,               /* SEMICOLON  */
    EQ = 267,                      /* EQ  */
    NE = 268,                      /* NE  */
    LT = 269,                      /* LT  */
    GT = 270,                      /* GT  */
    LE = 271,                      /* LE  */
    GE = 272,                      /* GE  */
    LPAREN = 273,                  /* LPAREN  */
    RPAREN = 274,                  /* RPAREN  */
    LBRACE = 275,                  /* LBRACE  */
    RBRACE = 276,                  /* RBRACE  */
    COLON = 277,                   /* COLON  */
    PRINT = 278,                   /* PRINT  */
    READ = 279,                    /* READ  */
    IF = 280,                      /* IF  */
    THEN = 281,                    /* THEN  */
    ELSE = 282,                    /* ELSE  */
    FI = 283,                      /* FI  */
    WHILE = 284,                   /* WHILE  */
    DO = 285,                      /* DO  */
    DONE = 286,                    /* DONE  */
    SWITCH = 287,                  /* SWITCH  */
    CASE = 288,                    /* CASE  */
    DEFAULT = 289,                 /* DEFAULT  */
    BREAK = 290,                   /* BREAK  */
    FOR = 291,                     /* FOR  */
    TO = 292,                      /* TO  */
    NEXT = 293,                    /* NEXT  */
    STEP = 294,                    /* STEP  */
    UMINUS = 295                   /* UMINUS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define INTEGER 258
#define VARIABLE 259
#define PLUS 260
#define MINUS 261
#define MULTIPLY 262
#define DIVIDE 263
#define MODULO 264
#define ASSIGN 265
#define SEMICOLON 266
#define EQ 267
#define NE 268
#define LT 269
#define GT 270
#define LE 271
#define GE 272
#define LPAREN 273
#define RPAREN 274
#define LBRACE 275
#define RBRACE 276
#define COLON 277
#define PRINT 278
#define READ 279
#define IF 280
#define THEN 281
#define ELSE 282
#define FI 283
#define WHILE 284
#define DO 285
#define DONE 286
#define SWITCH 287
#define CASE 288
#define DEFAULT 289
#define BREAK 290
#define FOR 291
#define TO 292
#define NEXT 293
#define STEP 294
#define UMINUS 295

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
