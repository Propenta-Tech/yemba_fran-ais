%{
#include "simple.h"
extern FILE *yyout;
%}
%option noyywrap

entier      [0-9]+
variable    [a-zA-Z]
espaces     [ \t\n]+
commentaire "//".*

%%

{entier}        { yylval = atoi(yytext); return INTEGER; }
{variable}      { yylval = *yytext; return VARIABLE; }

"+"             { return PLUS; }
"-"             { return MINUS; }
"*"             { return MULTIPLY; }
"/"             { return DIVIDE; }
"%"             { return MODULO; }
"="             { return ASSIGN; }
";"             { return SEMICOLON; }

"=="            { return EQ; }
"!="            { return NE; }
"<="            { return LE; }
">="            { return GE; }
"<"             { return LT; }
">"             { return GT; }

"("             { return LPAREN; }
")"             { return RPAREN; }
"{"             { return LBRACE; }
"}"             { return RBRACE; }
":"             { return COLON; }

"afficher"      { return PRINT; }
"lire"          { return READ; }
"si"            { return IF; }
"alors"         { return THEN; }
"sinon"         { return ELSE; }
"fsi"           { return FI; }
"tantque"       { return WHILE; }
"faire"         { return DO; }
"fait"          { return DONE; }
"selon"         { return SWITCH; }
"cas"           { return CASE; }
"defaut"        { return DEFAULT; }
"arreter"       { return BREAK; }
"pour"          { return FOR; }  
"jusqua"        { return TO; }
"suivant"       { return NEXT; }
"pas"           { return STEP; }

{espaces}       { /* ignorer les espaces */ }
{commentaire}   { /* ignorer les commentaires */ }

.               { 
                  printf("❌ Erreur lexicale: caractère non reconnu '%c' (code %d)\n", 
                         *yytext, *yytext); 
                  return *yytext;
                }

%%
