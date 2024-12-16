/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spunyapr <spunyapr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 15:49:07 by spunyapr          #+#    #+#             */
/*   Updated: 2024/11/30 16:09:53 by spunyapr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}

// int	main(void)
// {
//     int *data = malloc(sizeof(int));
//     *data = 42;
// 	t_list *head = ft_lstnew(data);
//     printf("head = %d\n", *(int *)head->content);

//     int *new_data = malloc(sizeof(int));
//     *new_data = 52;
//     t_list *new = ft_lstnew(new_data);
//     ft_lstadd_front(&head, new);
//     printf("new head = %d\n", *(int *)head->content);

//     int *third_data = malloc(sizeof(int));
//     *third_data = 62;
//     t_list *thrid = ft_lstnew(third_data);
//     ft_lstadd_front(&head, thrid);
//     printf("next new head = %d\n", *(int *)head->content);

//     printf("count list = %d\n", ft_lstsize(head));
// }