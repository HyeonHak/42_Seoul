/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejo <hyejo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 19:51:37 by hyejo             #+#    #+#             */
/*   Updated: 2020/02/28 19:51:38 by hyejo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char    *ret;
    int     i;
    int     idx;

    ret = (char *)malloc(ft_strlen(s1) + ft_strlen(s2));
    if (ret == 0)
        return (0);
    idx = 0;
    i = 0;
    while (s1[i])
    {
        ret[idx] = s1[i];
        i++;
        idx++;
    }
    i = 0;
    while (s2[i])
    {
        ret[idx] = s2[i];
        idx++;
        i++;
    }
    return (ret);
}