/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdulla <dj.ali9292@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:29:40 by mabdulla          #+#    #+#             */
/*   Updated: 2022/07/17 16:09:38 by mabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list	**lst, void (*del)(void *))
{
	t_list	*lstcpy;

	if (!lst)
		return ;
	while (*lst != 0)
	{
		lstcpy = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = lstcpy;
	}
}
