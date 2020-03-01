/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejo <hyejo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 19:50:54 by hyejo             #+#    #+#             */
/*   Updated: 2020/02/28 19:50:55 by hyejo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *str;
    const unsigned char *str2;
    size_t              i;

    i = -1;
    str = s1;
    str2 = s2;
    while(++i < n)
    {
        if (*(str + i) != *(str2 + i))
            return (*(str + i) - *(str2 + i));
    }
    return (0);
}