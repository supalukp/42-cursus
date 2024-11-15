/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rose <rose@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 15:17:40 by rose              #+#    #+#             */
/*   Updated: 2024/11/15 18:06:01 by rose             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	if (lst == NULL)
		return (NULL);
	while (lst->next)
	{
		tmp = lst->next;
		lst->next = lst->next->next;
	}
	return (tmp);
}

// int	main(void)
// {
//     int *data = malloc(sizeof(int));
//     *data = 42;
// 	t_list *head = ft_lstnew(data);
//     printf("head node address = %p\n", head);
//     printf("head = %d\n", *(int *)head->content);
//     printf("head next list = %p\n", head->next);

//     printf("new data\n\n");

//     int *new_data = malloc(sizeof(int));
//     *new_data = 52;
//     t_list *new = ft_lstnew(new_data);
//     printf("new node address = %p\n", new);
//     ft_lstadd_front(&head, new);
//     printf("new head = %d\n", *(int *)head->content);
//     printf("head next list = %p\n", head->next);

//     printf("thrid data\n\n");

//     int *third_data = malloc(sizeof(int));
//     *third_data = 62;
//     t_list *thrid = ft_lstnew(third_data);
//     printf("new node address = %p\n", thrid);
//     ft_lstadd_front(&head, thrid);
//     printf("next new head = %d\n", *(int *)head->content);
//     printf("head next list = %p\n", head->next);

//     printf("Last node = %p\n", ft_lstlast(head));
// }