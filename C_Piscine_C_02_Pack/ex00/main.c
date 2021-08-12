#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}

int	main(void)
{
	char	src[] = "I'm apatcha Haha booooy";
	char	dest[] = {};

	printf("src: %s\n", src);
	printf("dest before copying: %s\n", dest);
	ft_strcpy(dest, src);
	printf("dest after copying: %s\n", dest); 
	return(0);
}
