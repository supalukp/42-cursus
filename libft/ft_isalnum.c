#include "libft.h"

int ft_isalnum(int c)
{
    if (isalpha(c) || isdigit(c))
        return (1);
    return (0);
}

/*#include <stdio.h>

int main()
{
    int c = '/';
    printf("%d", isalnum(c));
    
}*/