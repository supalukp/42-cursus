// #include "libft.h"

int ft_tolower(int ch)
{
    if(ch >= 'A' && ch <= 'Z')
        ch += 32;
    return (ch);
}

// int main()
// {
//     int c = ft_tolower('A');
//     printf("%d", c);
// }