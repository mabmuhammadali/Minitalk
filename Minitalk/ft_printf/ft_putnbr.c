/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdulla <dj.ali9292@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 17:55:59 by mabdulla          #+#    #+#             */
/*   Updated: 2022/07/31 13:27:28 by mabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *len)
{
	if (n < 0)
	{
		ft_putchar('-', len);
		if (n == -2147483648)
		{
			ft_putchar('2', len);
			ft_putnbr(147483648, len);
			return ;
		}
		n = n * -1;
	}
	if (n > 9)
		ft_putnbr(n / 10, len);
	ft_putchar(n % 10 + 48, len);
}
