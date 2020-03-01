/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejo <hyejo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 16:22:44 by hyejo             #+#    #+#             */
/*   Updated: 2020/02/28 16:33:59 by hyejo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *tmp;

    while (*lst)
    {
        tmp = *lst;
        *lst = (*lst)->next;
        del(tmp);
        free(tmp);
    }
    *lst = NULL;
}