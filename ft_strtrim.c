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

static char		*escape(char const *s1, char const *set)
{
	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
}

char			*ft_strtrim(char const *s1, char const *set)
{
	size_t			i;
	size_t			start;
	size_t			end;
	size_t			len;
	char			*temp;

	start = 0;
	escape(s1, set);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	if (start == ft_strlen(s1))
		return (ft_strdup(""));
	end = ft_strlen(s1);
	while (end && ft_strchr(set, s1[end - 1]))
		end--;
	len = end - start + 2;
	if (!(temp = (char *)malloc(sizeof(char) * (len))))
		return (NULL);
	i = 0;
	while (start < end)
		temp[i++] = s1[start++];
	temp[i] = '\0';
	return (temp);
}
