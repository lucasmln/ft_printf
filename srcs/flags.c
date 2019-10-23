/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 11:51:49 by lmoulin           #+#    #+#             */
/*   Updated: 2019/10/23 16:13:18 by lmoulin          ###   ########.fr       */
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
	//	printf("\n%d = k -1\n", k - 1);
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
	//	if (k > cmp.i + 2 && ft_convertible(s[k]) == 1)
	//		cmp.zero = ft_atoi((char *)&s[cmp.i + 1]);
	}
	if (ft_convertible(s[k]) == 1/* && k > cmp.i + 2*/)
	{
		cmp.space = va_arg(aux, int);
		cmp.i = k - 1;
	//	cmp = ft_check(aux, s, cmp);
		return (cmp);
	}
	return (cmp);
}

t_count		ft_flag_point(va_list aux, t_count cmp, const char *s)
{
	int		k;

	k = cmp.i + 2;
	if (s[k] == '*')
	{
		if (ft_convertible(s[k + 1]) == 1)
		{
			cmp.zero = va_arg(aux, int);
			cmp.i += 2;
		}
	}
	else if ((s[k] >= '0' && s[k] <= '9') || ft_convertible(s[k]) == 1)
	{
		cmp.i = (s[k] >= '0' && s[k] <= '9') ? k : cmp.i + 1;
		while (s[k] >= '0' && s[k] <= '9')
			k++;
		if (ft_convertible(s[k]) == 1)
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
			cmp.space = -ft_atoi((char *)&s[cmp.i + 2]) -1;
			cmp.i = k - 1;
	//	printf("%d = s\n", cmp.space);
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

	k = cmp.i + 2;
	if (s[k] == '.')
	{
		cmp.i++;
		cmp = ft_flag_point(aux, cmp, s);
	}
	else
	{
		while (s[k] >= '0' && s[k] <= '9')
			k++;
		if (ft_convertible(s[k]) == 1)
			cmp.space = ft_atoi(&s[cmp.i + 1]);
		else if (s[k] == '.')
		{
			save = cmp.i + 1;
			cmp.i = k - 1;
			cmp = ft_flag_point(aux, cmp, s);
		}
		if (cmp.zero != 0)
			cmp.space = ft_atoi(&s[save]);
	//	cmp.i = k - 1;
	}
	return (cmp);
}

t_count		ft_flags(va_list aux, t_count cmp, char c, char *s)
{
	t_count		save;

//	printf("%d cmp i\n", cmp.i);
	save = cmp;
	if (c == '*')
		cmp = ft_flag_star(aux, s, cmp);
	else if (c == '.')
		cmp = ft_flag_point(aux, cmp, s);
	else if (c == '-')
		cmp = ft_flag_moins(aux, cmp, s);
	else if (c >= '0' && c <= '9')
		cmp = ft_flag_nb(aux, cmp, s);
//	if (save.zero != cmp.zero || save.space != cmp.space)
//		cmp.i += 1;
//	printf("%d cmp i\n", cmp.i);
	return (cmp);
}
