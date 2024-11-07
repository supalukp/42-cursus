#include "libft.h"
// #include <stdlib.h>

int ft_atoi(const char *nptr)
{
    int i;
    int num;
    int negative;

    i = 0;
    num = 0;
    negative = 1;
    while (nptr[i] >= 9 && nptr[i] <= 13 || nptr[i] == 32)
        i++;
    if (nptr[i] == '+' || nptr[i] == '-')
    {
        if (nptr[i] == '-')
            negative *= -1;
        i++;
    }
    while(nptr[i] >= '0' && nptr[i] <= '9' && nptr[i])
    {
        num = (num * 10) + nptr[i] - 48;
        i++;
    }
    return (num * negative);
}

// int main()
// {
//     char test[] = " \n -1234151151";
//     printf("%d\n", ft_atoi(test));
//     printf("%d\n", atoi(test));
// }