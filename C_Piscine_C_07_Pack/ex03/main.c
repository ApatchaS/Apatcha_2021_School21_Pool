#include <stdio.h>
#include <stdlib.h>

char    *ft_strcat(char *dest, char *src)
{
    int    i;
    int    j;

    i = 0;
    j = 0;
    while (dest[i] != '\0')
        i++;
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (dest);
}

int    ft_strslen(int size, char **strs, char *sep)
{
    int    i;
    int    j;
    int    z;
    int    bufsize;
    int    sepsize;

    i = 0;
    z = 0;
    bufsize = 0;
    sepsize = 0;
    while (i < size)
    {
        j = 0;
        while (strs[i][j] != '\0')
        {
            bufsize++;
            j++;
        }
        i++;
    }
    while (sep[z] != '\0')
        z++;
    bufsize += z * (size - 1);
	printf("Bufsize: %3d\n", bufsize);
    return (bufsize);
}

char    *ft_strjoin(int size, char **strs, char *sep)
{
    int        bufsize;
    int        i;
    char    *buf;

    if (size == 0)
        return ("");
    bufsize = ft_strslen(size, strs, sep);
    buf = malloc(sizeof (buf) * (bufsize + 1));
    buf[0] = '\0';
    if (buf == (void *) 0)
        return ((void *) 0);
    i = 0;
    while (i < size)
    {
        ft_strcat(buf, strs[i]);
        if (i++ != size - 1)
            ft_strcat(buf, sep);
    }
    return (buf);
}

int	main(void)
{
	char	*strs[] = {"1", "2", "3", "4", "5", "6"};
	char	*sep = "z";
	int		size;
	char	*res;

	size = sizeof (strs) / sizeof(*strs);
	printf("Count of strs is: %2d\n", size);
	res = ft_strjoin(size, strs, sep);
	printf("Result is: %s\n", res);
	return (0);
}
