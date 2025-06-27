extern printf,scanf
section .data
    a: dd 0
    b: dd 0
    c: dd 0
    d: dd 0
    x: dd 0
    y: dd 0
    z: dd 0
    temp_for_end: dd 0
    temp_for_step: dd 0
    fmt: db "%d", 10, 0
    fmtlec: db "%d", 0
section .text
global _start
_start:

    push 10
    ; a = expression
    pop eax
    mov [a], eax

    push 3
    ; b = expression
    pop eax
    mov [b], eax

    push 0
    ; c = expression
    pop eax
    mov [c], eax

    push 1
    ; d = expression
    pop eax
    mov [d], eax

    push 5
    ; x = expression
    pop eax
    mov [x], eax

    push 2
    ; y = expression
    pop eax
    mov [y], eax

    push 0
    ; z = expression
    pop eax
    mov [z], eax

    mov eax, [a]
    push eax
    ; leti expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    mov eax, [b]
    push eax
    ; leti expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    push 15
    ; a = expression
    pop eax
    mov [a], eax

    push 10
    ; b = expression
    pop eax
    mov [b], eax

    mov eax, [a]
    push eax
    mov eax, [b]
    push eax
    ; addition
    pop ebx
    pop eax
    add eax, ebx
    push eax
    ; c = expression
    pop eax
    mov [c], eax

    mov eax, [c]
    push eax
    push 2
    ; multiplication
    pop ebx
    pop eax
    imul eax, ebx
    push eax
    ; d = expression
    pop eax
    mov [d], eax

    mov eax, [d]
    push eax
    push 5
    ; soustraction
    pop ebx
    pop eax
    sub eax, ebx
    push eax
    ; x = expression
    pop eax
    mov [x], eax

    mov eax, [a]
    push eax
    mov eax, [b]
    push eax
    ; test supérieur 1
    pop ebx
    pop eax
    cmp eax, ebx
    setg al
    movzx eax, al
    push eax
    mov eax, [c]
    push eax
    ; leti expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    mov eax, [d]
    push eax
    ; leti expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    ; === YI-LELɄ 1 avec STATEMENTS ===
    pop eax               ; condition
    cmp eax, 0
    je lelʉ_1            ; aller à LELɄ si faux
    ; === BRANCHE LƆ (THEN) ===
    ; Statements THEN exécutés ci-dessus
    jmp finyi_1          ; sauter LELɄ
lelʉ_1:
    ; === BRANCHE LELɄ (ELSE) ===
    ; Statements ELSE exécutés ci-dessus
finyi_1:

    push 1
    ; a = expression
    pop eax
    mov [a], eax

    push 0
    ; b = expression
    pop eax
    mov [b], eax

    push 1
    ; c = expression
    pop eax
    mov [c], eax

    push 888
    ; leti expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    push 1
    push 5
    mov eax, [b]
    push eax
    mov eax, [a]
    push eax
    ; addition
    pop ebx
    pop eax
    add eax, ebx
    push eax
    ; b = expression
    pop eax
    mov [b], eax

    mov eax, [b]
    push eax
    ; leti expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    mov eax, [c]
    push eax
    push 1
    ; addition
    pop ebx
    pop eax
    add eax, ebx
    push eax
    ; c = expression
    pop eax
    mov [c], eax

    mov eax, [c]
    push eax
    ; leti expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    ; === LIGɄE 1: a avec STATEMENTS ===
    pop eax               ; valeur LEKO (fin)
    mov [temp_for_end], eax
    pop eax               ; valeur début
    mov [a], eax         ; a = début
ligʉe_boucle_1:
    ; Test: a <= fin ?
    mov eax, [a]
    cmp eax, [temp_for_end]
    jg ligʉe_fin_1       ; sortir si a > fin
    ; Corps de la boucle (statements) exécuté ci-dessus
    ; Incrémenter variable de boucle
    inc dword [a]
    jmp ligʉe_boucle_1
