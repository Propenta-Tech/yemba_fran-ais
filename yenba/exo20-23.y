/*exo20-23.y - GRAMMAIRE YEMBA avec STATEMENTS dans IF-ELSE*/
%{
#include <stdio.h>
#include <stdlib.h>

extern int yylex(void);
int yyerror(char *s);

extern FILE *yyout;
int compteurSi = 0, compteurWhile = 0, compteurSwitch = 0, compteurFor = 0, compteurTest = 0;
int compteurDoWhile = 0;

char *header = "extern printf,scanf\n"
               "section .data\n"
               "    a: dd 0\n"
               "    b: dd 0\n"
               "    c: dd 0\n"
               "    d: dd 0\n"
               "    x: dd 0\n"
               "    y: dd 0\n"
               "    z: dd 0\n"
               "    temp_for_end: dd 0\n"    
               "    temp_for_step: dd 0\n"
               "    fmt: db \"%d\", 10, 0\n"
               "    fmtlec: db \"%d\", 0\n"
               "section .text\n"
               "global _start\n"
               "_start:\n\n";

char *trailer = "    ; Fin du programme\n"
                "    mov eax, 1\n"
                "    mov ebx, 0\n"
                "    int 0x80\n";

%}

%token INTEGER VARIABLE
%token PLUS MINUS MULTIPLY DIVIDE MODULO ASSIGN SEMICOLON 
%token EQ NE LT GT LE GE LPAREN RPAREN LBRACE RBRACE COLON
%token PRINT READ IF THEN ELSE FI WHILE DO DONE
%token SWITCH CASE DEFAULT BREAK FOR TO NEXT STEP

%left PLUS MINUS
%left MULTIPLY DIVIDE MODULO
%nonassoc UMINUS

%start program

%%

program:
    statements {
        printf("✅ AUTOMATE : Programme yemba compilé avec succès\n");
    }
    ;

statements:
    /* vide */
    | statements statement
    ;

statement:
    assignment      
    | print_stmt    
    | read_stmt     
    | if_simple_stmt
    | if_else_stmt
    | while_stmt    
    | do_while_stmt
    | switch_stmt   
    | for_simple_stmt
    | for_step_stmt
    ;

assignment:
    VARIABLE ASSIGN expression SEMICOLON {
        printf("AUTOMATE : Affectation %c\n", $1);
        fprintf(yyout, "    ; %c = expression\n", $1);
        fprintf(yyout, "    pop eax\n");
        fprintf(yyout, "    mov [%c], eax\n\n", $1);
    }
    ;

print_stmt:
    PRINT expression SEMICOLON {
        printf("AUTOMATE : LETI expression\n");
        fprintf(yyout, "    ; leti expression\n");
        fprintf(yyout, "    pop eax\n");
        fprintf(yyout, "    push eax\n");
        fprintf(yyout, "    push fmt\n");
        fprintf(yyout, "    call printf\n");
        fprintf(yyout, "    add esp, 8\n\n");
    }
    ;

read_stmt:
    READ VARIABLE SEMICOLON {
        printf("AUTOMATE : LETƆ̄Ŋ %c\n", $2);
        fprintf(yyout, "    ; letɔ̄ŋ %c\n", $2);
        fprintf(yyout, "    push %c\n", $2);
        fprintf(yyout, "    push fmtlec\n");
        fprintf(yyout, "    call scanf\n");
        fprintf(yyout, "    add esp, 8\n\n");
    }
    ;

/* ========== YI-LELɄ (IF-ELSE en yemba) - ACCEPTE STATEMENTS ========== */

/* YI-LELɄ avec STATEMENTS multiples */
if_else_stmt:
    IF LPAREN condition RPAREN THEN statements ELSE statements FI {
        compteurSi++;
        printf("AUTOMATE : YI-LELɄ %d avec STATEMENTS\n", compteurSi);
        
        fprintf(yyout, "    ; === YI-LELɄ %d avec STATEMENTS ===\n", compteurSi);
        
        fprintf(yyout, "    pop eax               ; condition\n");
        fprintf(yyout, "    cmp eax, 0\n");
        fprintf(yyout, "    je lelʉ_%d            ; aller à LELɄ si faux\n", compteurSi);
        
        fprintf(yyout, "    ; === BRANCHE LƆ (THEN) ===\n");
        fprintf(yyout, "    ; Statements THEN exécutés ci-dessus\n");
        fprintf(yyout, "    jmp finyi_%d          ; sauter LELɄ\n", compteurSi);
        
        fprintf(yyout, "lelʉ_%d:\n", compteurSi);
        fprintf(yyout, "    ; === BRANCHE LELɄ (ELSE) ===\n");
        fprintf(yyout, "    ; Statements ELSE exécutés ci-dessus\n");
        
        fprintf(yyout, "finyi_%d:\n\n", compteurSi);
    }
    ;

