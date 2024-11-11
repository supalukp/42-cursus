/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rose <rose@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:04:53 by rose              #+#    #+#             */
/*   Updated: 2024/11/11 19:03:38 by rose             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*c_dest;
	unsigned const char	*c_src;
	size_t				i;

	c_dest = (unsigned char *)dest;
	c_src = (unsigned const char *)src;
	i = 0;
	if (c_dest > c_src)
	{
        i = n;
		while (i > 0)
		{
			c_dest[i -1] = c_src[i -1];
            i--;
		}
	}
	else
	{
		while (i < n)
		{
			c_dest[i] = c_src[i];
			i++;
		}
	}
	return (dest);
}

// #include <string.h>

// int	main(void)
// {
//     char str[100] = "ABCDEF";

//     memmove(str+2, str, 4);
//     printf("memmove with overlap: %s\n", str);

// 	return (0);
// }