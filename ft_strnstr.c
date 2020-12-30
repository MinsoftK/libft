/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsungk <minsungk@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 18:31:14 by minsungk          #+#    #+#             */
/*   Updated: 2020/12/30 18:31:15 by minsungk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t temp;

	i = 0;
	while (big[i] && i < len)
	{
		temp = 0;
		if (little[temp] == big[i + temp])
		{
			while (little[temp] && big[i + temp])
			{
				if (little[temp] != big[i + temp] || (i + temp) >= len)
					break ;
				temp++;
			}
			if (little[temp] == '\0')
				return (&big[i]);
		}
		i++;
	}
	return ((void *)0);
}
