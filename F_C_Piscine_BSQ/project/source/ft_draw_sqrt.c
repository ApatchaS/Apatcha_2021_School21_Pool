/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_sqrt.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 19:31:47 by asippy            #+#    #+#             */
/*   Updated: 2021/08/25 19:31:49 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putchar( char c)
{
	write(1, &c, 1);
}

void	ft_draw_sqrt(int **matrix, t_block *arr_block,
			 t_draw pos, char *symbols)
{
	int	i;
	int	j;

	i = 0;
	while (i < arr_block[0].y)
	{
		j = 0;
		while (j < arr_block[0].x)
		{
			if (i < pos.y + pos.size && i > pos.y - 1
				&& pos.size != 0 && j > pos.x - 1
				&& j < pos.x + pos.size)
				ft_putchar(symbols[2]);
			else if (matrix[i][j] == 0)
				ft_putchar(symbols[1]);
			else
				ft_putchar(symbols[0]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
