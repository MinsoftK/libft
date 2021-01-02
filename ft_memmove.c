/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsungk <minsungk@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/31 23:17:10 by minsungk          #+#    #+#             */
/*   Updated: 2020/12/31 23:17:12 by minsungk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	size_t i;

	i = 0;
	if (!num)
		return (NULL);
	if (sizeof(dest) < num && sizeof(src) < num)
		return (NULL);
	while (i < num)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
