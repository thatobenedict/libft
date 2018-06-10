/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenedic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/10 16:37:20 by tbenedic          #+#    #+#             */
/*   Updated: 2018/06/10 17:41:21 by tbenedic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *ss1;
	char *ss2;

	if (!s1 || !s2)
		return (0);
	if (!(ss1 = ft_strdup(s1)))
		return (0);
	if (!(ss2 = ft_strdup(s2)))
		return (0);

	ft_strcat(ss1, ss2);
	free (ss2);
	return (ss1);
}
















/*
{
	size_t	len;
	int		i;
	int		j;

	char 	*scon;

	len = ft_strlen(s1) + ft_strlen(s2);
	i = 0;
	j = 0;

	if (!s1 || !s2)
		return (NULL);

	if ((scon = malloc(len + 1)) == NULL)
		return (NULL);
	ft_bzero(scon, len + 1);
	while (s1[j] != '\0')
	{
		scon[i] = s1[j];
		i++;
		j++;
	}
	j = 0;
	while (s2 != '\0')
	{
		scon[i] = s2[j];
		i++;
		j++;
	}
	scon[i] = '\0';
	return (scon);
} */
