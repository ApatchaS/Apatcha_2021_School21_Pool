#include <stdio.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*buf;
	int	i;
	
	size = max - min;
	i = 0;
	if (size <= 0)
	{
		buf = (void *) 0;
		return (0);
	}
	buf = malloc(sizeof (buf) * size);
	if (buf == (void *)0)
		return (-1);
	while (i < size)
	{
		buf[i] = min++;
		i++;
	}
	*range = buf;
	return (size);
}

int	main(void)
{
	int	i;
	int	min;
	int	max;
	int	*range;
	int	res;

	i = 0;
	min = 0;
	max = 20;
	res = ft_ultimate_range(&range, min, max);
	printf("Result of the function is %3d\n", res);
	while (i < (max - min))
	{
		printf("%2d element of table is %3d\n", i, range[i]);
		i++;
	}
	return (0);
}
