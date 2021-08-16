/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 20:32:00 by asippy            #+#    #+#             */
/*   Updated: 2021/08/14 21:17:49 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdio.h>
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
	struct s_stock_str *tab;
	int		i;
	int		strlen;

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

int	main(void)
{
	char				*av[] = {"asd"};
	int					size;
	struct s_stock_str	*tab;
	int					i;

	i = 0;
	size = sizeof(av) / sizeof(*av);
	printf("Size of array = %d\n", size);
	tab = ft_strs_to_tab(size, av);
	while (i < size)
	{
		printf("%d index of tab 1 element %d\n", i, tab[i].size);
		printf("%d index of tab 2 element %s\n", i, tab[i].str);
		printf("%d index of tab 3 element %s\n", i, tab[i].copy);
		i++;
	}
}
