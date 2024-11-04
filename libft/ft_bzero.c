#include "libft.h"

//ft_bzero function is replace value in the n bytes by zero('\0')

void ft_bzero(void *s, size_t n)
{
    unsigned char *p = s;
    while (n > 0)
    {
        *p = '\0';
        n--;
        p++;
    }
}
/*
#include <stdio.h>

int main()
{
    char test[5] = "Hello";
    ft_bzero(test+2, 2);
    printf("%s", test);
}*/