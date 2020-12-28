/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsungk <minsungk@stduent.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 20:12:56 by minsungk          #+#    #+#             */
/*   Updated: 2020/12/27 20:12:56 by minsungk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memset(void *dest, int value, size_t len)
{
    size_t i;
    unsigned char *temp;
    
    i = 0;
    temp = (unsigned char *)dest;
    while (i < len)
        temp[i++] = (unsigned char)value;        
    return temp;
}