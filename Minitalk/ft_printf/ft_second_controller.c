/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_second_controller.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdulla <dj.ali9292@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 17:45:46 by mabdulla          #+#    #+#             */
/*   Updated: 2022/08/04 11:04:14 by mabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_second_controller(const char **str, va_list list, int *len)
{
	if (**str == '+')
		ft_cntrl_plus(str, list, len);
	else if (**str == '0')
		ft_cntrl_zero(str, list, len);
	else if (**str == '.')
		ft_cntrl_dot(str, list, len);
	else if (**str == '-' || (**str >= '1' && **str <= '9'))
		ft_cntrl_minus(str, list, len);
	else if (**str == '#')
		ft_cntrl_sharp(str, list, len);
	else if (**str == ' ')
		ft_cntrl_space(str, list, len);
}
