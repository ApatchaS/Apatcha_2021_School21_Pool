#include <unistd.h>

void	ft_out(int nb)
{
	char	nbr[11];
	int		i;

	i = 1;
	while (nb > 0)
	{
		nbr[i] = nb % 10 + '0';
		nb /= 10;
		i++;
	}
	i--;
	while (i >= 1)
	{
		write (1, &nbr[i], 1);
		i--;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write (1, "-2147483648\n", 12);
		return ;
	}
	if (nb < 0)
	{
		write (1, "-", 1);
		nb *= -1;
	}
	if (nb == 0)
	{
		write (1, "0\n", 2);
		return ;
	}
	ft_out(nb);
	write (1, "\n", 1);
}

int	main()
{
	ft_putnbr(100000);
}
