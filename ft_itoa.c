/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azelmat <azelmat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 02:05:10 by azelmat           #+#    #+#             */
/*   Updated: 2023/04/12 01:28:57 by azelmat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnumber(long nb, char *p, int *i)
{
	int	index;

	index = *i;
	if (nb < 0)
	{
		p[index] = '-';
		nb *= -1;
		index++;
		*i = index;
	}
	if (nb <= 9)
	{
		p[index] = nb + '0';
		index++;
		*i = index;
	}
	else if (nb > 9)
	{
		ft_putnumber(nb / 10, p, i);
		ft_putnumber(nb % 10, p, i);
	}
}

char	*ft_itoa(int n)
{
	int		number;
	int		i;
	int		signe;
	char	*ptr;

	number = n;
	i = 0;
	signe = 0;
	if (n < 0 || !n)
		signe = 1;
	while (number)
	{
		number /= 10;
		i++;
	}
	ptr = malloc(i + signe + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	ft_putnumber(n, ptr, &i);
	p[i] = '\0';
	return (ptr);
}