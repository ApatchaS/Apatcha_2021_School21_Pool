/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 22:09:51 by asippy            #+#    #+#             */
/*   Updated: 2021/08/06 22:11:22 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int		i;
	int		j;
	int		tmp;

	i = 0;
	j = 0;
	while (i < size - 1)
	{
		j = 0;
		while (i + j < size - 1)
		{
			if (*(tab + j) > *(tab + j + 1))
			{
				tmp = *(tab + j);
				*(tab + j) = *(tab + j + 1);
				*(tab + j + 1) = tmp;
			}
			j++;
		}
		i++;
	}
}
