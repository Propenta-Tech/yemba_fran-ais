%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "francais.tab.h"
int ligne = 1;
%}

%%

[0-9]+                  { yylval.entier = atoi(yytext); return ENTIER; }
[0-9]+\.[0-9]+          { yylval.reel = atof(yytext); return REEL; }
\"[^\"]*\"              { yylval.chaine = strdup(yytext); return CHAINE; }

"si"                    { return SI; }
"alors"                 { return ALORS; }
"sinon"                 { return SINON; }
"fsi"                   { return FINSI; }

"tantque"               { return TANT_QUE; }
"faire"                 { return FAIRE; }
"fait"                  { return FINTANTQUE; }
"pour"                  { return POUR; }
"jusqua"                { return A; }
"suivant"               { return FINPOUR; }

"lire"                  { return LIRE; }
"afficher"              { return AFFICHER; }

"entier"                { return TYPE_ENTIER; }
"reel"                  { return TYPE_REEL; }
"chaine"                { return TYPE_CHAINE; }

"programme"             { return PROGRAMME; }
"finprog"               { return FINPROGRAMME; }

"repeter"               { return REPETER_JUSQUA; }
"jusquace"              { return FIN_REPETER; }

"selon"                 { return SWITCH; }
"cas"                   { return CASE; }
"defaut"                { return DEFAULT; }
"arreter"               { return BREAK; }

"?"                     { return QUESTION; }
":"                     { return DEUX_POINTS; }

"++"                    { return INCREMENT; }
"--"                    { return DECREMENT; }
"+="                    { return PLUS_EGAL; }
"-="                    { return MOINS_EGAL; }

"vrai"                  { yylval.entier = 1; return ENTIER; }
"faux"                  { yylval.entier = 0; return ENTIER; }

"=="                    { return EGAL; }
"!="                    { return DIFFERENT; }
"<="                    { return INFERIEUR_EGAL; }
">="                    { return SUPERIEUR_EGAL; }
"&&"                    { return ET; }
"||"                    { return OU; }

"+"                     { return PLUS; }
"-"                     { return MOINS; }
"*"                     { return MULT; }
"/"                     { return DIV; }
"%"                     { return MODULO; }
"="                     { return AFFECTATION; }
"<"                     { return INFERIEUR; }
">"                     { return SUPERIEUR; }
"!"                     { return NON; }

"("                     { return '('; }
")"                     { return ')'; }
"{"                     { return '{'; }
"}"                     { return '}'; }
"["                     { return '['; }
"]"                     { return ']'; }
";"                     { return ';'; }
","                     { return ','; }

[a-zA-Z_][a-zA-Z0-9_]*  { yylval.chaine = strdup(yytext); return VARIABLE; }

\n                      { ligne++; }
[ \t\r]                 ;
"//".*                  ;
"/*"([^*]|\*+[^*/])*\*+"/" ;

.                       { printf("Caractère non reconnu: %s à la ligne %d\n", yytext, ligne); }

%%

int yywrap() {
    return 1;
}