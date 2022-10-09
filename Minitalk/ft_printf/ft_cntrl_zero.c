/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cntrl_zero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdulla <dj.ali9292@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 15:36:34 by mabdulla          #+#    #+#             */
/*   Updated: 2022/08/03 16:00:43 by mabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_cntrl_type(const char **str, long list1, int count, int *len)
{
	int		hexlen;

	hexlen = 0;
	if (**str == 'd' || **str == 'i')
		ft_putnbr_zero((int)list1, count, len);
	else if (**str == 'u')
		ft_putunbr_zero((unsigned int)list1, count, len);
	else if (**str == 'x')
	{
		ft_hexlen(&hexlen, (unsigned int) list1);
		ft_putzero(count - hexlen, len);
		ft_puthex_low((unsigned int)list1, len);
	}
	else if (**str == 'X')
	{
		ft_hexlen(&hexlen, (unsigned int) list1);
		ft_putzero(count - hexlen, len);
		ft_puthex_up((unsigned int)list1, len);
	}
}

void	ft_cntrl_zero(const char **str, va_list list, int *len)
{
	int				list_int;
	unsigned int	list_uint;
	int				count;
	int				i;

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
	if (**str == 'd' || **str == 'i')
	{
		list_int = va_arg(list, int);
		ft_cntrl_type(str, list_int, count, len);
	}
	else
	{
		list_uint = va_arg(list, unsigned int);
		ft_cntrl_type(str, list_uint, count, len);
	}
}