ligʉe_fin_1:

    mov eax, [b]
    push eax
    mov eax, [c]
    push eax
    ; addition
    pop ebx
    pop eax
    add eax, ebx
    push eax
    ; x = expression
    pop eax
    mov [x], eax

    mov eax, [x]
    push eax
    ; leti expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    push 0
    ; x = expression
    pop eax
    mov [x], eax

    push 1
    ; y = expression
    pop eax
    mov [y], eax

    push 777
    ; leti expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    push 2
    push 10
    push 2
    mov eax, [x]
    push eax
    mov eax, [a]
    push eax
    ; addition
    pop ebx
    pop eax
    add eax, ebx
    push eax
    ; x = expression
    pop eax
    mov [x], eax

    mov eax, [x]
    push eax
    ; leti expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    mov eax, [y]
    push eax
    push 2
    ; multiplication
    pop ebx
    pop eax
    imul eax, ebx
    push eax
    ; y = expression
    pop eax
    mov [y], eax

    mov eax, [y]
    push eax
    ; leti expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    ; === LIGɄE 2: a avec TEP et STATEMENTS ===
    pop eax               ; tep (pas)
    mov [temp_for_step], eax
    pop eax               ; valeur LEKO (fin)
    mov [temp_for_end], eax
    pop eax               ; valeur début
    mov [a], eax
ligʉe_tep_boucle_2:
    mov eax, [a]
    cmp eax, [temp_for_end]
    jg ligʉe_tep_fin_2
    ; Corps de la boucle (statements) exécuté ci-dessus
    ; Ajouter le pas
    mov eax, [a]
    add eax, [temp_for_step]
    mov [a], eax
    jmp ligʉe_tep_boucle_2
ligʉe_tep_fin_2:

    mov eax, [x]
    push eax
    mov eax, [y]
    push eax
    ; addition
    pop ebx
    pop eax
    add eax, ebx
    push eax
    ; z = expression
    pop eax
    mov [z], eax

    mov eax, [z]
    push eax
    ; leti expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    push 5
    ; a = expression
    pop eax
    mov [a], eax

    push 1
    ; b = expression
    pop eax
    mov [b], eax

    push 0
    ; c = expression
    pop eax
    mov [c], eax

    push 666
    ; leti expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    mov eax, [a]
    push eax
    push 0
    ; test supérieur 2
    pop ebx
    pop eax
    cmp eax, ebx
    setg al
    movzx eax, al
    push eax
    mov eax, [b]
    push eax
    push 2
    ; multiplication
    pop ebx
    pop eax
    imul eax, ebx
    push eax
    ; b = expression
    pop eax
    mov [b], eax

    mov eax, [b]
    push eax
    ; leti expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    mov eax, [c]
    push eax
    mov eax, [a]
    push eax
    ; addition
    pop ebx
    pop eax
    add eax, ebx
    push eax
    ; c = expression
    pop eax
    mov [c], eax

    mov eax, [c]
    push eax
    ; leti expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    mov eax, [a]
    push eax
    push 1
    ; soustraction
    pop ebx
    pop eax
    sub eax, ebx
    push eax
    ; a = expression
    pop eax
    mov [a], eax

    mov eax, [a]
    push eax
    ; leti expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    ; === LIJƐT 1 avec STATEMENTS ===
lijɛt_1_debut:
    ; Évaluer condition pour boucle while
    pop eax               ; condition évaluée
    cmp eax, 0
    je lijɛt_1_fin       ; sortir si condition fausse
    ; Corps de la boucle (statements) exécuté ci-dessus
    jmp lijɛt_1_debut    ; recommencer
lijɛt_1_fin:

    mov eax, [b]
    push eax
    mov eax, [c]
    push eax
    ; addition
    pop ebx
    pop eax
    add eax, ebx
    push eax
    ; d = expression
    pop eax
    mov [d], eax

    mov eax, [d]
    push eax
    ; leti expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    push 0
    ; a = expression
    pop eax
    mov [a], eax

    push 1
    ; b = expression
    pop eax
    mov [b], eax

    push 0
    ; c = expression
    pop eax
    mov [c], eax

    push 0
    ; d = expression
    pop eax
    mov [d], eax

    push 555
    ; leti expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    mov eax, [a]
    push eax
    mov eax, [b]
    push eax
    ; addition
    pop ebx
    pop eax
    add eax, ebx
    push eax
    ; x = expression
    pop eax
    mov [x], eax

    mov eax, [x]
    push eax
    ; leti expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    mov eax, [x]
    push eax
    mov eax, [c]
    push eax
    ; addition
    pop ebx
    pop eax
    add eax, ebx
    push eax
    ; c = expression
    pop eax
    mov [c], eax

    mov eax, [c]
    push eax
    ; leti expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    mov eax, [d]
    push eax
    push 1
    ; addition
    pop ebx
    pop eax
    add eax, ebx
    push eax
    ; d = expression
    pop eax
    mov [d], eax

    mov eax, [d]
    push eax
    ; leti expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    mov eax, [b]
    push eax
    ; a = expression
    pop eax
    mov [a], eax

    mov eax, [x]
    push eax
    ; b = expression
    pop eax
    mov [b], eax

    mov eax, [d]
    push eax
    push 7
    ; test inférieur 3
    pop ebx
    pop eax
    cmp eax, ebx
    setl al
    movzx eax, al
    push eax
    ; === LEGHɄ-LIJƐT 1 avec STATEMENTS ===
