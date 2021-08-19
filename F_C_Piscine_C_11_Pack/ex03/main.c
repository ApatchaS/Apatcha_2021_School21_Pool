/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 17:38:51 by asippy            #+#    #+#             */
/*   Updated: 2021/08/18 17:38:53 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_count_if(char **tab, int length, int (*f)(char *));

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(void)
{
	char	*tab[] = {"1", "2", "3", "4", "5asd5523", "6", "7", "8"};
	int		size;

	size = sizeof(tab) / sizeof(*tab);
	printf("Size of: %3d\n", size);
	printf("Result of: %3d\n", ft_count_if(tab, size, &ft_str_is_numeric));
	return (0);
}