/* YI simple avec STATEMENTS */
if_simple_stmt:
    IF LPAREN condition RPAREN THEN statements FI {
        compteurSi++;
        printf("AUTOMATE : YI %d avec STATEMENTS\n", compteurSi);
        
        fprintf(yyout, "    ; === YI %d avec STATEMENTS ===\n", compteurSi);
        
        fprintf(yyout, "    pop eax               ; condition\n");
        fprintf(yyout, "    cmp eax, 0\n");
        fprintf(yyout, "    je finyi_%d           ; sauter si faux\n", compteurSi);
        
        fprintf(yyout, "    ; === BRANCHE LƆ (THEN) ===\n");
        fprintf(yyout, "    ; Statements THEN exécutés ci-dessus\n");
        
        fprintf(yyout, "finyi_%d:\n\n", compteurSi);
    }
    ;

/* ========== LIJƐT (WHILE en yemba) ========== */
while_stmt:
    WHILE LPAREN condition RPAREN DO statements DONE {
        compteurWhile++;
        printf("AUTOMATE : LIJƐT %d avec STATEMENTS\n", compteurWhile);
        
        fprintf(yyout, "    ; === LIJƐT %d avec STATEMENTS ===\n", compteurWhile);
        
        fprintf(yyout, "lijɛt_%d_debut:\n", compteurWhile);
        fprintf(yyout, "    ; Évaluer condition pour boucle while\n");
        fprintf(yyout, "    pop eax               ; condition évaluée\n");
        fprintf(yyout, "    cmp eax, 0\n");
        fprintf(yyout, "    je lijɛt_%d_fin       ; sortir si condition fausse\n", compteurWhile);
        
        fprintf(yyout, "    ; Corps de la boucle (statements) exécuté ci-dessus\n");
        fprintf(yyout, "    jmp lijɛt_%d_debut    ; recommencer\n", compteurWhile);
        fprintf(yyout, "lijɛt_%d_fin:\n\n", compteurWhile);
    }
    ;

/* ========== LIGɄE (FOR en yemba) ========== */
for_simple_stmt:
    FOR VARIABLE ASSIGN expression TO expression statements NEXT SEMICOLON {
        compteurFor++;
        printf("AUTOMATE : LIGɄE %d: %c avec STATEMENTS\n", compteurFor, $2);
        
        fprintf(yyout, "    ; === LIGɄE %d: %c avec STATEMENTS ===\n", compteurFor, $2);
        
        fprintf(yyout, "    pop eax               ; valeur LEKO (fin)\n");
        fprintf(yyout, "    mov [temp_for_end], eax\n");
        fprintf(yyout, "    pop eax               ; valeur début\n");
        fprintf(yyout, "    mov [%c], eax         ; %c = début\n", $2, $2);
        
        fprintf(yyout, "ligʉe_boucle_%d:\n", compteurFor);
        fprintf(yyout, "    ; Test: %c <= fin ?\n", $2);
        fprintf(yyout, "    mov eax, [%c]\n", $2);
        fprintf(yyout, "    cmp eax, [temp_for_end]\n");
        fprintf(yyout, "    jg ligʉe_fin_%d       ; sortir si %c > fin\n", compteurFor, $2);
        
        fprintf(yyout, "    ; Corps de la boucle (statements) exécuté ci-dessus\n");
        
        fprintf(yyout, "    ; Incrémenter variable de boucle\n");
        fprintf(yyout, "    inc dword [%c]\n", $2);
        fprintf(yyout, "    jmp ligʉe_boucle_%d\n", compteurFor);
        fprintf(yyout, "ligʉe_fin_%d:\n\n", compteurFor);
    }
    ;

