/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenedic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 18:05:14 by tbenedic          #+#    #+#             */
/*   Updated: 2018/06/04 15:51:07 by tbenedic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	//char s1[10] = "One";
	char ft_s1[10] = "One";
	const char s2[] = "hahahahahaha";

	//strcat(s1, s2);
	ft_strcat(ft_s1, s2);
	//printf("|%s|\n", s1);
	printf("|%s|\n", ft_s1);

	return 0;
}
