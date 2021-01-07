/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsungk <minsungk@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 22:42:58 by minsungk          #+#    #+#             */
/*   Updated: 2021/01/07 22:42:59 by minsungk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew_bonus(void *content)
{
	t_list *result;

	result = (t_list *)malloc(sizeof(t_list));
	if (result)
	{
		result->content = content;
		result->next = NULL;
	}
	return (NULL);
}
