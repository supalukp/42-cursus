/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spunyapr <spunyapr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 12:34:15 by spunyapr          #+#    #+#             */
/*   Updated: 2024/11/29 16:43:13 by spunyapr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;

	tmp = lst;
	if (!lst || !f)
		return ;
	while (tmp)
	{
		f(tmp->content);
		tmp = tmp->next;
	}
}

// void	change42 (t_list *lst)
// {
// 	lst->content = 42;
// }

// int	main(void)
// {
//     int *data = malloc(sizeof(int));
//     *data = 62;
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

// 	ft_lstiter(head, &change42);
// 	printf("head = %d\n", *(int *)head->content);
// 	printf("head = %d\n", *(int *)head->next->content);
// 	printf("head = %p\n", head->next->next);
// }
