#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int res;

	res = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		res *= nb;
		power--;
	}
	return (res);
}

int	main(void)
{
	int nb;
	int power;
	int	res;
	
	nb = -32;
	power = 3;
	while (nb <= 32)
	{
		res = ft_iterative_power(nb, power);
		printf("power %2d  of %3d equal %11d\n", power, nb, res);
		nb++;
	}
	return (0);
}
