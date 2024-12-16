/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spunyapr <spunyapr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:05:05 by rose              #+#    #+#             */
/*   Updated: 2024/11/30 15:55:22 by spunyapr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != (unsigned char)c && *s)
		s++;
	if (*s == (unsigned char)c)
		return ((char *)s);
	return (NULL);
}

// int main()
// {
//     const char test[] = "lHello";
//     const char *result = ft_strchr(test, 'l');
//     printf("%s", result);
// }
