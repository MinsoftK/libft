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

	i = 0;
	temp = (char)ch;
	while (str[i])
	{
		if (str[i] == temp)
			return (&str[i]);
		i++;
	}
	if (str[i] == '\0')
		return ((void *)0);
}
