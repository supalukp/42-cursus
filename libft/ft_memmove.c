/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rose <rose@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:04:53 by rose              #+#    #+#             */
/*   Updated: 2024/11/07 10:09:01 by rose             ###   ########.fr       */
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

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int					i;
	int					len;
	unsigned char		*p;
	unsigned const char	*t;

	i = 0;
	if (!dest && !src)
		return (NULL);
	p = (char *)dest;
	t = (char *)src;
	len = ft_strlen(p);
	while (i < n && len != 0)
	{
		p[i] = t[i];
		i++;
		len--;
	}
	return (dest);
}

// int	main(void)
// {
// 	char str[100] = "Learningisfun";
// 	char *first, *second;
// 	first = str;
// 	second = str;
// 	printf("Original string :%s\n ", str);

// 	// when overlap happens then it just ignore it
// 	memcpy((void *)first + 8, (void *)first, 10);
// 	printf("memcpy overlap : %s\n ", str);

// 	// when overlap it start from first position
// 	ft_memmove(second + 8, first, 10);
// 	printf("memmove overlap : %s\n ", str);

// 	return (0);
// }