leghʉ_lijɛt_1_debut:
    ; Corps de la boucle (statements) exécuté ci-dessus
    ; Évaluer condition
    pop eax               ; condition évaluée
    cmp eax, 0
    jne leghʉ_lijɛt_1_debut  ; continuer si condition vraie
leghʉ_lijɛt_1_fin:

    mov eax, [c]
    push eax
    mov eax, [d]
    push eax
    ; addition
    pop ebx
    pop eax
    add eax, ebx
    push eax
    ; z = expression
    pop eax
    mov [z], eax

    mov eax, [z]
    push eax
    ; leti expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    push 999
    ; leti expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    ; letɔ̄ŋ y
    push y
    push fmtlec
    call scanf
    add esp, 8

    mov eax, [y]
    push eax
    push 10
    ; multiplication
    pop ebx
    pop eax
    imul eax, ebx
    push eax
    ; a = expression
    pop eax
    mov [a], eax

    mov eax, [a]
    push eax
    push 50
    ; addition
    pop ebx
    pop eax
    add eax, ebx
    push eax
    ; b = expression
    pop eax
    mov [b], eax

    mov eax, [b]
    push eax
    push 2
    ; division
    pop ebx
    pop eax
    cdq
    idiv ebx
    push eax
    ; c = expression
    pop eax
    mov [c], eax

    mov eax, [y]
    push eax
    push 4
    ; modulo
    pop ebx
    pop eax
    cdq
    idiv ebx
    push edx
    ; x = expression
    pop eax
    mov [x], eax

    mov eax, [a]
    push eax
    ; leti expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    mov eax, [b]
    push eax
    ; leti expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    mov eax, [c]
    push eax
    ; leti expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    push 999
    ; leti expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    ; === SONTOH 1 sur x avec STATEMENTS ===
    ; Test premier ndap
    mov eax, [x]
    cmp eax, 1
    je ndap_1_1
    ; Test deuxième ndap
    cmp eax, 2
    je ndap_2_1
    ; Test troisième ndap
    cmp eax, 3
    je ndap_3_1
    ; Aucun ndap correspondant, aller au kamto
    jmp kamto_1
ndap_1_1:
    ; === PREMIER NDAP avec STATEMENTS ===
    ; Statements du cas 1 exécutés
    jmp sontoh_fin_1
ndap_2_1:
    ; === DEUXIÈME NDAP avec STATEMENTS ===
    ; Statements du cas 2 exécutés
    jmp sontoh_fin_1
ndap_3_1:
    ; === TROISIÈME NDAP avec STATEMENTS ===
    ; Statements du cas 3 exécutés
    jmp sontoh_fin_1
kamto_1:
    ; === NDAP KAMTO avec STATEMENTS ===
    ; Statements du défaut exécutés
