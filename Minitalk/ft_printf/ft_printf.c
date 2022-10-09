/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdulla <dj.ali9292@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:23:49 by mabdulla          #+#    #+#             */
/*   Updated: 2022/08/01 17:47:33 by mabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_controller(const char **ch, va_list list, int *len)
{
	if (**ch == 'c')
		ft_putchar(va_arg(list, int), len);
	else if (**ch == 's')
		ft_putstr(va_arg(list, char *), len);
	else if (**ch == 'p')
	{
		ft_putstr("0x", len);
		ft_puthex_low(va_arg(list, unsigned long), len);
	}
	else if (**ch == 'd' || **ch == 'i')
		ft_putnbr(va_arg(list, int), len);
	else if (**ch == 'u')
		ft_putunbr(va_arg(list, unsigned int), len);
	else if (**ch == 'x')
		ft_puthex_low(va_arg(list, unsigned int), len);
	else if (**ch == 'X')
		ft_puthex_up(va_arg(list, unsigned int), len);
	else if (**ch == '%')
		ft_putchar('%', len);
	else
		ft_second_controller(ch, list, len);
}

int	ft_printf(const char *str, ...)
{
	va_list	list;
	int		len;

	va_start(list, str);
	len = 0;
	while (*str != '\0')
	{
		if (*str == '%')
		{
			str++;
			ft_controller(&str, list, &len);
		}
		else
			ft_putchar(*str, &len);
		str++;
	}
	va_end(list);
	return (len);
}
