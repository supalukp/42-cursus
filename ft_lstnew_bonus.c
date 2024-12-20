/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spunyapr <spunyapr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 15:49:01 by spunyapr          #+#    #+#             */
/*   Updated: 2024/11/27 15:49:03 by spunyapr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*head;

	head = NULL;
	head = (t_list *)malloc(sizeof(t_list));
	if (head == NULL)
		return (NULL);
	head->content = content;
	head->next = NULL;
	return (head);
}

// int	main(void)
// {
// 	// int *data = malloc(sizeof(int));
// 	// *data = 42;
//     char *data = ft_strdup("Hello");

// 	t_list *first = ft_lstnew(data);

//     // printf("Stored value: %d\n", *(int *)(first->content));
// 	printf("Stored value: %s\n", (char *)(first->content));

// 	free(data);
// 	free(first);

// 	return (0);
// }