/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 20:53:01 by lmoulin           #+#    #+#             */
/*   Updated: 2019/10/17 15:40:40 by lmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft/libft.h"
#include "prototype.h"

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

void	ft_put_address_fd(long long nb, int fd)
{
	char	*min;
	char	*maj;

	min = "0123456789abcdef";
	maj = "0123456789ABCDEF";
	if (nb < 0)
		nb = -nb;
	if (nb > 15)
		ft_put_address_fd(nb / 16, fd); 
	ft_putchar_fd(min[nb % 16], fd);
}

void	ft_putnbr_hexa_fd(unsigned int nb, int fd, char c)
{
	char	*min;
	char	*maj;
	
	min = "0123456789abcdef";
	maj = "0123456789ABCDEF";
	if (nb < 0)
		nb = 4294967295 + nb;
	if (nb > 15)
		ft_putnbr_hexa_fd(nb / 16, fd, c);
	if (c == 'X')
		ft_putchar_fd(maj[nb % 16], fd);
	else if (c == 'x')
		ft_putchar_fd(min[nb % 16], fd);
}

int		ft_increment(const char *s, int i)
{
	if (s[i + 1] == 'd' || s[i + 1] == 'i' || s[i + 1] ==
	's' || s[i + 1] == 'c' || s[i + 1] == 'x' || s[i + 1] ==
	'X' || s[i + 1] == 'p' || s[i + 1] == 'u')
		i += 1;
	else if (s[i + 1] == '#' && (s[i + 2] == 'x' || s[i + 2]
	== 'X'))
		i += 2;
	return (i + 1);
}

int		ft_convertible(char s)
{
	if (s == 'd' || s == 'i' || s == 'u' || s == 'x' || s == 'X' || s == 'p'
	|| s == 'c' || s == 's')
		return (1);
	return (0);
}

t_count		ft_flag_star(va_list aux, const char *s, t_count cmp)
{
	int			space;
	t_count		save;

	space = va_arg(aux, int);
	save = cmp;
	cmp.i += 1;
	cmp = ft_check(aux, s, cmp);
	if (cmp.len - save.len > 0 && space > 0)
		
}

t_count		ft_check(va_list aux, const char *str, t_count cmp)
{
	if (str[cmp.i + 1] == '#')
	{
		if (str[cmp.i + 2] == 'x' || str[cmp.i + 2] == 'X')
			cmp = ft_arg_xp(aux, str[cmp.i + 2], '#', cmp);
	}
	if (str[cmp.i + 1] == '*' && ft_convertible(str[cmp.i + 2]) == 1)
		cmp = ft_flag_star(aux, str, cmp);
	else if (str[cmp.i + 1] == 'd' || str[cmp.i + 1] == 'i')
		cmp = ft_arg_int(aux, cmp);
	else if (str[cmp.i + 1] == 's')
		cmp = ft_arg_str(aux, cmp);
	else if (str[cmp.i + 1] == 'c')
		cmp = ft_arg_char(aux, cmp);
	else if (str[cmp.i + 1] == 'x' || str[cmp.i + 1] == 'X' ||
	str[cmp.i + 1] == 'p')
		cmp = ft_arg_xp(aux, str[cmp.i + 1], 0, cmp);
	else if (str[cmp.i + 1] == 'u')
		cmp = ft_unsigned_int(aux, cmp);
	cmp.i = ft_increment(str, cmp.i);
	return (cmp);
}

int		ft_printf(const char *str, ...)
{
	va_list		aux;
	t_count		cmp;
	//int			temp;
	int			len_str;

	va_start(aux, str);
	cmp.i = 0;
	cmp.len = 0;
	cmp.check = 0;
	len_str = ft_strlen((char*)str);
	while (cmp.i < len_str)
	{
		if (str[cmp.i] == '%')
		{
			cmp = ft_check(aux, str, cmp);
		//	if (cmp.check == -1)
		//		cmp.check = 0;
		//	else
		//		cmp.i += 1;
		}
		else
		{
			ft_putchar_fd(str[cmp.i], 1);
			cmp.i++;
			cmp.len++;
		}
	}
	va_end(aux);
	return (cmp.len);
}

/*

int main(int ac, char **av)
{
	int c = 65;
	int		*ptr;

	ptr = &c;

	printf("Mienne :\n");
	ft_printf("str = %s, int(d) = %d, int(i) = %i ", av[1], atoi(av[2]), atoi(av[3]));
	ft_printf("chqr = %c, hexa = %x, HEXA = %X ", av[4][0], atoi(av[5]), atoi(av[6]));
	ft_printf("unsigned int = %u\n", atoi(av[7]));

	printf("\n\n\nVrai :\n");

	printf("str = %s, int(d) = %d, int(i) = %i ", av[1], atoi(av[2]), atoi(av[3]));
	printf("chqr = %c, hexa = %x, HEXA = %X ", av[4][0], atoi(av[5]), atoi(av[6]));
	printf("unsigned int = %u\n", atoi(av[7]));


printf("\nreturn value vrai = %c\n", printf("vrai : %p\n", ptr));
printf("\nreturn value test = %d\n", ft_printf("test : %p\n", ptr));

	return 0;
}
*/
