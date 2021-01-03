/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsungk <minsungk@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 19:42:40 by minsungk          #+#    #+#             */
/*   Updated: 2021/01/03 19:42:55 by minsungk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*temp;
	int		i;

	i = 0;
	if (!(temp = (char *)malloc(len + 1)))
		return (NULL);
	while ((i < len + 1) && s[start + i])
	{
		temp[i] = s[start];
		i++;
		start++;
	}
	if (i == len)
		temp[i] = '\0';
	return (temp);
}
