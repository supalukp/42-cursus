// #include "libft.h"

char *ft_strchr(const char *s, int c)
{
    while (*s != c && *s)
        s++;
    if (*s == c)
        return (char *)s;
    else
        return NULL;
}

// int main()
// {
//     const char test[] = "Hello";
//     const char *result = ft_strchr(test, 'l');
//     printf("%s", result);
// }
