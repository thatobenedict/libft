/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenedic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 16:49:12 by tbenedic          #+#    #+#             */
/*   Updated: 2018/06/04 13:46:17 by tbenedic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	int i = 0;
	const char *s[] = {"", "hello", "    hello", "hello    "};

	while (i < 4)
	{
		printf("|%s|\n", strdup(s[i]));
		printf("|%s|\n\n", ft_strdup(s[i]));
		i++;
	}	
	return 0;
}
