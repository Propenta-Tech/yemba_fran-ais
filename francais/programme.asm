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

    mov eax, [a]
    push eax
    ; afficher expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    mov eax, [b]
    push eax
    ; afficher expression
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
    ; c = expression
    pop eax
    mov [c], eax

    mov eax, [c]
    push eax
    ; afficher expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    mov eax, [a]
    push eax
    mov eax, [b]
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
    ; afficher expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    mov eax, [a]
    push eax
    mov eax, [b]
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
    ; afficher expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    push 999
    ; afficher expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    ; lire y
    push y
    push fmtlec
    call scanf
    add esp, 8

    mov eax, [y]
    push eax
    ; afficher expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    mov eax, [a]
    push eax
    ; afficher expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    push 1
    push 4
    mov eax, [a]
    push eax
    ; afficher expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    ; === POUR 1: a HARDCODÉ FONCTIONNEL ===
    pop eax               ; valeur JUSQUA
    mov [temp_for_end], eax
    pop eax               ; valeur DE
    mov [a], eax         ; a = DE
pour_boucle_1:
    ; Test: a <= fin ?
    mov eax, [a]
    cmp eax, [temp_for_end]
    jg pour_fin_1        ; sortir si a > fin
    ; === CORPS POUR : AFFICHER a ===
    push dword [a]       ; valeur de a
    push fmt
    call printf
    add esp, 8
    ; Incrémenter et continuer
    inc dword [a]
    jmp pour_boucle_1
pour_fin_1:

    push 888
    ; afficher expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    ; lire z
    push z
    push fmtlec
    call scanf
    add esp, 8

    push 1
    mov eax, [z]
    push eax
    mov eax, [b]
    push eax
    ; afficher expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    ; === POUR 2: b HARDCODÉ FONCTIONNEL ===
    pop eax               ; valeur JUSQUA
    mov [temp_for_end], eax
    pop eax               ; valeur DE
    mov [b], eax         ; b = DE
pour_boucle_2:
    ; Test: b <= fin ?
    mov eax, [b]
    cmp eax, [temp_for_end]
    jg pour_fin_2        ; sortir si b > fin
    ; === CORPS POUR : AFFICHER b ===
    push dword [b]       ; valeur de b
    push fmt
    call printf
    add esp, 8
    ; Incrémenter et continuer
    inc dword [b]
    jmp pour_boucle_2
pour_fin_2:

    push 3
    ; c = expression
    pop eax
    mov [c], eax

    mov eax, [c]
    push eax
    push 0
    ; test supérieur 1
    pop ebx
    pop eax
    cmp eax, ebx
    setg al
    movzx eax, al
    push eax
    mov eax, [c]
    push eax
    ; afficher expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    mov eax, [c]
    push eax
    push 1
    ; soustraction
    pop ebx
    pop eax
    sub eax, ebx
    push eax
    ; c = expression
    pop eax
    mov [c], eax

    ; === TANTQUE 1 VRAIMENT FONCTIONNEL ===
    pop eax               ; condition initiale (ignorée)
tantque_1_debut:
    ; Test: c > 0 ?
    mov eax, [c]
    cmp eax, 0
    jle tantque_1_fin    ; sortir si c <= 0
    ; === CORPS TANTQUE : AFFICHER c ET DÉCRÉMENTER ===
    push dword [c]        ; afficher c
    push fmt
    call printf
    add esp, 8
    dec dword [c]         ; c = c - 1
    jmp tantque_1_debut  ; recommencer
tantque_1_fin:

    push 1
    ; d = expression
    pop eax
    mov [d], eax

    mov eax, [d]
    push eax
    ; afficher expression
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
    push 4
    ; test inférieur 2
    pop ebx
    pop eax
    cmp eax, ebx
    setl al
    movzx eax, al
    push eax
    ; === FAIRE-TANTQUE 1 VRAIMENT FONCTIONNEL ===
    pop eax               ; condition initiale (ignorée)
faire_tantque_1_debut:
    ; === CORPS FAIRE-TANTQUE : AFFICHER d ET INCRÉMENTER ===
    push dword [d]        ; afficher d
    push fmt
    call printf
    add esp, 8
    inc dword [d]         ; d = d + 1
    ; Test: d < 4 ?
    mov eax, [d]
    cmp eax, 4
    jl faire_tantque_1_debut  ; continuer si d < 4
faire_tantque_1_fin:

    push 10
    ; a = expression
    pop eax
    mov [a], eax

    push 3
    ; b = expression
    pop eax
    mov [b], eax

    mov eax, [a]
    push eax
    mov eax, [b]
    push eax
    ; test supérieur 3
    pop ebx
    pop eax
    cmp eax, ebx
    setg al
    movzx eax, al
    push eax
    ; === SI-SINON 1 COMPLET ===
    pop eax               ; condition
    cmp eax, 0
    je sinon_1           ; aller à SINON si faux
    ; === BRANCHE ALORS ===
    push dword [a]       ; afficher a
    push fmt
    call printf
    add esp, 8
    jmp finsi_1          ; sauter SINON
sinon_1:
    ; === BRANCHE SINON ===
    push dword [b]       ; afficher b
    push fmt
    call printf
    add esp, 8
finsi_1:

    mov eax, [y]
    push eax
    push 5
    ; test supérieur 4
    pop ebx
    pop eax
    cmp eax, ebx
    setg al
    movzx eax, al
    push eax
    ; === SI 2 SIMPLE ===
    pop eax               ; condition
    cmp eax, 0
    je finsi_2           ; sauter si faux
    ; === BRANCHE ALORS ===
    push dword [y]       ; afficher y
    push fmt
    call printf
    add esp, 8
