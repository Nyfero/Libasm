bits 64

global ft_strcmp

;   rax = retour de fonction
;   rcx = compteur de boucle
;   rdi = premier argument => str1
;   rsi = deuxieme argument => str2

section .text:
    ft_strcmp:
        xor rax, rax                ; On met notre valeur de retour à 0
        xor rcx, rcx                ; On met le compteur à 0

    _loop:
        mov byte al, rsi[rcx]
        cmp byte rdi[rcx], al       ; On compare str1 et str2 à l'indice rcx
        jne _diff                   ; Si str1 et str2 son différent on calcule la différence et on terrmine le programme
        cmp byte rdi[rcx], 0        ; On regarde si on est à la fin de str1
        je  _return                 ; On calcule la différence entre str1 et str2 et on termine le programme
        inc rcx                     ; On incrémente rcx
        jmp _loop                   ; On reviens au début de la loop

    _diff:
        mov rax, 1
        jmp _return

    _return:
        ret             ; On renvoie rax = 0 car chaine identique