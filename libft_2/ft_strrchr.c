/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejo <hyejo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 19:52:07 by hyejo             #+#    #+#             */
/*   Updated: 2020/02/28 19:52:08 by hyejo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	int s_len;

	s_len = ft_strlen(s);
	while (s_len >= 0)
	{
		if (*(s + s_len) == c)
			return ((char *)(s + s_len));
		s_len--;
	}
	return (NULL);
}
