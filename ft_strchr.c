/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azelmat <azelmat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 02:03:00 by azelmat           #+#    #+#             */
/*   Updated: 2023/04/12 01:37:38 by azelmat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char			*ptr;
	int				i;
	unsigned char	character;

	i = 0;
	ptr = (char *)str;
	character = c;
	if (character == 0)
		return (ptr + ft_strlen(ptr));
	while (ptr[i])
	{
		if (ptr[i] == character)
			return (ptr + i);
		i++;
	}
	return (NULL);
}