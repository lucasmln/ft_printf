#include "main_test.h"

void	arg_is_s(char **av, int ac)
{
	int		my;
	int		og;

	if (!av[1] || ft_strncmp(av[1], "-s", 3) == 0)
	{
	printf(CYAN "\n------------\nTest pour s\n------------\n");

	ft_printf(NORMAL "\nTEST 01\n");
	if ((my = ft_printf("My " BLUE "%s\n" NORMAL, "Salut")) == (og = printf("Og " BLUE "%s\n" NORMAL, "Salut")))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);


	ft_printf(NORMAL "\nTEST 01\n");
	if ((my = ft_printf("My " BLUE "%s\n" NORMAL, "")) == (og = printf("Og " BLUE "%s\n" NORMAL, "")))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);


	ft_printf(NORMAL "\nTEST 01\n");
	if ((my = ft_printf("My " BLUE "%s\n" NORMAL, NULL)) == (og = printf("Og " BLUE "%s\n" NORMAL, NULL)))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);


	ft_printf(NORMAL "\nTEST 01\n");
	if ((my = ft_printf("My " BLUE "%s\n" NORMAL, "Bonjour Tu v\0as bien")) == (og = printf("Og " BLUE "%s\n" NORMAL, "Bonjour Tu v\0as bien")))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);

	}
}
