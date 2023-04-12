/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azelmat <azelmat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 02:44:19 by azelmat           #+#    #+#             */
/*   Updated: 2023/04/12 01:32:16 by azelmat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	longeur;

	if (!lst)
		return (0);
	longeur = 0;
	while (lst)
	{
		longeur++;
		lst = lst->next;
	}
	return (longeur);
}