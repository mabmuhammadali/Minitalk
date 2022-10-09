/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdulla <dj.ali9292@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 16:39:13 by mabdulla          #+#    #+#             */
/*   Updated: 2022/07/17 16:11:02 by mabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*s1;

	s1 = (char *)s;
	i = 0;
	while (s1[i] != '\0')
		i++;
	while (i >= 0 && (char)c != s1[i])
		i--;
	if (s1[i] == (char)c)
		return (s1 + i);
	return (0);
}
