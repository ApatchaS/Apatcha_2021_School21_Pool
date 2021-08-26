/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_line_and_obstacles.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 23:06:31 by asippy            #+#    #+#             */
/*   Updated: 2021/08/24 23:06:32 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_cl_get_res(int status, int ncount, int line_count, int obstacles_count)
{
	char	buf[10];
	int		bytes;

	bytes = read(status, buf, sizeof(buf));
	close(status);
	if (bytes != 0)
		return (-1);
	if (ncount != line_count)
		return (-1);
	return (obstacles_count);
}

int	ft_get_obst_count(char *file, int line_count, char *tab, char *buf)
{
	int		status;
	int		ncount;
	int		obstacles_count;
	char	c;

	ncount = 0;
	obstacles_count = 0;
	status = ft_open_skip_first_line(file, buf);
	while (ncount != line_count && read(status, &c, 1))
	{
		if (c != tab[0] && c != tab[1] && c != '\n')
			break ;
		if (c == tab[1])
			obstacles_count++;
		if (c == '\n')
			ncount++;
	}
	return (ft_cl_get_res(status, ncount, line_count, obstacles_count));
}

int	ft_get_line_size(int line_count, int status)
{
	int		cur_line_size;
	int		line_size;
	int		ncount;
	char	c;

	ncount = 0;
	cur_line_size = 0;
	while (ncount != line_count)
	{
		read(status, &c, 1);
		cur_line_size++;
		if (c == '\n')
		{
			if (ncount == 0)
				line_size = cur_line_size;
			else if (cur_line_size != line_size)
				return (-1);
			cur_line_size = 0;
			ncount++;
		}
	}
	return (line_size - 1);
}

int	ft_line_size_valid(char *file, int line_count, char *buf)
{
	int	status;
	int	res;

	status = ft_open_skip_first_line(file, buf);
	res = ft_get_line_size(line_count, status);
	close(status);
	if (res == 0)
		return (-1);
	return (res);
}
