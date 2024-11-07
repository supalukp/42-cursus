/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rose <rose@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:04:53 by rose              #+#    #+#             */
/*   Updated: 2024/11/07 10:04:53 by rose             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int					i;
	unsigned char		*p;
	unsigned const char	*t;

	if (!dest && !src)
		return (NULL);
	i = 0;
	p = dest;
	t = src;
	while (i < n)
	{
		p[i] = t[i];
		i++;
	}
	return (dest);
}

// void *ft_memmove(void *dest, const void *src, size_t n)
// {
//     int i;
//     int len;

//     i = 0;
//     if (!dest && !src)
//         return (NULL);
//     unsigned char *p = (char *)dest;
//     unsigned const char *t = (char *)src;
//     len = ft_strlen(p);
//     while (i < n && len != 0)
//     {
//         p[i] = t[i];
//         i++;
//         len--;
//     }
//     return (dest);
// }

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*p;
	const unsigned char	*t = (const unsigned char *)src;

	p = (unsigned char *)dest;
	if (!dest && !src)
		return (NULL);
	if (p > t)
	{
		// Copy backwards to handle overlap if dest > src
		while (n--)
			p[n] = t[n];
	}
	else
	{
		// Copy forwards if no overlap or dest < src
		for (size_t i = 0; i < n; i++)
			p[i] = t[i];
	}
	return (dest);
}

int	main(void)
{
	char str[100] = "Learningisfun";
	char *first, *second;
	first = str;
	second = str;
	printf("Original string :%s\n ", str);

	// when overlap happens then it just ignore it
	memcpy((void *)first + 8, (void *)first, 10);
	printf("memcpy overlap : %s\n ", str);

	// when overlap it start from first position
	ft_memmove(second + 8, first, 10);
	printf("memmove overlap : %s\n ", str);

	return (0);
}