/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azelmat <azelmat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 01:30:01 by azelmat           #+#    #+#             */
/*   Updated: 2023/04/12 01:29:50 by azelmat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;
	t_list	*temp;

	if (!lst || !del)
		return ;
	ptr = *lst;
	while (ptr)
	{
		temp = ptr->next;
		ft_lstdelone(ptr, del);
		ptr = temp;
	}
	*lst = NULL;
}