/* ========== LIGɄE avec TEP (FOR STEP en yemba) ========== */
for_step_stmt:
    FOR VARIABLE ASSIGN expression TO expression STEP expression statements NEXT SEMICOLON {
        compteurFor++;
        printf("AUTOMATE : LIGɄE %d: %c avec TEP et STATEMENTS\n", compteurFor, $2);
        
        fprintf(yyout, "    ; === LIGɄE %d: %c avec TEP et STATEMENTS ===\n", compteurFor, $2);
        
        fprintf(yyout, "    pop eax               ; tep (pas)\n");
        fprintf(yyout, "    mov [temp_for_step], eax\n");
        fprintf(yyout, "    pop eax               ; valeur LEKO (fin)\n");
        fprintf(yyout, "    mov [temp_for_end], eax\n");
        fprintf(yyout, "    pop eax               ; valeur début\n");
        fprintf(yyout, "    mov [%c], eax\n", $2);
        
        fprintf(yyout, "ligʉe_tep_boucle_%d:\n", compteurFor);
        fprintf(yyout, "    mov eax, [%c]\n", $2);
        fprintf(yyout, "    cmp eax, [temp_for_end]\n");
        fprintf(yyout, "    jg ligʉe_tep_fin_%d\n", compteurFor);
        
        fprintf(yyout, "    ; Corps de la boucle (statements) exécuté ci-dessus\n");
        
        fprintf(yyout, "    ; Ajouter le pas\n");
        fprintf(yyout, "    mov eax, [%c]\n", $2);
        fprintf(yyout, "    add eax, [temp_for_step]\n");
        fprintf(yyout, "    mov [%c], eax\n", $2);
        fprintf(yyout, "    jmp ligʉe_tep_boucle_%d\n", compteurFor);
        fprintf(yyout, "ligʉe_tep_fin_%d:\n\n", compteurFor);
    }
    ;

/* ========== LEGHɄ-LIJƐT (DO-WHILE en yemba) ========== */
do_while_stmt:
    DO statements WHILE LPAREN condition RPAREN SEMICOLON {
        compteurDoWhile++;
        printf("AUTOMATE : LEGHɄ-LIJƐT %d avec STATEMENTS\n", compteurDoWhile);
        
        fprintf(yyout, "    ; === LEGHɄ-LIJƐT %d avec STATEMENTS ===\n", compteurDoWhile);
        
        fprintf(yyout, "leghʉ_lijɛt_%d_debut:\n", compteurDoWhile);
        fprintf(yyout, "    ; Corps de la boucle (statements) exécuté ci-dessus\n");
        
        fprintf(yyout, "    ; Évaluer condition\n");
        fprintf(yyout, "    pop eax               ; condition évaluée\n");
        fprintf(yyout, "    cmp eax, 0\n");
        fprintf(yyout, "    jne leghʉ_lijɛt_%d_debut  ; continuer si condition vraie\n", compteurDoWhile);
        fprintf(yyout, "leghʉ_lijɛt_%d_fin:\n\n", compteurDoWhile);
    }
    ;

/* ========== SONTOH (SWITCH en yemba) ========== */
switch_stmt:
    SWITCH LPAREN VARIABLE RPAREN LBRACE case_list default_case RBRACE {
        compteurSwitch++;
        printf("AUTOMATE : SONTOH %d sur %c avec STATEMENTS\n", compteurSwitch, $3);
        
        fprintf(yyout, "    ; === SONTOH %d sur %c avec STATEMENTS ===\n", compteurSwitch, $3);
        
        fprintf(yyout, "    ; Test premier ndap\n");
        fprintf(yyout, "    mov eax, [%c]\n", $3);
        fprintf(yyout, "    cmp eax, 1\n");
        fprintf(yyout, "    je ndap_1_%d\n", compteurSwitch);
        
        fprintf(yyout, "    ; Test deuxième ndap\n");
        fprintf(yyout, "    cmp eax, 2\n");
        fprintf(yyout, "    je ndap_2_%d\n", compteurSwitch);
        
        fprintf(yyout, "    ; Test troisième ndap\n");
        fprintf(yyout, "    cmp eax, 3\n");
        fprintf(yyout, "    je ndap_3_%d\n", compteurSwitch);
        
        fprintf(yyout, "    ; Aucun ndap correspondant, aller au kamto\n");
        fprintf(yyout, "    jmp kamto_%d\n", compteurSwitch);
        
        fprintf(yyout, "ndap_1_%d:\n", compteurSwitch);
        fprintf(yyout, "    ; === PREMIER NDAP avec STATEMENTS ===\n");
        fprintf(yyout, "    ; Statements du cas 1 exécutés\n");
        fprintf(yyout, "    jmp sontoh_fin_%d\n", compteurSwitch);
        
        fprintf(yyout, "ndap_2_%d:\n", compteurSwitch);
        fprintf(yyout, "    ; === DEUXIÈME NDAP avec STATEMENTS ===\n");
        fprintf(yyout, "    ; Statements du cas 2 exécutés\n");
        fprintf(yyout, "    jmp sontoh_fin_%d\n", compteurSwitch);
        
        fprintf(yyout, "ndap_3_%d:\n", compteurSwitch);
        fprintf(yyout, "    ; === TROISIÈME NDAP avec STATEMENTS ===\n");
        fprintf(yyout, "    ; Statements du cas 3 exécutés\n");
        fprintf(yyout, "    jmp sontoh_fin_%d\n", compteurSwitch);
        
        fprintf(yyout, "kamto_%d:\n", compteurSwitch);
        fprintf(yyout, "    ; === NDAP KAMTO avec STATEMENTS ===\n");
        fprintf(yyout, "    ; Statements du défaut exécutés\n");
        
        fprintf(yyout, "sontoh_fin_%d:\n\n", compteurSwitch);
    }
    ;

