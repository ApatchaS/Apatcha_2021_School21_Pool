#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while ((src[i] != '\0') && (i < size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

int main(void)
{
	unsigned int	n;
	char	src[] = "I'm apatcha bitch";
	char	dest[20];

	printf("source: %s\n", src);
	printf("destination before copying: %s\n", dest);
	printf("size of destination: %lu\n", sizeof(dest));
	n = ft_strlcpy(dest, src, sizeof(dest));
	printf("deincreased size: %d\n", n);
	printf("destination after copying: %s\n", dest);
	return (0);
}
