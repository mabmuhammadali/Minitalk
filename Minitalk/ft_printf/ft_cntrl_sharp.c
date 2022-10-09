/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cntrl_sharp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdulla <dj.ali9292@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 10:40:15 by mabdulla          #+#    #+#             */
/*   Updated: 2022/08/04 10:53:03 by mabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_cntrl_sharp(const char **str, va_list list, int *len)
{
	unsigned int	list1;

	list1 = va_arg(list, unsigned int);
	*str = *str + 1;
	if (**str == 'x')
	{
		if (list1 != 0)
			ft_putstr("0x", len);
		ft_puthex_low(list1, len);
	}
	else if (**str == 'X')
	{
		if (list1 != 0)
			ft_putstr("0X", len);
		ft_puthex_up(list1, len);
	}
}