sontoh_fin_1:

    push 0
    ; a = expression
    pop eax
    mov [a], eax

    push 444
    ; leti expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    push 1
    push 3
    mov eax, [b]
    push eax
    push 10
    ; multiplication
    pop ebx
    pop eax
    imul eax, ebx
    push eax
    ; c = expression
    pop eax
    mov [c], eax

    mov eax, [c]
    push eax
    ; leti expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    push 1
    push 2
    mov eax, [c]
    push eax
    mov eax, [d]
    push eax
    ; addition
    pop ebx
    pop eax
    add eax, ebx
    push eax
    ; x = expression
    pop eax
    mov [x], eax

    mov eax, [x]
    push eax
    ; leti expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    mov eax, [b]
    push eax
    mov eax, [d]
    push eax
    ; multiplication
    pop ebx
    pop eax
    imul eax, ebx
    push eax
    ; y = expression
    pop eax
    mov [y], eax

    mov eax, [y]
    push eax
    ; leti expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    mov eax, [a]
    push eax
    mov eax, [y]
    push eax
    ; addition
    pop ebx
    pop eax
    add eax, ebx
    push eax
    ; a = expression
    pop eax
    mov [a], eax

    mov eax, [a]
    push eax
    ; leti expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    ; === LIGɄE 3: d avec STATEMENTS ===
    pop eax               ; valeur LEKO (fin)
    mov [temp_for_end], eax
    pop eax               ; valeur début
    mov [d], eax         ; d = début
ligʉe_boucle_3:
    ; Test: d <= fin ?
    mov eax, [d]
    cmp eax, [temp_for_end]
    jg ligʉe_fin_3       ; sortir si d > fin
    ; Corps de la boucle (statements) exécuté ci-dessus
    ; Incrémenter variable de boucle
    inc dword [d]
    jmp ligʉe_boucle_3
ligʉe_fin_3:

    mov eax, [c]
    push eax
    mov eax, [a]
    push eax
    ; addition
    pop ebx
    pop eax
    add eax, ebx
    push eax
    ; z = expression
    pop eax
    mov [z], eax

    mov eax, [z]
    push eax
    ; leti expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    ; === LIGɄE 4: b avec STATEMENTS ===
    pop eax               ; valeur LEKO (fin)
    mov [temp_for_end], eax
    pop eax               ; valeur début
    mov [b], eax         ; b = début
ligʉe_boucle_4:
    ; Test: b <= fin ?
    mov eax, [b]
    cmp eax, [temp_for_end]
    jg ligʉe_fin_4       ; sortir si b > fin
    ; Corps de la boucle (statements) exécuté ci-dessus
    ; Incrémenter variable de boucle
    inc dword [b]
    jmp ligʉe_boucle_4
ligʉe_fin_4:

    push 2
    ; a = expression
    pop eax
    mov [a], eax

    push 1
    ; b = expression
    pop eax
    mov [b], eax

    push 1
    ; c = expression
    pop eax
    mov [c], eax

    push 333
    ; leti expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    mov eax, [c]
    push eax
    push 5
    ; test <= 4
    pop ebx
    pop eax
    cmp eax, ebx
    setle al
    movzx eax, al
    push eax
    mov eax, [b]
    push eax
    mov eax, [a]
    push eax
    ; multiplication
    pop ebx
    pop eax
    imul eax, ebx
    push eax
    ; b = expression
    pop eax
    mov [b], eax

    mov eax, [b]
    push eax
    ; leti expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    mov eax, [b]
    push eax
    mov eax, [c]
    push eax
    ; addition
    pop ebx
    pop eax
    add eax, ebx
    push eax
    ; d = expression
    pop eax
    mov [d], eax

    mov eax, [d]
    push eax
    ; leti expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    mov eax, [d]
    push eax
    mov eax, [c]
    push eax
    ; multiplication
    pop ebx
    pop eax
    imul eax, ebx
    push eax
    ; x = expression
    pop eax
    mov [x], eax

    mov eax, [x]
    push eax
    ; leti expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    mov eax, [c]
    push eax
    push 1
    ; addition
    pop ebx
    pop eax
    add eax, ebx
    push eax
    ; c = expression
    pop eax
    mov [c], eax

    ; === LIJƐT 2 avec STATEMENTS ===
lijɛt_2_debut:
    ; Évaluer condition pour boucle while
    pop eax               ; condition évaluée
    cmp eax, 0
    je lijɛt_2_fin       ; sortir si condition fausse
    ; Corps de la boucle (statements) exécuté ci-dessus
    jmp lijɛt_2_debut    ; recommencer
