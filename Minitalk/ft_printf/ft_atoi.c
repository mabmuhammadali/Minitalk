/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdulla <dj.ali9292@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 16:31:50 by mabdulla          #+#    #+#             */
/*   Updated: 2022/08/01 17:48:01 by mabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_atoi(const char *str)
{
	long	res;
	int		j;

	res = 0;
	j = 1;
	while (*str == ' ' || *str == '\t' || *str == '\r' || *str == '\v'
		|| *str == '\f' || *str == '\n')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			j *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - '0');
		str++;
		if (res * j < -2147483648)
			return (0);
		if (res * j > 2147483647)
			return (-1);
	}
	return (res * j);
}
