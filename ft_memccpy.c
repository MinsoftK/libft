/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsungk <minsungk@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 22:08:56 by minsungk          #+#    #+#             */
/*   Updated: 2020/12/29 22:08:57 by minsungk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t num)
{
	size_t i;

	i = 0;
	if (!dest)
		return ((void *)0);
	if (!num || dest == src)
		return (dest);
	while (i++ < num)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		if ((unsigned char)c == ((unsigned char *)src)[i])
			break ;
	}
	if (num == i)
		return ((void *)0);
	return (dest + i + 1);
}
