/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejo <hyejo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 19:49:46 by hyejo             #+#    #+#             */
/*   Updated: 2020/05/02 02:14:31 by hyejo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_calloc(size_t count, size_t size)
{
	void	*ret;
	char	*ch;
	size_t	i;

	i = 0;
	ret = malloc(size * count);
	if (ret == NULL)
		return (NULL);
	ch = (char *)ret;
	while (i < count * size)
	{
		ch[i] = 0;
		i++;
	}
	return (ret);
}
