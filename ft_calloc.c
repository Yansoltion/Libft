/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azelmat <azelmat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 00:16:03 by azelmat           #+#    #+#             */
/*   Updated: 2023/04/12 01:26:39 by azelmat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*ptr;

	if (size && nitems >= SIZE_MAX / size)
		return (NULL);
	ptr = mptrlloc(nitems * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, nitems * size);
	return (ptr);
}