/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejo <hyejo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 19:49:39 by hyejo             #+#    #+#             */
/*   Updated: 2020/02/28 19:49:41 by hyejo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int idx_space(const char *str, int idx)
{
    while (str[idx])
    {
        if (str[idx] != ' ' && str[idx] != '\t' && str[idx] != '\r'
        && str[idx] != '\f' && str[idx] != '\n' && str[idx] != '\v')
            return (idx);
        idx++;
    }
    return (idx);
}

int idx_sign(const char *str, int idx, int *sign)
{
    if (ft_isdigit(str[idx]))
        return (idx);
    else if (str[idx] == '+' || str[idx] == '-')
    {
        if (str[idx] == '-')
            *sign = 1;
        return (idx + 1);
    }
    return (idx);
}

int ft_atoi(const char *str)
{
    int             idx;
    int             sign;
    unsigned int    ret;

    ret = 0;
    sign = 0;
    idx = idx_space(str, 0);
    idx = idx_sign(str, idx, &sign);
    while (str[idx])
    {
        if (ft_isdigit(str[idx]))
            ret = ret * 10 + str[idx] - '0';
        else
            break ;
        idx++;
    }
    if (sign == 1)
        return ((int)(ret * -1));
    return (int)(ret);
}