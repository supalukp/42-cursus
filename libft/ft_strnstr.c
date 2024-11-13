/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rose <rose@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:05:40 by rose              #+#    #+#             */
/*   Updated: 2024/11/13 14:50:11 by rose             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little == NULL || *little == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		while (big[i + j] == little[j] && (i + j < len))
		{
			if (little[j + 1] == '\0' )
				return ((char *)big + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}

// int main()
// {
//     // const char *hay = "Hello, world!";
//     // const char *needle = "ow";

//     // char *result = ft_strnstr(hay, needle, 12);
//     // printf("%s", result);
	
// 	printf("%s", ft_strnstr("fake", ((void*)0), 3));
// }