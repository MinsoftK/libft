/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsungk <minsungk@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 19:43:49 by minsungk          #+#    #+#             */
/*   Updated: 2021/01/03 19:43:50 by minsungk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int 	i;
	size_t			len;
	char			*temp;

	
	len = ft_strlen(s);
	if (s == 0 || f == 0)
		return (0);
	if (!(temp = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	while (s[i])
	{
		temp[i] = f(i, s[i]);
		i++;
	}
	temp[i] = '\0';
	return (temp);
}
#include <stdio.h>

char expand(unsigned int i, char c)
{
	c = c + 1;
	return(c);
}
int main()
{
	char *s1="this is test";
	char *test = ft_strmapi(s1, expand);
	unsigned int i;

	i = 0;
	printf("expand : %s\n" ,test);
	return (0);
}
