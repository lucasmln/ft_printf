/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_printf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 11:42:48 by lmoulin           #+#    #+#             */
/*   Updated: 2019/10/23 11:46:13 by lmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/prototype.h"
#include "../libft/libft.h"
#include <stdio.h>

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
			cmp.str = "(null)";
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

t_count		ft_is_p(t_count cmp, long long nb)
{
	char	*min;
	int		size;

	min = "0123456789abcdef";
	nb = (nb < 0) ? -nb : nb;
	size = ft_strlen_nb(nb, 16) + 2;
	cmp.str[0] = '0';
	cmp.str[1] = 'x';
	while (--size >= 2)
	{
		cmp.str[size] = min[nb % 16];
		nb /= 16;
	}
	return (cmp);
}

t_count		ft_is_x(t_count cmp, long long nb, char c)
{
	char	*min;
	char	*maj;
	int		size;

	min = "0123456789abcdef";
	maj = "0123456789ABCDEF";
	nb = (nb < 0) ? -nb : nb;
	size = ft_strlen_nb(nb, 16);
	while (--size >= 0)
	{
		if (c == 'x')
			cmp.str[size] = min[nb % 16];
		else
			cmp.str[size] = maj[nb % 16];
		nb /= 16;
	}
	return (cmp);
}

t_count		ft_arg_xp(va_list aux, t_count cmp, char c)
{
	long long	nb;
	int		size;

	nb = va_arg(aux, long long);
	size = ft_strlen_nb(nb, 16);
	size = (c == 'p') ? size + 2 : size;
	if (!(cmp.str = malloc(sizeof(char) * (size + 1))))
	{
		cmp.str = NULL;
		return (cmp);
	}
	cmp.str[size] = '\0';
		if (c == 'p')
			cmp = ft_is_p(cmp, nb);
		else
			cmp = ft_is_x(cmp, nb, c);
	return (cmp);
}

int		ft_convertible(char c)
{
	if (c == 'd' || c == 'i' || c == 'c' || c == 's' || c == 'p' || c == 'x' ||
	c == 'X' || c == 'u')
		return (1);
	return (0);
}

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
		printf("%d = s\n", cmp.space);
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

t_count		ft_print_front_flag(t_count cmp, int neg)
{
	int		a;

	if (cmp.space > 0 && neg == 1)
		while (cmp.space-- > 0)
			write(1, " ", 1);
	if (cmp.zero > 0 && cmp.str[0] == '-')
	{
		ft_putchar_fd('-', 1);
		cmp.zero++;
		a = ft_strlcpy(cmp.str, &cmp.str[1], ft_strlen(cmp.str));
		cmp.len++;
	}
	if (cmp.zero > 0)
		while (cmp.zero-- > 0)
			write(1, "0", 1);
	return (cmp);
}

t_count		ft_print_back_flag(t_count cmp, int neg)
{
	if (neg == -1 && cmp.space > 0)
		while (cmp.space-- > 0)
			write(1, " ", 1);
	return (cmp);
}

t_count		ft_print_arg(t_count cmp)
{
	int		neg;
	printf("space = %d, zero = %d, len = %lu, s[0] = %c\n", cmp.space, cmp.zero, ft_strlen(cmp.str), cmp.str[0]);
	if ((cmp.zero -= ft_strlen(cmp.str)) < 0)
		cmp.zero = 0;
	printf("space = %d, zero = %d, len = %lu, s[0] = %c\n", cmp.space, cmp.zero, ft_strlen(cmp.str), cmp.str[0]);
	neg = (cmp.space > 0) ? 1 : -1;
	cmp.space = (neg == -1) ? -cmp.space : cmp.space;
	cmp.space = cmp.space - ft_strlen(cmp.str) - cmp.zero;
	cmp.space = (cmp.space > 0) ? cmp.space : 0;
	cmp.space = (cmp.str[0] == '-' && cmp.space > 0) ? cmp.space - 1: cmp.space;
	cmp.space = (cmp.str[0] == '-' && cmp.space < 0) ? cmp.space + 1: cmp.space;
	cmp.len = cmp.len + ft_strlen(cmp.str) + cmp.space + cmp.zero;
	printf("space = %d, s[0] = %c\n", cmp.space, cmp.str[0]);
	cmp = ft_print_front_flag(cmp, neg);
	ft_putstr_fd(cmp.str, 1);
	cmp = ft_print_back_flag(cmp, neg);
	cmp.zero = 0;
	cmp.space = 0;
	return (cmp);
}

t_count		ft_check(va_list aux, const char *s, t_count cmp)
{
//	printf("\n%d = i1\n", cmp.i);
	cmp = ft_flags(aux, cmp, s[cmp.i + 1], (char *)s);
//	printf("%d = i2\n", cmp.i);
	if (s[cmp.i + 1] == 'd' || s[cmp.i + 1] == 'i')
		cmp = ft_arg_int(aux, cmp);
	else if (s[cmp.i + 1] == 'u')
		cmp = ft_unsigned_int(aux, cmp);
	else if (s[cmp.i + 1] == 'c')
		cmp = ft_arg_char(aux, cmp);
	else if (s[cmp.i + 1] == 's')
		cmp = ft_arg_str(aux, cmp);
	else if (s[cmp.i + 1] == 'x' || s[cmp.i + 1] == 'X' || s[cmp.i + 1] == 'p')
		cmp = ft_arg_xp(aux, cmp, s[cmp.i + 1]);
	if (cmp.str != NULL)
		cmp.i++;
	cmp = ft_print_arg(cmp);
	cmp.str = NULL;
	return (cmp);
}

t_count		ft_init_count(t_count init, int k)
{
	if (k != 1)
	{
		init.i = 0;
		init.len = 0;
		init.str = NULL;
	}
	init.space = 0;
	init.zero = 0;
	return (init);
}

int		ft_printf(const char *str, ...)
{
	va_list		aux;
	t_count		cmp;
	int			len_str;
	int			k;

	cmp.str = NULL;
	va_start(aux, str);
	cmp = ft_init_count(cmp, 0);
	len_str = ft_strlen((char*)str);
	while (cmp.i < len_str)
	{
		cmp = ft_init_count(cmp, 1);
		k = cmp.i;
		if (str[cmp.i] == '%')
		{
			cmp = ft_check(aux, str, cmp);
			if (cmp.i == k)
				ft_putchar_fd('%', 1);
		}
		else
		{
			ft_putchar_fd(str[cmp.i], 1);
			cmp.len++;
		}
			cmp.i++;
	}
	free(cmp.str);
	va_end(aux);
	return (cmp.len);
}


int main(int argc, const char *argv[])
{
	argc = 4;

	printf("Og return value : %d\n", printf("Og %-9.5d\n", -7));
//	printf("\n\n\n");
	printf("My return value : %d", ft_printf("My %-9.5d\n", -7));

return 0;
}
