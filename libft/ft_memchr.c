/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rose <rose@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:04:34 by rose              #+#    #+#             */
/*   Updated: 2024/11/07 10:04:34 by rose             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n > 0 && *p)
	{
		if (*p == c)
			return ((char *)p);
		n--;
		p++;
	}
	return (NULL);
}

// int main()
// {
//     char test[] = "Hello@gmail.com";
//     char *pos = ft_memchr(test, 'i', 15);
//     if (pos == NULL)
//         printf("Not found\n");
//     else
//         printf("pos = %s\n", pos);
// }
