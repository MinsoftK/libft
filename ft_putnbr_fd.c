/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsungk <minsungk@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 18:36:36 by minsungk          #+#    #+#             */
/*   Updated: 2021/01/07 18:36:38 by minsungk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	temp;
	int		i;
	char	num[15];

	temp = (long)n;
	if (n < 0)
		temp = temp * -1;
	if (n == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	if(n < 0)
		write(fd, "-", 1);
	i = 0;
	while (temp)
	{
		num[i++] = ((temp % 10) + '0');
		temp /= 10;
	}
	while (--i >= 0)
		write(fd, num + i, 1);
}
