/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenedic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 16:43:03 by tbenedic          #+#    #+#             */
/*   Updated: 2018/06/14 15:49:30 by tbenedic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>


int		main(void)
{
	size_t i = 0;
	size_t j;
	size_t k;

	const char *h[] = {"MZIRIBMZIRIBMZP"," ", "HelloWorld", "Hello World", "	HelloWorld", " Hello	World", "$H$el$loW$orld", "HelloWorld	", "			HelloWorld			", "H	e	l	l	o	W	o	r	l	d	", "HiEarth"};

	const char *n[] = {"MZIRIBMZP","ello", "el lo", " ello", "	ello", "	ello	", "$lo", "el$", " "};

	size_t len[] = {15, 3, 2};

	while (i <= 10)
	{
		j = 0;
		while (j <= 8)
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
