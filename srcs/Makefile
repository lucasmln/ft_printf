SRCS = ../libft/ft_atoi.c ../libft/ft_itoa.c ../libft/ft_putnbr_fd.c \
	  ../libft/ft_putchar_fd.c ../libft/ft_putstr_fd.c ../libft/ft_strdup.c ../libft/ft_strlen.c \
	  ../libft/ft_strncmp.c ../libft/ft_strlcpy.c \
	  ft_printf.c ft_annexe.c ft_arg.c ft_arg_2.c ft_flags.c ft_flags_2.c \
	  ft_exception.c \
 	  test.c
	#  essaie.c \

FLAGS = -Wall -Werror -Wextra

SANITIZE = -g3 -fsanitize=address

all:
	gcc $(SRCS)

flags:
	gcc $(FLAGS) $(SRCS)

sanitize:
	gcc $(SANITIZE) $(SRCS)
