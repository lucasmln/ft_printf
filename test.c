/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 16:13:23 by lmoulin           #+#    #+#             */
/*   Updated: 2019/10/21 16:32:32 by lmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prototype.h"
#include "libft/libft.h"

int		ft_strlen_nb(long nb, int base)
{
	int		len;

	if (nb == 0)
		return (1);
	len = (nb < 0) ? 1: 0;
	nb = (nb < 0) ? -nb: nb;
	while (nb >= 1)
	{
		nb /= base;
		len++;
	}
	return (len);
}

int		main(int ac, const char *av[])
{
//	unsigned int i = 21546531;
	ac = 4;
	int a = 48;
	long b = -3146;

	av = 0;


	printf("%ld, %s\n", b, ft_itoa(b));
/*	printf("%*c\n", atoi(av[1]), av[2][1]);
	printf("%*d\n", atoi(av[1]), atoi(av[3]));
	printf("%*i\n", atoi(av[1]), atoi(av[3]));
	printf("%*u\n", atoi(av[1]), atoi(av[3]));
	printf("%*x\n", atoi(av[1]), i);
	printf("%*x\n", atoi(av[1]), i);
	printf("%*p\n", atoi(av[1]), av[2]);*/
	return (0);
}
