/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenedic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 09:15:32 by tbenedic          #+#    #+#             */
/*   Updated: 2018/06/01 10:18:19 by tbenedic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	char s1[10] = "One";
	char ft_s1[10] = "One";
	const char s2[] = "hahahahahaha";
	size_t len = 7;

	strncat(s1, s2, len);
	printf("|%s|\n", s1);
	ft_strncat(ft_s1, s2, len);
	printf("|%s|\n", ft_s1);

	return 0;
}
