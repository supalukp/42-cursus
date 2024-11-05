#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int len;

    len = ft_strlen(s);
    while (s[len] != c && *s)
        len--;
    if (s[len] == c)
        return (char *) s + len;
    else
        return NULL;
}

// int main()
// {
//     const char test[] = "Hello dsksdkslee";
//     const char *result = ft_strrchr(test, 'l');
//     printf("%s", result);
// }