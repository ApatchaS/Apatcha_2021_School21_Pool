#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	t;

	t = 'a';
	while(t <= 'z')
	{
		write(1, &t, 1);
		t++;
	}
	write(1, "\n", 1);
}

int main()
{
	ft_print_alphabet();
}
