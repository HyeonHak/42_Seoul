/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejo <hyejo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 09:27:37 by hyejo             #+#    #+#             */
/*   Updated: 2020/02/28 19:45:14 by hyejo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		str_len(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int     str_cmp(char ch, char c)
{
	int i;

	i = 0;
    if (ch == c)
        return (1);
    i++;
	return (0);
}

void	init(char **ret, int *ret_idx, int *ret_arr_idx, int len)
{
	ret[*ret_idx][*ret_arr_idx] = '\0';
	(*ret_idx)++;
	ret[*ret_idx] = (char *)malloc(sizeof(char) * len + 1);
	*ret_arr_idx = 0;
}

char    **ft_split(char const *s, char c)
{
	char	**ret;
	int		len;
	int		idx;
	int		ret_idx;
	int		ret_arr_idx;

	len = ft_strlen(s);
	ret = (char **)malloc(sizeof(char *) * len + 1);
	ret_idx = 0;
	ret_arr_idx = 0;
	ret[ret_idx] = (char *)malloc(sizeof(char) * len + 1);
	idx = -1;
	while (s[++idx])
	{
		if (s[idx] != c)
			ret[ret_idx][ret_arr_idx++] = s[idx];
		else if (ret_arr_idx == 0)
			continue;
		else
			init(ret, &ret_idx, &ret_arr_idx, len);
	}
	if (ret_arr_idx != 0)
		init(ret, &ret_idx, &ret_arr_idx, len);
	ret[ret_idx] = 0;
	return (ret);
}