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

#include "libft.h";

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t destlen;
	size_t srclen;
	size_t temp_i;

	i = 0;
	temp_i = 0;
	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	if (!dest && !src)
		return ((void *)0);
	while (dest[i] && i < size)
		i++;
	while (src[temp_i] && i + temp_i + 1 < size)
	{
		dest[i + temp_i] = src[temp_i];
		temp_i++;
	}
	dest[i + temp_i] = '\0';
	if (dest < size)
		return (destlen + srclen);
	return (size + srclen);
}
