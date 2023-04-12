/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azelmat <azelmat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 23:57:38 by azelmat           #+#    #+#             */
/*   Updated: 2023/04/12 01:34:14 by azelmat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*destination;
	char	*source;
	size_t	i;

	i = 0;
	destination = dest;
	source = (char *)src;
	if (!source && !destination)
		return (NULL);
	while (i < n)
	{
		destination[i] = source[i];
		i++;
	}
	return (dest);
}
