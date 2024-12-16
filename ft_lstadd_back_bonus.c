/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spunyapr <spunyapr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 15:48:27 by spunyapr          #+#    #+#             */
/*   Updated: 2024/11/30 14:51:38 by spunyapr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	ptr = *lst;
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = new;
	return ;
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
//     ft_lstadd_back(&head, thrid);
//     printf("last node = %p\n", ft_lstlast(head));

// }
