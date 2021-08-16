/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 21:18:29 by asippy            #+#    #+#             */
/*   Updated: 2021/08/14 21:19:38 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (*str != '\0')
	{
		counter++;
		str++;
	}
	return (counter);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*buf;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	buf = malloc(sizeof (buf) * (i + 1));
	if (buf == (void *)0)
		return ((void *)0);
	while (j <= i)
	{
		buf[j] = src[j];
		j++;
	}
	return (buf);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*tab;
	int					i;
	int					strlen;

	tab = malloc(sizeof(tab) * (ac + 1));
	if (tab == (void *)0)
		return ((void *)0);
	i = 0;
	while (i < ac)
	{
		strlen = ft_strlen(av[i]);
		tab[i].size = strlen;
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		if (tab[i].copy == (void *)0)
		{
			while (--i >= 0)
				free(tab[i].copy);
			free(tab);
			return ((void *)0);
		}
		i++;
	}
	tab[i].str = "0";
	return (tab);
}
