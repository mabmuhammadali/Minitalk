/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_zero.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdulla <dj.ali9292@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 13:12:01 by mabdulla          #+#    #+#             */
/*   Updated: 2022/08/02 13:38:28 by mabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunbr_zero(unsigned int n, int count, int *len)
{
	ft_putzero(count - ft_numlen(n), len);
	if (n > 9)
		ft_putnbr(n / 10, len);
	ft_putchar(n % 10 + 48, len);
}
