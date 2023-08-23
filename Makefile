INC_PATH	=	inc/

INC			=	$(addprefix $(INC_PATH), libasm.h)

FILES		=	ft_strlen.s ft_strcmp.s ft_strcpy.s ft_write.s ft_read.s ft_strdup.s

MAIN		=	main.c

SRCS_PATH	=	srcs/

SRCS		=	$(addprefix $(SRCS_PATH), $(FILES))

OBJS_PATH	=	objs/

OBJS 		=	$(patsubst $(SRCS_PATH)%.s,	$(OBJS_PATH)%.o,	$(SRCS))

CC			=	nasm -f elf64
FLAGS 		=	-Wall -Werror -Wextra
NAME		=	libasm.a
TEST		=	tester

all:			$(NAME)

$(NAME):		$(OBJS_PATH) $(OBJS)
				ar rcs $(NAME) $(OBJS)

$(OBJS_PATH):
				mkdir -p $(OBJS_PATH)

$(OBJS_PATH)%.o:	$(SRCS_PATH)%.s Makefile $(INC)
				$(CC) -s $< -o $@

clean:
				rm -rf $(OBJS_PATH) 

fclean:			clean
				rm -rf $(NAME) $(TEST)

re:				fclean $(NAME)

test:			$(NAME) $(INC) $(MAIN)
				clang -no-pie $(FLAGS) $(MAIN) -L. -lasm -o $(TEST)
				./$(TEST)

.PHONY:			clean fclean re test $(NAME) all