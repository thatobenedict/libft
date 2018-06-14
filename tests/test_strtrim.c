/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenedic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 09:50:21 by tbenedic          #+#    #+#             */
/*   Updated: 2018/06/12 13:25:37 by tbenedic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	char str[]= "     Hello     ";
	char *str1;

	printf("%d\n", ft_strlen(str));
	str1 = ft_strtrim(str);
	printf("%d\n\n", ft_strlen(str1));
	printf("|%s|\n", str1);
}
