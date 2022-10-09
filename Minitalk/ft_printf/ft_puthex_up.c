/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_up.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdulla <dj.ali9292@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 13:14:24 by mabdulla          #+#    #+#             */
/*   Updated: 2022/07/31 13:26:17 by mabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex_up(unsigned int num, int *len)
{
	while (num >= 0)
	{
		if (num < 16)
		{
			if (num < 10)
				ft_putnbr(num, len);
			else
				ft_putchar(num + 55, len);
			break ;
		}
		else
		{
			ft_puthex_up(num / 16, len);
			ft_puthex_up(num % 16, len);
			break ;
		}
	}
}
