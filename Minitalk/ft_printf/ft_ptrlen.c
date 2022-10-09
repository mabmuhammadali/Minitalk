/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdulla <dj.ali9292@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 16:42:15 by mabdulla          #+#    #+#             */
/*   Updated: 2022/08/03 17:49:23 by mabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_ptrlen(int *len, size_t num)
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
			ft_ptrlen(len, num / 16);
			ft_ptrlen(len, num % 16);
			break ;
		}
	}
}