lijɛt_2_fin:

    push 1
    ; a = expression
    pop eax
    mov [a], eax

    push 1
    ; b = expression
    pop eax
    mov [b], eax

    push 1
    ; c = expression
    pop eax
    mov [c], eax

    push 222
    ; leti expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    mov eax, [a]
    push eax
    mov eax, [c]
    push eax
    ; multiplication
    pop ebx
    pop eax
    imul eax, ebx
    push eax
    ; a = expression
    pop eax
    mov [a], eax

    mov eax, [a]
    push eax
    ; leti expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    mov eax, [a]
    push eax
    mov eax, [c]
    push eax
    ; addition
    pop ebx
    pop eax
    add eax, ebx
    push eax
    ; b = expression
    pop eax
    mov [b], eax

    mov eax, [b]
    push eax
    ; leti expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    mov eax, [b]
    push eax
    mov eax, [a]
    push eax
    ; soustraction
    pop ebx
    pop eax
    sub eax, ebx
    push eax
    ; d = expression
    pop eax
    mov [d], eax

    mov eax, [d]
    push eax
    ; leti expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    mov eax, [c]
    push eax
    push 1
    ; addition
    pop ebx
    pop eax
    add eax, ebx
    push eax
    ; c = expression
    pop eax
    mov [c], eax

    mov eax, [c]
    push eax
    push 5
    ; test <= 5
    pop ebx
    pop eax
    cmp eax, ebx
    setle al
    movzx eax, al
    push eax
    ; === LEGHɄ-LIJƐT 2 avec STATEMENTS ===
leghʉ_lijɛt_2_debut:
    ; Corps de la boucle (statements) exécuté ci-dessus
    ; Évaluer condition
    pop eax               ; condition évaluée
    cmp eax, 0
    jne leghʉ_lijɛt_2_debut  ; continuer si condition vraie
leghʉ_lijɛt_2_fin:

    push 100
    ; a = expression
    pop eax
    mov [a], eax

    push 50
    ; b = expression
    pop eax
    mov [b], eax

    mov eax, [a]
    push eax
    push 2
    ; division
    pop ebx
    pop eax
    cdq
    idiv ebx
    push eax
    ; c = expression
    pop eax
    mov [c], eax

    mov eax, [c]
    push eax
    push 25
    ; addition
    pop ebx
    pop eax
    add eax, ebx
    push eax
    ; d = expression
    pop eax
    mov [d], eax

    mov eax, [d]
    push eax
    push 2
    ; multiplication
    pop ebx
    pop eax
    imul eax, ebx
    push eax
    ; x = expression
    pop eax
    mov [x], eax

    mov eax, [a]
    push eax
    push 100
    ; test égalité 6
    pop ebx
    pop eax
    cmp eax, ebx
    sete al
    movzx eax, al
    push eax
    mov eax, [x]
    push eax
    ; leti expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    ; === YI 2 avec STATEMENTS ===
    pop eax               ; condition
    cmp eax, 0
    je finyi_2           ; sauter si faux
    ; === BRANCHE LƆ (THEN) ===
    ; Statements THEN exécutés ci-dessus
finyi_2:

    mov eax, [a]
    push eax
    mov eax, [b]
    push eax
    ; soustraction
    pop ebx
    pop eax
    sub eax, ebx
    push eax
    ; c = expression
    pop eax
    mov [c], eax

    mov eax, [c]
    push eax
    push 10
    ; addition
    pop ebx
    pop eax
    add eax, ebx
    push eax
    ; d = expression
    pop eax
    mov [d], eax

    mov eax, [d]
    push eax
    push 3
    ; division
    pop ebx
    pop eax
    cdq
    idiv ebx
    push eax
    ; x = expression
    pop eax
    mov [x], eax

    mov eax, [a]
    push eax
    mov eax, [b]
    push eax
    ; test différence 7
    pop ebx
    pop eax
    cmp eax, ebx
    setne al
    movzx eax, al
    push eax
    mov eax, [x]
    push eax
    ; leti expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    ; === YI 3 avec STATEMENTS ===
    pop eax               ; condition
    cmp eax, 0
    je finyi_3           ; sauter si faux
    ; === BRANCHE LƆ (THEN) ===
    ; Statements THEN exécutés ci-dessus
