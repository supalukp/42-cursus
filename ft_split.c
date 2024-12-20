/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spunyapr <spunyapr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:10:43 by rose              #+#    #+#             */
/*   Updated: 2024/11/30 15:55:01 by spunyapr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char const *s, char c)
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

static int	count_len_word(char const *s, char c, int index)
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

static char	**create_array(char const *s, char c)
{
	int		count;
	char	**array;

	count = count_word(s, c);
	array = (char **)malloc(sizeof(char *) * (count + 1));
	if (!array)
		return (NULL);
	return (array);
}

static char	**fill_word(char **array, char const *s, char c, int g)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	g = 0;
	while (i < count_word(s, c))
	{
		array[i] = malloc(sizeof(char) * (count_len_word(s, c, j) + 1));
		if (!array[i])
		{
			while (i >= 0)
				free(array[i--]);
			free(array);
			return (NULL);
		}
		while (s[j] == c)
			j++;
		while (s[j] != c && s[j])
			array[i][g++] = s[j++];
		array[i++][g] = '\0';
		g = 0;
	}
	array[i] = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		g;

	array = create_array(s, c);
	if (array == NULL)
		return (NULL);
	g = 0;
	array = fill_word(array, s, c, g);
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