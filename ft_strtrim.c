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
	size_t	end;
	char	*temp;

	i = 0;
	if (set == NULL || s1 == NULL)
		return (NULL);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	end = ft_strlen(s1);
	while (end && ft_strchr(set, s1[end]))
		end--;
	if (!(temp = (char *)malloc(sizeof(char) * (end + 1))))
		return (NULL);
	temp = ft_substr((char *)s1, i, end - i);
	return (temp);
}
