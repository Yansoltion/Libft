/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azelmat <azelmat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 02:04:09 by azelmat           #+#    #+#             */
/*   Updated: 2023/04/12 01:43:21 by azelmat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char			*ptr;
	int				i;
	char			*temp;
	unsigned char	character;

	i = 0;
	ptr = (char *)str;
	temp = NULL;
	character = c;
	if (character == 0)
		return (ptr + ft_strlen(ptr));
	while (ptr[i])
	{
		if (ptr[i] == character)
			temp = ptr + i;
		i++;
	}
	return (temp);
}