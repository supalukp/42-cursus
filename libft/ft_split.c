/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rose <rose@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:10:43 by rose              #+#    #+#             */
/*   Updated: 2024/11/08 18:23:41 by rose             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_word(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	if (s[i] != c)
	{
		count++;
		i++;
	}
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			count++;
		i++;
	}
	return (count);
}

int	count_len_word(char const *s, char c, int index)
{
	int	count;

	count = 0;
	while (s[index] == c)
		index++;
	while (s[index] != c)
	{
		count++;
		index++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		g;
	int		count;
	char	**array;

	i = 0;
	j = 0;
	g = 0;
	count = count_word(s, c);
	array = (char **)malloc(sizeof(char *) * (count + 1));
	if (array == NULL)
		return (NULL);
	while (i < count)
	{
		array[i] = malloc(sizeof(char) * (count_len_word(s, c, j) + 1));
		if (array[i] == NULL)
			return (NULL);
		while (s[j] == c)
			j++;
		while (s[j] != c && s[j])
		{
			array[i][g] = s[j];
			j++;
			g++;
		}
		array[i][g] = '\0';
		g = 0;
		i++;
	}
	array[i] = 0;
	return (array);
}

// int	main(void)
// {
// 	char test[] = "-12-12345----2---3--4w-5---";
// 	char c = '-';
// 	char **result = ft_split(test, c);
// 	for (int i = 0; i < 6; i++)
// 	{
// 		printf("%s\n", result[i]);
// 		free(result[i]);
// 	}
// 	free(result);
// }