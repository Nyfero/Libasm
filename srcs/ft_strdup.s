bits 64

section .text
    extern  malloc
    extern  ft_strlen
    extern  ft_strcpy

    global ft_strdup

;   rax = registre de retour
;   rcx = registre de boucle
;   rdi = argument => chaine a dupliquer
;   al  = registre de 8 bits pour stocker temporairement des char

    ft_strdup:
        call ft_strlen
        ret
        ; mov rsi, rax

    ; _loop:


    ; _return:
