bits 64

global ft_strcpy

;   rax = retour de fonction
;   rcx = compteur de boucle
;   rdi = premier argument => dest
;   rsi = deuxième argument => src
;   al = registre 8 bits => taille d'un char

section .text
    ft_strcpy:
        xor rcx, rcx            ; On met notre compteur à 0

    _loop:
        cmp byte rsi[rcx], 0    ; On regarde si la src est finie
        je  _return             ; On termine le programme
        mov byte al, rsi[rcx]   ; On met l'élément à l'index rcx de la src dans un registre temporaire car on ne peut pas déplacer un rsi dans rdx directement
        mov byte rdi[rcx], al   ; On remet dans rdi le registre temporaire pour faire notre copie
        inc rcx                 ; On incrémente rcx
        jmp _loop               ; On reviens au début de la boucle

    _return:
        mov byte rdi[rcx], 0    ; On termine la dest par un \0
        mov rax, rdi            ; On met la dest dans rax
        ret                     ; On renvoie rax