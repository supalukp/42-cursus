/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rose <rose@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:04:10 by rose              #+#    #+#             */
/*   Updated: 2024/11/07 10:04:10 by rose             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (isalpha(c) || isdigit(c))
		return (1);
	return (0);
}

/*#include <stdio.h>

int	main(void)
{
	int c = '/';
	printf("%d", isalnum(c));

}*/