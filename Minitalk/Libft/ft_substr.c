/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdulla <dj.ali9292@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 10:39:47 by mabdulla          #+#    #+#             */
/*   Updated: 2022/07/17 16:11:09 by mabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*s1;

	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if ((ft_strlen(s) + start) < len)
		len = ft_strlen(s) + start;
	s1 = (char *)malloc((len + 1) * sizeof(char));
	if (!s1)
		return (0);
	i = 0;
	while (i < len && s[start] != '\0' && start < ft_strlen(s))
	{
		s1[i] = s[start];
		i++;
		start++;
	}
	s1[i] = '\0';
	return (s1);
}
