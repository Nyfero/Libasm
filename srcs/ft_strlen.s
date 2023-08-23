bits 64

section .text
    global ft_strlen

;   rax = retour de fonction
;   rcx = compteur de boucle
;   rdi = argument => chaine de char

    ft_strlen:
        xor rcx, rcx            ; Compteur de boucle => initialiser à 0

    _loop:
        cmp byte rdi[rcx], 0    ; Comparaison bit par bit entre la chaine rdx à l'élément rcx et \0
        je  _return             ; Si rdi[rcx] == \0, on termine le programme 
        inc rcx                 ; Incrémentation de la boucle
        jmp _loop               ; Retour au début de la boucle

    _return:
        mov rax, rcx            ; rax prend la valeur de rcx
        ret                     ; On renvoie la valeur de rax