/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solution.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 21:10:43 by asippy            #+#    #+#             */
/*   Updated: 2021/08/18 21:10:45 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_solution(int first, int op, int second)
{
	if (op == 0)
		return (first + second);
	if (op == 1)
		return (first - second);
	if (op == 2)
		return (first * second);
	if (op == 3)
		return (first / second);
	if (op == 4)
		return (first % second);
	return (0);
}
