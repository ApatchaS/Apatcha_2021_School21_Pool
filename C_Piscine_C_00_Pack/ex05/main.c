#include <unistd.h>

void	ft_pool(char d1, char d2, char d3)
{
	write(1, &d1, 1);
	write(1, &d2, 1);
	write(1, &d3, 1);
	if (d1 == '7' && d2 == '8' && d3 == '9')
	{
		write(1, "\n", 1);
	}
	else
	{
		write(1, ", ", 2);
	}	
}

void	ft_print_comb(void)
{
	char	d1;
	char	d2;
	char	d3;

	d1 = '0';
	d2 = '1';
	d3 = '2';
	while (d1 <= '7')
	{
		while (d2 <= '8')
		{
			while (d3 <= '9')
			{
				ft_pool(d1, d2, d3);
				d3++;
			}
			d2++;
			d3 = d2 + 1;
		}
		d1++;
		d2 = d1 + 1;
		d3 = d2 + 1;
	}
}

int	main()
{
	ft_print_comb();
}
