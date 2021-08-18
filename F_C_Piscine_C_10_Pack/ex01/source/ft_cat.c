/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 16:02:29 by asippy            #+#    #+#             */
/*   Updated: 2021/08/17 23:59:47 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putstr(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		write(1, &str[count], 1);
		count++;
	}
}

void	ft_display_err(char *file_name, char *err)
{
	write(1, "ft_cat: ", 8);
	ft_putstr((file_name));
	write(1, ": ", 2);
	ft_putstr(err);
	write(1, "\n", 1);
}

void	ft_display_file(char *file_name)
{
	int		open_close_status;
	int		readstatus;
	char	buf[30718];

	open_close_status = open(file_name, O_RDONLY);
	if (open_close_status == -1)
	{
		ft_display_err(file_name, strerror(errno));
		return ;
	}
	readstatus = read(open_close_status, buf, sizeof(buf) - 1);
	while (readstatus)
	{
		if (readstatus == -1)
		{
			ft_display_err(file_name, strerror(errno));
			break ;
		}
		buf[readstatus] = '\0';
		write(1, buf, readstatus);
		readstatus = read(open_close_status, buf, sizeof(buf) - 1);
	}
	open_close_status = close(open_close_status);
	if (open_close_status == -1)
		ft_display_err(file_name, strerror(errno));
}

void	ft_cat(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (argv[i][0] == '-' && argv[i][1] == '\0')
			ft_stand_out();
		else
			ft_display_file(argv[i]);
		i++;
	}
	return ;
}
