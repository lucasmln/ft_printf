#include "main_test.h"

void	arg_is_di(char **av, int ac)
{
	int		my;
	int		og;

	if (!av[1] || ft_strncmp(av[1], "-d", 3) == 0)
	{
	printf(CYAN "\n------------\nTest pour d\n------------\n");

		ft_printf(NORMAL "\nTEST 01\n");
	if ((my = ft_printf("My " BLUE "%d\n" NORMAL, 0)) == (og = printf("Og " BLUE "%d\n" NORMAL, 0)))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);


		ft_printf(NORMAL "\nTEST 02\n");
	if ((my = ft_printf("My " BLUE "%d\n" NORMAL, 7)) == (og = printf("Og " BLUE "%d\n" NORMAL, 7)))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);


		ft_printf(NORMAL "\nTEST 03\n");
	if ((my = ft_printf("My " BLUE "%d\n" NORMAL, -32467)) == (og = printf("Og " BLUE "%d\n" NORMAL, -32467)))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);


		ft_printf(NORMAL "\nTEST 04\n");
	if ((my = ft_printf("My " BLUE "%d\n" NORMAL, 98541)) == (og = printf("Og " BLUE "%d\n" NORMAL, 98541)))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);


		ft_printf(NORMAL "\nTEST 05\n");
	if ((my = ft_printf("My " BLUE "%d\n" NORMAL, 2147483647)) == (og = printf("Og " BLUE "%d\n" NORMAL, 2147483647)))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);

		ft_printf(NORMAL "\nTEST 06\n");
	if ((my = ft_printf("My " BLUE "%d\n" NORMAL, -2147483647)) == (og = printf("Og " BLUE "%d\n" NORMAL, -2147483647)))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);


	if (ac > 2 && ft_strncmp(av[2], "*", 3) == 0)
	{
	printf("\n___________Flag *___________\n");


		ft_printf(NORMAL "\nTEST 07\n");
	if ((my = ft_printf("My " BLUE "%*d\n" NORMAL, 7, 123)) == (og = printf("Og " BLUE "%*d\n" NORMAL, 7, 123)))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);


		ft_printf(NORMAL "\nTEST 08\n");
	if ((my = ft_printf("My " BLUE "%*d\n" NORMAL, -10, 2465)) == (og = printf("Og " BLUE "%*d\n" NORMAL, -10, 2465)))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);


		ft_printf(NORMAL "\nTEST 09\n");
	if ((my = ft_printf("My " BLUE "%*d\n" NORMAL, 6, 123456)) == (og = printf("Og " BLUE "%*d\n" NORMAL, 6, 123456)))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);


		ft_printf(NORMAL "\nTEST 10\n");
	if ((my = ft_printf("My " BLUE "%*d\n" NORMAL, -6, -23456)) == (og = printf("Og " BLUE "%*d\n" NORMAL, -6, -23456)))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);


		ft_printf(NORMAL "\nTEST 11\n");
	if ((my = ft_printf("My " BLUE "%*d\n" NORMAL, 0, 216)) == (og = printf("Og " BLUE "%*d\n" NORMAL, 0, 216)))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);

	}
	}

	if (!av[1] || ft_strncmp(av[1], "-i", 3) == 0)
	{
	printf(CYAN "\n------------\nTest pour i\n------------\n");

	ft_printf(NORMAL "\nTEST 01\n");
	if ((my = ft_printf("My " BLUE "%i\n" NORMAL, 0)) == (og = printf("Og " BLUE "%i\n" NORMAL, 0)))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);


		ft_printf(NORMAL "\nTEST 02\n");
	if ((my = ft_printf("My " BLUE "%i\n" NORMAL, 7)) == (og = printf("Og " BLUE "%i\n" NORMAL, 7)))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);


		ft_printf(NORMAL "\nTEST 03\n");
	if ((my = ft_printf("My " BLUE "%i\n" NORMAL, -32467)) == (og = printf("Og " BLUE "%i\n" NORMAL, -32467)))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);


		ft_printf(NORMAL "\nTEST 04\n");
	if ((my = ft_printf("My " BLUE "%i\n" NORMAL, 98541)) == (og = printf("Og " BLUE "%i\n" NORMAL, 98541)))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);


		ft_printf(NORMAL "\nTEST 05\n");
	if ((my = ft_printf("My " BLUE "%i\n" NORMAL, 2147483647)) == (og = printf("Og " BLUE "%i\n" NORMAL, 2147483647)))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);

		ft_printf(NORMAL "\nTEST 06\n");
	if ((my = ft_printf("My " BLUE "%i\n" NORMAL, -2147483647)) == (og = printf("Og " BLUE "%i\n" NORMAL, -2147483647)))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);


	if (ac > 2 && ft_strncmp(av[2], "*", 3) == 0)
	{
	printf("\n___________Flag *___________\n");


		ft_printf(NORMAL "\nTEST 07\n");
	if ((my = ft_printf("My " BLUE "%*i\n" NORMAL, 7, 123)) == (og = printf("Og " BLUE "%*i\n" NORMAL, 7, 123)))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);


		ft_printf(NORMAL "\nTEST 08\n");
	if ((my = ft_printf("My " BLUE "%*i\n" NORMAL, -10, 2465)) == (og = printf("Og " BLUE "%*i\n" NORMAL, -10, 2465)))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);


		ft_printf(NORMAL "\nTEST 09\n");
	if ((my = ft_printf("My " BLUE "%*i\n" NORMAL, 6, 123456)) == (og = printf("Og " BLUE "%*i\n" NORMAL, 6, 123456)))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);


		ft_printf(NORMAL "\nTEST 10\n");
	if ((my = ft_printf("My " BLUE "%*i\n" NORMAL, -6, -23456)) == (og = printf("Og " BLUE "%*i\n" NORMAL, -6, -23456)))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);


		ft_printf(NORMAL "\nTEST 11\n");
	if ((my = ft_printf("My " BLUE "%*i\n" NORMAL, 0, 216)) == (og = printf("Og " BLUE "%*i\n" NORMAL, 0, 216)))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);

	}
	}
}
