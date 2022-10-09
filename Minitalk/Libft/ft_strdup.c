/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdulla <dj.ali9292@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 18:54:28 by mabdulla          #+#    #+#             */
/*   Updated: 2022/07/17 16:13:56 by mabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		j;
	char	*s2;

	i = 0;
	while (s1[i] != '\0')
		i++;
	i++;
	s2 = (char *)malloc(i * sizeof(char));
	if (s2 == 0)
		return (0);
	j = 0;
	while (j < i)
	{
		s2[j] = s1[j];
		j++;
	}
	return (s2);
}
