/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spunyapr <spunyapr@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:06:03 by rose              #+#    #+#             */
/*   Updated: 2024/12/16 14:24:15 by spunyapr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*result;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= (unsigned int)ft_strlen(s))
	{
		result = (char *)malloc(sizeof(char) * 1);
		if (result)
			result[i] = '\0';
		return (result);
	}
	if (len > (size_t)ft_strlen(s) - start)
		len = (size_t)ft_strlen(s) - start;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	while (i < len && s[start])
	{
		result[i] = s[start + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

// int main(void)
// {
//     char test[] = "123456789";
//     char *result = ft_substr(test, 8, 3);
//     printf("%s\n", result);
//     free(result);

// 	// char *str = "01234";
//     // size_t size = 10;
//     // char *ret = ft_substr(str, 10, size);
// 	// printf("%s\n", ret);
// }
// #include <stdio.h>
// int main(void)
// {
//     // char *str = "01234";
//     // size_t size = 10;
//     // char *ret = ft_substr(str, 10, size);

//     // if (ret) {
//     //     printf("%s\n", ret);
//     //     free(ret);
//     // } else {
//     //     printf("Substring is NULL (start index out of bounds)\n");
//     // }
//     // return (0);
// 	char *test = ft_substr("0123456789", 1, 10);
// 	printf("%s", test);
// 	free(test);
// }