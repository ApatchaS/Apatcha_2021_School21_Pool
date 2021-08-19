/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 17:56:30 by asippy            #+#    #+#             */
/*   Updated: 2021/08/18 17:56:31 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	pos;
	int	neg;
	int	dif;

	i = 1;
	pos = 0;
	neg = 0;
	if (length == 0 || length == 1)
		return (1);
	while (i < length)
	{
		dif = f(tab[i - 1], tab[i]);
		if (dif < 0)
			pos++;
		if (dif > 0)
			neg++;
		i++;
	}
	if (pos != 0 && neg != 0)
		return (0);
	return (1);
}
