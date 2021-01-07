/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsungk <minsungk@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 22:43:21 by minsungk          #+#    #+#             */
/*   Updated: 2021/01/07 22:43:22 by minsungk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize_bonus(t_list *lst)
{
	int			i;
	t_list		*temp;

	i = 0;
	temp = lst;
	if (!lst)
		return (0);
	while (temp->next)
	{
		i++;
		temp = temp->next;
	}
	if (temp->next == NULL)
		i++;
	return (i);
}
