/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejo <hyejo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 19:52:17 by hyejo             #+#    #+#             */
/*   Updated: 2020/05/01 23:03:34 by hyejo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ret;
	unsigned int	idx;

	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	ret = (char *)malloc(len + 1);
	if (ret == NULL)
		return (NULL);
	idx = 0;
	while (idx < len)
	{
		ret[idx] = s[start + idx];
		idx++;
	}
	ret[idx] = '\0';
	return (ret);
}
