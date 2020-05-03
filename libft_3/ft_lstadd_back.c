/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejo <hyejo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 15:53:41 by hyejo             #+#    #+#             */
/*   Updated: 2020/02/28 16:09:58 by hyejo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *head;

	if (*lst == NULL)
		ft_lstadd_front(lst, new);
	else
	{
		head = *lst;
		while ((*lst)->next)
			(*lst) = (*lst)->next;
		(*lst)->next = new;
		*lst = head;
	}
}
