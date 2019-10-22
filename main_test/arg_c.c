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


	ft_printf(NORMAL "\nTEST 01\n");
	if ((my = ft_printf("My " BLUE "%c\n" NORMAL, '%')) == (og = printf("Og " BLUE "%c\n" NORMAL, '%')))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);


	ft_printf(NORMAL "\nTEST 01\n");
	if ((my = ft_printf("My " BLUE "%c\n" NORMAL, '6')) == (og = printf("Og " BLUE "%c\n" NORMAL, '6')))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);


	ft_printf(NORMAL "\nTEST 01\n");
	if ((my = ft_printf("My " BLUE "%c\n" NORMAL, ' ')) == (og = printf("Og " BLUE "%c\n" NORMAL, ' ')))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);


	ft_printf(NORMAL "\nTEST 01\n");
	if ((my = ft_printf("My " BLUE "%c\n" NORMAL, 13)) == (og = printf("Og " BLUE "%c\n" NORMAL, 13)))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);


	ft_printf(NORMAL "\nTEST 01\n");
	if ((my = ft_printf("My " BLUE "%c\n" NORMAL, -115)) == (og = printf("Og "BLUE "%c\n" NORMAL, -115)))
		printf("return value " GREEN "OK\n");
	else
		printf(RED "return value erreur : my = %d, OG = %d\n" NORMAL, my, og);

/*

	printf("Return value : %d\n", ft_printf(GREEN "%c\n" NORMAL, 'C'));
	printf("printf : ");
	printf("Return value : %d\n", printf("%c\n", 'C'));

	ft_printf(NORMAL"\nTEST 02\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%c\n", '%'));
	printf("printf : ");
	printf("Return value : %d\n", printf("%c\n", '%'));

	ft_printf("\nTEST 03\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%c\n", '6'));
	printf("printf : ");
	printf("Return value : %d\n", printf("%c\n", '6'));

	ft_printf("\nTEST 04\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%c\n", ' '));
	printf("printf : ");
	printf("Return value : %d\n", printf("%c\n", ' '));

	ft_printf("\nTEST 05\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%c\n", 9));
	printf("printf : ");
	printf("Return value : %d\n", printf("%c\n", 9));

	ft_printf("\nTEST 06\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%c\n", -105));
	printf("printf : ");
	printf("Return value : %d\n", printf("%c\n", -105));
*/
}
}
