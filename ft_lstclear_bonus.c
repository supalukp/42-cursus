/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spunyapr <spunyapr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 17:51:19 by spunyapr          #+#    #+#             */
/*   Updated: 2024/11/29 16:11:45 by spunyapr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;
	t_list	*tmp;

	ptr = *lst;
	if (!*lst || !del)
		return ;
	while (ptr)
	{
		tmp = ptr->next;
		del(ptr->content);
		free(ptr);
		ptr = tmp;
	}
	*lst = NULL;
}
