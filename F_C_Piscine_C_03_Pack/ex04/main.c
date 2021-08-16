#include <stdio.h>
#include <unistd.h>
#include <string.h>


char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			j = 1;
			while ((to_find[j] != '\0') && (to_find[j] == str[i+j]))
			{
				j++;
			}
			if (to_find[j] == '\0')
			{
				return (&str[i]);
			}
		}
		i++;	
	}
	return (NULL);
}

int	main(void)
{
	char str[] = "";
	char to_find[] = "";

	printf("%p\n", ft_strstr(str, to_find));
	printf("%p\n", strstr(str, to_find));
	write(1, ft_strstr(str, to_find), 1);
	return (0);
}
