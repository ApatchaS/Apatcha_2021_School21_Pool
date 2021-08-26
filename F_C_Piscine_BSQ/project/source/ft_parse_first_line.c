/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_first_line.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 20:10:06 by asippy            #+#    #+#             */
/*   Updated: 2021/08/23 20:10:07 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_dic_check(char *buf, int buf_size)
{
	int	i;

	i = 1;
	if (buf[buf_size - 3] == buf[buf_size - 2]
		|| buf[buf_size - 3] == buf[buf_size - 1]
		|| buf[buf_size - 2] == buf[buf_size - 1])
		return (-1);
	while (i < 4)
	{
		if (buf[buf_size - i] < 32 || buf[buf_size - i] > 127)
			return (-1);
		i++;
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int		i;
	long	res;

	i = 0;
	res = 0;
	while (str[i] == ' ' && str[i] != '\0')
		i++;
	if (str[i] == '-')
		return (-1);
	if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		res = 10 * res + (str[i] - 48);
		i++;
	}
	if (res > 2147483647)
		return (-1);
	return (res);
}

int	ft_parse_first_line(char *buf, char *tab)
{
	int	buf_size;
	int	line_count;

	buf_size = ft_strlen(buf);
	if (ft_dic_check(buf, buf_size) == -1)
		return (-1);
	tab[0] = buf[buf_size - 3];
	tab[1] = buf[buf_size - 2];
	tab[2] = buf[buf_size - 1];
	buf[buf_size - 3] = '\0';
	line_count = ft_atoi(buf);
	if (line_count < 1)
		return (-1);
	return (line_count);
}
