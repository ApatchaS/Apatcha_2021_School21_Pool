#include <unistd.h>

void	ft_print_numbers(void)
{
	char	counter;
	
	counter = '0';
	while (counter <= '9')
	{
		write(1, &counter, 1);
		counter++;
	}
	write(1,"\n", 1);
}

int	main()
{
	ft_print_numbers();
}
