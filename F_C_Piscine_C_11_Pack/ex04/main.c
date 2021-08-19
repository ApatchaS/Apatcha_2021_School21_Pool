/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 17:56:34 by asippy            #+#    #+#             */
/*   Updated: 2021/08/18 17:56:36 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_sort(int *tab, int length, int(*f)(int, int));

int	ft_int_cmp(int first, int second)
{
	return (first - second);
}

int	main(void)
{
	int	tab[] = {0, -330, -331, -332};
	int	size;

	size = sizeof(tab) / sizeof(*tab);
	printf("Size of: %3d\n", size);
	printf("Result of: %3d\n", ft_is_sort(tab, size, &ft_int_cmp));
	return (0);
}
