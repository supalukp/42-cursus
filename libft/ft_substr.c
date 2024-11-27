/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rose <rose@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:06:03 by rose              #+#    #+#             */
/*   Updated: 2024/11/14 11:55:40 by rose             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*result;
	unsigned int	i;

	i = 0;
	if (start < (unsigned int)ft_strlen(s))
	{
		if (len > (size_t)ft_strlen(s))
			len = (size_t)ft_strlen(s);
		result = (char *)malloc(sizeof(char) * (len + 1));
		if (result == NULL)
			return (NULL);
		while (i < len && s[start])
		{
			result[i] = s[start];
			i++;
			start++;
		}
		result[i] = '\0';
	}
	else
	{
		result = (char *)malloc(sizeof(char) * 1);
		result[i] = '\0';
	}
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

int main(void)
{
    // char *str = "01234";
    // size_t size = 10;
    // char *ret = ft_substr(str, 10, size);

    // if (ret) {
    //     printf("%s\n", ret);
    //     free(ret);
    // } else {
    //     printf("Substring is NULL (start index out of bounds)\n");
    // }
    // return (0);
	char *test = ft_substr("0123456789", 9, 10);
	printf("%s", test);
	free(test);
}