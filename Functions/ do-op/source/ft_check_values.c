/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_values.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 21:02:33 by asippy            #+#    #+#             */
/*   Updated: 2021/08/18 21:02:35 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_check_values(int op, int second)
{
	if (op == -1)
	{
		write(1, "0\n", 2);
		return (0);
	}
	if (second == 0 && op == 3)
	{
		write(1, "Stop : division by zero\n", 24);
		return (0);
	}
	if (second == 0 && op == 4)
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (0);
	}
	return (1);
}
