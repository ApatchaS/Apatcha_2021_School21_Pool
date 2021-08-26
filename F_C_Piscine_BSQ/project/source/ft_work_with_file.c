/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_work_with_file.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 20:09:50 by asippy            #+#    #+#             */
/*   Updated: 2021/08/23 20:09:52 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_processing(char *file, int line_count, char *tab, char *buf)
{
	int		i;
	int		**matrix;
	t_block	*obstacles;
	t_draw	ready_sqrt;

	i = 0;
	obstacles = ft_map_valid(file, line_count, tab, buf);
	free(buf);
	if (obstacles == (void *)0)
	{
		write(2, "map error\n", 10);
		return ;
	}
	matrix = draw_matrix(obstacles);
	find_big_sqr(obstacles, matrix);
	ready_sqrt = pos_sqrt(obstacles, matrix);
	ft_draw_sqrt(matrix, obstacles, ready_sqrt, tab);
	while (i < obstacles[0].y)
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
	free(obstacles);
	return ;
}

void	ft_work_with_file(char *file)
{
	char	*buf;
	char	tab[3];
	int		line_count;

	buf = ft_get_first_line(file);
	if (buf == (void *)0)
	{
		write(2, "map error\n", 10);
		return ;
	}
	line_count = ft_parse_first_line(buf, tab);
	if (line_count == -1)
	{
		write(2, "map error\n", 10);
		free(buf);
		return ;
	}
	ft_processing(file, line_count, tab, buf);
	return ;
}
