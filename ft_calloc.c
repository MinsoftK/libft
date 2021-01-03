/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsungk <minsungk@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 07:58:37 by minsungk          #+#    #+#             */
/*   Updated: 2021/01/03 07:58:38 by minsungk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char *temp;

	if (count == 0 || size == 0)
		return (NULL);
	if (!(temp = (char *)malloc(size * count)))
		return (NULL);
	ft_memset(temp, 0, size * count);
	return (temp);
}
