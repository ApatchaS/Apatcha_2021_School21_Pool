#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int c;
	
	c = *a;
	*a = *b;
	*b = c;
}

int	main()
{
	int a;
	int b;

	a = 110;
	b = 10;
	ft_swap(&a, &b);
	printf("a = %dd; b = %d",a,b);
}