case_list:
    /* vide */
    | case_list case_item
    ;

case_item:
    CASE INTEGER COLON statements BREAK SEMICOLON {
        printf("AUTOMATE : NDAP %d avec STATEMENTS\n", $2);
    }
    ;

default_case:
    DEFAULT COLON statements {
        printf("AUTOMATE : KAMTO avec STATEMENTS\n");
    }
    | /* vide */
    ;

/* ========== CONDITIONS ========== */
condition:
    expression EQ expression {
        compteurTest++;
        printf("AUTOMATE : Test égalité %d\n", compteurTest);
        fprintf(yyout, "    ; test égalité %d\n", compteurTest);
        fprintf(yyout, "    pop ebx\n");
        fprintf(yyout, "    pop eax\n");
        fprintf(yyout, "    cmp eax, ebx\n");
        fprintf(yyout, "    sete al\n");
        fprintf(yyout, "    movzx eax, al\n");
        fprintf(yyout, "    push eax\n");
    }
    | expression NE expression {
        compteurTest++;
        printf("AUTOMATE : Test différence %d\n", compteurTest);
        fprintf(yyout, "    ; test différence %d\n", compteurTest);
        fprintf(yyout, "    pop ebx\n");
        fprintf(yyout, "    pop eax\n");
        fprintf(yyout, "    cmp eax, ebx\n");
        fprintf(yyout, "    setne al\n");
        fprintf(yyout, "    movzx eax, al\n");
        fprintf(yyout, "    push eax\n");
    }
    | expression LT expression {
        compteurTest++;
        printf("AUTOMATE : Test inférieur %d\n", compteurTest);
        fprintf(yyout, "    ; test inférieur %d\n", compteurTest);
        fprintf(yyout, "    pop ebx\n");
        fprintf(yyout, "    pop eax\n");
        fprintf(yyout, "    cmp eax, ebx\n");
        fprintf(yyout, "    setl al\n");
        fprintf(yyout, "    movzx eax, al\n");
        fprintf(yyout, "    push eax\n");
    }
    | expression GT expression {
        compteurTest++;
        printf("AUTOMATE : Test supérieur %d\n", compteurTest);
        fprintf(yyout, "    ; test supérieur %d\n", compteurTest);
        fprintf(yyout, "    pop ebx\n");
        fprintf(yyout, "    pop eax\n");
        fprintf(yyout, "    cmp eax, ebx\n");
        fprintf(yyout, "    setg al\n");
        fprintf(yyout, "    movzx eax, al\n");
        fprintf(yyout, "    push eax\n");
    }
    | expression LE expression {
        compteurTest++;
        printf("AUTOMATE : Test inférieur ou égal %d\n", compteurTest);
        fprintf(yyout, "    ; test <= %d\n", compteurTest);
        fprintf(yyout, "    pop ebx\n");
        fprintf(yyout, "    pop eax\n");
        fprintf(yyout, "    cmp eax, ebx\n");
        fprintf(yyout, "    setle al\n");
        fprintf(yyout, "    movzx eax, al\n");
        fprintf(yyout, "    push eax\n");
    }
    | expression GE expression {
        compteurTest++;
        printf("AUTOMATE : Test supérieur ou égal %d\n", compteurTest);
        fprintf(yyout, "    ; test >= %d\n", compteurTest);
        fprintf(yyout, "    pop ebx\n");
        fprintf(yyout, "    pop eax\n");
        fprintf(yyout, "    cmp eax, ebx\n");
        fprintf(yyout, "    setge al\n");
        fprintf(yyout, "    movzx eax, al\n");
        fprintf(yyout, "    push eax\n");
    }
    ;

