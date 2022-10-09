/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdulla <dj.ali9292@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:30:50 by mabdulla          #+#    #+#             */
/*   Updated: 2022/07/17 16:10:12 by mabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst1;
	unsigned char	*src1;
	size_t			i;

	dst1 = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	i = 0;
	if ((dst1 == 0) && (src1 == 0))
		return (0);
	if (dst1 > src1)
	{
		while (++i <= len)
			dst1[len - i] = src1[len - i];
	}
	else
	{
		while (len > 0)
		{
		*(dst1++) = *(src1++);
		len--;
		}
	}
	return (dst);
}
