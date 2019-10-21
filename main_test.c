/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 12:35:37 by lmoulin           #+#    #+#             */
/*   Updated: 2019/10/21 18:00:21 by lmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "prototype.h"
#include "libft/libft.h"

int main(int ac, const char **av)
{
	(void)ac;
	(void)av;
	printf("\n------------\nTest pour d\n------------\n");

	printf("\nTEST 01\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%d\n", 0));
	printf("printf : ");
	printf("Return value : %d\n", printf("%d\n", 0));

	printf("\nTEST 02\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%d\n", 7));
	printf("printf :");
	printf("Return value : %d\n", printf("%d\n", 7));

	printf("\nTEST 03\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%d\n", -31468));
	printf("printf : ");
	printf("Return value : %d\n", printf("%d\n", -31468));


	printf("\nTEST 04\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%d\n", 98566));
	printf("printf : ");
	printf("Return value : %d\n", printf("%d\n", 98566));

	printf("\nTEST 05\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%d\n", 2147483647));
	printf("printf :");
	printf("Return value : %d\n", printf("%d\n", 2147483647));


	printf("\nTEST 06\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%d\n", -2147483647));
	printf("printf : ");
	printf("Return value : %d\n", printf("%d\n", -2147483647));

	printf("\nTEST 06\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%*d\n", 7, 123));
	printf("printf : ");
	printf("Return value : %d\n", printf("%*d\n", 7, 123));



	printf("\n------------\nTest pour i\n------------\n");

	printf("\nTEST 01\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%i\n", 0));
	printf("printf : ");
	printf("Return value : %d\n", printf("%i\n", 0));

	printf("\nTEST 02\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%i\n", 7));
	printf("printf : ");
	printf("Return value : %d\n", printf("%i\n", 7));

	printf("\nTEST 03\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%i\n", -31468));
	printf("printf : ");
	printf("Return value : %d\n", printf("%i\n", -31468));

	printf("\nTEST 04\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%i\n", 98566));
	printf("printf :");
	printf("Return value : %d\n", printf("%i\n", 98566));

	printf("\nTEST 05\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%i\n", 2147483647));
	printf("printf : ");
	printf("Return value : %d\n", printf("%i\n", 2147483647));


	printf("\nTEST 06\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%i\n", -2147483647));
	printf("printf : ");
	printf("Return value : %d\n", printf("%i\n", -2147483647));


	printf("\n------------\nTest pour u\n------------\n");

	printf("\nTEST 01\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%u\n", 0));
	printf("printf : ");
	printf("Return value : %d\n", printf("%u\n", 0));

	printf("\nTEST 02\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%u\n", 7));
	printf("printf :");
	printf("Return value : %d\n", printf("%u\n", 7));

	printf("\nTEST 03\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%u\n", -3149868));
	printf("printf : ");
	printf("Return value : %d\n", printf("%u\n", -3149868));

	printf("\nTEST 04\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%u\n", 98566));
	printf("printf : ");
	printf("Return value : %d\n", printf("%u\n", 98566));

	printf("\nTEST 05\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%u\n", 2147483647));
	printf("printf : ");
	printf("Return value : %d\n", printf("%u\n", 2147483647));


	printf("\nTEST 06\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%u\n", -2147483647));
	printf("printf : ");
	printf("Return value : %d\n", printf("%u\n", -2147483647));


	printf("\n------------\nTest pour c\n------------\n");

	printf("\nTEST 01\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%c\n", 'C'));
	printf("printf : ");
	printf("Return value : %d\n", printf("%c\n", 'C'));

	printf("\nTEST 02\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%c\n", '%'));
	printf("printf :");
	printf("Return value : %d\n", printf("%c\n", '%'));

	printf("\nTEST 03\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%c\n", '6'));
	printf("printf : ");
	printf("Return value : %d\n", printf("%c\n", '6'));

	printf("\nTEST 04\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%c\n", ' '));
	printf("printf : ");
	printf("Return value : %d\n", printf("%c\n", ' '));

	printf("\nTEST 05\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%c\n", 9));
	printf("printf : ");
	printf("Return value : %d\n", printf("%c\n", 9));

	printf("\nTEST 06\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%c\n", -105));
	printf("printf : ");
	printf("Return value : %d\n", printf("%c\n", -105));


	printf("\n------------\nTest pour s\n------------\n");

	printf("\nTEST 01\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%s\n", "Salut"));
	printf("printf : ");
	printf("Return value : %d\n", printf("%s\n", "Salut"));

	printf("\nTEST 02\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%s\n", ""));
	printf("printf :");
	printf("Return value : %d\n", printf("%s\n", ""));

	printf("\nTEST 03\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%s\n", NULL));
	printf("printf : ");
	printf("Return value : %d\n", printf("%s\n", NULL));

	printf("\nTEST 04\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%s\n", "Bonjour \0 Tu vas bien"));
	printf("printf : ");
	printf("Return value : %d\n", printf("%s\n", "Bonjour \0 Tu vas bien"));


	printf("\n------------\nTest pour x\n------------\n");

	printf("\nTEST 01\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%x\n", 0));
	printf("printf : ");
	printf("Return value : %d\n", printf("%x\n", 0));

	printf("\nTEST 02\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%x\n", 0xa0));
	printf("printf :");
	printf("Return value : %d\n", printf("%x\n", 0xa0));

	printf("\nTEST 03\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%x\n", 0xa0ffff));
	printf("printf : ");
	printf("Return value : %d\n", printf("%x\n", 0xa0ffff));

	printf("\nTEST 04\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%x\n", -12345678));
	printf("printf : ");
	printf("Return value : %d\n", printf("%x\n", -12345678));

	printf("\nTEST 05\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%x\n", -1234567800));
	printf("printf : ");
	printf("Return value : %d\n", printf("%x\n", -1234567800));

	printf("\nTEST 06\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%#x\n", 0));
	printf("printf : ");
	printf("Return value : %d\n", printf("%#x\n", 0));

	printf("\nTEST 07\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%#x\n", 0x78aa));
	printf("printf : ");
	printf("Return value : %d\n", printf("%#x\n", 0x78aa));

	printf("\nTEST 08\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%#x\n", 0xff7744));
	printf("printf : ");
	printf("Return value : %d\n", printf("%#x\n", 0xff7744));


	printf("\n------------\nTest pour X\n------------\n");

	printf("\nTEST 01\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%X\n", 0));
	printf("printf : ");
	printf("Return value : %d\n", printf("%X\n", 0));

	printf("\nTEST 02\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%X\n", 0xa0));
	printf("printf :");
	printf("Return value : %d\n", printf("%X\n", 0xa0));

	printf("\nTEST 03\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%X\n", 0xa0ffff));
	printf("printf : ");
	printf("Return value : %d\n", printf("%X\n", 0xa0ffff));

	printf("\nTEST 04\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%X\n", -12345678));
	printf("printf : ");
	printf("Return value : %d\n", printf("%X\n", -12345678));

	printf("\nTEST 05\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%X\n", -1234567800));
	printf("printf : ");
	printf("Return value : %d\n", printf("%X\n", -1234567800));

	printf("\nTEST 06\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%#X\n", 0));
	printf("printf : ");
	printf("Return value : %d\n", printf("%#X\n", 0));

	printf("\nTEST 07\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%#X\n", 0x78aa));
	printf("printf : ");
	printf("Return value : %d\n", printf("%#X\n", 0x78aa));

	printf("\nTEST 08\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%#X\n", 0xff7744));
	printf("printf : ");
	printf("Return value : %d\n", printf("%#X\n", 0xff7744));


	printf("\n------------\nTest pour p\n------------\n");

	int				add;
	char			test;
	int				test2 = 21;
	int				*ptr = &test2;;
	printf("\nTEST 01\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%p\n", NULL));
	printf("printf : ");
	printf("Return value : %d\n", printf("%p\n", NULL));

	printf("\nTEST 02\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%p\n", &add));
	printf("printf :");
	printf("Return value : %d\n", printf("%p\n", &add));

	printf("\nTEST 03\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%p\n", &test));
	printf("printf : ");
	printf("Return value : %d\n", printf("%p\n", &test));

	printf("\nTEST 04\nft_printf : ");
	printf("Return value : %d\n", ft_printf("%p\n", &ptr));
	printf("printf : ");
	printf("Return value : %d\n", printf("%p\n", &ptr));

	return 0;
}
