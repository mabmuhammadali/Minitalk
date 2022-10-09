/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdulla <dj.ali9292@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 17:03:19 by mabdulla          #+#    #+#             */
/*   Updated: 2022/07/17 16:10:58 by mabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if ((!s1 && !s2) || n < 1)
		return (0);
	while (n - 1 > i && s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return ((unsigned char) s1[i] - (unsigned char)s2[i]);
}
