/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spunyapr <spunyapr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:33:06 by rose              #+#    #+#             */
/*   Updated: 2024/11/30 17:11:25 by spunyapr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	int				len;
	char			*result;

	i = 0;
	len = ft_strlen(s);
	if (!f)
		return (NULL);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

// char ft_cap(unsigned int i, char c)
// {
//     if (c >= 'a' && c <= 'z')
//     {
//         c -= 32;
//     }
//     return (c);
// }

// int main()
// {
//     char test[] = "Hello";
//     char *result = ft_strmapi(test, ft_cap);
//     printf("%s", result);
//     free(result);
// }