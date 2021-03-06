/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejo <hyejo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 19:51:37 by hyejo             #+#    #+#             */
/*   Updated: 2020/05/02 00:31:04 by hyejo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;
	int		i;
	int		idx;

	if (!s1 || !s2)
		return (NULL);
	ret = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (ret == NULL)
		return (NULL);
	idx = 0;
	i = -1;
	while (s1[++i])
	{
		ret[idx] = s1[i];
		idx++;
	}
	i = 0;
	while (s2[i])
	{
		ret[idx] = s2[i];
		idx++;
		i++;
	}
	ret[idx] = '\0';
	return (ret);
}
