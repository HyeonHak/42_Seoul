/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejo <hyejo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 19:51:04 by hyejo             #+#    #+#             */
/*   Updated: 2020/05/01 20:22:50 by hyejo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;
	size_t				i;

	if (!dest && !src)
		return (NULL);
	i = 0;
	d = dest;
	s = src;
	if (d <= s)
	{
		while (i < n)
		{
			*(d + i) = *(s + i);
			i++;
		}
	}
	else
		while ((int)(--n) >= 0)
			*(d + n) = *(s + n);
	return (dest);
}
