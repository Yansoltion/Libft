/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azelmat <azelmat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 01:41:08 by azelmat           #+#    #+#             */
/*   Updated: 2023/04/12 01:34:43 by azelmat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*destination;
	char	*source;

	destination = dst;
	source = (char *)src;
	if (dst < src)
		ft_memcpy(dst, src, n);
	else
	{
		while (destination && n--)
		{
			destination[n] = source[n];
		}
	}
	return (dst);
}
