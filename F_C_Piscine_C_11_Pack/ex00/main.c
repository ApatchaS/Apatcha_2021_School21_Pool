/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 15:11:20 by asippy            #+#    #+#             */
/*   Updated: 2021/08/18 15:46:53 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_foreach(int *tab, int length, void (*f)(int));

void	ft_out(int nb)
{
	char	nbr[10];
	int		i;

	i = 0;
	while (nb > 0)
	{
		nbr[i] = nb % 10 + '0';
		nb /= 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		write(1, &nbr[i], 1);
		i--;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	ft_out(nb);
}

int	main(void)
{
	int	tab[10] = {0, -20, 30, 40, 50, 60, 70, 80, 2147483647, -2147483648};

	ft_foreach(tab, 10, &ft_putnbr);
	return (0);
}
