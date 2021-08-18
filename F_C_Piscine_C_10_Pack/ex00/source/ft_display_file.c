/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 12:13:58 by asippy            #+#    #+#             */
/*   Updated: 2021/08/17 22:42:17 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_display_file(char **argv)
{
	int		openstatus;
	int		readstatus;
	char	buf[30718];

	openstatus = open(argv[1], O_RDONLY);
	if (openstatus == -1)
		write(1, "Cannot read file.\n", 18);
	else
	{
		readstatus = read(openstatus, buf, sizeof(buf) - 1);
		while (readstatus)
		{
			if (readstatus == -1)
			{
				write(1, "Cannot read file.\n", 18);
				break ;
			}
			buf[readstatus] = '\0';
			write(1, buf, readstatus);
			readstatus = read(openstatus, buf, sizeof(buf) - 1);
		}
		close(openstatus);
	}
}
