/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azelmat <azelmat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 21:51:12 by azelmat           #+#    #+#             */
/*   Updated: 2023/04/12 01:42:54 by azelmat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	int			n;
	char		*str;
	char		*cher;

	i = 0;
	str = (char *)haystack;
	cher = (char *)needle;
	if (!str && !len)
		return (0);
	if (!ft_strlen(cher))
		return (str);
	if (len > ft_strlen(str))
		len = ft_strlen(str);
	while (i < len)
	{
		n = 0;
		while (str[i] && str[i + n] == cher[n] && i + n < len)
			n++;
		if (!cher[n])
			return (str + i);
		i++;
	}
	return (NULL);
}
