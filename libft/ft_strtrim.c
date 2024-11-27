/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rose <rose@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 09:52:12 by rose              #+#    #+#             */
/*   Updated: 2024/11/14 10:54:17 by rose             ###   ########.fr       */
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

// int count_subchar_begin(char const *s1, char const *set) {
//     int i = 0;
//     while (s1[i] && ft_strchr(set, s1[i]) != NULL) {
//         i++;
//     }
//     return (i);
// }

// int count_subchar_end(char const *s1, char const *set) {
//     int i = strlen(s1) - 1;
//     while (i >= 0 && ft_strchr(set, s1[i]) != NULL) {
//         i--;
//     }
//     return (strlen(s1) - 1 - i);
// }

char	*ft_strtrim(char const *s1, char const *set)
{
	int		total_len;
	int		start_index;
	int		end_index;
	int		i;
	char	*result;

	if (!s1 || !set)
		return (NULL);
	total_len = ft_strlen(s1);
	start_index = count_subchar_begin(s1, set);
	end_index = total_len - count_subchar_end(s1, set);
	i = 0;
	if (start_index >= end_index)
		return (ft_strdup(""));
	result = (char *)malloc(sizeof(char) * (end_index - start_index + 1));
	if (result == NULL)
		return (NULL);
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
//     // char test[] = "";
//     // char set[] = "";
//     // printf("%d\n", count_subchar_begin(test, set));
//     // printf("%d\n", count_subchar_end(test, set));
//     // char *result = ft_strtrim(test, set);
//     // printf("%s\n", result);
//     // free(result);

// 	char *s1 = "  \t \t \n   \n\n\n\t";
//     char *s2 = "\t";
// 	printf("%d\n", ft_strlen(s1));
// 	printf("%d\n", count_subchar_begin(s1, s2));
//     printf("%d\n", count_subchar_end(s1, s2));
//     char *ret = ft_strtrim(s1, " \n\t");
// 	printf("%s\n", ret);

//     return (0);
// }