/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azelmat <azelmat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 00:30:54 by azelmat           #+#    #+#             */
/*   Updated: 2023/04/12 00:54:44 by azelmat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/*  ft_lstlast_bonus

int main(){
	t_list *head = ft_lstnew("a");
	ft_lstadd_back(&head, ft_lstnew("b"));
	ft_lstadd_back(&head, ft_lstnew("c"));
	printf("content: %s\n", (char *)ft_lstlast(head)->content);
}
*/