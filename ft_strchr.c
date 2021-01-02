/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsungk <minsungk@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 07:03:34 by minsungk          #+#    #+#             */
/*   Updated: 2020/12/30 07:03:35 by minsungk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	int		i;
	char	temp;
	char	*stemp;

	i = 0;
	temp = (char)ch;
	stemp = (char *)str;
	if (!str)
		return (NULL);
	while (stemp[i])
	{
		if (stemp[i] == temp)
			return (&((char *)str)[i]);
		i++;
	}
	return (&stemp[i]);
}
