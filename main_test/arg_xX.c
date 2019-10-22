#include "main_test.h"

void	arg_is_xX(char **av, int ac)
{
if (!av[1] || ft_strncmp(av[1], "-x", 3) == 0)
	{
	printf(CYAN "\n------------\nTest pour x\n------------\n");

	ft_printf(NORMAL "\nTEST 01\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%x\n", 0));
	printf("printf : ");
	printf("Return value : %d\n", printf("%x\n", 0));

	ft_printf("\nTEST 02\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%x\n", 0xa0));
	printf("printf : ");
	printf("Return value : %d\n", printf("%x\n", 0xa0));

	ft_printf("\nTEST 03\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%x\n", 0xa0ffff));
	printf("printf : ");
	printf("Return value : %d\n", printf("%x\n", 0xa0ffff));

	ft_printf("\nTEST 04\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%x\n", -12345678));
	printf("printf : ");
	printf("Return value : %d\n", printf("%x\n", -12345678));

	ft_printf("\nTEST 05\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%x\n", -1234567800));
	printf("printf : ");
	printf("Return value : %d\n", printf("%x\n", -1234567800));

	if (ac > 2 && ft_strncmp(av[2], "-#", 3) == 0)
	{
	ft_printf("\nTEST 06\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%#x\n", 0));
	printf("printf : ");
	printf("Return value : %d\n", printf("%#x\n", 0));

	ft_printf("\nTEST 07\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%#x\n", 0x78aa));
	printf("printf : ");
	printf("Return value : %d\n", printf("%#x\n", 0x78aa));

	ft_printf("\nTEST 08\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%#x\n", 0xff7744));
	printf("printf : ");
	printf("Return value : %d\n", printf("%#x\n", 0xff7744));
	}
	}

	if (!av[1] || ft_strncmp(av[1], "-X", 3) == 0)
	{
	printf(CYAN "\n------------\nTest pour X\n------------\n");

	ft_printf(NORMAL "\nTEST 01\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%X\n", 0));
	printf("printf : ");
	printf("Return value : %d\n", printf("%X\n", 0));

	ft_printf("\nTEST 02\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%X\n", 0xa0));
	printf("printf : ");
	printf("Return value : %d\n", printf("%X\n", 0xa0));

	ft_printf("\nTEST 03\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%X\n", 0xa0ffff));
	printf("printf : ");
	printf("Return value : %d\n", printf("%X\n", 0xa0ffff));

	ft_printf("\nTEST 04\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%X\n", -12345678));
	printf("printf : ");
	printf("Return value : %d\n", printf("%X\n", -12345678));

	ft_printf("\nTEST 05\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%X\n", -1234567800));
	printf("printf : ");
	printf("Return value : %d\n", printf("%X\n", -1234567800));
	
	if (ac > 2 && ft_strncmp(av[2], "-#", 3) == 0)
	{
	ft_printf("\nTEST 06\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%#X\n", 0));
	printf("printf : ");
	printf("Return value : %d\n", printf("%#X\n", 0));

	ft_printf("\nTEST 07\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%#X\n", 0x78aa));
	printf("printf : ");
	printf("Return value : %d\n", printf("%#X\n", 0x78aa));

	ft_printf("\nTEST 08\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%#X\n", 0xff7744));
	printf("printf : ");
	printf("Return value : %d\n", printf("%#X\n", 0xff7744));
	}
	}
}
