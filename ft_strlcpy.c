/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azelmat <azelmat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 01:42:26 by azelmat           #+#    #+#             */
/*   Updated: 2023/04/12 01:40:30 by azelmat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(char *dst, const char *src, int dstsize)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)src;
	if (!dstsize)
		return (ft_strlen(str));
	if (dstsize <= 0)
		dstsize = ft_strlen(str) + 1;
	while (dstsize-- > 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(str));
}
