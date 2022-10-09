/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdulla <dj.ali9292@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 17:34:19 by mabdulla          #+#    #+#             */
/*   Updated: 2022/07/17 16:13:25 by mabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_ngtvpztv(int n)
{
	if (n < 0)
		n = n * -1;
	return (n);
}

static int	ft_numlen(int n)
{
	int	i;

	i = 0;
	if (n < 0)
		i++;
	while (n > 9 || n < -9)
	{
		n = n / 10;
		i++;
	}
	i++;
	return (i);
}

char	*ft_itoa(int n)
{
	char	*num;
	int		num_len;
	int		n1;

	n1 = n;
	num_len = ft_numlen(n);
	num = (char *)malloc((num_len + 1) * sizeof(char));
	if (!num)
		return (NULL);
	num[num_len] = '\0';
	num_len--;
	while (num_len >= 0)
	{
		num[num_len] = ft_ngtvpztv(n % 10) + 48;
		n = n / 10;
		num_len--;
	}
	if (n1 < 0)
		num[0] = '-';
	return (num);
}
