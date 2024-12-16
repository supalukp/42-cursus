/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spunyapr <spunyapr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 14:55:42 by spunyapr          #+#    #+#             */
/*   Updated: 2024/11/28 12:37:44 by spunyapr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0'
			&& c <= '9'))
		return (1);
	return (0);
}

// #include"libft.h"
// int main ()
// {
//     printf("%d\n", ft_isalnum('9'));
//     printf("%d\n", ft_isalnum('D'));
//     printf("%d\n", ft_isalnum('m'));
//     printf("%d\n", ft_isalnum('-'));
// }