/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 20:43:22 by asippy            #+#    #+#             */
/*   Updated: 2021/08/18 20:43:24 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>

void	ft_out(int nb);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
int		ft_check_op(char *s);
int		ft_check_values(int op, int second);
int		ft_solution(int first, int op, int second);

#endif