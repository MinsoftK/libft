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

void	*trimStr(char *temp, char const *set);


char	*ft_strtrim(char const *s1, char const *set)
{
	size_t 	i;
	size_t 	len;
	char	*temp;
	
	i = 0;
	len = ft_strlen(s1);
	if	(s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (s1);
	if (!(temp = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (s1[i])
	{
		temp[i] = s1[i];
		i++;
	}
	temp[i] = '\0';
	trimStr(temp, set);
	return (temp);
}

void	*trimStr(char *temp, char const *set)
{
	size_t i;
	size_t j;

	i = 0;
	while (temp[i])
	{
		j = 0;
		if (temp[i] == set[j])
		{
			while (temp[i + j])
			{
				temp[i + j] = temp[i + j + 1];
				j++;
			}
		}
		i++;
	}
}
