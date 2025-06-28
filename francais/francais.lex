%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "francais.tab.h"
int ligne = 1;
%}

entier [0-9]+
reel [0-9]+\.[0-9]+
variable [a-zA-Z_][a-zA-Z0-9_]*
chaine \"[^\"]*\"
operateur \+|\-|\*|\/|\%|\=|\=\=|\!\=|\<|\>|\<\=|\>\=|\&\&|\|\||\!
parenthese \(|\)
accolade \{|\}
delimiteur \;|\,|\:

%%

{entier}     { yylval.entier = atoi(yytext); return ENTIER; }
{reel}       { yylval.reel = atof(yytext); return REEL; }
{chaine}     { yylval.chaine = strdup(yytext); return CHAINE; }


"si"            { return SI; }
"alors"         { return ALORS; }
"sinon"         { return SINON; }
"fsi"           { return FINSI; }


"tantque"       { return TANT_QUE; }
"faire"         { return FAIRE; }
"fait"          { return FINTANTQUE; }
"pour"          { return POUR; }
"jusqua"        { return A; }
"suivant"       { return FINPOUR; }
"pas"           { return PAS; }

"lire"          { return LIRE; }
"afficher"      { return AFFICHER; }


"entier"        { return TYPE_ENTIER; }
"reel"          { return TYPE_REEL; }
"chaine"        { return TYPE_CHAINE; }


"programme"     { return PROGRAMME; }
"finprog"       { return FINPROGRAMME; }
"fonction"      { return FONCTION; }
"retourner"     { return RETOURNER; }

"repeter"       { return REPETER_JUSQUA; }
"jusquace"      { return FIN_REPETER; }

"selon"         { return SWITCH; }
"cas"           { return CASE; }
"defaut"        { return DEFAULT; }
"arreter"       { return BREAK; }


"vrai"          { yylval.entier = 1; return ENTIER; }
"faux"          { yylval.entier = 0; return ENTIER; }


"=="         { return EGAL; }
"!="         { return DIFFERENT; }
"<="         { return INFERIEUR_EGAL; }
">="         { return SUPERIEUR_EGAL; }
"&&"         { return ET; }
"||"         { return OU; }

{operateur}  {
    switch(yytext[0]) {
        case '+': return PLUS;
        case '-': return MOINS;
        case '*': return MULT;
        case '/': return DIV;
        case '%': return MODULO;
        case '=': return AFFECTATION;
        case '<': return INFERIEUR;
        case '>': return SUPERIEUR;
        case '!': return NON;
        default: return yytext[0];
    }
}

{parenthese} { return yytext[0]; }
{accolade}   { return yytext[0]; }
{delimiteur} { return yytext[0]; }
{variable}   { yylval.chaine = strdup(yytext); return VARIABLE; }

\n           { ligne++; }
[ \t\r]      ; 
"//".*       ; 
"/*"([^*]|\*+[^*/])*\*+"/" ; 
.            { printf("Caractère non reconnu: %s à la ligne %d\n", yytext, ligne); }

%%

int yywrap() {
    return 1;
}