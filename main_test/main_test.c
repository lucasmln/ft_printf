/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 12:35:37 by lmoulin           #+#    #+#             */
/*   Updated: 2019/10/21 19:21:31 by lmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main_test.h"

int main(int ac, char **av)
{
	(void)ac;

	if (ft_strncmp(av[1], "-all", 5) == 0)
		av[1] = NULL;

	arg_is_di(av, ac);
	arg_is_u(av, ac);
	arg_is_c(av, ac);
	arg_is_s(av, ac);
	arg_is_xX(av, ac);
	arg_is_p(av, ac);
/*	if (!av[1] || ft_strncmp(av[1], "-d", 3) == 0)
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

	if (!av[1] || ft_strncmp(av[1], "-u", 3) == 0)
	{

	printf(CYAN "\n------------\nTest pour u\n------------\n");

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

	if (ac > 2 && ft_strncmp(av[2], "*", 3) == 0)
	{

	printf("\n___________Flag *___________\n");

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

	}
	}

	if (!av[1] || ft_strncmp(av[1], "-c", 3) == 0)
	{
	printf(CYAN "\n------------\nTest pour c\n------------\n");

	ft_printf(NORMAL "\nTEST 01\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%c\n", 'C'));
	printf("printf : ");
	printf("Return value : %d\n", printf("%c\n", 'C'));

	ft_printf("\nTEST 02\nft_printf : ");
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
	}

	if (!av[1] || ft_strncmp(av[1], "-s", 3) == 0)
	{
	printf(CYAN "\n------------\nTest pour s\n------------\n");

	ft_printf(NORMAL "\nTEST 01\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%s\n", "Salut"));
	printf("printf : ");
	printf("Return value : %d\n", printf("%s\n", "Salut"));

	ft_printf("\nTEST 02\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%s\n", ""));
	printf("printf : ");
	printf("Return value : %d\n", printf("%s\n", ""));

	ft_printf("\nTEST 03\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%s\n", NULL));
	printf("printf : ");
	printf("Return value : %d\n", printf("%s\n", NULL));

	ft_printf("\nTEST 04\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%s\n", "Bonjour \0 Tu vas bien"));
	printf("printf : ");
	printf("Return value : %d\n", printf("%s\n", "Bonjour \0 Tu vas bien"));
	}

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
*/
	return (0);
}
