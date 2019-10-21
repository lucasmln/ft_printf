NAME = test.a

SRC = libft/ft_itoa.c libft/ft_atoi.c ft_new_printf.c \
	  main_test.c libft/ft_putchar_fd.c libft/ft_putstr_fd.c \
	  libft/ft_strlen.c libft/ft_strdup.c

OBJ = $(subst .c,.o,$(NAME))


FLAG = -Wall -Werror -Wextra -g3 -fsanitize=address

all: $(NAME)

$(NAME):
	gcc $(FLAG) $(SRC)
	/bin/rm -f *.o
#	ar rc $(NAME) $(OBJ)
#	ranlib $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
