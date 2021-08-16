#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int		i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int main(void)
{
	int flag;
	char str[] = "0123456789a";
	
	flag = ft_str_is_numeric(str);
	printf("%d\n", flag);
	return (0);
}
