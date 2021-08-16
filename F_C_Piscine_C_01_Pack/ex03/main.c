#include <stdio.h>

void    ft_div_mod(int a, int b, int *div, int *mod)
{
    if (b != 0)
    {
        *div = a / b;
        *mod = a % b;
    }
}

int	main()
{
	int	a;
	int	b;
	int	mod;
	int	div;

	a = 10;
	b = 3;
	div = 0;
	mod = 0;
	printf("a = %d; b = %d; div = %d; mod = %d\n",a,b,div,mod);
	ft_div_mod(a, b, &div, &mod);
	printf("a = %d; b = %d; div = %d; mod = %d\n",a,b,div,mod);
}
