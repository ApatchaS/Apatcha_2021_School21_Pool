#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

int	main(void)
{
	int index;
	int	res;
	
	index = -20;
	while (index <= 20)
	{
		res = ft_fibonacci(index);
		printf("%3d element of Fibonacci sequence is %12d\n", index, res);
		index++;
	}
	return (0);
}
