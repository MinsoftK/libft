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
	size_t			i;
	void	*temp;

	i = 0;
	temp = (void *)ptr;
	while (i++ < num)
	{
		if (((unsigned char *)temp)[i] == (unsigned char)value)
			return (temp + i);
	}
	return ((void *)0);
}
