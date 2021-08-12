#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int res;

	res = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
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
		res = ft_recursive_power(nb, power);
		printf("power %2d  of %3d equal %11d\n", power, nb, res);
		nb++;
	}
	return (0);
}
