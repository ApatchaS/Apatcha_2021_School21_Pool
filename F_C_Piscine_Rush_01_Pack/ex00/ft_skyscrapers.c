/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_skyscrapers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 20:18:56 by asippy            #+#    #+#             */
/*   Updated: 2021/08/15 20:23:04 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_values(int board[4][4], int *in_num);

int	ft_safe_row(int board[4][4], int row, int num)
{
	int	col;

	col = 0;
	while (col < 4)
	{
		if (board[row][col] == num)
			return (0);
		col++;
	}
	return (1);
}

int	ft_safe_col(int board[4][4], int col, int num)
{
	int	row;

	row = 0;
	while (row < 4)
	{
		if (board[row][col] == num)
			return (0);
		row++;
	}
	return (1);
}

int	ft_iszero(int board[4][4], int *row, int *col)
{
	*row = 0;
	*col = 0;
	while (*row < 4)
	{
		*col = 0;
		while (*col < 4)
		{
			if (board[*row][*col] == 0)
				return (1);
			*col += 1;
		}
		*row += 1;
	}
	return (0);
}

int	ft_safe(int board[4][4], int row, int col, int num)
{
	if (((ft_safe_row(board, row, num)) && (ft_safe_col(board, col, num))
			&& (board[row][col] == 0)))
		return (1);
	return (0);
}

int	ft_skyscrapers(int board[4][4], int *values)
{
	int	row;
	int	col;
	int	n;

	row = 0;
	col = 0;
	n = 1;
	if (!(ft_iszero(board, &row, &col)) && ft_check_values(board, values))
		return (1);
	while (n <= 4)
	{
		if (ft_safe(board, row, col, n))
		{
			board[row][col] = n;
			if (ft_skyscrapers(board, values))
				return (1);
			board[row][col] = 0;
		}
		n++;
	}
	return (0);
}
