/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejo <hyejo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 19:50:31 by hyejo             #+#    #+#             */
/*   Updated: 2020/02/28 19:50:32 by hyejo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    t_list  *ret;
    int     last_idx;

    last_idx = ft_lstsize(lst) - 1;
    ret = lst;
    while (last_idx)
    {
        ret = ret->next;
        last_idx--;
    }
    return (ret);
}