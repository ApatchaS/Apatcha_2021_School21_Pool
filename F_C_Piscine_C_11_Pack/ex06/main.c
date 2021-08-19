/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 22:05:01 by asippy            #+#    #+#             */
/*   Updated: 2021/08/18 22:05:03 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_sort_string_tab(char **tab);

void	ft_display_tab(char **tab)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (tab[i])
	{
		printf("%6s ", tab[i]);
		i++;
	}
	printf("\n");
}

int	main(void)
{
	char *tab[] = {"ABCDEF", "ABCDE", "ABCD", "ABC", "AB", "A", "", NULL};
	ft_display_tab(tab);
	ft_sort_string_tab(tab);
	ft_display_tab(tab);
	return (0);
}
