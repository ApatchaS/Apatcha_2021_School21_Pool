#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	/*Первое условие подходит для всех случаев, помимо случая, когда строки идентичны
	 * если строки идентичны - цикл только с первым условием некорректен*/
	while ((s1[i] == s2[i]) && (s1[i] != '\0'))
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int	main(void)
{
	char s1[] = "B123";
	char s2[] = "BASD";
	int b;

	b = ft_strcmp(s1, s2);
	printf("difference: %d\n", b);
	return (0);
}
