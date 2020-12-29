/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsungk <minsungk@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 22:48:43 by minsungk          #+#    #+#             */
/*   Updated: 2020/12/28 23:05:05 by minsungk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memset(void *dest, int value, size_t count)
{
	size_t i;
	char *temp;

	temp = (char *)dest;
	i = 0;
	while (i < count)
		temp[i++] = value;
	return (temp);
}
