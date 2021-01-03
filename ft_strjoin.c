/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsungk <minsungk@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 19:43:06 by minsungk          #+#    #+#             */
/*   Updated: 2021/01/03 19:43:07 by minsungk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	size_t	i;
	size_t	j;
	char	*temp;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	i = -1;
	j = -1;
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (!(temp = (char *)malloc(sizeof(char) * (len1 + len2 + 1))))
		return (NULL);
	while (++i <= len1)
		temp[i] = s1[i];
	while (++j <= len2)
		temp[i + j] = s2[j];
	temp[i + j] = '\0';
	return (temp);
}
