/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejo <hyejo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 19:50:36 by hyejo             #+#    #+#             */
/*   Updated: 2020/02/28 19:50:37 by hyejo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstnew(void *content)
{
    t_list *lst;

    lst = (t_list *)malloc(sizeof(t_list));
    if (lst == 0)
        return (0);
    lst->content = content;
    lst->next = NULL;
    return (lst);
}