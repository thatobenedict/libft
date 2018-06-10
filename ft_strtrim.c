/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenedic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/10 17:41:41 by tbenedic          #+#    #+#             */
/*   Updated: 2018/06/10 18:37:02 by tbenedic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t a;
	size_t b;
	size_t len;

	len = ft_strlen(s);

	if (!s)
		return (0);
	while (ft_newspacetab(s))
		a++;


}
