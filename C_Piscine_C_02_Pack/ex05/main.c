#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int		i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
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
	char str[] = "Z ";
	
	flag = ft_str_is_alpha(str);
	printf("%d\n", flag);
	return (0);
}
