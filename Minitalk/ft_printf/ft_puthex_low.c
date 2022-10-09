/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_low.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdulla <dj.ali9292@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 17:58:02 by mabdulla          #+#    #+#             */
/*   Updated: 2022/07/31 13:30:29 by mabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex_low(size_t num, int *len)
{
	while (num >= 0)
	{
		if (num < 16)
		{
			if (num < 10)
				ft_putnbr(num, len);
			else
				ft_putchar(num + 87, len);
			break ;
		}
		else
		{
			ft_puthex_low(num / 16, len);
			ft_puthex_low(num % 16, len);
			break ;
		}
	}
}
