#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    if (little == NULL)
        return (big);
    while(big[i] && i < len - 1)
    {
        while(big[i+j] == little[j])
        {
            if (little[j+1] == '\0')
                return ((char *) big + i);
            j++;
        }
        j = 0;
        i++;
    }
    return (NULL);
}

// int main()
// {
//     const char *hay = "Hello, world!";
//     const char *needle = "wo";

//     char *result = ft_strnstr(hay, needle, 12);
//     printf("%s", result);
// }