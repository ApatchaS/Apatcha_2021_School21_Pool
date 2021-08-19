/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 18:22:41 by asippy            #+#    #+#             */
/*   Updated: 2021/08/10 20:50:30 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_atoi(char *str)
{
	int	i;
	int	posneg;
	int	res;

	i = 0;
	posneg = 1;
	res = 0;
	while ((str[i] == 32 || (str[i] >= 9 && str[i] <= 13)) && str[i] != '\0')
	{
		i++;
	}
	while ((str[i] == '+' || str[i] == '-') && str[i] != '\0')
	{
		if (str[i] == '-')
		{
			posneg *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	return (res * posneg);
}
