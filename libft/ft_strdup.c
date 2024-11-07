#include "libft.h"

char *ft_strdup(const char *s)
{
    int i;
    int len;
    char *result;

    i = 0;
    len = ft_strlen(s);
    result = (char *)malloc((len + 1) * sizeof(char));
    if (result == NULL)
        return (NULL);
    while (s[i])
    {
        result[i] = s[i];
        i++;
    }
    result[i] = '\0';
    return (result);
}

// int main()
// {
//     char test[] = "Hello";
//     char *result = ft_strdup(test);
//     char *real = strdup(test);
//     printf("%s\n", result);
//     printf("%s\n", real);
//     free(result);
//     free(real);
// }