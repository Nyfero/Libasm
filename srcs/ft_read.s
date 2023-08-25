bits 64

section .text

    extern __errno_location

    global ft_read

;   rax = retour de fonction
;   rdi = premier argument => fd sur lequel lire
;   rsi = deuxieme argument => la chaine sur laquelle les éléments lu vont être copié
;   rdx = troisieme argument => le nombre d'élément à lire

    ft_read:
        xor rax, rax    ; syscall pour read (rax = 0)
        syscall         ; On appelle read
        cmp rax, 0      ; On regarde si read renvoie -1
        jl _failure     ; On gère l'erreur
        ret             ; On renvoie rax

    _failure:
        neg rax                 ; On met rax en positif car l'erreur de malloc est négative
        mov rdi, rax            ; On met rax dans rdi pour passer l'erreur en paramètre à errno
        call __errno_location   ; On gère l'erreur
        mov [rax], rdi            ; On met la valeur de l'erreur dans rax 
        mov rax, -1
        ret                     ; On renvoie rax qui contient le retour d'erreur