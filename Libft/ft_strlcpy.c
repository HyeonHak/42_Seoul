/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejo <hyejo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 19:51:43 by hyejo             #+#    #+#             */
/*   Updated: 2020/02/28 19:51:44 by hyejo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t  i;
    
    i = 0;
    if (size == 0)
        return (ft_strlen(src));
    while (i < size - 1 && src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (ft_strlen(src));
}