/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 16:10:05 by asippy            #+#    #+#             */
/*   Updated: 2021/08/12 16:12:10 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*buf;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	buf = (char *)malloc(sizeof (buf) * (i + 1));
	if (buf == (void *)0)
		return ((void *)0);
	while (j <= i)
	{
		buf[j] = src[j];
		j++;
	}
	return (buf);
}
