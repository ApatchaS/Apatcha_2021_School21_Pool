#include <stdio.h>

int	ft_sqrt(int nb)
{
	long int	res;

	res = 0;
	if (nb < 0)
		return (0);
	while (res * res < nb)
		res++;
	if (res * res == nb)
		return (res);
	return(0);
}

int	main(void)
{
	int	nb;
	int	res;

	nb = -100;
	while (nb <= 100)
	{
		res = ft_sqrt(nb);
		printf("Sqrt of %4d equals %4d\n", nb, res);
		nb++;
	}
	res = ft_sqrt(2147483647);
	printf("Sqrt of 2147483647 equals %5d\n", res);
	return (0);
}
