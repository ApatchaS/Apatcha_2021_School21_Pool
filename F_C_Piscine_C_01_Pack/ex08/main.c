#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int		i;
	int		j;
	int		tmp;

	i = 0;
	j = 0;
	while (i < size - 1)
	{
		j = 0;
		while (i + j < size - 1)
		{
			if (*(tab + j) > *(tab + j + 1))
			{
				tmp = *(tab + j);
				*(tab + j) = *(tab + j + 1);
				*(tab + j + 1) = tmp;
			}
			j++;
		}
		i++;
	}
}

int	main(void)
{
	int	tab[] = {100, 43, 550, 123, 1, 9, 0};
	int	size = 7;
	
	for (int i = 0; i < size; i++)
	{
		printf("%d |\n", tab[i]);
	}
	ft_sort_int_tab(tab, size);
	for (int i = 0; i < size; i++)
	{
		printf("%d |\n", tab[i]);
	}
	return (0);
}
