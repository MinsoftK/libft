/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsungk <minsungk@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 08:26:37 by minsungk          #+#    #+#             */
/*   Updated: 2021/01/03 08:26:38 by minsungk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int		len;
	char	temp;
	char	*stemp;

	len = ft_strlen(str);
	temp = (char)ch;
	stemp = (char *)str;
	if (temp == '\0')
		return ((char *)stemp + len);
	while (len--)
	{
		if (stemp[len] == temp)
			return (&stemp[len]);
	}
	return (NULL);
}
