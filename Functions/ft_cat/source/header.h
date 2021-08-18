/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 16:01:27 by asippy            #+#    #+#             */
/*   Updated: 2021/08/17 23:51:10 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <errno.h>
# include <fcntl.h>
# include <string.h>
# include <unistd.h>

void	ft_cat(int argc, char **argv);
void	ft_stand_out(void);
void	ft_putstr(char *str);
void	ft_display_err(char *file_name, char *err);
void	ft_display_file(char *file_name);

#endif
