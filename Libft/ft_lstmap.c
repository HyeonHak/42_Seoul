/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejo <hyejo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 16:26:15 by hyejo             #+#    #+#             */
/*   Updated: 2020/02/28 19:30:26 by hyejo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *ret;
    t_list  *node;

    node = ft_lstnew(f(lst->content));
    if (node == 0)
        return (0);
    lst = lst->next;
    ret = node;
    while (lst)
    {
        if (!(node = ft_lstnew(f(lst->content))))
        {
            ft_lstclear(&ret, del);
            break ;
        }
        ft_lstadd_back(&ret, node);
        lst = lst->next;
    }
    return (ret);
}