/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsungk <minsungk@stduent.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 00:33:56 by minsungk          #+#    #+#             */
/*   Updated: 2020/12/29 02:01:26 by minsungk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t num)
{
	size_t i;

	i = 0;
	if (!num || dest == src)
		return (dest);
	if (dest == NULL && src == NULL)
		return (NULL);
	while (i < num)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
