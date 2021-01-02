/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsungk <minsungk@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 00:43:15 by minsungk          #+#    #+#             */
/*   Updated: 2020/12/30 00:43:16 by minsungk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t i;
	size_t temp_i;

	i = 0;
	temp_i = 0;
	while (dest[i] && i < destsize)
		i++;
	while (src[temp_i] && (i + temp_i + 1) < destsize)
	{
		dest[i + temp_i] = src[temp_i];
		temp_i++;
	}
	if (i < destsize)
		dest[i + temp_i] = '\0';
	return (i + ft_strlen(src));
}
