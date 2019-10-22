#include "main_test.h"

void	arg_is_u(char ** av, int ac)
{
	int		my;
	int		og;

	if (!av[1] || ft_strncmp(av[1], "-u", 3) == 0)
	{

	printf(CYAN "\n------------\nTest pour u\n------------\n");


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
	if ((my = ft_printf("My " BLUE "%d\n" NORMAL, -315486)) == (og = printf("Og " BLUE "%d\n" NORMAL, -315486)))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);


	ft_printf(NORMAL "\nTEST 04\n");
	if ((my = ft_printf("My " BLUE "%d\n" NORMAL, 985746)) == (og = printf("Og " BLUE "%d\n" NORMAL, 985746)))
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

/*
	ft_printf(NORMAL "\nTEST 01\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%u\n", 0));
	printf("printf : ");
	printf("Return value : %d\n", printf("%u\n", 0));

	ft_printf("\nTEST 02\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%u\n", 7));
	printf("printf : ");
	printf("Return value : %d\n", printf("%u\n", 7));

	ft_printf("\nTEST 03\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%u\n", -3149868));
	printf("printf : ");
	printf("Return value : %d\n", printf("%u\n", -3149868));

	ft_printf("\nTEST 04\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%u\n", 98566));
	printf("printf : ");
	printf("Return value : %d\n", printf("%u\n", 98566));

	ft_printf("\nTEST 05\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%u\n", 2147483647));
	printf("printf : ");
	printf("Return value : %d\n", printf("%u\n", 2147483647));

	ft_printf("\nTEST 06\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%u\n", -2147483647));
	printf("printf : ");
	printf("Return value : %d\n", printf("%u\n", -2147483647));
*/
	if (ac > 2 && ft_strncmp(av[2], "*", 3) == 0)
	{
		printf(CYAN "\n___________Flag *___________\n");
	
	ft_printf(NORMAL "\nTEST 06\n");
	if ((my = ft_printf("My " BLUE "%*d\n" NORMAL, 15, -2147483647)) == (og = printf("Og " BLUE "%*d\n" NORMAL, 15, -2147483647)))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);


	ft_printf(NORMAL "\nTEST 06\n");
	if ((my = ft_printf("My " BLUE "%*d\n" NORMAL, -10, 123)) == (og = printf("Og " BLUE "%*d\n" NORMAL, -10, 123)))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);


	ft_printf(NORMAL "\nTEST 06\n");
	if ((my = ft_printf("My " BLUE "%*d\n" NORMAL, 6, 123456)) == (og = printf("Og " BLUE "%*d\n" NORMAL, 6, 123456)))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);


	ft_printf(NORMAL "\nTEST 06\n");
	if ((my = ft_printf("My " BLUE "%*d\n" NORMAL, -6, -123456)) == (og = printf("Og " BLUE "%*d\n" NORMAL, -6, -123456)))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);

	ft_printf(NORMAL "\nTEST 06\n");
	if ((my = ft_printf("My " BLUE "%*d\n" NORMAL, 0, 123)) == (og = printf("Og " BLUE "%*d\n" NORMAL, 0, 123)))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);

/*

	ft_printf("\nTEST 07\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%*u\n", 7, 123));
	printf("printf : ");
	printf("Return value : %d\n", printf("%*u\n", 7, 123));

	ft_printf("\nTEST 08\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%*u\n", -10, 253));
	printf("printf : ");
	printf("Return value : %d\n", printf("%*u\n", -10, 253));

	ft_printf("\nTEST 09\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%*u\n", 6, 123456));
	printf("printf : ");
	printf("Return value : %d\n", printf("%*u\n", 6, 123456));

	ft_printf("\nTEST 10\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%*u\n", -6, -23456));
	printf("printf : ");
	printf("Return value : %d\n", printf("%*u\n", -6, -23456));

	ft_printf("\nTEST 11\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%*u\n", 0, 123));
	printf("printf : ");
	printf("Return value : %d\n", printf("%*u\n", 0, 123));

	*/
	}
	}
}
