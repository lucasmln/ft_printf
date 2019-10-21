/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_annexe.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 12:28:54 by lmoulin           #+#    #+#             */
/*   Updated: 2019/10/15 15:26:45 by lmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "libft/libft.h"


void	ft_putnbr_hexa_fd(unsigned int nb, int fd);

/*void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr_fd(char *str, int fd)
{
	int	i;

	i = 0;
	while (str[i])
		ft_putchar_fd(str[i++], fd);
}
*/
void	ft_put_unsigned_nbr(unsigned int nb, int fd)
{
	if (nb > 9)
		ft_put_unsigned_nbr(nb / 10, fd);
	ft_putchar_fd((nb % 10) + '0', fd);

}
/*
void	ft_putnbr_fd(int nb, int fd)
{
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		if (nb == -2147483648)
		{
			ft_putchar_fd('2', fd);
			nb = -147483648;
		}
		nb = -nb;
	}
	if (nb > 9)
		ft_putnbr_fd(nb / 10, fd);
	ft_putchar_fd((nb % 10) + '0', fd);
}
*/

/*
void	ft_putnbr_hexa_fd(unsigned int nb, int fd)
{
	if (nb < 0)
	{
		//ft_putchar_fd('-', fd);
		nb = 4294967295 + nb;
	}
	char hexa[17] = "0123456789abcdef";
	if (nb > 15)
		ft_putnbr_hexa_fd(nb / 16, fd);
	ft_putchar_fd(hexa[nb % 16], fd);
}


int main(int ac, const char *av[])
{
	int		i, c, d;
	int a;
	unsigned int	u;
	int		tab[] = {1, 2, 3, 4, 5};

	a = -1;
	i = 0;
	c = 23;
	d = 4563;
	u = a;


	test(a);
//	while (i++ < 31)
//	{
		printf("\n%d = %20X\n", (unsigned int)u, a);
//		a++;
//	}

//	printf("a = %p\n, b = %d, c = %d, d = %d, !e = %d, !s = %c, !char = %c", a, b, c, d);
	return 0;
}
*/
