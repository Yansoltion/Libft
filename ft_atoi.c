/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azelmat <azelmat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 00:08:53 by azelmat           #+#    #+#             */
/*   Updated: 2023/04/12 01:25:26 by azelmat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int					i;
	unsigned long long	somme;
	int					signe;

	i = 0;
	somme = 0;
	signe = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signe *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		somme = somme * 10 + str[i] - '0';
		i++;
	}
	if (somme > LLONG_MAX && signe == -1)
		return (0);
	if (somme > LLONG_MAX && signe == 1)
		return (-1);
	return ((int)somme * signe);
}
