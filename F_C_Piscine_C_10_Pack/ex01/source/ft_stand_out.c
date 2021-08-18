/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stand_out.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 17:48:28 by asippy            #+#    #+#             */
/*   Updated: 2021/08/17 23:45:11 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_stand_out(void)
{
	int		bytes_read;
	char	tab[30718];

	bytes_read = read(0, tab, sizeof(tab) - 1);
	while (bytes_read)
	{
		tab[bytes_read] = '\0';
		write(1, tab, bytes_read);
		bytes_read = read(0, tab, sizeof(tab) - 1);
	}
	return ;
}
