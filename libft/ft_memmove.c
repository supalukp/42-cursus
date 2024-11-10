/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rose <rose@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:04:53 by rose              #+#    #+#             */
/*   Updated: 2024/11/07 11:16:44 by rose             ###   ########.fr       */
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

// void	*ft_memcpy(void *dest, const void *src, size_t n)
// {
// 	size_t				i;
// 	unsigned char		*p;
// 	unsigned const char	*t;

// 	if (!dest && !src)
// 		return (NULL);
// 	i = 0;
// 	p = dest;
// 	t = src;
// 	while (i < n)
// 	{
// 		p[i] = t[i];
// 		i++;
// 	}
// 	return (dest);
// }

void *ft_memcpy(void *dest, const void *src, size_t n) 
{
    // Cast pointers to unsigned char to copy byte by byte
    unsigned char *d = (unsigned char *)dest;
    const unsigned char *s = (const unsigned char *)src;

    // Copy each byte from src to dest
    for (size_t i = 0; i < n; i++) {
        d[i] = s[i];
    }

    return dest;
}

// void	*ft_memmove(void *dest, const void *src, size_t n)
// {
// 	size_t			    i;
// 	int					len;
// 	unsigned char		*p;
// 	unsigned const char	*t;

// 	i = 0;
// 	if (!dest && !src)
// 		return (NULL);
// 	p = (unsigned char *)dest;
// 	t = (unsigned const char *)src;
// 	len = ft_strlen((const char *)p);
// 	while (i < n && len != 0)
// 	{
// 		p[i] = t[i];
// 		i++;
// 		len--;
// 	}
// 	return (dest);
// }

void *ft_memmove(void *dest, const void *src, size_t n) 
{
    unsigned char *d = (unsigned char *)dest;
    const unsigned char *s = (const unsigned char *)src;

    if (d == s) {
        return dest; // No action needed if src and dest are the same
    }

    if (d < s) {
        // Copy forward if dest is before src (safe, non-overlapping)
        for (size_t i = 0; i < n; i++) {
            d[i] = s[i];
        }
    } else {
        // Copy backward if dest is after src (to avoid overwriting)
        for (size_t i = n; i > 0; i--) {
            d[i - 1] = s[i - 1];
        }
    }

    return dest;
}

int	main(void)
{
	char str1[] = "Hello, world!";
    char str2[] = "Hello, world!";

    // Try moving a substring with overlapping regions
    // Using memmove (safe with overlap)
    ft_memmove(str1 + 7, str1, 5);  // Move "Hello" to position after "Hello, "
    printf("Using memmove: %s\n", str1);  // Expected: "Hello, Hello!"

    // Using memcpy (unsafe with overlap)
    ft_memcpy(str2 + 7, str2, 5);   // Attempt to move "Hello" to overlapping position
    printf("Using memcpy: %s\n", str2); 

	return (0);
}