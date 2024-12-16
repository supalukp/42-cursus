/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spunyapr <spunyapr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 15:48:06 by spunyapr          #+#    #+#             */
/*   Updated: 2024/11/30 14:49:56 by spunyapr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	int		i;
	int		space;
	char	*result;

	i = 0;
	if (nmemb != 0 && (SIZE_MAX / nmemb) < size)
		return (NULL);
	space = nmemb * size;
	result = malloc(space);
	if (result == NULL)
		return (NULL);
	while (i < space)
	{
		result[i] = 0;
		i++;
	}
	return ((void *)result);
}

// int main()
// {
//     char *test = (char *) calloc (5, 1);
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d", test[i]);
//     }
// }