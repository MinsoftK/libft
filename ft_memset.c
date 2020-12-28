/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsungk <minsungk@stduent.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 20:12:56 by minsungk          #+#    #+#             */
/*   Updated: 2020/12/28 22:51:43 by minsungk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memset(void *dest, int value, size_t count)
{
    size_t i;
    char *temp = (char *)dest;

    i = 0;
    while (i < count)
        temp[i++] = value;        
    return temp;
}
