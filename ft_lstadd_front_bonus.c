/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spunyapr <spunyapr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 15:48:39 by spunyapr          #+#    #+#             */
/*   Updated: 2024/11/30 16:07:23 by spunyapr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	new->next = *lst;
	*lst = new;
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
// }