/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spunyapr <spunyapr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 15:03:40 by spunyapr          #+#    #+#             */
/*   Updated: 2024/11/28 12:37:57 by spunyapr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

// #include"libft.h"
// int main ()
// {
//     printf("%d\n", ft_isprint('9'));
//     printf("%d\n", ft_isprint('D'));
//     printf("%d\n", ft_isprint('m'));
//     printf("%d\n", ft_isprint('-'));
// }
