#include <stdio.h>
#include <string.h>

unsigned int	ft_check_as(unsigned int ds, unsigned int ss, unsigned int size)
{
	if (size - ds - 1 >= ss)
	{
		return (ss);
	}
	else
	{
		return (size - ds - 1);
	}
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int    i;
    unsigned int    j;
	unsigned int	ds;
	unsigned int	ss;

    i = 0;
    j = 0;
    while (dest[i] != '\0')
    {
        i++;
    }
	ds = i;
    while ((src[j] != '\0') && (j < size - ds - 1))
    {
        dest[i] = src[j];
    	i++;
        j++;
    }
	while (src[j] != '\0')
	{
		j++;
	}
	ss = j;
    dest[i] = '\0';
    return (ds + ss + ft_check_as(ds, ss, size));
}

int	main(void)
{
	char src[] = "QWERTYqwertyQwerty";
	char dest[20] = "qwertyAASDASD";
	unsigned int	size;
	unsigned int	res;

	size = sizeof(dest);
	printf("size of buff: %d\n", size);
	printf("Source of copying: %s\n", src);
    printf("Destination before copying: %s\n", dest);
    res = ft_strlcat(dest, src, size);
    printf("Destination after copying: %s\n", dest);
	printf("Result size: %d\n", res);
	res = strlcat(dest, src, size);
	printf("Result size: %d\n", res);
    return (0);
}
