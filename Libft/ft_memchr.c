/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejo <hyejo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 19:50:50 by hyejo             #+#    #+#             */
/*   Updated: 2020/02/28 19:50:51 by hyejo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *b, int c, size_t len)
{
    const unsigned char   *ret;
    size_t                i;

    i = 0;
    ret = b;
    while (i < len)
    {
        if(ret[i] == (unsigned char)c)
            return ((void *)(ret + i));
        i++;
    }
    return ('\0');
}