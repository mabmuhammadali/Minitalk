/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdulla <dj.ali9292@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:17:54 by mabdulla          #+#    #+#             */
/*   Updated: 2022/07/17 16:14:14 by mabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_end(char const *s1, char const *set)
{
	int	s1_len;
	int	set_len;
	int	cntrl;

	s1_len = ft_strlen(s1) - 1;
	while (s1_len >= 0)
	{
		cntrl = 0;
		set_len = ft_strlen(set) - 1;
		while (set_len >= 0)
		{
			if (set[set_len] == s1[s1_len])
			{
				s1_len--;
				cntrl = 1;
			}
			else
				set_len--;
		}
		if (cntrl == 0)
			break ;
	}
	return (s1_len);
}

static int	ft_start(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	cntrl;

	i = 0;
	while (s1[i] != '\0')
	{
		cntrl = 0;
		j = 0;
		while (set[j] != '\0')
		{
			if (set[j] == s1[i])
			{
				i++;
				cntrl = 1;
			}
			else
				j++;
		}
		if (cntrl == 0)
			break ;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;
	int		cnt;	
	char	*s2;

	if (!s1 || !set)
		return (NULL);
	start = ft_start(s1, set);
	end = ft_end(s1, set);
	if (start > end)
		return (ft_strdup(""));
	cnt = end - start + 1;
	s2 = (char *)malloc((cnt + 1) * sizeof(char));
	if (!s2)
		return (0);
	i = 0;
	while (i < cnt)
	{
		s2[i] = s1[start];
		i++;
		start++;
	}
	s2[i] = '\0';
	return (s2);
}
