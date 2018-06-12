/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenedic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/10 17:41:41 by tbenedic          #+#    #+#             */
/*   Updated: 2018/06/12 13:23:03 by tbenedic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_newspacetab(int c)
{
	return (c == ' ' || c == '\t' || c == '\n');	
}

char	*ft_strtrim(char const *s)
{
	unsigned int  i;
	unsigned int  j;
	size_t		len;
	char		*ss;

	if (!s)
		return (0);
	else
	{
		i = 0;
		j = (ft_strlen(s)) - 1;
		len = 0;
		while (ft_newspacetab(s[i]))
			i++;
		if (j <= i || ft_strlen(s) == 0)
			return ("");
		else
		{
			while (ft_newspacetab(s[j]))
				j--;
			len = (j - i + 1); 
			ss = ft_strsub(s, i, (size_t)len);
			return (ss);
		}
	}
}
