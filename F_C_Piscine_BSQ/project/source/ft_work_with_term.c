/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_work_with_term.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 15:20:23 by asippy            #+#    #+#             */
/*   Updated: 2021/08/23 15:20:24 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_work_with_term(void)
{
	int		openstatus;
	char	c;

	openstatus = open(".File_for_work_with_terminal.txt", O_WRONLY | O_TRUNC
			| O_CREAT, S_IWRITE | S_IREAD);
	while (read(0, &c, 1))
		write(openstatus, &c, 1);
	close(openstatus);
	return ;
}
