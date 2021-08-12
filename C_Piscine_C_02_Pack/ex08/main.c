#include <stdio.h>
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] +=32;
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char str[]="123A45z67I8i9p a Z b";
	printf("%s\n", str);
	ft_strupcase(str);
	printf("%s\n", str);
	return (0);
}
