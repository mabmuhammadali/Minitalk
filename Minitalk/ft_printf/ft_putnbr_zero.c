/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_zero.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdulla <dj.ali9292@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 13:19:46 by mabdulla          #+#    #+#             */
/*   Updated: 2022/08/03 11:42:24 by mabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_zero(int n, int count, int *len)
{
	int	i;

	i = 0;
	if (0 > n)
	{
		ft_putchar('-', len);
		count--;
		if (n == -2147483648)
		{
			while (0 < count - 10)
			{
				ft_putchar('0', len);
				count--;
			}
			ft_putchar('2', len);
			ft_putnbr(147483648, len);
			return ;
		}
		n = n * -1;
	}
	ft_putzero(count - ft_numlen(n), len);
	ft_putnbr(n, len);
}
