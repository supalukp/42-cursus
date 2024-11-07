/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rose <rose@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:06:03 by rose              #+#    #+#             */
/*   Updated: 2024/11/07 15:40:47 by rose             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*result;
	unsigned int	i;

	i = 0;
	result = (char *)malloc(sizeof(char) * len + 1);
	if (result == NULL)
		return (NULL);
	while (len > 0 && s[start])
	{
		result[i] = s[start];
		i++;
		start++;
		len--;
	}
	result[i] = '\0';
	return (result);
}

// int main(void)
// {
//     char test[] = "123456789";
//     char *result = ft_substr(test, 0, 0);
//     printf("%s\n", result);
//     free(result);
// }