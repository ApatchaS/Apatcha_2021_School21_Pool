#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	int p;
    
	c = *a;
	p = *b;
	if (p != 0)
    {
        *a = c / p;
        *b = c % p;
    }
}

int	main()
{
	int	a;
	int	b;

	a = 10;
	b = 3;
	printf("a = %d; b = %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("a = %d; b = %d", a, b);
}