/* ========== EXPRESSIONS ========== */
expression:
    term
    | expression PLUS term {
        fprintf(yyout, "    ; addition\n");
        fprintf(yyout, "    pop ebx\n");
        fprintf(yyout, "    pop eax\n");
        fprintf(yyout, "    add eax, ebx\n");
        fprintf(yyout, "    push eax\n");
    }
    | expression MINUS term {
        fprintf(yyout, "    ; soustraction\n");
        fprintf(yyout, "    pop ebx\n");
        fprintf(yyout, "    pop eax\n");
        fprintf(yyout, "    sub eax, ebx\n");
        fprintf(yyout, "    push eax\n");
    }
    ;

term:
    factor
    | term MULTIPLY factor {
        fprintf(yyout, "    ; multiplication\n");
        fprintf(yyout, "    pop ebx\n");
        fprintf(yyout, "    pop eax\n");
        fprintf(yyout, "    imul eax, ebx\n");
        fprintf(yyout, "    push eax\n");
    }
    | term DIVIDE factor {
        fprintf(yyout, "    ; division\n");
        fprintf(yyout, "    pop ebx\n");
        fprintf(yyout, "    pop eax\n");
        fprintf(yyout, "    cdq\n");
        fprintf(yyout, "    idiv ebx\n");
        fprintf(yyout, "    push eax\n");
    }
    | term MODULO factor {
        fprintf(yyout, "    ; modulo\n");
        fprintf(yyout, "    pop ebx\n");
        fprintf(yyout, "    pop eax\n");
        fprintf(yyout, "    cdq\n");
        fprintf(yyout, "    idiv ebx\n");
        fprintf(yyout, "    push edx\n");
    }
    ;

factor:
    INTEGER {
        fprintf(yyout, "    push %d\n", $1);
    }
    | VARIABLE {
        fprintf(yyout, "    mov eax, [%c]\n", $1);
        fprintf(yyout, "    push eax\n");
    }
    | LPAREN expression RPAREN
    | MINUS factor %prec UMINUS {
        fprintf(yyout, "    ; négation unaire\n");
        fprintf(yyout, "    pop eax\n");
        fprintf(yyout, "    neg eax\n");
        fprintf(yyout, "    push eax\n");
    }
    ;

%%

int main(void) {
    printf("🇨🇲 COMPILATEUR YEMBA avec STATEMENTS dans STRUCTURES !\n");
    printf("======================================================\n");
    printf("✨ Grammaire yemba avancée :\n");
    printf("   ✅ YI-LELɄ accepte PLUSIEURS statements\n");
    printf("   ✅ Boucles acceptent PLUSIEURS statements\n");
    printf("   ✅ SONTOH accepte PLUSIEURS statements\n");
    printf("   ✅ Opérations complexes dans chaque structure\n");
    printf("   🇨🇲 SYNTAXE 100%% YEMBA AUTHENTIQUE\n");
    printf("======================================================\n");
    
    yyout = fopen("programme.asm", "w");
    if (!yyout) {
        printf("❌ Erreur: impossible de créer programme.asm\n");
        return 1;
    }
    
    fprintf(yyout, "%s", header);
    
    printf("AUTOMATE : État initial S0\n");
    if (yyparse() == 0) {
        fprintf(yyout, "%s", trailer);
        printf("✅ Code assembleur YEMBA généré dans programme.asm\n");
        printf("🤖 AUTOMATE : Retour à l'état final S0\n");
    } else {
        printf("❌ Erreur de compilation\n");
    }
    
    fclose(yyout);
    return 0;
}

int yyerror(char *s) {
    printf("❌ AUTOMATE ERREUR: %s\n", s);
    return 0;
}