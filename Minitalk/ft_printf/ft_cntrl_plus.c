/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cntrl_plus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdulla <dj.ali9292@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 18:58:20 by mabdulla          #+#    #+#             */
/*   Updated: 2022/08/01 15:21:29 by mabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_cntrl_plus(const char **str, va_list list, int *len)
{
	int	list1;

	list1 = va_arg(list, int);
	*str = *str + 1;
	if (**str == 'd' || **str == 'i')
	{
		if (list1 < 0)
		{
			ft_putnbr(list1, len);
		}
		else
		{
			ft_putchar('+', len);
			ft_putnbr(list1, len);
		}
	}
}
