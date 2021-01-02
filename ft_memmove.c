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
	size_t			i;
	unsigned char	*temp1;
	unsigned char	*temp2;

	i = 0;
	temp1 = (unsigned char *)dest;
	temp2 = (unsigned char *)src;
	if (sizeof(dest) > num && sizeof(src) > num)
		return (NULL);
	while (i < num)
	{
		temp1[i] = temp2[i];
		i++;
	}
	return (temp1);
}
