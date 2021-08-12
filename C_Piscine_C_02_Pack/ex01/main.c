#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while ((i < n) && (src[i]))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;	
	}
	return (dest);
}

int	main(void)
{
	unsigned int	n;
	char	src[] = "I'm apatcha";
	char	dest[12];
	
	n = 3;
	printf("%s\n", src);
	printf("%s\n", dest);
	ft_strncpy(dest, src, n);
	printf("%s\n", dest);
	return (0);
}
