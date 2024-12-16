/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spunyapr <spunyapr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 15:49:20 by spunyapr          #+#    #+#             */
/*   Updated: 2024/11/27 15:49:21 by spunyapr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned const char	*p;
	unsigned const char	*t;

	i = 0;
	p = s1;
	t = s2;
	if (n == 0)
		return (0);
	while (p[i] == t[i] && i < (n - 1))
	{
		i++;
	}
	return ((unsigned char)p[i] - (unsigned char)t[i]);
}

// int main()
// {
//     const char s1[] = "abc";
//     const char s2[] = "abcd";
//     printf("ft_memcmp = %d\n", ft_memcmp(s1, s2, 4));

// 	char *s1 = "atoms\0\0\0\0";
//     char *s2 = "atoms\0abc";
//     size_t size = 8;
// 	printf("ft_memcmp = %d\n", ft_memcmp(s1, s2, 8));
// }