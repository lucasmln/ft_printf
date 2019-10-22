#include "main_test.h"

void	arg_is_xX(char **av, int ac)
{
	int		my;
	int		og;

	if (!av[1] || ft_strncmp(av[1], "-x", 3) == 0)
	{
	printf(CYAN "\n------------\nTest pour x\n------------\n");


	ft_printf(NORMAL "\nTEST 01\n");
	if ((my = ft_printf("My " BLUE "%x\n" NORMAL, 0)) == (og = printf("Og " BLUE "%x\n" NORMAL, 0)))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);


		ft_printf(NORMAL "\nTEST 02\n");
	if ((my = ft_printf("My " BLUE "%x\n" NORMAL, 0xa0)) == (og = printf("Og " BLUE "%x\n" NORMAL, 0xa0)))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);


		ft_printf(NORMAL "\nTEST 03\n");
	if ((my = ft_printf("My " BLUE "%x\n" NORMAL, 0xa0ffff)) == (og = printf("Og " BLUE "%x\n" NORMAL, 0xa0ffff)))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);


		ft_printf(NORMAL "\nTEST 04\n");
	if ((my = ft_printf("My " BLUE "%x\n" NORMAL, -12345678)) == (og = printf("Og " BLUE "%x\n" NORMAL, -12345678)))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);


		ft_printf(NORMAL "\nTEST 05\n");
	if ((my = ft_printf("My " BLUE "%x\n" NORMAL, -1234567800)) == (og = printf("Og " BLUE "%x\n" NORMAL, -1234567800)))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);


	if (ac > 2 && ft_strncmp(av[2], "-#", 3) == 0)
	{

	ft_printf(NORMAL "\nTEST 06\n");
	if ((my = ft_printf("My " BLUE "%#x\n" NORMAL, 0)) == (og = printf("Og " BLUE "%#x\n" NORMAL, 0)))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);


		ft_printf(NORMAL "\nTEST 07\n");
	if ((my = ft_printf("My " BLUE "%#x\n" NORMAL, 0x78aa)) == (og = printf("Og " BLUE "%#x\n" NORMAL, 0x78aa)))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);


		ft_printf(NORMAL "\nTEST 08\n");
	if ((my = ft_printf("My " BLUE "%#x\n" NORMAL, 0xff7744)) == (og = printf("Og " BLUE "%#x\n" NORMAL, 0xff7744)))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);
	}
	}


	if (!av[1] || ft_strncmp(av[1], "-X", 3) == 0)
	{
	printf(CYAN "\n------------\nTest pour X\n------------\n");


	ft_printf(NORMAL "\nTEST 01\n");
	if ((my = ft_printf("My " BLUE "%X\n" NORMAL, 0)) == (og = printf("Og " BLUE "%X\n" NORMAL, 0)))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);


		ft_printf(NORMAL "\nTEST 02\n");
	if ((my = ft_printf("My " BLUE "%X\n" NORMAL, 0xa0)) == (og = printf("Og " BLUE "%X\n" NORMAL, 0xa0)))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);


		ft_printf(NORMAL "\nTEST 03\n");
	if ((my = ft_printf("My " BLUE "%X\n" NORMAL, 0xa0ffff)) == (og = printf("Og " BLUE "%X\n" NORMAL, 0xa0ffff)))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);


		ft_printf(NORMAL "\nTEST 04\n");
	if ((my = ft_printf("My " BLUE "%X\n" NORMAL, -12345678)) == (og = printf("Og " BLUE "%X\n" NORMAL, -12345678)))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);


		ft_printf(NORMAL "\nTEST 05\n");
	if ((my = ft_printf("My " BLUE "%X\n" NORMAL, -1234567800)) == (og = printf("Og " BLUE "%X\n" NORMAL, -1234567800)))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);



	if (ac > 2 && ft_strncmp(av[2], "-#", 3) == 0)
	{

	ft_printf(NORMAL "\nTEST 06\n");
	if ((my = ft_printf("My " BLUE "%#X\n" NORMAL, 0)) == (og = printf("Og " BLUE "%#X\n" NORMAL, 0)))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);


		ft_printf(NORMAL "\nTEST 07\n");
	if ((my = ft_printf("My " BLUE "%#X\n" NORMAL, 0x78aa)) == (og = printf("Og " BLUE "%#X\n" NORMAL, 0x78aa)))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);


		ft_printf(NORMAL "\nTEST 08\n");
	if ((my = ft_printf("My " BLUE "%#X\n" NORMAL, 0xff7744)) == (og = printf("Og " BLUE "%#X\n" NORMAL, 0xff7744)))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);
	}
	}
}
