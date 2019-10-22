/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prototype.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 12:29:24 by lmoulin           #+#    #+#             */
/*   Updated: 2019/10/21 18:13:51 by lmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROTOTYPE_H
# define PROTOTYPE_H
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

int				ft_printf(const char *str, ...);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *str, int fd);
void			ft_putnbr_fd(int nb, int fd);
void			ft_putnbr_hexa_fd(unsigned int nb, int fd, char c);
void			ft_put_unsigned_nbr(unsigned int nb, int fd);
void			ft_put_address_fd(long long nb, int fd);
int				ft_strlen_nb(long nb, int base);
typedef struct	s_count
{
	int				i;
	int				len;
	int				space;
	int				zero;
	char			*str;
}				t_count;
t_count			ft_arg_int(va_list aux, t_count cmp);
t_count			ft_unsigned_int(va_list aux, t_count cmp);
t_count			ft_arg_char(va_list aux, t_count cmp);
t_count			ft_arg_str(va_list aux, t_count cmp);
t_count			ft_arg_xp(va_list aux, t_count cmp, char c);
t_count			ft_check(va_list aux, const char *str, t_count cmp);
t_count			ft_flag_point(va_list aux, t_count cmp, const char *s);
#endif
