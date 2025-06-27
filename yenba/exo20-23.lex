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
"leti"          { return PRINT; }
"letɔ̄ŋ"         { return READ; }
"yi"            { return IF; }
"lɔ"            { return THEN; }
"lelʉ"          { return ELSE; }
"lemakyi"       { return FI; }
"lijɛt"         { return WHILE; }
"leghʉ"         { return DO; }
"lemak"         { return DONE; }
"sontoh"        { return SWITCH; }
"ndap"          { return CASE; }
"kamto"         { return DEFAULT; }
"kap"           { return BREAK; }
"ligʉe"         { return FOR; }  
"leko"          { return TO; }
"sueh"          { return NEXT; }
"tep"           { return STEP; }
{espaces}       { /* ignorer les espaces */ }
{commentaire}   { /* ignorer les commentaires */ }
.               { 
                  printf("❌ Erreur lexicale: caractère non reconnu '%c' (code %d)\n", 
                         *yytext, *yytext); 
                  return *yytext;
                }
%%