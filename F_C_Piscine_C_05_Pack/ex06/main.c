#include <stdio.h>

int	ft_is_prime(int nb)
{
	int counter;
	
	counter = 2;
	if (nb <= 1)
		return (0);
	while (counter < nb)
	{	if (nb % counter == 0)
			return (0);
		counter++;
	}
	return (1);
}

int	main(void)
{
	int	nb;
	int	res;

	nb = -100;
	while (nb <= 100)
	{
		res = ft_is_prime(nb);
		printf("Number %4d is %1d\n", nb, res);
		nb++;
	}
	printf("Number %ld is %1d\n", -2147483648, ft_is_prime(-2147483648));
	printf("Number %d is %1d\n", 2147483647, ft_is_prime(2147483647));

	return (0);
}
