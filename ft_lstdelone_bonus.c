/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spunyapr <spunyapr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 16:35:12 by spunyapr          #+#    #+#             */
/*   Updated: 2024/11/30 14:42:43 by spunyapr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	if (lst != NULL)
	{
		del(lst->content);
		free(lst);
	}
}

// t_list *delf(t_list *first)
// {
//     if(first == NULL)
//         printf("\nThe list is already empty");
//     else
//     {
//         t_list *temp = first;
//         first = first->next;
//         free(temp);
//     }
//     return (first);
// };

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

//     ft_lstdelone(head, &delf);
//     printf("head node address = %p\n", head);
//     printf("head = %d\n", *(int *)head->content);
//     printf("head next list = %p\n", head->next);
// }
