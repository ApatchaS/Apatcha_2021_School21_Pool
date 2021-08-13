#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *buf;
	int size;
	int i;

	size = max - min;
	i = 0;
	if (size <= 0)
		return ((void *)0);
	buf = malloc(sizeof (buf) * size);
	if (buf == (void *)0)
		return ((void *)0);
	while (i < size)
	{
		buf[i] = min++;
		i++;
	}
	return(buf);
}
int	main(void)
{
	int	min;
	int	max;
	int *tab;
	int	i;

	min = -20;
	max = 20;
	tab = ft_range(min, max);
	i = 0;
	while (i < (max - min))
	{
		printf("%3d index of array is %3d\n", i, tab[i]);
		i++;
	}
	return (0);
}
