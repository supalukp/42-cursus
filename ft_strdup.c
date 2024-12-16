/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spunyapr <spunyapr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:05:13 by rose              #+#    #+#             */
/*   Updated: 2024/11/30 15:55:38 by spunyapr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		len;
	char	*result;

	i = 0;
	len = ft_strlen(s);
	result = (char *)malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	while (s[i])
	{
		result[i] = s[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

// int main()
// {
//     char test[] = "Hello";
//     char *result = ft_strdup(test);
//     char *real = strdup(test);
//     printf("%s\n", result);
//     printf("%s\n", real);
//     free(result);
//     free(real);
// }