/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rose <rose@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:14:50 by rose              #+#    #+#             */
/*   Updated: 2024/11/08 18:11:08 by rose             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_len(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count++;
		n *= -1;
	}
	else if (n == 0)
	{
		count = 1;
		return (count);
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

int	power(int base, int exponent)
{
	int	num;

	num = 1;
	while (exponent > 0)
	{
		num = num * base;
		exponent--;
	}
	return (num);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*int_to_string(int n, int len, char *result)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		result[i] = '-';
		n *= -1;
		i++;
		len--;
	}
	while (len > 0)
	{
		result[i] = (n / power(10, len - 1)) + 48;
		n %= power(10, len - 1);
		len--;
		i++;
	}
	result[i] = '\0';
	return (result);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*result;

	if (n == -2147483648)
	{
		result = (char *)malloc(sizeof(char) * (11 + 1));
		result = ft_strcpy(result, "-2147483648");
		return (result);
	}
	len = count_len(n);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	result = int_to_string(n, len, result);
	return (result);
}

// int	main(void)
// {
// 	int n = -2147483648;
// 	char *test = ft_itoa(n);
// 	printf("%s\n", test);
// 	free(test);nor
// }