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

static char		*make_malloc(int cnt, int sign, int nb)
{
	char	*temp;
	int		i;
	int		res;

	i = 0;
	res = 1;
	if (!(temp = (char *)malloc(sizeof(char) * (cnt))))
		return (NULL);
	temp[cnt] = '\0';
	while (cnt-- >= 0)
	{
		temp[i] = (nb % 10);
		nb /= 10;
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

	sign = (n < 0) ? -1 : 1;
	if (n >= 0)
		nb = (long)n;
	else
		nb = -n;
	cnt = n_digit(nb, sign);
	return(make_malloc(cnt, sign, nb));
}
