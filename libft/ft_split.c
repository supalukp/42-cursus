/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rose <rose@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:10:43 by rose              #+#    #+#             */
/*   Updated: 2024/11/14 11:30:49 by rose             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_word(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	if (s[i] != c && s[i] != '\0')
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
	while (s[index] == c && s[index] != '\0')
		index++;
	while (s[index] != c && s[index] != '\0')
	{
		count++;
		index++;
	}
	return (count);
}

char	**create_array(char const *s, char c)
{
	int		count;
	char	**array;

	count = count_word(s, c);
	array = (char **)malloc(sizeof(char *) * (count + 1));
	if (!array)
		return (NULL);
	return (array);
}

char	**fill_word(char **array, char const *s, char c)
{
	int	i;
	int	j;
	int	g;

	i = 0;
	j = 0;
	g = 0;
	while (i < count_word(s, c))
	{
		array[i] = malloc(sizeof(char) * (count_len_word(s, c, j) + 1));
		if (!array[i])
			return (NULL);
		while (s[j] == c)
			j++;
		while (s[j] != c && s[j])
		{
			array[i][g++] = s[j++];
		}
		array[i++][g] = '\0';
		g = 0;
	}
	array[i] = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;

	array = create_array(s, c);
	if (array == NULL)
		return (NULL);
	array = fill_word(array, s, c);
	return (array);
}

// int	main(void)
// {
// 	// char test[] = "";
// 	// char c = 'z';
// 	// printf("%d\n", count_word(test,c));
// 	// printf("%d\n", count_len_word(test, c, 0));
// 	// char **result = ft_split(test, c);
// 	// free(result);

// 	char **copy = ft_split("", ' ');
// 	if (copy[0] == NULL)
// 		printf("n");
// 	for (int i = 0; copy[i]; i++)
// 	{
// 		printf("%s\n", copy[i]);
// 		free(copy[i]);
// 	}
// }