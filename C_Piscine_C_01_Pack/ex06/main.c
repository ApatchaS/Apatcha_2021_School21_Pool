#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (*str != '\0')
	{
		counter++;
		str++;
	}
	return counter;
}

int	main()
{
	char str [] = "I'm apatcha";
	printf("length = %d\n", ft_strlen(str));
}
