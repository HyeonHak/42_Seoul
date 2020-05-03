/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejo <hyejo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 15:41:52 by hyejo             #+#    #+#             */
/*   Updated: 2020/05/02 15:55:54 by hyejo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list **rlist;
	t_list *temp;
	t_list *init;

	init = NULL;
	rlist = &init;
	while (lst)
	{
		if (!(temp = ft_lstnew((*f)(lst->content))))
		{
			ft_lstclear(rlist, (*del));
			return (NULL);
		}
		ft_lstadd_back(rlist, temp);
		lst = lst->next;
	}
	return (*rlist);
}
