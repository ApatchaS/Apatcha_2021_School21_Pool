/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 11:19:50 by asippy            #+#    #+#             */
/*   Updated: 2021/08/10 20:41:50 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check_base(char *base)
{
	int	size;
	int	j;

	size = 0;
	j = 0;
	while (base[size] != '\0')
	{
		if (base[size] == '+' || base[size] == '-')
			return (0);
		j = size + 1;
		while (base[j] != '\0')
		{
			if (base[size] == base[j])
				return (0);
			j++;
		}
		size++;
	}
	if (size == 0 || size == 1)
		return (0);
	return (size);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			ind[32];
	int			i;
	int			base_type;
	long int	nbrl;	

	i = 0;
	base_type = ft_check_base(base);
	if (!base_type)
		return ;
	nbrl = nbr;
	if (nbrl < 0)
	{
		nbrl = -nbrl;
		write(1, "-", 1);
	}
	if (nbrl == 0)
		write(1, &base[0], 1);
	while (nbrl > 0)
	{
		ind[i++] = nbrl % base_type;
		nbrl /= base_type;
	}
	while (i > 0)
		write(1, &base[ind[--i]], 1);
}
