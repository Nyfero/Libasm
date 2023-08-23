bits 64

section .text
    extern __errno_location

    global ft_read

;   rax = retour de fonction
;   rdi = premier argument => fd sur lequel lire
;   rsi = deuxieme argument => la chaine sur laquelle les éléments lu vont être copié
;   rdx = troisieme argument => le nombre d'élément à lire

    ft_read:
        mov rax, 0      ; syscall pour read
        syscall         ; On appelle read

        test rax, rax   ; On regarde si read renvoie -1
        js _failure     ; On gère l'erreur

    _return:
        mov rax, rdx    ; On met le nombre d'élement lu dans rax
        ret             ; On renvoie rax

    _failure:
        mov rax, -1     ; On met -1 dans rax
        ret             ; On renvoie rax