/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 17:11:16 by asippy            #+#    #+#             */
/*   Updated: 2021/08/21 17:11:18 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc == 1)
	{
		ft_work_with_term();
		ft_work_with_file(".File_for_work_with_terminal.txt");
	}
	else
	{
		while (i < argc)
		{
			if (i != 1)
				write(1, "\n", 1);
			ft_work_with_file(argv[i++]);
		}
	}
	return (0);
}
