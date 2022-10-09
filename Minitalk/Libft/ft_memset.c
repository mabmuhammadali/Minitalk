/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdulla <dj.ali9292@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 18:34:41 by mabdulla          #+#    #+#             */
/*   Updated: 2022/07/17 16:10:15 by mabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*b1;
	size_t			i;

	b1 = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		b1[i] = (unsigned char)c;
		i++;
	}
	return (b1);
}
