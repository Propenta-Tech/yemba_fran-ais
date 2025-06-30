%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "exo20-23.tab.h"
int ligne = 1;
%}

%%

[0-9]+                  { yylval.entier = atoi(yytext); return ENTIER; }
[0-9]+\.[0-9]+          { yylval.reel = atof(yytext); return REEL; }
\"[^\"]*\"              { yylval.chaine = strdup(yytext); return CHAINE; }

"yi"                    { return SI; }
"lo"                    { return ALORS; }
"lelu"                  { return SINON; }
"lemakyi"               { return FINSI; }

"lijet"                 { return TANT_QUE; }
"leghu"                 { return FAIRE; }
"lemak"                 { return FINTANTQUE; }
"lighe"                 { return POUR; }
"leko"                  { return A; }
"sueh"                  { return FINPOUR; }

"letong"                { return LIRE; }
"leti"                  { return AFFICHER; }

"nomba"                 { return TYPE_ENTIER; }
"nomba_ke"              { return TYPE_REEL; }
"makon"                 { return TYPE_CHAINE; }

"yisue"                 { return PROGRAMME; }
"kemak"                 { return FINPROGRAMME; }

"kesue_keto"            { return REPETER_JUSQUA; }
"kemak_sue"             { return FIN_REPETER; }

"sontoh"                { return SWITCH; }
"ndap"                  { return CASE; }
"kamto"                 { return DEFAULT; }
"kap"                   { return BREAK; }

"eeh"                   { return QUESTION; }
"kamsi"                 { return DEUX_POINTS; }

"++"                    { return INCREMENT; }
"--"                    { return DECREMENT; }
"+="                    { return PLUS_EGAL; }
"-="                    { return MOINS_EGAL; }

"ee"                    { yylval.entier = 1; return ENTIER; }
"angang"                { yylval.entier = 0; return ENTIER; }

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
":"                     { return ':'; }

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