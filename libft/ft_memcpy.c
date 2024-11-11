/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rose <rose@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:04:43 by rose              #+#    #+#             */
/*   Updated: 2024/11/11 19:02:19 by rose             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The memcpy() function copies n bytes from memory area
// src to memory area dest. The memory areas must not overlap
// returns a pointer to dest.

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*c_dest;
	const char	*c_src;
	size_t		i;

	c_dest = (char *)dest;
	c_src = (char *)src;
	i = 0;
	while (i < n)
	{
		c_dest[i] = c_src[i];
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char str1[] = "Hello, world!";
// 	ft_memcpy(str1 + 7, str1, 5);
// 	printf("memcpy: %s\n", str1);
// 	return (0);
// }