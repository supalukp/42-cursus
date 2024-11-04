#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
    unsigned char *p = s;
    while (n > 0)
    {
        *p = c;
        n--;
        p++;
    }
    return s;
}

/*
#include <stdio.h>

void printArray(int arr[], int n)
{
   for (int i=0; i<n; i++)
      printf("%d ", arr[i]);
}

int main ()
{
    char test[10] = "HelloWorld";
    ft_memset(test + 5, '.', sizeof(char) * 3);
    for (int i = 0; i < 10; i++)
    {
        printf("%c", test[i]);
    }

    int arr[10];

    ft_memset(arr, 0, sizeof(int) * 10);
    printArray(arr, 10);
}*/