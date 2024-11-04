#include "libft.h"

//The memcpy() function copies n bytes from memory area src to memory area dest. The memory areas must not overlap
//returns a pointer to dest.

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *p = dest;
    unsigned const char *t = src;
    while (n > 0)
    {
        *p = *t;
        n--;
        p++;
        t++;
    }
    return (dest);
}

/*#include <stdio.h>
#include <string.h>

int main()
{
    const char src[] = "Hello";
    char dest[5] = "0";
    //memcpy(dest, src, 5);
    ft_memcpy(dest, src, 3);
    printf("%s", dest);
}*/