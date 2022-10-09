/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdulla <dj.ali9292@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 16:14:04 by mabdulla          #+#    #+#             */
/*   Updated: 2022/07/17 16:13:35 by mabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list	*lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_f;
	t_list	*lstcpy;

	lstcpy = 0;
	while (lst)
	{
		lst_f = ft_lstnew(f(lst->content));
		if (!lst_f)
		{
			ft_lstclear(&lstcpy, del);
			return (NULL);
		}
		ft_lstadd_back(&lstcpy, lst_f);
		lst = lst->next;
	}
	return (lstcpy);
}
