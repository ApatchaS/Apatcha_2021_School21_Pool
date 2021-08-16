#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write(1, "N\n", 2);
	}
	else
	{
		write(1, "P\n", 2);
	}
}

int	main()
{
	int n;

	n = 0;
	ft_is_negative(n);
}
