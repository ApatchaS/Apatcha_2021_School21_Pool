#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int res;
	
	res = 1;
	if (nb < 0)
		return (0);
	while (nb > 1)
		res *= nb--;	
	return (res);
}

int	main(void)
{
	int	nb;
	int res;
	
	nb = -13;
	while (nb <= 13)
	{
		res = ft_iterative_factorial(nb);
		printf("factorial of %4d equal %11d\n", nb, res);
		nb++;
	}
	return (0);
}
