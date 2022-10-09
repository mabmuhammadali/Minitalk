/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdulla <dj.ali9292@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 15:10:08 by mabdulla          #+#    #+#             */
/*   Updated: 2022/08/02 15:24:33 by mabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hexlen(int *len, size_t num)
{
	while (num >= 0)
	{
		if (num < 16)
		{
			if (num < 10)
				*len = *len + 1;
			else
				*len = *len + 1;
			break ;
		}
		else
		{
			ft_hexlen(len, num / 16);
			ft_hexlen(len, num % 16);
			break ;
		}
	}
}
