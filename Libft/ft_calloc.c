/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejo <hyejo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 19:49:46 by hyejo             #+#    #+#             */
/*   Updated: 2020/02/28 19:49:48 by hyejo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
   size_t *ret;
   size_t i;

   i = 0;
   ret = (size_t *)malloc(size * count);
   if (ret == 0)
      return (NULL);
   while (i < count)
   {
      ret[i] = 0;
      i++;
   }
   return (ret);
}