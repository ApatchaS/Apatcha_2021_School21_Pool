#include <unistd.h>

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
		write (1, &nbr[i], 1);
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
	ft_putnbr(-2147483647);
	return (0);
}
