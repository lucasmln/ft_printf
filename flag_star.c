/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_star.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 15:13:30 by lmoulin           #+#    #+#             */
/*   Updated: 2019/10/16 15:50:36 by lmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototype.h"
#include "libft/libft.h"




t_count		ft_flag_star(va_list aux, const char *s, t_count cmp)
{
	int			space;
	t_count		save;
	int			nb;

	space = va_arg(aux, int);
	save = cmp;
	cmp.i += 2;
	if (s[cmp.i] == 'd' || s[cmp.i] == 'i' || s[cmp.i] == 'c')
		cmp.nb = va_arg(aux, int);
	else if (s[cmp.i] == 'u')
		cmp.unb = va_arg(aux, int);
	else if(s[cmp.i] == 'x' || s[cmp.i] == 'X' || s[cmp.i] == 'p')
		cmp.llnb = va_arg(aux, long long);
	else if (s[cmp.i] =='s')
		cmp.str = va_arg(aux, char*);
	cmp = ft_check(aux, s, cmp);
	if (cmp.len - save.len > 0 && space > 0)
		
}
