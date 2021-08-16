/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 20:18:42 by asippy            #+#    #+#             */
/*   Updated: 2021/08/15 20:24:20 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_search_1(int board[4][4], int *input);

int		ft_search_4(int board[4][4], int *values);

void	ft_search_4_(int board[4][4], int *values, int i);

int		ft_skyscrapers(int board[4][4], int *input);

void	ft_putchar(char c);

void	ft_printboard(int board[4][4])
{
	int	row;
	int	col;

	row = -1;
	while (++row < 4)
	{
		col = -1;
		while (++col < 4)
		{
			ft_putchar(board[row][col] + '0');
			if (col < 3)
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}

int	ft_check_correct(int *values)
{
	int	i;
	int	fours;
	int	ones;

	i = -1;
	fours = 0;
	ones = 0;
	while (values[++i])
	{
		if (values[i] == 4)
			fours++;
		if (values[i] == 1)
			ones++;
	}
	if (fours <= 4 && ones <= 4)
		return (1);
	return (0);
}

int	ft_iscorrect(char **argv, int *values)
{
	int	i;
	int	correct_values;

	i = 0;
	correct_values = 0;
	while (argv[1][i])
	{
		if ((argv[1][i] >= '1' && argv[1][i] <= '4') &&
			((argv[1][i + 1] == ' ') ||
				((argv[1][i + 1] == 0) && (argv[1][i - 1] == ' '))))
		{
			values[correct_values] = (argv[1][i] - '0');
			correct_values++;
			i++;
		}
		if ((argv[1][i] >= 9 && argv[1][i] <= 13) || argv[1][i] == 32)
			i++;
		else if (correct_values == 16 && ft_check_correct(values))
			return (1);
	}
	return (0);
}

int	ft_solution(int board[4][4], int *values)
{
	ft_search_1(board, values);
	ft_search_4_(board, values, ft_search_4(board, values));
	if (ft_skyscrapers(board, values))
	{
		ft_printboard(board);
		return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	values[16];
	int	board[4][4];
	int	row;
	int	col;

	row = -1;
	while (++row < 4)
	{
		col = -1;
		while (++col < 4)
			board[row][col] = 0;
	}
	if (!(argc == 2 && ft_iscorrect(argv, values)
			&& ft_solution(board, values)))
		write(1, "ERROR\n", 6);
	return (0);
}