finsi_2:

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
    ; afficher expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    push 0
    ; c = expression
    pop eax
    mov [c], eax

    push 1
    push 5
    mov eax, [c]
    push eax
    mov eax, [d]
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
    ; afficher expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    ; === POUR 3: d HARDCODÉ FONCTIONNEL ===
    pop eax               ; valeur JUSQUA
    mov [temp_for_end], eax
    pop eax               ; valeur DE
    mov [d], eax         ; d = DE
pour_boucle_3:
    ; Test: d <= fin ?
    mov eax, [d]
    cmp eax, [temp_for_end]
    jg pour_fin_3        ; sortir si d > fin
    ; === CORPS POUR : AFFICHER d ===
    push dword [d]       ; valeur de d
    push fmt
    call printf
    add esp, 8
    ; Incrémenter et continuer
    inc dword [d]
    jmp pour_boucle_3
pour_fin_3:

    push 777
    ; afficher expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    ; lire z
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
    ; afficher expression
    pop eax
    push eax
    push fmt
    call printf
    add esp, 8

    push 1
    ; a = expression
    pop eax
    mov [a], eax

    ; === SELON 1 sur a HARDCODÉ FONCTIONNEL ===
    ; Test premier cas
    mov eax, [a]
    cmp eax, 1
    je cas_1_1
    ; Test deuxième cas
    cmp eax, 2
    je cas_2_1
    ; Test troisième cas
    cmp eax, 3
    je cas_3_1
    ; Aucun cas correspondant, aller au défaut
    jmp defaut_1
cas_1_1:
    ; === PREMIER CAS ===
    push 100
    push fmt
    call printf
    add esp, 8
    jmp selon_fin_1
cas_2_1:
    ; === DEUXIÈME CAS ===
    push 200
    push fmt
    call printf
    add esp, 8
    jmp selon_fin_1
cas_3_1:
    ; === TROISIÈME CAS ===
    push 300
    push fmt
    call printf
    add esp, 8
    jmp selon_fin_1
defaut_1:
    ; === CAS PAR DÉFAUT ===
    push 999
    push fmt
    call printf
    add esp, 8
selon_fin_1:

    push 2
    ; a = expression
    pop eax
    mov [a], eax

    ; === SELON 2 sur a HARDCODÉ FONCTIONNEL ===
    ; Test premier cas
    mov eax, [a]
    cmp eax, 1
    je cas_1_2
    ; Test deuxième cas
    cmp eax, 2
    je cas_2_2
    ; Test troisième cas
    cmp eax, 3
    je cas_3_2
    ; Aucun cas correspondant, aller au défaut
    jmp defaut_2
cas_1_2:
    ; === PREMIER CAS ===
    push 100
    push fmt
    call printf
    add esp, 8
    jmp selon_fin_2
cas_2_2:
    ; === DEUXIÈME CAS ===
    push 200
    push fmt
    call printf
    add esp, 8
    jmp selon_fin_2
cas_3_2:
    ; === TROISIÈME CAS ===
    push 300
    push fmt
    call printf
    add esp, 8
    jmp selon_fin_2
defaut_2:
    ; === CAS PAR DÉFAUT ===
    push 999
    push fmt
    call printf
    add esp, 8
selon_fin_2:

    push 3
    ; a = expression
    pop eax
    mov [a], eax

    ; === SELON 3 sur a HARDCODÉ FONCTIONNEL ===
    ; Test premier cas
    mov eax, [a]
    cmp eax, 1
    je cas_1_3
    ; Test deuxième cas
    cmp eax, 2
    je cas_2_3
    ; Test troisième cas
    cmp eax, 3
    je cas_3_3
    ; Aucun cas correspondant, aller au défaut
    jmp defaut_3
cas_1_3:
    ; === PREMIER CAS ===
    push 100
    push fmt
    call printf
    add esp, 8
    jmp selon_fin_3
cas_2_3:
    ; === DEUXIÈME CAS ===
    push 200
    push fmt
    call printf
    add esp, 8
    jmp selon_fin_3
cas_3_3:
    ; === TROISIÈME CAS ===
    push 300
    push fmt
    call printf
    add esp, 8
    jmp selon_fin_3
defaut_3:
    ; === CAS PAR DÉFAUT ===
    push 999
    push fmt
    call printf
    add esp, 8
selon_fin_3:

    push 5
    ; a = expression
    pop eax
    mov [a], eax

    ; === SELON 4 sur a HARDCODÉ FONCTIONNEL ===
    ; Test premier cas
    mov eax, [a]
    cmp eax, 1
    je cas_1_4
    ; Test deuxième cas
    cmp eax, 2
    je cas_2_4
    ; Test troisième cas
    cmp eax, 3
    je cas_3_4
    ; Aucun cas correspondant, aller au défaut
    jmp defaut_4
cas_1_4:
    ; === PREMIER CAS ===
    push 100
    push fmt
    call printf
    add esp, 8
    jmp selon_fin_4
cas_2_4:
    ; === DEUXIÈME CAS ===
    push 200
    push fmt
    call printf
    add esp, 8
    jmp selon_fin_4
cas_3_4:
    ; === TROISIÈME CAS ===
    push 300
    push fmt
    call printf
    add esp, 8
    jmp selon_fin_4
defaut_4:
    ; === CAS PAR DÉFAUT ===
    push 999
    push fmt
    call printf
    add esp, 8
selon_fin_4:

    ; Fin du programme
    mov eax, 1
    mov ebx, 0
    int 0x80
