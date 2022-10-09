/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdulla <dj.ali9292@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 18:42:35 by mabdulla          #+#    #+#             */
/*   Updated: 2022/07/17 16:14:40 by mabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list	**lst, t_list	*new)
{
	t_list	*lstcpy;

	lstcpy = *lst;
	if (lstcpy == 0)
	{
		*lst = new;
		return ;
	}
	while (lstcpy->next != 0)
		lstcpy = lstcpy->next;
	lstcpy->next = new;
}
