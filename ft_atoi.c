/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsungk <minsungk@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 15:16:42 by minsungk          #+#    #+#             */
/*   Updated: 2020/12/30 15:16:43 by minsungk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isspace(const char *str)
{
	int i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	return (i);
}

int		ft_atoi(const char *str)
{
	int digit;
	int i;
	int res;

	digit = 1;
	i = ft_isspace(str);
	res = 0;
	if (str[i] == '-')
	{
		digit *= -1;
		i++;
	}
	while (ft_isdigit(str[i]))
		res = (res * 10) + (str[i++] - '0');
	return (digit * res);
}
