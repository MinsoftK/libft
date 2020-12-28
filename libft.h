/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsungk <minsungk@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 21:57:22 by minsungk          #+#    #+#             */
/*   Updated: 2020/12/22 21:57:41 by minsungk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <string.h>
#include <stdlib.h>

void	*ft_memset(void *dest, int value, size_t len);
void    *ft_bzero(void *dest, size_t len);
void    *ft_memcpy(void *dest, const void *source, size_t num);
#endif
//test