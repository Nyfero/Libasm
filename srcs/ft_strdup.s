bits 64
    

section .text

    extern  malloc
    extern  __errno_location
    extern  ft_strlen
    extern  ft_strcpy

    global ft_strdup

;   rax = registre de retour
;   rcx = registre de boucle
;   rdi = argument => chaine à dupliquer
;   al  = registre de 8 bits pour stocker temporairement des char

    ft_strdup:
        call ft_strlen  ; On compte la taille de rdi, donc la taille de la chaine à copier
        push rdi        ; On met le résultat sur la pile pour pouvoir y avoir accès plus tard
        inc rax         ; On incrémente de 1 pour le \0
        mov rdi, rax    ; On met la taille de la chaine à copier dans rdi
        call malloc     ; On malloc
        cmp rax, 0      ; On vérifie que la chaine alloué n'est pas vide
        jz _failure     ; On s'occupe de gérer l'erreur
        mov rdi, rax    ; On stocke notre malloc dans rdi
        pop rsi         ; On récupère notre chaine de char et on la met dans rsi
        call ft_strcpy  ; On copie rsi dans rdi
        ret             ; On renvoie rax qui contient le retour de strcpy


    _failure:
        neg rax                 ; On met rax en positif car l'erreur de malloc est négative
        mov rdi, rax            ; On met rax dans rdi pour passer l'erreur en paramètre à errno
        call __errno_location   ; On gère l'erreur
        mov rax, rdi          ; On met la valeur de l'erreur dans rax 
        ret                     ; On renvoie rax qui contient le retour d'erreur	