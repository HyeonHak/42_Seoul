/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejo <hyejo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 19:50:45 by hyejo             #+#    #+#             */
/*   Updated: 2020/02/28 19:50:47 by hyejo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
    unsigned char       *d;
    const unsigned char *s;
    unsigned char       i;

    i = -1;
    d = dst;
    s = src;
    while (++i < (unsigned char)n)
    {
        *(d + i) = *(s + i);
        if (*(s + i) == (char)c)
            return ((void *)(d + i + 1));
    }
    return (NULL);
}