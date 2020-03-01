/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejo <hyejo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 19:52:14 by hyejo             #+#    #+#             */
/*   Updated: 2020/02/28 19:52:14 by hyejo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    front_erase(char const *s1, char const *set, int *idx)
{
    int flag;
    int i;
    int s1_idx;

    s1_idx = 0;
    flag = 0;
    while (flag == 0 && s1[s1_idx])
    {
        flag = 1;
        i = -1;
        while (set[++i])
        {
            if (set[i] == s1[s1_idx])
            {
                flag = 0;
                break ;
            }
        }
        if (!flag)
            s1_idx++;
    }
    idx[0] = s1_idx;
}

void    back_erase(char const *s1, char const *set, int *idx)
{
    int flag;
    int i;
    int s1_idx;

    s1_idx = idx[1] - 1;
    flag = 0;
    while (flag == 0 && s1[s1_idx])
    {
        flag = 1;
        i = -1;
        while (set[++i])
        {
            if (set[i] == s1[s1_idx])
            {
                flag = 0;
                break ;
            }
        }
        if (!flag)
            s1_idx--;
    }
    idx[1] = s1_idx;
}

void    check_idx(char const *s1, char const *set, int *idx)
{
    idx[0] = 0;
    idx[1] = ft_strlen(s1);
    front_erase(s1, set, idx);
    back_erase(s1, set, idx);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    char    *ret;
    int     idx[2];
    int     i;
    int     ret_idx;

    ret_idx = 0;
    check_idx(s1, set, idx);
    if (idx[0] > idx[1])
    {
        ret = (char *)malloc(1);
        ret[0] = 0;
        return (ret);
    }
    ret = (char *)malloc(idx[1] - idx[0] + 1);
    if (ret == 0)
        return (0);
    i = idx[0] - 1;
    while (++i <= idx[1])
        ret[ret_idx++] = s1[i];
    return (ret);
}