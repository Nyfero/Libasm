bits 64

section .text
    global ft_strcpy

;   rax = retour de fonction
;   rcx = compteur de boucle
;   rdi = premier argument => dest
;   rsi = deuxième argument => src
;   al = registre 8 bits => taille d'un char

    ft_strcpy:
        xor rcx, rcx               ; On met notre compteur à 0

    _loop:
        mov al, byte [rsi + rcx]   ; On met l'élément à l'index rcx de la src dans un registre temporaire car on ne peut pas déplacer un rsi dans rdx directement
        mov byte [rdi + rcx], al   ; On remet dans rdi le registre temporaire pour faire notre copie
        inc rcx                    ; On incrémente rcx
        cmp al, 0                  ; On regarde si la src est finie
        jne _loop                  ; Si non on recommence la boucle

    _return:
        mov rax, rdi               ; On met la dest dans rax
        ret                        ; On renvoie rax