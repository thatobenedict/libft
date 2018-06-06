/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenedic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 12:10:46 by tbenedic          #+#    #+#             */
/*   Updated: 2018/06/06 15:49:34 by tbenedic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	if (!s)
		return ;
	int	i;
	
	i = 0;
	while (s[i] != '\0')
	{
		(*f)(&s[i]);
		i++;
	}
}
