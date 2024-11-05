#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;
    
    i = 0;
    if (size > 0)
    {
        while (src[i] && (i < size - 1))
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }
    while (src[i])
        i++;
    return (i);
}

// int main()
// {
//     const char test[] = "HelloWorld!";
//     char dest[6];
//     int i = ft_strlcpy(dest, test, 2);
//     printf("%d\n", i);
//     printf("%s\n", dest);
    
//     return (0);
// }