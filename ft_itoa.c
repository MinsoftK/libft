/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsungk <minsungk@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 19:43:37 by minsungk          #+#    #+#             */
/*   Updated: 2021/01/03 19:43:38 by minsungk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>
#include <stdio.h>

static int		n_digit(long n, int sign)
{
	int cnt;

	cnt = 0;
	if (n == 0)
		cnt = 1;
	while (n > 0)
	{
		cnt++;
		n /= 10;
	}
	if (sign == -1)
		cnt++;
	return (cnt);
}

static char		*make_malloc(int cnt, int sign, long nb)
{
	char	*temp;
	int		res;

	res = 1;
	if (!(temp = (char *)malloc(sizeof(char) * (cnt + 1))))
		return (NULL);
	temp[cnt--] = '\0';
	while (cnt >= 0)
	{
		if (cnt == 0 && sign == -1)
		{
			temp[0] = '-';
			break ;
		}
		temp[cnt] = (nb % 10) + '0';
		nb /= 10;
		cnt--;
	}
	cnt = 0;
	return (temp);
}

char			*ft_itoa(int n)
{
	int				cnt;
	int				sign;
	long			nb;

	sign = (n < 0) ? -1 : 1;
	if (n >= 0)
		nb = (long)n;
	else
	{
		nb = (long)n;
		nb = -nb;
	}
	cnt = n_digit(nb, sign);
	return (make_malloc(cnt, sign, nb));
}
