/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejo <hyejo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 19:51:27 by hyejo             #+#    #+#             */
/*   Updated: 2020/02/28 19:51:28 by hyejo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	size_t i;
	size_t s_len;

	i = 0;
	s_len = ft_strlen(s);
	while (i <= s_len)
	{
		if (*(s + i) == c)
			return ((char *)(s + i));
		i++;
	}
	return (NULL);
}
