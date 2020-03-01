/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejo <hyejo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 19:51:00 by hyejo             #+#    #+#             */
/*   Updated: 2020/02/28 19:51:01 by hyejo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char       *ret;
    const unsigned char *input;
    size_t              i;

    i = 0;
    input = src;
    ret = dest;
    while (i < n)
    {
        ret[i] = input[i];
        i++;
    }
    return (dest);
}