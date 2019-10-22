#ifndef MAIN_TEST_H
#define MAIN_TEST_H

#include <stdio.h>
#include "../includes/prototype.h"
#include "../libft/libft.h"

#define BLACK "\033[00;30m"
#define RED "\033[00;31m"
#define GREEN "\033[00;32m"
#define YELLOW "\033[00;33m"
#define BLUE "\033[00;34m"
#define PURPLE "\033[00;35m"
#define CYAN "\033[00;36m"
#define GREY "\033[00;37m"
#define SOULIGNE "\033[04m"
#define NORMAL "\033[00m"

void	arg_is_u(char ** av, int ac);
void	arg_is_di(char **av, int ac);
void	arg_is_s(char **av, int ac);
void	arg_is_p(char **av, int ac);
void	arg_is_xX(char **av, int ac);
void	arg_is_c(char ** av, int ac);
#endif
