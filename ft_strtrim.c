/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsungk <minsungk@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 19:43:18 by minsungk          #+#    #+#             */
/*   Updated: 2021/01/03 19:43:20 by minsungk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;
	char	*temp;

	i = 0;
	len = ft_strlen(s1);
	if (set == NULL || s1 == NULL)
		return (NULL);
	if (!(temp = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (s1[i])
	{
		if (ft_strchr(set, s1[i]))
		{
			i++;
			continue ;
		}
		temp[i] = s1[i];
		i++;
	}
	temp[i] = '\0';
	return (temp);
}
