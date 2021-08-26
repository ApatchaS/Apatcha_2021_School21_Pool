/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_sqrt.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 19:31:35 by asippy            #+#    #+#             */
/*   Updated: 2021/08/25 19:31:37 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	**malloc_matrix(t_block *arr_block)
{
	int	**matrix;
	int	i;

	i = 0;
	matrix = (int **)malloc(sizeof(int *) * arr_block[0].y);
	while (i < arr_block[0].y)
		matrix[i++] = (int *)malloc(sizeof(int) * arr_block[0].x);
	return (matrix);
}

int	**draw_matrix(t_block *arr_block)
{
	int	i;
	int	j;
	int	k;
	int	**matrix;

	matrix = malloc_matrix(arr_block);
	i = 0;
	k = 1;
	while (i < arr_block[0].y)
	{
		j = 0;
		while (j < arr_block[0].x)
		{
			if (i == arr_block[k].y && j == arr_block[k].x)
			{
				matrix[i][j++] = 0;
				k++;
			}
			else
				matrix[i][j++] = 1;
		}
		i++;
	}
	return (matrix);
}

int	min_num(int i, int j, int k)
{
	if ((i <= j) && (i <= k))
		return (i + 1);
	if ((j <= i) && (j <= k))
		return (j + 1);
	return (k + 1);
}

void	find_big_sqr(t_block *arr_block, int **matrix)
{
	int	i;
	int	j;

	i = 1;
	while (i < arr_block[0].y)
	{
		j = 1;
		while (j < arr_block[0].x)
		{
			if (matrix[i][j] != 0)
				matrix[i][j] = min_num(matrix[i - 1][j - 1],
						matrix[i - 1][j], matrix[i][j - 1]);
			j++;
		}
		i++;
	}
}

t_draw	pos_sqrt(t_block *arr_block, int **matrix)
{
	t_draw	position_sqrt;
	int		i;
	int		j;

	i = -1;
	position_sqrt.x = 0;
	position_sqrt.y = 0;
	position_sqrt.size = 0;
	while (++i < arr_block[0].y)
	{
		j = 0;
		while (j < arr_block[0].x)
		{
			if (position_sqrt.size < matrix[i][j])
			{
				position_sqrt.size = matrix[i][j];
				position_sqrt.x = j;
				position_sqrt.y = i;
			}
			j++;
		}
	}
	position_sqrt.x = position_sqrt.x - position_sqrt.size + 1;
	position_sqrt.y = position_sqrt.y - position_sqrt.size + 1;
	return (position_sqrt);
}
