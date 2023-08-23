bits 64

section .text
    global ft_write

;   rax = retour de fonction
;   rdi = premier argument => fd sur lequel écrire
;   rsi = deuxieme argument => la chaine à écrire
;   rdx = troisieme argument => la taille de la chaine à écrire

    ft_write:
        mov rax, 1      ; syscall pour write (tous les paramètres sont déjà au bon endroit)
        syscall         ; On appelle write

        test rax, rax   ; On vérifie qu'il n'y a pas eu d'erreur
        js _failure     ; On gère l'erreur

    _return:
        mov rax, rdx    ; On met le nombre de byte que l'on vient d'écrire dans rax
        ret             ; On renvoie rax
    
    _failure:
        mov rax, -1     ; On met -1 dans rax en cas d'erreur
        ret             ; On renvoie rax