/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spunyapr <spunyapr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 14:59:51 by spunyapr          #+#    #+#             */
/*   Updated: 2024/11/28 12:37:51 by spunyapr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// #include"libft.h"
// int main ()
// {
//     printf("%d\n", ft_isascii('\n'));
//     printf("%d\n", ft_isascii(' '));
//     printf("%d\n", ft_isascii('m'));
//     printf("%d\n", ft_isascii('-'));
// }