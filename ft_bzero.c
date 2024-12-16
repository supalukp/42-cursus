/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spunyapr <spunyapr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 15:38:06 by spunyapr          #+#    #+#             */
/*   Updated: 2024/11/27 15:38:09 by spunyapr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_bzero function is replace value in the n bytes by zero('\0')

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n > 0)
	{
		*p = '\0';
		n--;
		p++;
	}
}

// int	main(void)
// {
// 	char test[5] = "Hello";
// 	ft_bzero(test+2, 2);
// 	printf("%s", test);
// }