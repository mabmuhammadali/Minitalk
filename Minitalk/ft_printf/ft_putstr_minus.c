/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_minus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdulla <dj.ali9292@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 16:05:24 by mabdulla          #+#    #+#             */
/*   Updated: 2022/08/03 16:37:19 by mabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_minus(char *s, int count, int *len)
{
	int	i;

	i = 0;
	if (s == 0)
		s = "(null)";
	while (*s != '\0')
	{
		ft_putchar(*s, len);
		s++;
		i++;
	}
	while (count - i > 0)
	{
		ft_putchar(' ', len);
		count--;
	}
}
