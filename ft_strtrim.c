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
#include <stdio.h>
char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	size_t			len;
	size_t			end;
	char			*temp;

	i = 0;
	if (*s1 == 0)
		return (NULL);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	len = ft_strlen(s1);
	end = ft_strlen(s1);
	while (end && ft_strchr(set, s1[end]))
		end--;
	if (!(temp = (char *)malloc(sizeof(char) * (len - i + 2))))
	{
		return (ft_strdup(""));
	}
	temp = ft_substr((char *)s1, i, len - i + 1);
	return (temp);
}
