/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsungk <minsungk@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 02:18:19 by minsungk          #+#    #+#             */
/*   Updated: 2021/01/08 02:18:25 by minsungk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *temp;
	t_list *start;
	t_list *after_f;

	temp = NULL;
	start = lst;
	if (!lst && !f)
		return (NULL);
	while (start)
	{
		after_f = ft_lstnew((*f)(lst->content));
		if (!after_f)
			break ;
		ft_lstadd_back(&temp, after_f);
		start = start->next;
	}
	if (ft_lstsize(lst) != ft_lstsize(temp))
		ft_lstclear(&temp, del);
	return (temp);
}
