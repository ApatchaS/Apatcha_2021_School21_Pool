/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 20:43:33 by asippy            #+#    #+#             */
/*   Updated: 2021/08/18 20:43:35 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int argc, char **argv)
{
	int	first;
	int	second;
	int	op;

	if (argc != 4)
		return (0);
	first = ft_atoi(argv[1]);
	op = ft_check_op(argv[2]);
	second = ft_atoi(argv[3]);
	if (ft_check_values(op, second))
	{
		ft_putnbr(ft_solution(first, op, second));
		write(1, "\n", 1);
	}
	return (0);
}
