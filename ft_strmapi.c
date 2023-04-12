/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azelmat <azelmat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 02:11:16 by azelmat           #+#    #+#             */
/*   Updated: 2023/04/12 01:40:52 by azelmat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	char	*ptr;
	int		i;

	str = (char *)s;
	if (!str)
		return (NULL);
	ptr = malloc(ft_strlen(str) + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (str[i])
	{
		ptr[i] = (*f)(i, str[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}