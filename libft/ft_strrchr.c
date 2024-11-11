/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rose <rose@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:05:45 by rose              #+#    #+#             */
/*   Updated: 2024/11/11 11:18:49 by rose             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (s[len] != c && len)
		len--;
	if (s[len] == c)
		return ((char *)s + len);
	else
		return (NULL);
}

// int main()
// {
//     const char test[] = " 123 1";
//     const char *result = ft_strrchr(test, ' ');
//     printf("%s", result);
// }