finyi_3:

    mov eax, [a]
    push eax
    mov eax, [b]
    push eax
    ; addition
    pop ebx
    pop eax
    add eax, ebx
    push eax
    ; c = expression
    pop eax
    mov [c], eax

    mov eax, [c]
    push eax
    push 2
    ; multiplication
    pop ebx
    pop eax
    imul eax, ebx
    push eax
    ; d = expression
    pop eax
    mov [d], eax

    mov eax, [d]
    push eax
    push 50
    ; soustraction
    pop ebx
    pop eax
    sub eax, ebx
    push eax
    ; x = expression
    pop eax
    mov [x], eax

    mov eax, [a]
    push eax
    mov eax, [b]
    push eax
    ; test >= 8
    pop ebx
    pop eax
    cmp eax, ebx
    setge al
    movzx eax, al
    push eax
    mov eax, [x]
    push eax
    ; leti expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    ; === YI 4 avec STATEMENTS ===
    pop eax               ; condition
    cmp eax, 0
    je finyi_4           ; sauter si faux
    ; === BRANCHE LƆ (THEN) ===
    ; Statements THEN exécutés ci-dessus
finyi_4:

    mov eax, [b]
    push eax
    push 3
    ; multiplication
    pop ebx
    pop eax
    imul eax, ebx
    push eax
    ; c = expression
    pop eax
    mov [c], eax

    mov eax, [c]
    push eax
    mov eax, [a]
    push eax
    ; addition
    pop ebx
    pop eax
    add eax, ebx
    push eax
    ; d = expression
    pop eax
    mov [d], eax

    mov eax, [d]
    push eax
    push 5
    ; division
    pop ebx
    pop eax
    cdq
    idiv ebx
    push eax
    ; x = expression
    pop eax
    mov [x], eax

    mov eax, [b]
    push eax
    mov eax, [a]
    push eax
    ; test <= 9
    pop ebx
    pop eax
    cmp eax, ebx
    setle al
    movzx eax, al
    push eax
    mov eax, [x]
    push eax
    ; leti expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    ; === YI 5 avec STATEMENTS ===
    pop eax               ; condition
    cmp eax, 0
    je finyi_5           ; sauter si faux
    ; === BRANCHE LƆ (THEN) ===
    ; Statements THEN exécutés ci-dessus
finyi_5:

    push 111
    ; leti expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    push 1
    push 10
    mov eax, [a]
    push eax
    mov eax, [a]
    push eax
    ; multiplication
    pop ebx
    pop eax
    imul eax, ebx
    push eax
    ; b = expression
    pop eax
    mov [b], eax

    mov eax, [b]
    push eax
    push 3
    ; modulo
    pop ebx
    pop eax
    cdq
    idiv ebx
    push edx
    ; c = expression
    pop eax
    mov [c], eax

    mov eax, [a]
    push eax
    push 100
    ; addition
    pop ebx
    pop eax
    add eax, ebx
    push eax
    ; d = expression
    pop eax
    mov [d], eax

    mov eax, [c]
    push eax
    push 0
    ; test égalité 10
    pop ebx
    pop eax
    cmp eax, ebx
    sete al
    movzx eax, al
    push eax
    mov eax, [b]
    push eax
    ; leti expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    ; === YI 6 avec STATEMENTS ===
    pop eax               ; condition
    cmp eax, 0
    je finyi_6           ; sauter si faux
    ; === BRANCHE LƆ (THEN) ===
    ; Statements THEN exécutés ci-dessus
finyi_6:

    mov eax, [d]
    push eax
    ; leti expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    ; === LIGɄE 5: a avec STATEMENTS ===
    pop eax               ; valeur LEKO (fin)
    mov [temp_for_end], eax
    pop eax               ; valeur début
    mov [a], eax         ; a = début
ligʉe_boucle_5:
    ; Test: a <= fin ?
    mov eax, [a]
    cmp eax, [temp_for_end]
    jg ligʉe_fin_5       ; sortir si a > fin
    ; Corps de la boucle (statements) exécuté ci-dessus
    ; Incrémenter variable de boucle
    inc dword [a]
    jmp ligʉe_boucle_5
