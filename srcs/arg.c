/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 11:49:02 by lmoulin           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2019/10/30 11:38:35 by lmoulin          ###   ########.fr       */
=======
/*   Updated: 2019/10/28 15:50:38 by lmoulin          ###   ########.fr       */
>>>>>>> 50fb279ea3d2e965385cd55fa729ac62896097db
/*                                                                            */
/* ************************************************************************** */

#include "../includes/prototype.h"
#include "../libft/libft.h"

t_count		ft_arg_int(va_list aux, t_count cmp)
{
	int		nb;

	nb = va_arg(aux, int);
	cmp.str = ft_itoa((int)nb);
	return (cmp);
}

t_count		ft_unsigned_int(va_list aux, t_count cmp)
{
	long	nb;

	nb = va_arg(aux, unsigned int);
	if (nb < 0)
		nb = nb + 4294967295;
	cmp.str = ft_itoa((long)nb);
	return (cmp);
}

t_count		ft_arg_char(va_list aux, t_count cmp)
{
	unsigned char	c;

	c = va_arg(aux, int);
	if ((cmp.str = malloc(sizeof(char) * 2)))
	{
		cmp.str[0] = c;
		cmp.str[1] = '\0';
		return (cmp);
	}
	cmp.str = NULL;
	return (cmp);
	
}

t_count		ft_arg_str(va_list aux, t_count cmp)
{
	char	*temp;
	int		i;

	temp = va_arg(aux, char*);
	if (!temp || temp == NULL)
	{
		if ((cmp.str = malloc(sizeof(char) * 7)) != NULL)
			i = ft_strlcpy(cmp.str, "(null)", 7);
		else
			cmp.str = NULL;
		return (cmp);
	}
	else
	{
		cmp.str = ft_strdup(temp);
		i = -1;
		while (temp[++i])
		{
			cmp.str[i] = temp[i];
		}
		cmp.str[i] = '\0';
	}
	return (cmp);
}

