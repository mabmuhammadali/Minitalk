/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cntrl_space.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdulla <dj.ali9292@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 11:00:19 by mabdulla          #+#    #+#             */
/*   Updated: 2022/08/04 12:57:01 by mabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_separate(const char **str, va_list list, int count, int *len)
{
	int		list1;
	char	*list2;

	if (**str == 'd' || **str == 'i')
	{
		list1 = va_arg(list, unsigned int);
		if (count <= ft_numlen(list1))
		{
			if (list1 >= 0)
				ft_putchar(' ', len);
		}
		else
			ft_putspace(count - ft_numlen(list1), len);
		ft_putnbr(list1, len);
	}
	else if (**str == 's')
	{
		list2 = va_arg(list, char *);
		ft_putspace(count - ft_strlen(list2), len);
		ft_putstr(list2, len);
	}
}

void	ft_cntrl_space(const char **str, va_list list, int *len)
{
	int				count;
	int				i;

	if (**str == ' ')
		*str = *str + 1;
	count = ft_atoi(*str);
	i = 0;
	while (i < ft_numlen(count))
	{
		if (count == 0 && **str != '0')
			break ;
		*str = *str + 1;
		i++;
	}
	ft_separate(str, list, count, len);
}
