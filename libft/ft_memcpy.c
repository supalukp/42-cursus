#include "libft.h"

//The memcpy() function copies n bytes from memory area src to memory area dest. The memory areas must not overlap
//returns a pointer to dest.

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *p = dest;
    unsigned const char *t = src;
    while (n > 0)
    {
        *p= *t;
        t++;
        p++;
        n--;
    }
    return (dest);
}

//#include <string.h>

// int main()
// {
    // const char src[] = "Hello";
    // char dest[5] = "0";

    // ft_memcpy(dest, src, 6);
    // printf("ft_memcpy : %s\n", dest);

//     const char src1[] = "Hello";
//     char dest1[6] = "0";

//     memcpy(dest1, src1, 5);
//     printf("memcpy : %s\n", dest1);
// }