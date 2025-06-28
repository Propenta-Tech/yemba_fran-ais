%{
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
%}

%union {
    int entier;
    double reel;
    char *chaine;
}

%token <entier> ENTIER
%token <reel> REEL
%token <chaine> CHAINE VARIABLE
%token SI ALORS SINON FINSI
%token TANT_QUE FAIRE FINTANTQUE
%token POUR A FINPOUR PAS
%token LIRE AFFICHER
%token TYPE_ENTIER TYPE_REEL TYPE_CHAINE
%token PROGRAMME FINPROGRAMME FONCTION RETOURNER
%token REPETER_JUSQUA FIN_REPETER SWITCH CASE DEFAULT BREAK
%token PLUS MOINS MULT DIV MODULO
%token AFFECTATION EGAL DIFFERENT INFERIEUR SUPERIEUR INFERIEUR_EGAL SUPERIEUR_EGAL
%token ET OU NON

%left OU
%left ET
%left EGAL DIFFERENT INFERIEUR SUPERIEUR INFERIEUR_EGAL SUPERIEUR_EGAL
%left PLUS MOINS
%left MULT DIV MODULO
%right NON
%right AFFECTATION

%type <chaine> expression condition type_variable

%%

programme:
    PROGRAMME liste_instructions FINPROGRAMME {
        printf("Compilation terminée avec succès !\n");
    }
    | liste_instructions {
        printf("Compilation terminée avec succès !\n");
    }
    ;

liste_instructions:
    instruction
    | liste_instructions instruction
    ;

instruction:
    declaration ';'
    | affectation ';'
    | lecture ';'
    | affichage ';'
    | condition_si
    | boucle_tant_que
    | boucle_pour
    | boucle_repeter_jusqua
    | switch_case
    | bloc_instructions
    ;

bloc_instructions:
    '{' {
        fprintf(fichier_sortie, "{\n");
        niveau_indentation++;
    }
    liste_instructions
    '}' {
        niveau_indentation--;
        indenter();
        fprintf(fichier_sortie, "}\n");
    }
    ;

declaration:
    type_variable VARIABLE {
        indenter();
        fprintf(fichier_sortie, "%s %s;\n", $1, $2);
        free($1);
        free($2);
    }
    | type_variable VARIABLE AFFECTATION expression {
        indenter();
        fprintf(fichier_sortie, "%s %s = %s;\n", $1, $2, $4);
        free($1);
        free($2);
        free($4);
    }
    ;

type_variable:
    TYPE_ENTIER { $$ = strdup("int"); }
    | TYPE_REEL { $$ = strdup("double"); }
    | TYPE_CHAINE { $$ = strdup("char*"); }
    ;

affectation:
    VARIABLE AFFECTATION expression {
        indenter();
        fprintf(fichier_sortie, "%s = %s;\n", $1, $3);
        free($1);
        free($3);
    }
    ;

lecture:
    LIRE VARIABLE {
        indenter();
        fprintf(fichier_sortie, "scanf(\"%%d\", &%s);\n", $2);
        free($2);
    }
    ;

affichage:
    AFFICHER expression {
        indenter();
        fprintf(fichier_sortie, "printf(\"%%d\\n\", %s);\n", $2);
        free($2);
    }
    | AFFICHER CHAINE {
        indenter();
        fprintf(fichier_sortie, "printf(%s);\n", $2);
        free($2);
    }
    ;

condition_si:
    SI condition ALORS {
        indenter();
        fprintf(fichier_sortie, "if (%s) {\n", $2);
        niveau_indentation++;
        free($2);
    }
    liste_instructions
    sinon_optionnel
    FINSI {
        niveau_indentation--;
        indenter();
        fprintf(fichier_sortie, "}\n");
    }
    ;

sinon_optionnel:
    /* vide */ { /* rien à faire */ }
    | SINON {
        niveau_indentation--;
        indenter();
        fprintf(fichier_sortie, "} else {\n");
        niveau_indentation++;
    }
    liste_instructions
    ;

boucle_tant_que:
    TANT_QUE condition FAIRE {
        indenter();
        fprintf(fichier_sortie, "while (%s) {\n", $2);
        niveau_indentation++;
        free($2);
    }
    liste_instructions
    FINTANTQUE {
        niveau_indentation--;
        indenter();
        fprintf(fichier_sortie, "}\n");
    }
    ;

boucle_pour:
    POUR VARIABLE A expression A expression FAIRE {
        indenter();
        fprintf(fichier_sortie, "for (%s = %s; %s <= %s; %s++) {\n", 
                $2, $4, $2, $6, $2);
        niveau_indentation++;
        free($2);
        free($4);
        free($6);
    }
    liste_instructions
    FINPOUR {
        niveau_indentation--;
        indenter();
        fprintf(fichier_sortie, "}\n");
    }
    ;

boucle_repeter_jusqua:
    REPETER_JUSQUA {
        indenter();
        fprintf(fichier_sortie, "do {\n");
        niveau_indentation++;
    }
    liste_instructions
    FIN_REPETER condition {
        niveau_indentation--;
        indenter();
        fprintf(fichier_sortie, "} while (!(%s));\n", $5);
        free($5);
    }
    ;

