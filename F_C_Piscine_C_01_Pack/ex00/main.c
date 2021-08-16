#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main()
{
	int z;
	int *pZ;
	
	z = 2;
	pZ = &z;
	printf("%d\n",z);
	ft_ft(pZ);
	printf("%d",z);
}
