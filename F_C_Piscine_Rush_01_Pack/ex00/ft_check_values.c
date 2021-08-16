/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_values.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 20:19:20 by asippy            #+#    #+#             */
/*   Updated: 2021/08/15 20:19:21 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_col_up(int board[4][4], int col, int value)
{
	int	i;
	int	highest;
	int	skyscrapers;

	i = 0;
	skyscrapers = 1;
	highest = board[i][col];
	while (i < 4)
	{
		if (board[i][col] > highest)
		{
			highest = board[i][col];
			skyscrapers++;
		}
		++i;
	}
	if (skyscrapers == value)
		return (0);
	return (1);
}

int	ft_check_col_down(int board[4][4], int col, int value)
{
	int	i;
	int	highest;
	int	skyscrapers;

	i = 3;
	skyscrapers = 1;
	highest = board[i][col];
	while (i >= 0)
	{
		if (board[i][col] > highest)
		{
			highest = board[i][col];
			skyscrapers++;
		}
		--i;
	}
	if (skyscrapers == value)
		return (0);
	return (1);
}

int	ft_check_row_left(int board[4][4], int row, int value)
{
	int	i;
	int	highest;
	int	skyscrapers;

	i = 0;
	skyscrapers = 1;
	highest = board[row][i];
	while (i < 4)
	{
		if (board[row][i] > highest)
		{
			highest = board[row][i];
			skyscrapers++;
		}
		++i;
	}
	if (skyscrapers == value)
		return (0);
	return (1);
}

int	ft_check_row_right(int board[4][4], int row, int value)
{
	int	i;
	int	highest;
	int	skyscrapers;

	i = 3;
	skyscrapers = 1;
	highest = board[row][i];
	while (i >= 0)
	{
		if (board[row][i] > highest)
		{
			highest = board[row][i];
			skyscrapers++;
		}
		--i;
	}
	if (skyscrapers == value)
		return (0);
	return (1);
}

int	ft_check_values(int board[4][4], int *vs)
{
	int	i;

	i = -1;
	while (vs[++i])
	{
		if ((i < 4 && ft_check_col_up(board, i, vs[i]))
			|| (i >= 4 && i <= 7 && ft_check_col_down(board, i - 4, vs[i]))
			|| (i >= 8 && i <= 11 && ft_check_row_left(board, i - 8, vs[i]))
			|| (i >= 12 && i <= 15 && ft_check_row_right(board, i - 12, vs[i])))
			return (0);
	}
	return (1);
}
