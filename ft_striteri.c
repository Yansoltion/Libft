/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azelmat <azelmat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 02:19:39 by azelmat           #+#    #+#             */
/*   Updated: 2023/04/11 23:45:00 by azelmat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	char	*str;
	int		i;

	str = (char *)s;
	i = 0;
	if (!str)
		return ;
	while (str[i])
	{
		f(i, str + i);
		i++;
	}
}