/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rose <rose@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 10:51:41 by rose              #+#    #+#             */
/*   Updated: 2024/11/28 11:26:27 by rose             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *ptr;
    t_list *tmp;
    
    ptr = *lst;
    if (!del || !*lst)
        return ;
    while (ptr)
    {
        tmp = ptr->next;
        del(ptr->content);
        free(ptr);
        ptr = tmp;
    }
    *lst = 0;
}