bits 64
    

section .text

    extern  malloc
    extern  __errno_location
    extern  ft_strlen
    extern  ft_strcpy

    global ft_strdup

;   rax = registre de retour
;   rcx = registre de boucle
;   rdi = argument => chaine a dupliquer
;   al  = registre de 8 bits pour stocker temporairement des char

    ft_strdup:
        call ft_strlen  ; On compte la taille de rdi, donc la taille de la chaine a copier
        mov rsi, rax    ; On met le resultat dans le registre rsi pour pouvoir y avoir acces plus tard

        mov rdx, rdi    ; On deplace rdi pour le garder
        mov rdi, rsi    ; On met la taille de la chaine a copier dans rdi
        call malloc     ; On malloc
        test rax, rax   ; On verifie que la chaine alloue n'est pas vide
        jz _failure     ; On s'occupe de gerer l'erreur
        mov rdi, rax    ; On stocke notre malloc dans rdi
        mov rsi, rdx    ; On recupere notre chaine de char et on la met dans rsi
        call ft_strcpy  ; On copie rsi dans rdi
        ret             ; On revoie rax qui contient le retour de strcpy


    _failure:
        mov rdi, rax            ; On met rax
        call __errno_location   ; On gere l'erreur
        ret                     ; On renvoie l'erreur
