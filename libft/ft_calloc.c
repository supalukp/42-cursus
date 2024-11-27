/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rose <rose@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:02:55 by rose              #+#    #+#             */
/*   Updated: 2024/11/14 10:59:35 by rose             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	int		i;
	int		space;
	char	*result;

	i = 0;
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