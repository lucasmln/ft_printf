#include "main_test.h"

void	arg_is_c(char ** av, int ac)
{
	int		my;
	int		og;

	if (!av[1] || ft_strncmp(av[1], "-c", 3) == 0)
	{
	printf(CYAN "\n------------\nTest pour c\n------------\n");

	ft_printf(NORMAL "\nTEST 01\n");
	if ((my = ft_printf("My " BLUE "%c\n" NORMAL, 'C')) == (og = printf("Og " BLUE "%c\n" NORMAL, 'C')))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);


	ft_printf(NORMAL "\nTEST 02\n");
	if ((my = ft_printf("My " BLUE "%c\n" NORMAL, '%')) == (og = printf("Og " BLUE "%c\n" NORMAL, '%')))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);


	ft_printf(NORMAL "\nTEST 03\n");
	if ((my = ft_printf("My " BLUE "%c\n" NORMAL, '6')) == (og = printf("Og " BLUE "%c\n" NORMAL, '6')))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);


	ft_printf(NORMAL "\nTEST 04\n");
	if ((my = ft_printf("My " BLUE "%c\n" NORMAL, ' ')) == (og = printf("Og " BLUE "%c\n" NORMAL, ' ')))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);


	ft_printf(NORMAL "\nTEST 05\n");
	if ((my = ft_printf("My " BLUE "%c\n" NORMAL, 13)) == (og = printf("Og " BLUE "%c\n" NORMAL, 13)))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);


	ft_printf(NORMAL "\nTEST 06\n");
	if ((my = ft_printf("My " BLUE "%c\n" NORMAL, -115)) == (og = printf("Og "BLUE "%c\n" NORMAL, -115)))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);

	}
}
