bits 64

section .text

    extern __errno_location

    global ft_write

;   rax = retour de fonction
;   rdi = premier argument => fd sur lequel écrire
;   rsi = deuxieme argument => la chaine à écrire
;   rdx = troisieme argument => la taille de la chaine à écrire

    ft_write:
        mov rax, 1      ; syscall pour write (tous les paramètres sont déjà au bon endroit)
        syscall         ; On appelle write
        cmp rax, 0      ; On vérifie qu'il n'y a pas eu d'erreur
        jl _failure     ; On gère l'erreur
        ret             ; On renvoie rax
    
    _failure:
        neg rax                 ; On met rax en positif car l'erreur de malloc est négative
        mov rdi, rax            ; On met rax dans rdi pour passer l'erreur en paramètre à errno
        call __errno_location   ; On gère l'erreur
        mov [rax], rdi            ; On met la valeur de l'erreur dans rax 
        mov rax, -1
        ret                     ; On renvoie rax qui contient le retour d'erreur