ligʉe_fin_5:

    push 1
    ; a = expression
    pop eax
    mov [a], eax

    push 1
    ; b = expression
    pop eax
    mov [b], eax

    push 200
    ; leti expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    mov eax, [a]
    push eax
    push 8
    ; test <= 11
    pop ebx
    pop eax
    cmp eax, ebx
    setle al
    movzx eax, al
    push eax
    mov eax, [a]
    push eax
    mov eax, [b]
    push eax
    ; multiplication
    pop ebx
    pop eax
    imul eax, ebx
    push eax
    ; c = expression
    pop eax
    mov [c], eax

    mov eax, [c]
    push eax
    mov eax, [a]
    push eax
    ; addition
    pop ebx
    pop eax
    add eax, ebx
    push eax
    ; d = expression
    pop eax
    mov [d], eax

    mov eax, [a]
    push eax
    mov eax, [b]
    push eax
    ; addition
    pop ebx
    pop eax
    add eax, ebx
    push eax
    ; x = expression
    pop eax
    mov [x], eax

    mov eax, [d]
    push eax
    push 10
    ; test supérieur 12
    pop ebx
    pop eax
    cmp eax, ebx
    setg al
    movzx eax, al
    push eax
    mov eax, [d]
    push eax
    ; leti expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    ; === YI 7 avec STATEMENTS ===
    pop eax               ; condition
    cmp eax, 0
    je finyi_7           ; sauter si faux
    ; === BRANCHE LƆ (THEN) ===
    ; Statements THEN exécutés ci-dessus
finyi_7:

    mov eax, [b]
    push eax
    ; a = expression
    pop eax
    mov [a], eax

    mov eax, [x]
    push eax
    ; b = expression
    pop eax
    mov [b], eax

    mov eax, [a]
    push eax
    ; leti expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    mov eax, [b]
    push eax
    ; leti expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    ; === LIJƐT 3 avec STATEMENTS ===
lijɛt_3_debut:
    ; Évaluer condition pour boucle while
    pop eax               ; condition évaluée
    cmp eax, 0
    je lijɛt_3_fin       ; sortir si condition fausse
    ; Corps de la boucle (statements) exécuté ci-dessus
    jmp lijɛt_3_debut    ; recommencer
lijɛt_3_fin:

    push 1
    ; a = expression
    pop eax
    mov [a], eax

    push 10
    ; b = expression
    pop eax
    mov [b], eax

    push 150
    ; leti expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    mov eax, [a]
    push eax
    push 5
    ; multiplication
    pop ebx
    pop eax
    imul eax, ebx
    push eax
    ; c = expression
    pop eax
    mov [c], eax

    mov eax, [b]
    push eax
    mov eax, [a]
    push eax
    ; soustraction
    pop ebx
    pop eax
    sub eax, ebx
    push eax
    ; d = expression
    pop eax
    mov [d], eax

    mov eax, [c]
    push eax
    mov eax, [d]
    push eax
    ; addition
    pop ebx
    pop eax
    add eax, ebx
    push eax
    ; x = expression
    pop eax
    mov [x], eax

    mov eax, [a]
    push eax
    mov eax, [b]
    push eax
    ; addition
    pop ebx
    pop eax
    add eax, ebx
    push eax
    ; y = expression
    pop eax
    mov [y], eax

    mov eax, [x]
    push eax
    push 20
    ; test supérieur 13
    pop ebx
    pop eax
    cmp eax, ebx
    setg al
    movzx eax, al
    push eax
    mov eax, [x]
    push eax
    ; leti expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    ; === YI 8 avec STATEMENTS ===
    pop eax               ; condition
    cmp eax, 0
    je finyi_8           ; sauter si faux
    ; === BRANCHE LƆ (THEN) ===
    ; Statements THEN exécutés ci-dessus
finyi_8:

    mov eax, [y]
    push eax
    ; leti expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    mov eax, [a]
    push eax
    push 1
    ; addition
    pop ebx
    pop eax
    add eax, ebx
    push eax
    ; a = expression
    pop eax
    mov [a], eax

    mov eax, [b]
    push eax
    push 1
    ; soustraction
    pop ebx
    pop eax
    sub eax, ebx
    push eax
    ; b = expression
    pop eax
    mov [b], eax

    mov eax, [a]
    push eax
    mov eax, [b]
    push eax
    ; test inférieur 14
    pop ebx
    pop eax
    cmp eax, ebx
    setl al
    movzx eax, al
    push eax
    ; === LEGHɄ-LIJƐT 3 avec STATEMENTS ===
