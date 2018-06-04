/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenedic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 16:04:01 by tbenedic          #+#    #+#             */
/*   Updated: 2018/06/04 13:30:32 by tbenedic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	size_t i = 0;
	size_t j;
	size_t k;

	const char *h[] = {" ", "ello", "World", "Hello", "Worl"};

	const char *n[] = {"ello", "World", "Hello", " "};

	size_t len[] = {0, 3, 1};

	while (i <= 5)
	{
		j = 0;
		while (j <= 4)
		{
			k = 0;
			while (k <= 2)
			{
				printf("%zu %zu %zu\n",i,j,k);
				printf("%d\n", memcmp(h[i],n[j], len[k]));
				printf("%d\n\n", ft_memcmp(h[i],n[j], len[k]));
				k++;
			}
			j++;
		}
		i++;
	}
}
