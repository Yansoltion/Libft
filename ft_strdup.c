/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azelmat <azelmat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 00:20:39 by azelmat           #+#    #+#             */
/*   Updated: 2023/04/12 01:38:50 by azelmat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *ptr)
{
	char	*strallou;
	char	*s;

	s = (char *)ptr;
	strallou = malloc(ft_strlen(s) + 1);
	if (strallou == NULL)
		return (NULL);
	ft_strlcpy(strallou, s, ft_strlen(s) + 1);
	return (strallou);
}