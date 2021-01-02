/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsungk <minsungk@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 17:19:48 by minsungk          #+#    #+#             */
/*   Updated: 2020/12/29 17:19:49 by minsungk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int value, size_t num)
{
	size_t	i;

	i = 0;
	while (i++ < num)
	{
		if (((unsigned char *)ptr)[i] == (unsigned char)value)
			return ((void *)ptr + i);
	}
	return ((void *)0);
}
