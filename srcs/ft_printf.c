/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 11:56:02 by lmoulin           #+#    #+#             */
/*   Updated: 2019/10/30 16:50:07 by lmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/prototype.h"
#include "../libft/libft.h"

t_count		ft_print_front_flag(t_count cmp, int neg, char *s)
{
	int		a;

	cmp = ft_except_p(cmp, s);
	if (cmp.space > 0 && neg == 1)
		while (cmp.space-- > 0)
			write(1, " ", 1);
	if (cmp.zero > 0 && cmp.str[0] == '-')
	{
		ft_putchar_fd('-', 1);
		a = ft_strlcpy(cmp.str, &cmp.str[1], ft_strlen(cmp.str));
	}
	if (s[cmp.i] != 's' || (s[cmp.i] == 's' && cmp.check == 1))
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

t_count			ft_check_null_str(t_count cmp, char *s)
{
	if (s[cmp.i - 1] == '0' && s[cmp.i - 2] == '%')
		return (cmp);
	if ((s[cmp.i] == 'x' || s[cmp.i] == 'X' || s[cmp.i] == 'd' ||
	s[cmp.i] == 'u') && (cmp.zero == -4294967295 || cmp.zero == 0) &&
	ft_strncmp(cmp.str, "0", ft_strlen(cmp.str)) == 0 &&
	(s[cmp.i - 1] == '.' || (s[cmp.i - 2] == '.' && s[cmp.i - 1] == '0')))
	{
		cmp.str[0] = '\0';
		cmp.zero = 0;
	}
	else if (cmp.check != 0 && cmp.zero == 0 && ft_strncmp(cmp.str, "0",
			ft_strlen(cmp.str)) == 0)
	{
		cmp.str[0] = '\0';
		cmp.zero = 0;
	}
	return (cmp);
}

t_count			ft_except_p(t_count cmp, char *s)
{
	int		ret;

	if (s[cmp.i] == 'p' && cmp.check != 0)
	{
		write(1, "0x", 2);
		ret = ft_strlcpy(cmp.str, cmp.str + 2, ft_strlen(cmp.str) - 1);
	}
	return (cmp);
}

t_count		ft_reduc_str(t_count cmp, char *s)
{
	if (s[cmp.i] == 's' && cmp.zero == 0 && cmp.check == 1)
		return (cmp);
	if (s[cmp.i] == 's' && (long)ft_strlen(cmp.str) > cmp.zero && cmp.zero != -4294967295)
		cmp.str[cmp.zero] = '\0';
	return (cmp);
}

t_count		ft_print_arg(t_count cmp, char *s)
{
	int					neg;
	const long			umax = -4294967295;

	cmp = (s[cmp.i] == 's') ? ft_reduc_str(cmp, s) : ft_check_null_str(cmp, s);
	cmp.zero = (cmp.str[0] == '-' && (size_t)cmp.zero >= ft_strlen(cmp.str) &&
				cmp.check == 2) ? cmp.zero + 1 : cmp.zero;
	cmp.zero = (s[cmp.i] == 's' && cmp.check == 2 && cmp.zero == 0) ? cmp.zero
			: cmp.zero - ft_strlen(cmp.str);
	cmp.zero = (cmp.zero < 0) ? 0 : cmp.zero;
	cmp.zero = (s[cmp.i] != 's' && cmp.zero < 0) ? 0 : cmp.zero;
	cmp.zero = (s[cmp.i] == 's' && cmp.zero != 0 && cmp.check != 1) ?
	ft_strlcpy(cmp.str, cmp.str, cmp.zero + 1) - ft_strlcpy(cmp.str, cmp.str,
	cmp.zero + 1) : cmp.zero; 
	neg = (cmp.space > 0) ? 1 : -1;
	cmp.space = (neg == -1) ? -cmp.space : cmp.space;
	cmp.space = (s[cmp.i] == 's' && cmp.zero == umax) ? cmp.space + 1 : cmp.space;
	cmp.space = cmp.space - ft_strlen(cmp.str) - cmp.zero;
	cmp.space = (cmp.space > 0) ? cmp.space : 0;
	cmp.len = cmp.len + ft_strlen(cmp.str) + cmp.space + cmp.zero;
	cmp.len = (s[cmp.i] == 's' && cmp.check == 2) ? cmp.len - 1 : cmp.len;
	cmp = ft_print_front_flag(cmp, neg, s);
	ft_putstr_fd(cmp.str, 1);
	cmp = ft_print_back_flag(cmp, neg);
	cmp.zero = -4294967295;
	cmp.space = 0;
	return (cmp);
}

t_count		ft_check(va_list aux, const char *s, t_count cmp)
{
	int		save;

	save = cmp.i;
	cmp = ft_flags(aux, cmp, s[cmp.i + 1], (char *)s);	
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
	else if (s[cmp.i + 1] == '%')
		cmp = ft_arg_percent(aux, cmp);
	if (cmp.str != NULL)
		cmp.i++;
	if (cmp.str == NULL)
	{
		cmp.i= save;
		return (cmp);
	}
	cmp = ft_print_arg(cmp, (char*)s);
	cmp.str = NULL;
	return (cmp);
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
			//if (cmp.i == k)
			//	ft_putchar_fd('%', 1);
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

