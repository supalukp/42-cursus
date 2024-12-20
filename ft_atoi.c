/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spunyapr <spunyapr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 15:47:55 by spunyapr          #+#    #+#             */
/*   Updated: 2024/12/01 14:54:37 by spunyapr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int			i;
	long int	num;
	int			negative;

	i = 0;
	num = 0;
	negative = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			negative *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9' && nptr[i])
	{
		num = (num * 10) + nptr[i] - 48;
		i++;
	}
	return (num * negative);
}

// #include <stdlib.h>
// #include <stdio.h>

// int main()
// {
//     char test[] = " \n 214748364854545456";
//     printf("%d\n", ft_atoi(test));
//     printf("%d\n", atoi(test));
// }