/************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 16:13:23 by lmoulin           #+#    #+#             */
/*   Updated: 2019/10/30 15:57:05 by lmoulin          ###   ########.fr       */
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
	av = 0;
	int		ret;

	ret = 16;

	ft_printf("%010p\n", &ret);
	printf("%010p\n", &ret);
return (0);
}
