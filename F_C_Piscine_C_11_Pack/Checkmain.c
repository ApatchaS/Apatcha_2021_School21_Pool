/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Checkmain.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asippy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 11:04:25 by asippy            #+#    #+#             */
/*   Updated: 2021/08/19 11:04:29 by asippy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex00/ft_foreach.c"
#include "ex01/ft_map.c"
#include "ex02/ft_any.c"
#include "ex03/ft_count_if.c"
#include "ex04/ft_is_sort.c"
//EX05 BY MY OWN
#include "ex06/ft_sort_string_tab.c"
#include "ex07/ft_advanced_sort_string_tab.c"

#include <stdio.h>
#include <unistd.h>

//FUNCTIONS FOR EX00
void	ft_out(int nb)
{
	char	nbr[10];
	int		i;

	i = 0;
	while (nb > 0)
	{
		nbr[i] = nb % 10 + '0';
		nb /= 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		write(1, &nbr[i], 1);
		i--;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	ft_out(nb);
}

//FUNCTIONS FOR EX01
void	print_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%12d ", tab[i]);
		i++;
	}
	printf("\n");
}

int	ft_is_neg(int a)
{
	if (a >= 0)
		return (0);
	else
		return (1);
}

//FUNCTIONS FOR EX02 EX03
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

//FUNCTIONS FOR EX04
int	ft_int_cmp(int first, int second)
{
	return (first - second);
}

//FUNCTIONS FOR EX06
void	ft_display_tab(char **tab)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (tab[i])
	{
		printf("%6s ", tab[i]);
		i++;
	}
	printf("\n");
}

//FUNCTIONS FOR EX07
//

int	main(void)
{
	int		tab1[10] = {0, -20, 30, 40, 50, 60, 70, 80, 2147483647, -2147483648};
	int		tab2[0]	= {};
	int		tab3[8] = {-10, 10, -20, 20, -30, 30, -40, 40};
	int		*buf;
	char	*tab4[] = {"asd", "qwe", "w", "e", "d", "fg", "q", "a", "\n", NULL};
	char	*tab5[] = {"1", "2", "3", "4", "5asd5523", "6", "7", "8"};
	int		tab6[] = {0, -330, -331, -332};
	char	*tab7[] = {"ABCDEF", "ABCDE", "ABCD", "ABC", "AB", "A", "", NULL};
	char	*tab8[] = {"25", "23",NULL};
	int		size;
	char c;


//ex00
	printf("Test1 for ex00:\nExpected result:\n0-203040506070802147483647-2147483648\n");
	ft_foreach(tab1, 10, &ft_putnbr);
	printf("\nTest2 for ex00:\nExpected result:\n""\n");
	ft_foreach(tab2, 0, &ft_putnbr);
	printf("\n");
	c = getchar();

//ex01
	printf("Test for ex01:\nExpected result:\n1	0	1	0	1	0	1	0\n");
	print_tab(tab3, 8);
	buf = ft_map(tab3, 8, &ft_is_neg);
	print_tab(buf, 8);
	c = getchar();

//ex02
	printf("Test for ex02:\nExpected result:\n0\n");
	printf("%d\n", ft_any(tab4, &ft_str_is_numeric));
	c = getchar();

//ex03
	printf("Test for ex03:\nExpected result:\n7\n");
	size = sizeof(tab5) / sizeof(*tab5);
	printf("Size of: %3d\n", size);
	printf("Result of: %3d\n", ft_count_if(tab5, size, &ft_str_is_numeric));
	c = getchar();

//ex04
	printf("Test1 for ex04:\nExpected result:\n1\n");
	size = sizeof(tab6) / sizeof(*tab6);
	printf("Size of: %3d\n", size);
	printf("Result of: %3d\n", ft_is_sort(tab6, size, &ft_int_cmp));
	printf("Test2 for ex04:\nExpected result:\n0\n");
	size = sizeof(tab1) / sizeof(*tab1);
	printf("Size of: %3d\n", size);
	printf("Result of: %3d\n", ft_is_sort(tab1, size, &ft_int_cmp));
	printf("Test3 for ex04:\nExpected result:\n1\n");
	size = sizeof(tab2) / sizeof(*tab2);
	printf("Size of: %3d\n", size);
	printf("Result of: %3d\n", ft_is_sort(tab2, size, &ft_int_cmp));
	printf("Test4 for ex04:\nExpected result:\n0\n");
	size = sizeof(tab3) / sizeof(*tab3);
	printf("Size of: %3d\n", size);
	printf("Result of: %3d\n", ft_is_sort(tab3, size, &ft_int_cmp));
	c = getchar();

//ex06
	printf("Test for ex06:\nExpected result:\nA AB ABC ABCD ABCDE ABCDEF\n");
	ft_display_tab(tab7);
	ft_sort_string_tab(tab7);
	ft_display_tab(tab7);
	c = getchar();

//ex07
	printf("Test for ex07:\nExpected result:\n23 25\n");
	ft_display_tab(tab8);
	ft_advanced_sort_string_tab(tab8, &ft_strcmp);
	ft_display_tab(tab8);

printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡖⠋⠉⠉⠙⢲⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⡿⠀⠀⠀⠀⠀⠀⠃⠀⣤⡄⠀⠠⣤⠀⠀⢤⡄⡠⠤⣤⡀⡠⠤⣤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣇⠀⠀⠀⠀⠀⠀⠀⠀⣿⡇⠀⠀⣿⠀⠀⢸⡏⠀⠀⢸⡇⠀⠀⢹⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⣿⣄⠀⠀⠀⠀⢀⠄⠀⢿⡇⠀⢀⣿⡀⠀⢸⡇⠀⠀⢸⡇⠀⠀⢸⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⠓⠒⠒⠊⠁⠀⠀⠈⠛⠒⠁⠛⠃⠐⠚⠛⠂⠐⠚⠓⠂⠐⠛⠓⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");

return (0);
}