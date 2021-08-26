/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_first_line.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 20:09:58 by asippy            #+#    #+#             */
/*   Updated: 2021/08/23 20:10:00 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_get_first_line_size(char *file)
{
	int		open_close_st;
	char	c;
	int		symbols;

	symbols = 0;
	open_close_st = open(file, O_RDONLY);
	if (open_close_st == -1)
		return (-1);
	while (read(open_close_st, &c, 1) && c != '\n')
		symbols++;
	open_close_st = close(open_close_st);
	if (open_close_st == -1)
		return (-1);
	if (c != '\n')
		return (-1);
	if (symbols < 4)
		return (-1);
	return (symbols);
}

char	*ft_get_first_line(char *file)
{
	int		open_close_st;
	int		symbols;
	char	*buf;

	symbols = ft_get_first_line_size(file);
	if (symbols == -1)
		return ((void *)0);
	buf = (char *)malloc(sizeof(char) * symbols + 1);
	open_close_st = open(file, O_RDONLY);
	read(open_close_st, buf, symbols);
	open_close_st = close(open_close_st);
	buf[symbols] = '\0';
	return (buf);
}
