#include <unistd.h>
#include <stdio.h>

int	ft_check_base(char *base)
{
	int	size;
	int	j;

	size = 0;
	while (base[size] != '\0')
	{
		if (base[size] == '+' || base[size] == '-')
			return (0);
		if (base[size] == 32 || (base[size] >= 9 && base[size] <= 13))
			return (0);
		j = size + 1;
		while (base[j] != '\0')
		{
			if (base[size] == base[j])
				return (0);
			j++;
		}
		size++;
	}
	if (size == 0 || size == 1)
		return (0);
	return (size);
}

int	ft_tocor_base(char *str, char *base, int g)
{	
	int	base_type;
	int	j;
	int	res;

	res = 0;
	base_type = ft_check_base(base);
	if (base_type == 0)
		return (0);
	while (str[g] != '\0')
	{
		j = 0;
		while (str[g] != base[j] && base[j] != '\0')
			j++;
		if (base[j] == '\0')
			return (res);
		else
			res = base_type * res + j;
		g++;
	}
	return (res);
}

int	ft_atoi_base(char *str, char *base)
{
	int	g;
	int	pos_or_neg;

	g = 0;
	pos_or_neg = 1;
	while ((str[g] == 32 || (str[g] >= 9 && str[g] <= 13)) && str[g] != '\0')
		g++;
	while ((str[g] == '+' || str[g] == '-') && str[g] != '\0')
	{
		if (str[g] == '-')
			pos_or_neg *= -1;
		g++;
	}
	return (pos_or_neg * ft_tocor_base(str, base, g));
}

int	main(void)
{
	char	str[] = "A";
	char	base[] = "Ab";
	int		res;

	res = ft_atoi_base(str, base);
	printf("result = %d\n", res);
	return (0);
}
