/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdulla <dj.ali9292@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 11:59:09 by mabdulla          #+#    #+#             */
/*   Updated: 2022/07/17 16:10:42 by mabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*ss;

	if (!s1 || !s2)
		return (NULL);
	ss = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!ss)
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		ss[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		ss[i] = s2[j];
		i++;
		j++;
	}
	ss[i] = '\0';
	return (ss);
}
