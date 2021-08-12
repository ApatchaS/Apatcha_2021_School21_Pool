#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	counter;

	counter = 2;
	while (counter < nb)
	{	
		if (nb % counter == 0)
			return (0);
		counter++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (!ft_is_prime(nb))
		nb++;
	return(nb);
}

int	main(void)
{
	int	nb;
	int	res;

	nb = 2147483600;
	while (nb <= 2147483647)
	{
		res = ft_find_next_prime(nb);
		printf("Next prime number after %12d is - %12d\n", nb, res);
		nb++;
	}
	return (0);
}
