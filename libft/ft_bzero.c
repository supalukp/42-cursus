/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rose <rose@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:04:02 by rose              #+#    #+#             */
/*   Updated: 2024/11/07 10:04:02 by rose             ###   ########.fr       */
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
/*
#include <stdio.h>

int	main(void)
{
	char test[5] = "Hello";
	ft_bzero(test+2, 2);
	printf("%s", test);
}*/