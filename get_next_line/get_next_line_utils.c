/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejo <hyejo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 23:41:30 by hyejo             #+#    #+#             */
/*   Updated: 2020/03/05 15:20:32 by hyejo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int     ft_strlen(char *s)
{
    int i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

char    *ft_strjoin(char *s, char *s2)
{
    char    *ret;
    int     ret_idx;
    int     tmp_idx;

    tmp_idx = -1;
    ret_idx = 0;
    ret = (char *)malloc(ft_strlen(s) + ft_strlen(s2) + 1);
    if (ret == NULL)
        return (NULL);
    while (s[++tmp_idx])
        ret[ret_idx++] = s[tmp_idx];
    tmp_idx = -1;
    while (s2[++tmp_idx])
        ret[ret_idx++] = s2[tmp_idx];
    ret[ret_idx] = '\0';
    return (ret);
}

char    *ft_strdup(char *s)
{
    char    *ret;
    int     i;

    i = -1;
    ret = (char *)malloc(ft_strlen(s) + 1);
    if (ret == NULL)
        return (NULL);
    while (s[++i])
        ret[i] = s[i];
    ret[i] = '\0';
    return (ret);
}

char    *ft_strcut(char *memory, int start, int end)
{
    int     idx;
    int     len;
    char    *ret;
    
    idx = -1;
    len = end - start + 1;
    ret = (char *)malloc(len + 1);
    if (ret == NULL)
        return (NULL);
    while (len--)
        ret[++idx] = memory[start++];
    ret[idx] = '\0';
    return (ret);
}