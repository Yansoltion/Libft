/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azelmat <azelmat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 23:49:33 by azelmat           #+#    #+#             */
/*   Updated: 2023/04/12 00:58:51 by azelmat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t n)
{
	char	*str;

	str = ptr;
	while (n--)
		*(str++) = (unsigned char)c;
	return (ptr);
}
