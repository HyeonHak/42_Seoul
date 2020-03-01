/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejo <hyejo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 19:51:30 by hyejo             #+#    #+#             */
/*   Updated: 2020/02/28 19:51:31 by hyejo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s)
{
    char    *ret;
    int     i;
    int     s_len;

    i = 0;
    s_len = ft_strlen(s);
    ret = (char *)malloc(s_len + 1);
    if (ret == NULL)
        return (NULL);
    while (s[i])
    {
        ret[i] = s[i];
        i++;
    }
    return (ret);
}