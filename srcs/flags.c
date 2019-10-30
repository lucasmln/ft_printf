/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 11:51:49 by lmoulin           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2019/10/30 15:22:26 by lmoulin          ###   ########.fr       */
=======
/*   Updated: 2019/10/28 15:55:48 by lmoulin          ###   ########.fr       */
>>>>>>> 50fb279ea3d2e965385cd55fa729ac62896097db
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes/prototype.h"

t_count		ft_flag_star(va_list aux, const char *s, t_count cmp)
{
	int		k;

	k = cmp.i + 2;
	if (s[k] == '.')
	{
		cmp.i = k - 1;
		cmp.space = va_arg(aux, int);
		cmp = ft_flag_point(aux, cmp, s);
		k++;
		while (s[k] >= '0' && s[k] <= '9')
			k++;
		if (ft_convertible(s[k + 1]) == 1)
			k++;
		else if (s[k + 1] >= '0' && s[k + 1] <= '9')
		{
			k++;
			while (s[k] >= '0' && s[k] <= '9')
				k++;
		}
	}
	else if (ft_convertible(s[k]) == 1)
	{
		cmp.space = va_arg(aux, int);
		cmp.i = k - 1;
		return (cmp);
	}
	return (cmp);
}

t_count		ft_flag_point(va_list aux, t_count cmp, const char *s)
{
	int		k;

	k = cmp.i + 2;
	cmp.check = (s[k - 1] == '0') ? 1 : 2;
<<<<<<< HEAD
	cmp.i++;
	cmp = (s[k] == '.' && s[k - 1] == '0') ? ft_flag_point(aux, cmp, s) : cmp;
=======
>>>>>>> 50fb279ea3d2e965385cd55fa729ac62896097db
	if (s[k] == '*')
	{
		if (ft_convertible(s[k + 1]) == 1)
		{
			cmp.zero = va_arg(aux, int);
			cmp.i = k;
		}
	}
	else if ((s[k] >= '0' && s[k] <= '9') || ft_convertible(s[k]) == 1)
	{
		cmp.i = (s[k] >= '0' && s[k] <= '9') ? k : cmp.i;
		while (s[k] >= '0' && s[k] <= '9')
			k++;
		if (ft_convertible(s[k]) == 1 && s[k])
			cmp.zero = ft_atoi((char *)&s[cmp.i]);
		cmp.i = k - 1;
	}
	return (cmp);
}

t_count		ft_flag_moins(va_list aux, t_count cmp, char *s)
{
	int		k;

	k = cmp.i + 2;
	if (s[k] == '*')
	{
		cmp.i++;
		cmp = ft_flag_star(aux, (const char *)s, cmp);
		cmp.space = (cmp.space < 0) ? cmp.space : -cmp.space;
	}
	if (s[k] == '.')
	{
		cmp.i++;
		cmp = ft_flag_point(aux, cmp, s);
	}
	else if(s[k] <= '9' && s[k] >= '0')
	{
		while (s[k] >= '0' && s[k] <= '9')
			k++;
		if (ft_convertible(s[k]) == 1)
		{
			cmp.space = -ft_atoi((char *)&s[cmp.i + 2]);
			cmp.i = k - 1;
		}
		if (s[k] == '.')
		{
			cmp.space = -ft_atoi((char*)&s[cmp.i + 2]);
			cmp.i = k - 1;
			cmp = ft_flag_point(aux, cmp, s);
		}
	}
	return (cmp);
}
t_count		ft_flag_nb(va_list aux, t_count cmp, char *s)
{
	int		k;
	int		save;

	k = cmp.i + 1;
	if (s[k + 1] == '.')
	{
		cmp.i++;
		cmp.space = ft_atoi(&s[k]);
		cmp = ft_flag_point(aux, cmp, s);
	}
	else
	{
		while (s[k] >= '0' && s[k] <= '9')
			k++;
		if (ft_convertible(s[k]) == 1)
		{
			cmp.space = ft_atoi(&s[cmp.i + 1]);
			cmp.i = k - 1;
		}
		else if (s[k] == '.')
		{
			cmp.space = ft_atoi(&s[cmp.i + 1]);
			save = cmp.i + 1;
			cmp.i = k - 1;
			cmp = ft_flag_point(aux, cmp, s);
		}
	//	if (cmp.zero != 0 && cmp.zero != -4294967295)
	//		cmp.zero = ft_atoi(&s[save]);
	}
	return (cmp);
}

t_count		ft_flags(va_list aux, t_count cmp, char c, char *s)
{
	if (c == '*')
		cmp = ft_flag_star(aux, s, cmp);
	else if (c == '.' || c == '0')
		cmp = ft_flag_point(aux, cmp, s);
	else if (c == '-')
		cmp = ft_flag_moins(aux, cmp, s);
	else if (c >= '0' && c <= '9')
		cmp = ft_flag_nb(aux, cmp, s);
	return (cmp);
}
