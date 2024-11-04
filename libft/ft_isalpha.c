int isalpha(int c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        return (1);
    return (0);
}

/*#include <stdio.h>

int main ()
{
    int test = 65;
    printf("%d", isalpha(test));
}*/