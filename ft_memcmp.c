/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azelmat <azelmat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 21:48:11 by azelmat           #+#    #+#             */
/*   Updated: 2023/04/12 01:33:27 by azelmat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *p1, const void *p2, size_t n)
{
	unsigned char	char1;
	unsigned char	char2;
	size_t			i;

	i = 0;
	while (i < n)
	{
		char1 = *((char *)p1 + i);
		char2 = *((char *)p2 + i);
		if (char1 != char2)
			return (char1 - char2);
		i++;
	}
	return (0);
}