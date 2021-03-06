/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejo <hyejo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 19:51:52 by hyejo             #+#    #+#             */
/*   Updated: 2020/02/28 19:51:53 by hyejo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char    *ret;
    int     s_len;
    int     i;

    i = 0;
    s_len = ft_strlen(s);
    ret = (char *)malloc(s_len);
    if(ret == 0)
        return (0);
    while (i < s_len)
    {
        ret[i] = f(i, s[i]);
        i++;
    }
    return (ret);
}