switch_case:
    SWITCH '(' expression ')' '{' {
        indenter();
        fprintf(fichier_sortie, "switch (%s) {\n", $3);
        niveau_indentation++;
        free($3);
    }
    liste_cases
    default_optionnel
    '}' {
        niveau_indentation--;
        indenter();
        fprintf(fichier_sortie, "}\n");
    }
    ;

liste_cases:
    case
    | liste_cases case
    ;

case:
    CASE ENTIER ':' {
        current_case_value = $2;
        indenter();
        fprintf(fichier_sortie, "case %d:\n", current_case_value);
        niveau_indentation++;
    }
    liste_instructions {
        niveau_indentation--;
    }
    break_optionnel
    ;

break_optionnel:
    /* vide */
    | BREAK ';' {
        indenter();
        fprintf(fichier_sortie, "break;\n");
    }
    ;

default_optionnel:
    /* vide */
    | DEFAULT ':' {
        indenter();
        fprintf(fichier_sortie, "default:\n");
        niveau_indentation++;
    }
    liste_instructions {
        niveau_indentation--;
    }
    break_optionnel
    ;

condition:
    expression EGAL expression {
        char *result = malloc(strlen($1) + strlen($3) + 10);
        sprintf(result, "%s == %s", $1, $3);
        free($1);
        free($3);
        $$ = result;
    }
    | expression DIFFERENT expression {
        char *result = malloc(strlen($1) + strlen($3) + 10);
        sprintf(result, "%s != %s", $1, $3);
        free($1);
        free($3);
        $$ = result;
    }
    | expression INFERIEUR expression {
        char *result = malloc(strlen($1) + strlen($3) + 10);
        sprintf(result, "%s < %s", $1, $3);
        free($1);
        free($3);
        $$ = result;
    }
    | expression SUPERIEUR expression {
        char *result = malloc(strlen($1) + strlen($3) + 10);
        sprintf(result, "%s > %s", $1, $3);
        free($1);
        free($3);
        $$ = result;
    }
    | expression INFERIEUR_EGAL expression {
        char *result = malloc(strlen($1) + strlen($3) + 10);
        sprintf(result, "%s <= %s", $1, $3);
        free($1);
        free($3);
        $$ = result;
    }
    | expression SUPERIEUR_EGAL expression {
        char *result = malloc(strlen($1) + strlen($3) + 10);
        sprintf(result, "%s >= %s", $1, $3);
        free($1);
        free($3);
        $$ = result;
    }
    | condition ET condition {
        char *result = malloc(strlen($1) + strlen($3) + 10);
        sprintf(result, "%s && %s", $1, $3);
        free($1);
        free($3);
        $$ = result;
    }
    | condition OU condition {
        char *result = malloc(strlen($1) + strlen($3) + 10);
        sprintf(result, "%s || %s", $1, $3);
        free($1);
        free($3);
        $$ = result;
    }
    | NON condition {
        char *result = malloc(strlen($2) + 10);
        sprintf(result, "!(%s)", $2);
        free($2);
        $$ = result;
    }
    | '(' condition ')' {
        char *result = malloc(strlen($2) + 10);
        sprintf(result, "(%s)", $2);
        free($2);
        $$ = result;
    }
    ;

expression:
    ENTIER {
        char *result = malloc(20);
        sprintf(result, "%d", $1);
        $$ = result;
    }
    | REEL {
        char *result = malloc(30);
        sprintf(result, "%.6f", $1);
        $$ = result;
    }
    | VARIABLE {
        $$ = $1;
    }
    | expression PLUS expression {
        char *result = malloc(strlen($1) + strlen($3) + 10);
        sprintf(result, "%s + %s", $1, $3);
        free($1);
        free($3);
        $$ = result;
    }
    | expression MOINS expression {
        char *result = malloc(strlen($1) + strlen($3) + 10);
        sprintf(result, "%s - %s", $1, $3);
        free($1);
        free($3);
        $$ = result;
    }
    | expression MULT expression {
        char *result = malloc(strlen($1) + strlen($3) + 10);
        sprintf(result, "%s * %s", $1, $3);
        free($1);
        free($3);
        $$ = result;
    }
    | expression DIV expression {
        char *result = malloc(strlen($1) + strlen($3) + 10);
        sprintf(result, "%s / %s", $1, $3);
        free($1);
        free($3);
        $$ = result;
    }
    | expression MODULO expression {
        char *result = malloc(strlen($1) + strlen($3) + 10);
        sprintf(result, "%s %% %s", $1, $3);
        free($1);
        free($3);
        $$ = result;
    }
    | MOINS expression {
        char *result = malloc(strlen($2) + 10);
        sprintf(result, "-%s", $2);
        free($2);
        $$ = result;
    }
    | '(' expression ')' {
        char *result = malloc(strlen($2) + 10);
        sprintf(result, "(%s)", $2);
        free($2);
        $$ = result;
    }
    ;

%%

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
        printf("Erreur: impossible de créer le fichier de sortie %s\n", argv[2]);
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
        printf("Code C généré dans %s\n", argv[2]);
    }
    
    return result;
}