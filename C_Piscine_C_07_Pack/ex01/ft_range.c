/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 17:44:07 by asippy            #+#    #+#             */
/*   Updated: 2021/08/12 17:45:13 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*buf;
	int	size;
	int	i;

	size = max - min;
	i = 0;
	if (size <= 0)
		return ((void *)0);
	buf = malloc(sizeof (buf) * size);
	if (buf == (void *)0)
		return ((void *)0);
	while (i < size)
	{
		buf[i] = min++;
		i++;
	}
	return (buf);
}
