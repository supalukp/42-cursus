/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spunyapr <spunyapr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:12:40 by rose              #+#    #+#             */
/*   Updated: 2024/11/30 15:55:56 by spunyapr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	if (!f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// void ft_cap(unsigned int index, char *c)
// {
//     if (*c >= 'a' && *c <= 'z')
//         *c -= 32;
// }

// int main()
// {
//     char test[] = "Hello";
//     ft_striteri(test, ft_cap);
//     printf("%s", test);
// }
