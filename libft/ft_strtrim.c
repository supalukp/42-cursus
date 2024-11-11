/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rose <rose@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 09:52:12 by rose              #+#    #+#             */
/*   Updated: 2024/11/11 11:19:47 by rose             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_subchar_begin(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	j = 0;
	count = 0;
	while (set[j])
	{
		while (s1[i])
		{
			if (s1[i] == set[j])
			{
				count++;
				j = 0;
				i++;
			}
			else if (s1[i] != set[j])
				break ;
		}
		j++;
	}
	return (count);
}

int	count_subchar_end(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	count;

	i = ft_strlen(s1) - 1;
	j = 0;
	count = 0;
	while (set[j])
	{
		while (s1[i])
		{
			if (s1[i] == set[j])
			{
				count++;
				j = 0;
				i--;
			}
			else if (s1[i] != set[j])
				break ;
		}
		j++;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		total_len;
	int		start_index;
	int		end_index;
	int		i;
	char	*result;

	total_len = ft_strlen(s1);
	start_index = count_subchar_begin(s1, set);
	end_index = total_len - count_subchar_end(s1, set);
	result = (char *)malloc(sizeof(char) * (total_len - start_index
				- count_subchar_end(s1, set) + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (start_index < end_index)
	{
		result[i] = s1[start_index];
		i++;
		start_index++;
	}
	result[i] = '\0';
	return (result);
}

// int main(void)
// {
//     char test[] = "22he1llo11";
//     char set[] = "123";
//     printf("%d\n", count_subchar_begin(test, set));
//     printf("%d\n", count_subchar_end(test, set));
//     char *result = ft_strtrim(test, set);
//     printf("%s\n", result);
//     free(result);
//     return (0);
// }