/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejo <hyejo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 19:50:10 by hyejo             #+#    #+#             */
/*   Updated: 2020/02/28 19:50:11 by hyejo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			nbr_size(int n)
{
	int				ret;
	unsigned int	val;

	ret = 0;
	if (n < 0)
	{
		ret = 1;
		val = n * -1;
	}
	else
		val = n;
	while (val)
	{
		val /= 10;
		ret++;
	}
	return (ret);
}

void		insert_val(char *ret, int n, int ret_len)
{
	int				i;
	unsigned int	val;

	ret[ret_len] = '\0';
	i = ret_len - 1;
	if (n < 0)
		val = n * -1;
	else
		val = n;
	while (val)
	{
		ret[i--] = (val % 10) + '0';
		val /= 10;
	}
	if (i == 0)
		ret[i] = '-';
}

char		*ft_itoa(int n)
{
	char	*ret;
	int		ret_len;

	if (n == 0)
	{
		ret = (char *)malloc(2);
		ret[0] = '0';
		ret[1] = '\0';
		return (ret);
	}
	ret_len = nbr_size(n);
	ret = (char *)malloc(ret_len + 1);
	if (ret == NULL)
		return (NULL);
	insert_val(ret, n, ret_len);
	return (ret);
}
