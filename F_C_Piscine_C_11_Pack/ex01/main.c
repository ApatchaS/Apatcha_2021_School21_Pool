/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:05:52 by asippy            #+#    #+#             */
/*   Updated: 2021/08/18 16:05:57 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_map(int *tab, int length, int (*f)(int));

void	print_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%12d ", tab[i]);
		i++;
	}
	printf("\n");
}

int	ft_is_neg(int a)
{
	if (a >= 0)
		return (0);
	else
		return (1);
}

int	main(void)
{
	int	tab[8] = {-10, 10, -20, 20, -30, 30, -40, 40};
	int	*buf;

	print_tab(tab, 8);
	buf = ft_map(tab, 8, &ft_is_neg);
	print_tab(buf, 8);
	return (0);
}
