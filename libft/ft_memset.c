/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rose <rose@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:04:57 by rose              #+#    #+#             */
/*   Updated: 2024/11/07 10:04:57 by rose             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n > 0)
	{
		*p = c;
		n--;
		p++;
	}
	return (s);
}

/*
#include <stdio.h>

int main ()
{
	char test[10] = "HelloWorld";
	ft_memset(test + 5, '.', sizeof(char) * 3);
	for (int i = 0; i < 10; i++)
	{
		printf("%c", test[i]);
	}

	int arr[2] = {0, 145232};

	ft_memset(arr, 65, 6);
	//printArray(arr, 2);

	char *p = arr;
	for (int i = 0; i < 8; i++)
	{
		printf("%d ", p[i]);
	}
}*/