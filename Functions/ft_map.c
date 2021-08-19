/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:17:07 by asippy            #+#    #+#             */
/*   Updated: 2021/08/18 16:17:09 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*buf;

	i = 0;
	buf = (int *)malloc(length * sizeof(int));
	if (buf == (void *)0)
		return ((void *)0);
	while (i < length)
	{
		buf[i] = f(tab[i]);
		i++;
	}
	return (buf);
}
