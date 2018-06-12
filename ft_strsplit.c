/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenedic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 13:23:29 by tbenedic          #+#    #+#             */
/*   Updated: 2018/06/12 17:29:26 by tbenedic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		ft_word_count(const char *str, char c)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	while (str[i] == c)
		i++;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			while (str[i] == c)
				i++;
			j++;
		}
		i++;
	}
	return (j);
}

char	**ft_strsplit(char const *s, char c)
{
	char			**arr;
	size_t			words;
	unsigned int	 	i;
	unsigned int		j;
	unsigned int		k;

	i = 0;
	j = 0;
	words = ft_word_count(s, c);
	if (!s || !(arr = (char **)ft_memmalloc(sizeof(char **) * (words + 1))))
		while (s[i] != '\0')
		{
			if (s[i] == c)
			{
				while (s[i] == c)
				arr[j] = (char *)ft_strsub(s, i, len);
			}
		}
	return (arr);
}
