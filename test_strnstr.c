/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenedic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 16:43:03 by tbenedic          #+#    #+#             */
/*   Updated: 2018/06/01 09:31:38 by tbenedic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	size_t i = 0;
	size_t j;
	size_t k;

	const char *h[] = {" ", "HelloWorld", "Hello World", "	HelloWorld", " Hello	World", "$H$el$loW$orld", "HelloWorld	", "			HelloWorld			", "H	e	l	l	o	W	o	r	l	d	", "HiEarth"};

	const char *n[] = {"ello", "el lo", " ello", "	ello", "	ello	", "$lo", "el$", " "};

	size_t len[] = {0, 3, 10};

	while (i <= 9)
	{
		j = 0;
		while (j <= 7)
		{
			k = 0;
			while (k <= 2)
			{
				printf("%zu %zu %zu\n",i,j,k);
				printf("%s\n", strnstr(h[i],n[j], len[k]));
				printf("%s\n\n", ft_strnstr(h[i],n[j], len[k]));
				k++;
			}
			j++;
		}
		i++;
	}
}
