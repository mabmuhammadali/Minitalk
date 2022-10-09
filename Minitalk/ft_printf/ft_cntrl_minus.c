/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cntrl_minus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdulla <dj.ali9292@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 14:40:42 by mabdulla          #+#    #+#             */
/*   Updated: 2022/08/04 13:06:48 by mabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_cntrl_p(va_list list, int count, int *len)
{
	int		hexlen;
	long	list1;

	hexlen = 0;
	list1 = va_arg(list, long);
	ft_putstr("0x", len);
	ft_puthex_low(list1, len);
	ft_ptrlen(&hexlen, list1);
	ft_putspace(count - hexlen - 2, len);
}

static void	ft_cntrl_type(const char **str, long list1, int count, int *len)
{
	int		hexlen;

	hexlen = 0;
	if (**str == 'd' || **str == 'i')
		ft_putnbr_minus((int)list1, count, len);
	else if (**str == 'u')
		ft_putunbr_minus((unsigned int)list1, count, len);
	else if (**str == 'x')
	{
		ft_puthex_low((unsigned int)list1, len);
		ft_hexlen(&hexlen, (unsigned int) list1);
		ft_putspace(count - hexlen, len);
	}
	else if (**str == 'X')
	{
		ft_puthex_up((unsigned int)list1, len);
		ft_hexlen(&hexlen, (unsigned int) list1);
		ft_putspace(count - hexlen, len);
	}
}

static void	ft_separate(const char **str, va_list list, int count, int *len)
{
	int				list_int;
	unsigned int	list_uint;

	if (**str == 'd' || **str == 'i')
	{
		list_int = va_arg(list, int);
		ft_cntrl_type(str, list_int, count, len);
	}
	else if (**str == 'u' || **str == 'x' || **str == 'X')
	{
		list_uint = va_arg(list, unsigned int);
		ft_cntrl_type(str, list_uint, count, len);
	}
	else if (**str == 's')
		ft_putstr_minus(va_arg(list, char *), count, len);
	else if (**str == 'c')
	{
		ft_putchar(va_arg(list, int), len);
		ft_putspace(count - 1, len);
	}
	else if (**str == 'p')
		ft_cntrl_p(list, count, len);
}

void	ft_cntrl_minus(const char **str, va_list list, int *len)
{
	int				count;
	int				i;

	if (**str == '-')
		*str = *str + 1;
	count = ft_atoi(*str);
	i = 0;
	while (i < ft_numlen(count))
	{
		if (count == 0 && **str != '0')
			break ;
		*str = *str + 1;
		i++;
	}
	ft_separate(str, list, count, len);
}
