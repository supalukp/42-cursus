/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spunyapr <spunyapr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:05:22 by rose              #+#    #+#             */
/*   Updated: 2024/11/29 17:42:09 by spunyapr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && (i < size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}

// #include <stdio.h>
// int main()
// {
//     const char test[] = "HelloWorld!";
//     char dest[6];
//     int i = ft_strlcpy(dest, test, 2);
//     printf("%d\n", i);
//     printf("%s\n", dest);

//     return (0);
// }