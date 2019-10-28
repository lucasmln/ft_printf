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


	if (!av[1] || ft_strncmp(av[1], "-all", 5) == 0)
		av[1] = NULL;
	if (!av[2])
		av[2] = NULL;

	arg_is_di(av, ac);
	arg_is_u(av, ac);
	arg_is_c(av, ac);
	arg_is_s(av, ac);
	arg_is_xX(av, ac);
	arg_is_p(av, ac);

	return (0);
}