leghʉ_lijɛt_3_debut:
    ; Corps de la boucle (statements) exécuté ci-dessus
    ; Évaluer condition
    pop eax               ; condition évaluée
    cmp eax, 0
    jne leghʉ_lijɛt_3_debut  ; continuer si condition vraie
leghʉ_lijɛt_3_fin:

    push 999
    ; leti expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    ; letɔ̄ŋ z
    push z
    push fmtlec
    call scanf
    add esp, 8

    mov eax, [y]
    push eax
    mov eax, [z]
    push eax
    ; addition
    pop ebx
    pop eax
    add eax, ebx
    push eax
    ; a = expression
    pop eax
    mov [a], eax

    mov eax, [a]
    push eax
    push 2
    ; multiplication
    pop ebx
    pop eax
    imul eax, ebx
    push eax
    ; b = expression
    pop eax
    mov [b], eax

    push 1
    push 3
    mov eax, [c]
    push eax
    mov eax, [a]
    push eax
    ; multiplication
    pop ebx
    pop eax
    imul eax, ebx
    push eax
    ; d = expression
    pop eax
    mov [d], eax

    mov eax, [d]
    push eax
    mov eax, [b]
    push eax
    ; addition
    pop ebx
    pop eax
    add eax, ebx
    push eax
    ; x = expression
    pop eax
    mov [x], eax

    mov eax, [x]
    push eax
    mov eax, [z]
    push eax
    ; soustraction
    pop ebx
    pop eax
    sub eax, ebx
    push eax
    ; y = expression
    pop eax
    mov [y], eax

    mov eax, [c]
    push eax
    ; leti expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    mov eax, [d]
    push eax
    ; leti expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    mov eax, [x]
    push eax
    ; leti expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    mov eax, [y]
    push eax
    ; leti expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    ; === LIGɄE 6: c avec STATEMENTS ===
    pop eax               ; valeur LEKO (fin)
    mov [temp_for_end], eax
    pop eax               ; valeur début
    mov [c], eax         ; c = début
ligʉe_boucle_6:
    ; Test: c <= fin ?
    mov eax, [c]
    cmp eax, [temp_for_end]
    jg ligʉe_fin_6       ; sortir si c > fin
    ; Corps de la boucle (statements) exécuté ci-dessus
    ; Incrémenter variable de boucle
    inc dword [c]
    jmp ligʉe_boucle_6
ligʉe_fin_6:

    mov eax, [a]
    push eax
    mov eax, [b]
    push eax
    ; addition
    pop ebx
    pop eax
    add eax, ebx
    push eax
    mov eax, [c]
    push eax
    ; addition
    pop ebx
    pop eax
    add eax, ebx
    push eax
    mov eax, [d]
    push eax
    ; addition
    pop ebx
    pop eax
    add eax, ebx
    push eax
    ; x = expression
    pop eax
    mov [x], eax

    mov eax, [x]
    push eax
    ; leti expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    mov eax, [x]
    push eax
    push 10
    ; division
    pop ebx
    pop eax
    cdq
    idiv ebx
    push eax
    ; y = expression
    pop eax
    mov [y], eax

    mov eax, [x]
    push eax
    push 50
    ; addition
    pop ebx
    pop eax
    add eax, ebx
    push eax
    ; z = expression
    pop eax
    mov [z], eax

    mov eax, [x]
    push eax
    push 100
    ; test supérieur 15
    pop ebx
    pop eax
    cmp eax, ebx
    setg al
    movzx eax, al
    push eax
    mov eax, [y]
    push eax
    ; leti expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    mov eax, [z]
    push eax
    ; leti expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    ; === YI-LELɄ 9 avec STATEMENTS ===
    pop eax               ; condition
    cmp eax, 0
    je lelʉ_9            ; aller à LELɄ si faux
    ; === BRANCHE LƆ (THEN) ===
    ; Statements THEN exécutés ci-dessus
    jmp finyi_9          ; sauter LELɄ
lelʉ_9:
    ; === BRANCHE LELɄ (ELSE) ===
    ; Statements ELSE exécutés ci-dessus
finyi_9:

    ; Fin du programme
    mov eax, 1
    mov ebx, 0
    int 0x80
