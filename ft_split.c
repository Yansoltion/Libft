/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azelmat <azelmat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 01:46:57 by azelmat           #+#    #+#             */
/*   Updated: 2023/04/12 01:36:59 by azelmat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free_all(char **p)
{
	while (*p)
		free(p++);
	free(p);
}

static int	words_counter(char *str, char c)
{
	int	i;
	int	count;

	count = 0;
	if (!str)
		return (0);
	while (*str)
	{
		i = 0;
		while (str[i] && str[i] != c)
			i++;
		if (i)
		{
			count++;
			str += i;
		}
		else
		str++;
	}
	return (count);
}

static void	ft_cpychars(char *str, char **p, char c)
{
	int		len;
	int		i;
	char	**ptr;

	i = 0;
	ptr = p;
	while (str[i])
	{
		len = 0;
		while (str[i + len] && str[i + len] != c)
			len++;
		if (len)
		{
			*p = ft_substr(str, i, len);
			if (!p)
				return (ft_free_all(ptr));
			p++;
			i += len;
		}
		else
		i++;
	}
	*p = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	char	*str;

	str = (char *)s;
	if (!str)
		return (NULL);
	ptr = malloc((words_counter(str, c) + 1) * sizeof(char *));
	if (ptr == NULL)
		return (NULL);
	ft_cpychars(str, ptr, c);
	return (ptr);
}