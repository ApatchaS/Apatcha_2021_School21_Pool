#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size/2)
	{
		tmp = *(tab + i);
		*(tab + i) =  *(tab + size - i - 1);
		*(tab + size - i - 1) = tmp;
		i++;
	}
}

int	main()
{
	int	tab [4] = {1, 2, 3, 4};
	int	size = 4;
	int	i = 0;
	
	while (i < size)
	{
		printf("%d: %d\n", i, tab[i]);
		i++;
	}
	ft_rev_int_tab(tab, size);
	i = 0;
	while (i < size)
	{
		printf("%d: %d\n", i, tab[i]);
		i++;
	}
}
