#include "main_test.h"

void	arg_is_p(char **av, int ac)
{
	if (!av[1] || ft_strncmp(av[1], "-p", 3) == 0)
	{
	printf(CYAN "\n------------\nTest pour p\n------------\n");

	int				add;
	char			test;
	int				test2 = 21;
	int				*ptr = &test2;;
	ft_printf(NORMAL "\nTEST 01\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%p\n", NULL));
	printf("printf : ");
	printf("Return value : %d\n", printf("%p\n", NULL));

	ft_printf("\nTEST 02\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%p\n", &add));
	printf("printf : ");
	printf("Return value : %d\n", printf("%p\n", &add));

	ft_printf("\nTEST 03\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%p\n", &test));
	printf("printf : ");
	printf("Return value : %d\n", printf("%p\n", &test));

	ft_printf("\nTEST 04\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%p\n", &ptr));
	printf("printf : ");
	printf("Return value : %d\n", printf("%p\n", &ptr));
	}
}
