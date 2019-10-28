/************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 16:13:23 by lmoulin           #+#    #+#             */
/*   Updated: 2019/10/28 16:52:13 by lmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../includes/prototype.h"
#include "../libft/libft.h"


int		main(int ac, const char *av[])
{
//	unsigned int i = 21546531;
	ac = 4;
	int		c = 'a';
	av = 0;
	
//	ft_printf("My ultimate1 %*d        %*i\n", 500, 0, 10, 10);
//	ft_printf("My ultimate2 %*d %*s %*x %*X %*i %*u\n", 1, 5000, 1, "hey", 10, 54700, 1, 300, 10000, -55, 1, -60);
	ft_printf("My ultimate3 %*.*d %*.*s\n", 1, 50, 5000, 1, 0, "hey");
	ft_printf("My ultimate4 %*.*x %*.*X\n", 1, 50, 5000, 1, 0, 10);
//	ft_printf("My ultimate5 %*.*u\n", 1, 50, 5000);


//	printf("Og ultimate1 %*d        %*i\n", 500, 0, 10, 10);
//	printf("Og ultimate2 %*d %*s %*x %*X %*i %*u\n", 1, 5000, 1, "hey", 10, 54700, 1, 300, 10000, -55, 1, -60);
//	printf("Og ultimate3 %*.*d %*.*s\n", 1, 50, 5000, 1, 0, "hey");
//	printf("Og ultimate4 %*.*x %*.*X\n", 1, 50, 5000, 1, 0, 10);
//	printf("Og ultimate5 %*.*u\n", 1, 50, 5000);
	


	return (0);
}
