/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azelmat <azelmat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 01:41:58 by azelmat           #+#    #+#             */
/*   Updated: 2023/04/12 01:31:12 by azelmat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_cpy(t_list *lst, t_list *head, void *(*f)(void *))
{
	t_list	*new_lst;
	t_list	*ptr;

	ptr = lst;
	while (ptr)
	{
		if (!head)
		{
			head = ft_lstnew(f(ptr->content));
			if (!head)
				return (NULL);
			new_lst = head;
		}
		else
		{
			new_lst->next = ft_lstnew(f(ptr->content));
			if (!new_lst->next)
				return (NULL);
			new_lst = new_lst->next;
		}
		ptr = ptr->next;
	}
	return (head);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;

	head = NULL;
	if (lst && f && del)
	{
		head = ft_cpy(lst, head, f);
		if (!head)
			ft_lstclear(&head, del);
		return (head);
	}
	return (NULL);
}