/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 20:27:54 by asippy            #+#    #+#             */
/*   Updated: 2021/08/08 20:30:30 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_check_as(unsigned int ds, unsigned int ss, unsigned int size)
{
	if (size - ds - 1 >= ss)
	{
		return (ss);
	}
	else
	{
		return (size - ds - 1);
	}
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	ds;
	unsigned int	ss;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	ds = i;
	while ((src[j] != '\0') && (j < size - ds - 1))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	while (src[j] != '\0')
	{
		j++;
	}
	ss = j;
	dest[i] = '\0';
	return (ds + ss + ft_check_as(ds, ss, size));
}
