/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejo <hyejo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 19:52:02 by hyejo             #+#    #+#             */
/*   Updated: 2020/02/28 19:52:03 by hyejo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t  i;
    size_t  needle_len;
    
    needle_len = ft_strlen(needle);
    if (needle_len == 0)
        return ((char *)haystack);
    i = 0;
    while (i + needle_len < len)
    {
        if(ft_memcmp(haystack + i, needle, needle_len) == 0)
            return ((char *)(haystack + i));
        i++;
    }
    return (NULL);
}