/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 18:00:36 by asippy            #+#    #+#             */
/*   Updated: 2021/08/04 18:45:10 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	t;

	t = 'a';
	while (t <= 'z')
	{
		write(1, &t, 1);
		t++;
	}
	write(1, "\n", 1);
}
