#include <stdio.h>
#include <string.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	
	if (n == 0)
	{
		return 0;
	}
	i = 0;
	while (i < n - 1 && s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int	main(void)
{
	char s1[] = "q";
	char s2[] = "Q";
	unsigned int n;
	int res;

	n = 1;
	res = ft_strncmp(s1, s2, n);
	printf("result: %d", res);
	printf("result: %d", strncmp(s1, s2, n));
	return (0);
}
