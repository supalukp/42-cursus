/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spunyapr <spunyapr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 15:41:27 by spunyapr          #+#    #+#             */
/*   Updated: 2024/11/30 15:50:33 by spunyapr         ###   ########.fr       */
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
	if (!c_dest && !c_src)
		return (NULL);
	while (i < n)
	{
		c_dest[i] = c_src[i];
		i++;
	}
	return ((void *)dest);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char str[10];
// 	char *str1 = ft_memcpy(str, "st", 5);
// 	printf("ft_memcpy: %s\n", str1);
// 	return (0);
// }