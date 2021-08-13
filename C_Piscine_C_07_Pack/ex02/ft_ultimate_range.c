/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 21:26:02 by asippy            #+#    #+#             */
/*   Updated: 2021/08/12 21:26:39 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*buf;
	int	i;

	size = max - min;
	i = 0;
	if (size <= 0)
	{
		buf = (void *) 0;
		return (0);
	}
	buf = malloc(sizeof (buf) * size);
	if (buf == (void *)0)
		return (-1);
	while (i < size)
	{
		buf[i] = min++;
		i++;
	}
	*range = buf;
	return (size);
}
