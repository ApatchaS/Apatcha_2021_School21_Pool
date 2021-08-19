/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 22:24:50 by asippy            #+#    #+#             */
/*   Updated: 2021/08/18 22:24:51 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *));

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_display_tab(char **tab)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (tab[i])
	{
		printf("%s ", tab[i]);
		i++;
	}
	printf("\n");
}

int	main(void)
{
	char *tab[] = {"25", "23",NULL};
	ft_display_tab(tab);
	ft_advanced_sort_string_tab(tab, &ft_strcmp);
	ft_display_tab(tab);
	return (0);
}
