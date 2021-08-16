/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_1_4.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 20:19:07 by asippy            #+#    #+#             */
/*   Updated: 2021/08/15 20:20:29 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_search_1(int board[4][4], int *values)
{
	int	i;

	i = -1;
	while (values[++i])
	{
		if (values[i] == 1)
		{
			if (i < 4)
				board[0][i] = 4;
			else if (i < 8)
				board[3][i - 4] = 4;
			else if (i < 11)
				board[i - 8][0] = 4;
			else if (i < 16)
				board[i - 12][3] = 4;
		}
	}
}

int	ft_search_4(int board[4][4], int *values)
{
	int	i;
	int	j;

	i = -1;
	j = -1;
	while ((values[++i]) && i < 8)
	{
		if (values[i] == 4)
		{
			if (i < 4)
				while (++j < 4)
					board[j][i] = j + 1;
			else if (i < 8)
			{
				j = 5;
				while (--j > 0)
					board[4 - j][(i % 4)] = j;
			}
		}
	}
	return (i);
}

void	ft_search_4_(int board[4][4], int *values, int i)
{
	int	j;

	j = -1;
	while ((values[++i]) && i < 16)
	{
		if (values[i] == 4)
		{
			if (i < 12)
				while (++j < 4)
					board[i % 4][j] = j + 1;
			else if (i < 16)
			{
				j = 5;
				while (--j > 0)
					board[i % 4][4 - j] = j;
			}
		}
	}
}
