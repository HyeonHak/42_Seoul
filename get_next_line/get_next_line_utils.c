/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejo <hyejo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 23:41:30 by hyejo             #+#    #+#             */
/*   Updated: 2020/03/02 02:16:58 by hyejo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int     ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char    *ft_strjoin(char *str, char *str2)
{
    char    *ret;
    int     idx;
    int     i;

    i = -1;
    idx = -1;
    ret = (char *)malloc(ft_strlen(str) + ft_strlen(str2) + 1);
    while (str[++i])
        ret[++idx] = str[i];
    i = -1;
    while (str2[++i])
        ret[idx++] = str2[i]);
    ret[idx] = '\0';
    return (ret);
}

char    *ft_strchr(char *str, char ch)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] == ch)
            
    }
}