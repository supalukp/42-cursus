#include "libft.h"
//#include <string.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    int i;

    i = 0;
    while (s1[i] == s2[i] && i < n  - 1)
        i++;
    return (s1[i] - s2[i]);
}

// int main()
// {
//     char s1[] = "abdde";
//     char s2[] = "abc";
//     printf("%d\n", ft_strncmp(s1, s2, 4));

// }