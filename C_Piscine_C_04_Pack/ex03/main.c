#include <stdio.h>

int	ft_atoi(char *str)
{
	int		i;
	int		posneg;
	int		res;

	i = 0;
	posneg = 1;
	res = 0;
	while ((str[i] == 32 || (str[i] >= 9 && str[i] <= 13)) && str[i] != '\0')
	{
		i++;
	}
	while ((str[i] == '+' || str[i] == '-') && str[i] != '\0')
	{
		if (str[i] == '-')
		{
			posneg *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <='9' && str[i] != '\0')
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	return (res * posneg);
}

int	main(void)
{
	int	res;
	char source[] = "-2147483647";
	
	res = ft_atoi(source);
	printf("%d", res);
	return (0);
}
