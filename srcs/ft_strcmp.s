bits 64

section .text
    global ft_strcmp

;   rax = retour de fonction
;   rcx = compteur de boucle
;   rdi = premier argument => str1
;   rsi = deuxieme argument => str2
;   al  = registre de 8 bits, utile pour stocker des char et faire des comparaisons

    ft_strcmp:
        xor rax, rax                ; On met notre valeur de retour à 0
        xor rcx, rcx                ; On met le compteur à 0

    _loop:
        mov byte al, rsi[rcx]       ; On met str2 dans un registre temporaire car on ne peut pas comparer rdi et rsi directement
        cmp byte rdi[rcx], al       ; On compare str1 et str2 à l'indice rcx
        jl  _smaller                ; Si str1 est strictement inférieur à str2 alors on renvoie -1
        jg  _greater                ; Si str1 est strictement supérieur à str2 alors on renvoie 1
        cmp byte rdi[rcx], 0        ; On regarde si on est à la fin de str1
        je  _return                 ; Si str1 à l'indice rcx est l'élément \0 alors on est à la fin de str1 et de str2 donc on renvoie 0
        inc rcx                     ; On incrémente rcx
        jmp _loop                   ; On reviens au début de la loop

    _smaller:       
        mov rax, -1                 ; On met -1 dans rax
        jmp _return                 ; On termine le programme

    _greater:
        mov rax, 1                  ; On met 1 dans rax
        jmp _return                 ; On termine le programme

    _return:
        ret                         ; On renvoie rax