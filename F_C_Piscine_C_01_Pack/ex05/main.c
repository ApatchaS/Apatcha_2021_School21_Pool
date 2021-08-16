#include <unistd.h>
#include <stdio.h>

void    ft_putstr(char *str)
{
    while (*str != '\0')
    {
        write (1, str++, 1);
    }
}

int    main()
{
    char str [] = "I'm apatcha";
    ft_putstr(str);
}
