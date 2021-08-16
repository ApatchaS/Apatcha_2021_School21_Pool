#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while ((src[j] != '\0') && (j < nb))
	{
		dest[i] = src[j]; 
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char src[] = "123456789";
	char dest[11] = "987654321";
	unsigned int	nb;

	nb = 1;
	printf("Source of copying: %s\n", src);
	printf("Destination before copying: %s\n", dest);
	//ft_strncat(dest, src, nb);
	printf("Destination after copying: %s\n", strncat(dest, src, nb));
	return (0);
}

