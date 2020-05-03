/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejo <hyejo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 19:51:17 by hyejo             #+#    #+#             */
/*   Updated: 2020/02/28 19:51:17 by hyejo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		nbr_recursive(unsigned int n, int fd)
{
	char ch;

	if (n < 10)
	{
		ch = n + '0';
		write(fd, &ch, 1);
		return ;
	}
	nbr_recursive(n / 10, fd);
	nbr_recursive(n % 10, fd);
}

void		ft_putnbr_fd(int n, int fd)
{
	unsigned int nbr;

	nbr = n;
	if (n < 0)
	{
		write(fd, "-", 1);
		nbr *= -1;
	}
	nbr_recursive(nbr, fd);
}
