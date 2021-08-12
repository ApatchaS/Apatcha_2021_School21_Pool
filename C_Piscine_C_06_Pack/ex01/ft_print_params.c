/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 18:34:19 by asippy            #+#    #+#             */
/*   Updated: 2021/08/11 18:45:35 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	count;

	count = 1;
	while (count < argc)
	{
		while (*argv[count] != '\0')
		{
			write(1, argv[count], 1);
			argv[count]++;
		}
		count++;
		write(1, "\n", 1);
	}
	return (0);
}
