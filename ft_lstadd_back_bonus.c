/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azelmat <azelmat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 00:34:14 by azelmat           #+#    #+#             */
/*   Updated: 2023/04/12 01:29:30 by azelmat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	ptr = *lst;
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	while (ptr->next)
		ptr = ptr->next;
	ptr->next = new;
}