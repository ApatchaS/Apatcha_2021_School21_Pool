#include <unistd.h>

void	ft_putstr(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		write(1, &str[count], 1);
		count++;
	}	
}

int	main(void)
{
	char str[] = "123456789987654321";
	ft_putstr(str);
	return (0);
}
