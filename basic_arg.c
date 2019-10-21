/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 15:04:00 by lmoulin           #+#    #+#             */
/*   Updated: 2019/10/17 14:54:37 by lmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototype.h"
#include "libft/libft.h"

t_count		ft_arg_int(va_list aux, t_count cmp)
{
	int		nb;

	nb = va_arg(aux, int);
	ft_putnbr_fd(nb, 1);
	cmp.len += ft_strlen_nb(nb, 10);
	return (cmp);
}

t_count		ft_unsigned_int(va_list aux, t_count cmp)
{
	unsigned int	nb;

	nb = va_arg(aux, int);
	if (nb < 0)
		nb = 4294967294 + nb;
	ft_put_unsigned_nbr(nb, 1);
	cmp.len = ft_strlen_nb(nb, 10);
	return (cmp);
}


t_count		ft_arg_char(va_list aux, t_count cmp)
{
	unsigned char	c;

	c = va_arg(aux, int);
	write(1, &c, 1);
	cmp.len++;
	return (cmp);
}

t_count		ft_arg_str(va_list aux, t_count cmp)
{
	char	*str;

	str = va_arg(aux, char*);
	if (!str)
	{
		write(1, "(null)", 6);
		cmp.len += 6;
		return (cmp);
	}
	if (str[0] == '\0')
	{
		cmp.i += 1;
		return (cmp);
	}
	ft_putstr_fd(str, 1);
	cmp.len += ft_strlen(str);
	return (cmp);
}

t_count		ft_arg_xp(va_list aux, char c, char arg, t_count cmp)
{
	unsigned int	nb;
	long long		nbr;

	nbr = va_arg(aux, long long);
	if (arg == '#' && nbr != 0)
	{
		cmp.len += 2;
		if (c == 'x')
			write(1, "0x", 2);
		else if (c == 'X')
			write(1, "0X", 2);
	}
	if (c == 'x' || c == 'X')
	{
		nb = nbr;
		ft_putnbr_hexa_fd(nb, 1, c);
		cmp.len = cmp.len + ft_strlen_nb(nb, 16);
		return (cmp);

	}
	else if (c == 'p')
	{
		write(1, "0x", 2);
		ft_put_address_fd(nbr, 1);
		cmp.len += ft_strlen_nb(nbr, 16) + 2;
		return (cmp);
	}
	return (cmp);
}

