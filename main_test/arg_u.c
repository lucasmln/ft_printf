#include "main_test.h"

void	arg_is_u(char ** av, int ac)
{
	int		my;
	int		og;

	if (!av[1] || ft_strncmp(av[1], "-u", 3) == 0)
	{

	printf(CYAN "\n------------\nTest pour u\n------------\n");


	ft_printf(NORMAL "\nTEST 01\n");
	if ((my = ft_printf("My " BLUE "%u\n" NORMAL, 0)) == (og = printf("Og " BLUE "%u\n" NORMAL, 0)))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);


	ft_printf(NORMAL "\nTEST 02\n");
	if ((my = ft_printf("My " BLUE "%u\n" NORMAL, 7)) == (og = printf("Og " BLUE "%u\n" NORMAL, 7)))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);


	ft_printf(NORMAL "\nTEST 03\n");
	if ((my = ft_printf("My " BLUE "%u\n" NORMAL, -315486)) == (og = printf("Og " BLUE "%u\n" NORMAL, -315486)))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);


	ft_printf(NORMAL "\nTEST 04\n");
	if ((my = ft_printf("My " BLUE "%u\n" NORMAL, 985746)) == (og = printf("Og " BLUE "%u\n" NORMAL, 985746)))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);


	ft_printf(NORMAL "\nTEST 05\n");
	if ((my = ft_printf("My " BLUE "%u\n" NORMAL, 2147483647)) == (og = printf("Og " BLUE "%u\n" NORMAL, 2147483647)))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);


	ft_printf(NORMAL "\nTEST 06\n");
	if ((my = ft_printf("My " BLUE "%u\n" NORMAL, -2147483647)) == (og = printf("Og " BLUE "%u\n" NORMAL, -2147483647)))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);

	if (ac < 2 || ft_strncmp(av[2], "*", 3) == 0 || ft_strncmp(av[2], "-all", 5) == 0)
	{
		printf(CYAN "\n___________Flag *___________\n");
	
	ft_printf(NORMAL "\nTEST 06\n");
	if ((my = ft_printf("My " BLUE "%*u\n" NORMAL, 15, -2147483647)) == (og = printf("Og " BLUE "%*u\n" NORMAL, 15, -2147483647)))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);


	ft_printf(NORMAL "\nTEST 06\n");
	if ((my = ft_printf("My " BLUE "%*u\n" NORMAL, -10, 123)) == (og = printf("Og " BLUE "%*u\n" NORMAL, -10, 123)))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);


	ft_printf(NORMAL "\nTEST 06\n");
	if ((my = ft_printf("My " BLUE "%*u\n" NORMAL, 6, 123456)) == (og = printf("Og " BLUE "%*u\n" NORMAL, 6, 123456)))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);


	ft_printf(NORMAL "\nTEST 06\n");
	if ((my = ft_printf("My " BLUE "%*u\n" NORMAL, -6, -123456)) == (og = printf("Og " BLUE "%*u\n" NORMAL, -6, -123456)))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);

	ft_printf(NORMAL "\nTEST 06\n");
	if ((my = ft_printf("My " BLUE "%*u\n" NORMAL, 0, 123)) == (og = printf("Og " BLUE "%*u\n" NORMAL, 0, 123)))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);

	}
	}
}
