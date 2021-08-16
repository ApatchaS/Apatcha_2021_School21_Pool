#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j]; 
		i++;
		j++;
	}
	dest[i] = '\n';
	return (dest);
}

int	main(void)
{
	char src[] = "123456789";
	char dest[100] = "987654321";
	
	printf("Source of copying: %s\n", src);
	printf("Destination before copying: %s\n", dest);
	//ft_strcat(dest, src);
	printf("Destination after copying: %s\n", strcat(dest, src));
	return (0);
}
