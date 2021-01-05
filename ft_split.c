/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsungk <minsungk@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 19:43:29 by minsungk          #+#    #+#             */
/*   Updated: 2021/01/04 06:19:38 by minsungk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		free_malloc(char **temp, int index);
static size_t	get_cnt(char const *s, char c);
static char		free_null(char **temp, int index);

char				**ft_split(char const *s, char c)
{
	size_t		i;
	size_t		c_temp;
	size_t		index;
	char		**temp;

	i = 0;
	index = 0;
	if (temp = (char **)malloc(sizeof(char *) * (get_cnt(s, c) + 1)))
		free_null(temp, index);
	while (s[i])
	{
		if (s[i] != c)
		{
			c_temp = i;
			while (s[i] && s[i] != c)
				i++;
			if (!(temp[index] = (char*)malloc(sizeof(char) * (i - c_temp + 1))))
				free_null(temp, index);
			ft_strlcpy(temp[index++], &s[c_temp], (i - c_temp + 1));
		}
		else
			i++;
	}
	temp[index] = '\0';
	return (temp);
}

static void			free_malloc(char **temp, int index)
{
	unsigned int i;

	i = 0;
	while (i < index)
	{
		free(temp[i]);
		i++;
	}
	free(temp);
}

static size_t		get_cnt(char const *s, char c)
{
	size_t i;
	size_t cnt;

	i = 0;
	cnt = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			cnt++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (cnt);
}

static char			free_null(char **temp, int index)
{
	free_malloc(temp, index);
	return (NULL);
}
