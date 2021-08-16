#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int		i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
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
	char str[] = "!asv322gfhp[rth[opk5";
	
	flag = ft_str_is_printable(str);
	printf("%d\n", flag);
	return (0);
}
