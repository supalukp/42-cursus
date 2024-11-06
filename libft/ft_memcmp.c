#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;

    i = 0;
    unsigned const char *p = s1;
    unsigned const char *t = s2;
    while (p[i] == t[i] && i < (n - 1))
        i++;
    return (p[i] - t[i]);
}

// int main()
// {
//     const char s1[] = "abc";
//     const char s2[] = "abcd";
//     printf("ft_memcmp = %d\n", ft_memcmp(s1, s2, 4));
// }