#include "main_test.h"

void	arg_is_di(char **av, int ac)
{
	if (!av[1] || ft_strncmp(av[1], "-d", 3) == 0)
	{
	printf(CYAN "\n------------\nTest pour d\n------------\n");

	ft_printf(NORMAL "\nTEST 01\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%d\n", 0));
	printf("printf : ");
	printf("Return value : %d\n", printf("%d\n", 0));

	ft_printf("\nTEST 02\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%d\n", 7));
	printf("printf : ");
	printf("Return value : %d\n", printf("%d\n", 7));

	ft_printf("\nTEST 03\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%d\n", -31468));
	printf("printf : ");
	printf("Return value : %d\n", printf("%d\n", -31468));


	ft_printf("\nTEST 04\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%d\n", 98566));
	printf("printf : ");
	printf("Return value : %d\n", printf("%d\n", 98566));

	ft_printf("\nTEST 05\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%d\n", 2147483647));
	printf("printf : ");
	printf("Return value : %d\n", printf("%d\n", 2147483647));


	ft_printf("\nTEST 06\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%d\n", -2147483647));
	printf("printf : ");
	printf("Return value : %d\n", printf("%d\n", -2147483647));

	if (ac > 2 && ft_strncmp(av[2], "*", 3) == 0)
	{
	printf("\n___________Flag *___________\n");

	ft_printf("\nTEST 07\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%*d\n", 7, 123));
	printf("printf : ");
	printf("Return value : %d\n", printf("%*d\n", 7, 123));

	ft_printf("\nTEST 08\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%*d\n", -10, 253));
	printf("printf : ");
	printf("Return value : %d\n", printf("%*d\n", -10, 253));

	ft_printf("\nTEST 09\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%*d\n", 6, 123456));
	printf("printf : ");
	printf("Return value : %d\n", printf("%*d\n", 6, 123456));

	ft_printf("\nTEST 10\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%*d\n", -6, -23456));
	printf("printf : ");
	printf("Return value : %d\n", printf("%*d\n", -6, -23456));

	ft_printf("\nTEST 11\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%*d\n", 0, 123));
	printf("printf : ");
	printf("Return value : %d\n", printf("%*d\n", 0, 123));
	}
	}


	if (!av[1] || ft_strncmp(av[1], "-i", 3) == 0)
	{
	printf(CYAN "\n------------\nTest pour i\n------------\n");

	ft_printf(NORMAL "\nTEST 01\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%i\n", 0));
	printf("printf : ");
	printf("Return value : %d\n", printf("%i\n", 0));

	ft_printf("\nTEST 02\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%i\n", 7));
	printf("printf : ");
	printf("Return value : %d\n", printf("%i\n", 7));

	ft_printf("\nTEST 03\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%i\n", -31468));
	printf("printf : ");
	printf("Return value : %d\n", printf("%i\n", -31468));

	ft_printf("\nTEST 04\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%i\n", 98566));
	printf("printf : ");
	printf("Return value : %d\n", printf("%i\n", 98566));

	ft_printf("\nTEST 05\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%i\n", 2147483647));
	printf("printf : ");
	printf("Return value : %d\n", printf("%i\n", 2147483647));

	ft_printf("\nTEST 06\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%i\n", -2147483647));
	printf("printf : ");
	printf("Return value : %d\n", printf("%i\n", -2147483647));


	if (ac > 2 && ft_strncmp(av[2], "*", 3) == 0)
	{

	printf("\n___________Flag *___________\n");

	ft_printf("\nTEST 07\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%*d\n", 7, 123));
	printf("printf : ");
	printf("Return value : %d\n", printf("%*d\n", 7, 123));

	ft_printf("\nTEST 08\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%*d\n", -10, 253));
	printf("printf : ");
	printf("Return value : %d\n", printf("%*d\n", -10, 253));

	ft_printf("\nTEST 09\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%*d\n", 6, 123456));
	printf("printf : ");
	printf("Return value : %d\n", printf("%*d\n", 6, 123456));

	ft_printf("\nTEST 10\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%*d\n", -6, -23456));
	printf("printf : ");
	printf("Return value : %d\n", printf("%*d\n", -6, -23456));

	ft_printf("\nTEST 11\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%*d\n", 0, 123));
	printf("printf : ");
	printf("Return value : %d\n", printf("%*d\n", 0, 123));
	}
	}
}
