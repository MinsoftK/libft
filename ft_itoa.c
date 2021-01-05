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

static int		n_digit(long n, int sign)
{
	int cnt;

	cnt = 0;
	while (n > 0)
	{
		cnt++;
		n /= 10;
	}
	if (sign == -1)
		cnt = cnt + 1;
	return (cnt + 1);
}

static char		make_digit(int nb)
{
	if (nb > 9)
		make_digit(nb / 10);
	else
		return (nb);
}

static char		*make_malloc(int cnt, int sign, int nb)
{
	char	*temp;
	int		i;
	int		res;

	i = 0;
	res = 1;
	if (!(temp = (char *)malloc(sizeof(char) * (cnt))))
		return (NULL);
	if (sign == -1)
		temp[i++] = '-';
	while (i < cnt)
	{
		temp[i] = make_digit(nb / res);
		res *= 10;
		i++;
	}
	return (temp);
}

char			*ft_itoa(int n)
{
	int		cnt;
	int		sign;
	long	nb;
	char	*temp;

	sign = 1;
	if (n >= 0)
		nb = (long)n;
	else
	{
		nb = -n;
		sign = -1;
	}
	cnt = n_digit(nb, sign);
	return (make_malloc(cnt, sign, nb));
}
