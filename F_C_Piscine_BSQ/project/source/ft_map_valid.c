/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_valid.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 15:26:09 by asippy            #+#    #+#             */
/*   Updated: 2021/08/24 15:26:10 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_open_skip_first_line(char *file, char *buf)
{
	int		i;
	int		buf_size;
	int		status;
	char	c;

	i = 0;
	buf_size = ft_strlen(buf) + 3;
	status = open(file, O_RDONLY);
	while (i <= buf_size)
	{
		read(status, &c, 1);
		i++;
	}
	return (status);
}

t_block	*ft_map_check(int line_count, int status, t_block *obstacles, char *tab)
{
	int		i;
	int		j;
	char	c;
	int		counter;

	i = 0;
	counter = 1;
	while (i < line_count)
	{
		j = 0;
		while (1)
		{
			read(status, &c, 1);
			if (c == tab[1])
			{
				obstacles[counter].x = j;
				obstacles[counter++].y = i;
			}
			if (c == '\n')
				break ;
			j++;
		}
		i++;
	}
	return (obstacles);
}

t_block	*ft_map_valid(char *file, int line_count, char *tab, char *buf)
{
	t_block		*obstacles;
	int			obstacles_count;
	int			line_size;
	int			status;

	obstacles_count = ft_get_obst_count(file, line_count, tab, buf);
	if (obstacles_count == -1)
		return ((void *)0);
	line_size = ft_line_size_valid(file, line_count, buf);
	if (line_size == -1)
		return ((void *)0);
	obstacles = (t_block *)malloc(sizeof(t_block) * (obstacles_count + 2));
	if (obstacles == (void *)0)
		return ((void *)0);
	obstacles[0].x = line_size;
	obstacles[0].y = line_count;
	status = ft_open_skip_first_line(file, buf);
	obstacles = ft_map_check(line_count, status, obstacles, tab);
	close(status);
	obstacles[obstacles_count + 1].x = -1;
	obstacles[obstacles_count + 1].y = -1;
	return (obstacles);
}
