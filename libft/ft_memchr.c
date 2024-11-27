/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rose <rose@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:04:34 by rose              #+#    #+#             */
/*   Updated: 2024/11/14 10:54:45 by rose             ###   ########.fr       */
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
	i = 0;
	while (i < n)
	{
		if (p[i] == value)
			return ((void *)p + i);
		i++;
	}
	return (NULL);
}

// int main()
// {
//     // char test[] = "Hello@gmail.com";
//     // char *pos = ft_memchr(test, 'i', 15);
//     // if (pos == NULL)
//     //     printf("Not found\n");
//     // else
//     //     printf("pos = %s\n", pos);

// 	// int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
//     // printf("%s", (char *)ft_memchr(tab, -1, 7));
// }
