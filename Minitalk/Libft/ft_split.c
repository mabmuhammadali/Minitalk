/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdulla <dj.ali9292@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 12:49:34 by mabdulla          #+#    #+#             */
/*   Updated: 2022/07/17 16:10:30 by mabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_word(const char *s, char c)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	str = (char *)malloc((i + 1) * sizeof(char));
	if (!str)
		return (0);
	j = 0;
	while (j < i)
	{
		str[j] = s[j];
		j++;
	}
	str[j] = '\0';
	return (str);
}

static int	ft_wordcount(const char *s, char c)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && k == 0)
		{
			j++;
			k = 1;
		}
		if (s[i] == c)
			k = 0;
		i++;
	}
	return (j);
}

char	**ft_split(char const *s, char c)
{
	int		wrd_cnt;
	char	**str;
	int		i;

	if (!s)
		return (0);
	wrd_cnt = ft_wordcount(s, c);
	str = (char **)malloc((wrd_cnt + 1) * sizeof(char *));
	if (!str)
		return (0);
	i = 0;
	while (*s != '\0')
	{
		while (*s != '\0' && *s == c)
			s++;
		if (*s != '\0' && *s != c)
		{
			str[i] = ft_word(s, c);
			i++;
			while (*s != '\0' && *s != c)
				s++;
		}
	}
	str[i] = 0;
	return (str);
}
