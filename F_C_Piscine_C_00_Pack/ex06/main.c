#include <unistd.h>

void	ft_abcd_output(char a, char b, char c, char d)
{
	write (1, &a, 1);
	write (1, &b, 1);
	write (1, " ", 1);
	write (1, &c, 1);
	write (1, &d, 1);
	write (1, ", ", 2);
}

void	ft_cd_switch(char a, char b)
{
	char	c;
	char	d;

	c = a;
	d = b + 1;
	if (a == '9' && b == '8')
	{
		write (1, "98 99", 5);
	}
	else
	{
		while (c <= '9')
		{
			while (d <= '9')
			{
				ft_abcd_output(a, b, c, d);
				d++;
			}
			c++;
			d = '0';
		}
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = '0';
	b = '0';
	while (a <= '9')
	{
		while (b <= '9')
		{
			if (a == '9' && b == '9')
			{
				write(1, "\n", 1);
				b++;
			}
			else
			{
				ft_cd_switch(a, b);
				b++;
			}
		}
		a++;
		b = '0';
	}
}

int	main()
{
	ft_print_comb2();
}
