/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azelmat <azelmat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 01:28:41 by azelmat           #+#    #+#             */
/*   Updated: 2023/04/12 01:39:57 by azelmat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr1;
	char	*ptr2;
	char	*new_str;
	int		i;

	ptr1 = (char *)s1;
	ptr2 = (char *)s2;
	if (!ptr1 || !ptr2)
		return (NULL);
	new_str = malloc(ft_strlen(ptr1) + ft_strlen(ptr2) + 1);
	if (new_str == NULL)
		return (NULL);
	i = -1;
	while (ptr1[++i])
		new_str[i] = ptr1[i];
	while (*ptr2)
	{
		new_str[i] = *ptr2;
		i++;
		ptr2++;
	}
	new_str[i] = '\0';
	return (new_str);
}
