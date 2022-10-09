/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_dot.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdulla <dj.ali9292@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 11:49:56 by mabdulla          #+#    #+#             */
/*   Updated: 2022/08/03 13:53:31 by mabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_dot(char *s, int count, int *len)
{
	if (s == 0)
		s = "(null)";
	while (*s != '\0' && count > 0)
	{
		ft_putchar(*s, len);
		s++;
		count--;
	}
}
