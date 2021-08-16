#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

int	main(void)
{
	int	nb;
	int res;
	
	nb = -13;
	while (nb <= 13)
	{
		res = ft_recursive_factorial(nb);
		printf("factorial of %4d equal %11d\n", nb, res);
		nb++;
	}
	return (0);
}
