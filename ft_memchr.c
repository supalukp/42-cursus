/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spunyapr <spunyapr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 15:49:14 by spunyapr          #+#    #+#             */
/*   Updated: 2024/11/30 14:53:59 by spunyapr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	value;
	size_t			i;

	p = (unsigned char *)s;
	value = (unsigned char)c;
	if (n == 0)
		return (NULL);
	i = 0;
	while (i < n)
	{
		if (p[i] == value)
			return ((void *)p + i);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>

// int main()
// {
//     char test[] = "Hello@gmail.com";
//     char *pos = ft_memchr(test, 'i', 15);
//     if (pos == NULL)
//         printf("Not found\n");
//     else
//         printf("pos = %s\n", pos);

// 	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
//     printf("%s", (char *)ft_memchr(tab, -1, 7));
// }
