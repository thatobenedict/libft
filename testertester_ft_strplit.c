/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testertester_ft_strplit.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenedic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 09:16:17 by tbenedic          #+#    #+#             */
/*   Updated: 2018/06/13 11:50:21 by tbenedic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**ret;
	int		rcount;
	int		scount;
	int		start;

	if (!s || !(ret = (char **)ft_memalloc(sizeof(char *)
					* (ft_wordcount(s, c) + 1))))
		return (NULL);
	scount = 0;
	rcount = 0;
	while (s[scount])
	{
		if (s[scount] == c)
			scount++;
		else
		{
			start = scount;
			while (s[scount] && s[scount] != c)
				scount++;
			ret[rcount++] = ft_strsub(s, start, scount - start);
		}
	}
	ret[rcount] = 0;
	return (ret);
}
