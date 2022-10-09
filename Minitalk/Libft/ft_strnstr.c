/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdulla <dj.ali9292@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:07:51 by mabdulla          #+#    #+#             */
/*   Updated: 2022/07/17 16:14:11 by mabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*hay;

	j = 0;
	hay = (char *)haystack;
	if (!*needle)
		return (hay);
	while (*hay && j < len)
	{
		i = 0;
		while (needle[i] && hay[i] == needle[i]
			&& ((j + i) < len))
			i++;
		if (!needle[i])
			return (hay);
		j++;
		hay++;
	}
	return (0);
}
