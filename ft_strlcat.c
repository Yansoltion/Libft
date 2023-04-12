/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azelmat <azelmat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 02:00:40 by azelmat           #+#    #+#             */
/*   Updated: 2023/04/12 01:40:15 by azelmat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char		*str;
	size_t		i;
	size_t		len;

	str = (char *)src;
	if (dst)
		len = ft_strlen(dst);
	i = 0;
	if (!dstsize || dstsize <= len)
		return (dstsize + ft_strlen(str));
	while (src[i] && i < dstsize - len - 1)
	{
		dst[i + len] = str[i];
		i++;
	}
	dst[i + len] = '\0';
	return (len + ft_strlen(str));
}