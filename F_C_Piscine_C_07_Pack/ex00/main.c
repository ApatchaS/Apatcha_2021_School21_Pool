#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int	i;
	int	j;
	char *buf = "";

	i = 0;
	j = 0;
	while (src[i])
		i++;
	buf = malloc(sizeof(buf) * (i + 1));
	if (buf == (void*)0)
		return ((void*)0);
	while (j <= i)
	{
		buf[j] = src[j];
		j++;
	}
	return (buf);
}

int	main(void)
{
	char *src = "123456789";
	printf("%s\n", ft_strdup(src));
	return (0);
}
