#include "main_test.h"

void	arg_is_p(char **av, int ac)
{
	if (!av[1] || ft_strncmp(av[1], "-p", 3) == 0)
	{
	printf(CYAN "\n------------\nTest pour p\n------------\n");

	int				add;
	char			test;
	int				test2 = 21;
	int				*ptr = &test2;
	int				my;
	int				og;

	ft_printf(NORMAL "\nTEST 01\n");
	if ((my = ft_printf("My " BLUE "%p\n" NORMAL, NULL)) == (og = printf("Og " BLUE "%p\n" NORMAL, NULL)))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);


	ft_printf(NORMAL "\nTEST 02\n");
	if ((my = ft_printf("My " BLUE "%p\n" NORMAL, &add)) == (og = printf("Og " BLUE "%p\n" NORMAL, &add)))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);


	ft_printf(NORMAL "\nTEST 03\n");
	if ((my = ft_printf("My " BLUE "%p\n" NORMAL, &test)) == (og = printf("Og " BLUE "%p\n" NORMAL, &test)))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);


	ft_printf(NORMAL "\nTEST 04\n");
	if ((my = ft_printf("My " BLUE "%p\n" NORMAL, &ptr)) == (og = printf("Og " BLUE "%p\n" NORMAL, &ptr)))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);

	}
}
