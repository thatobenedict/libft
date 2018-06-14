/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenedic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 16:55:50 by tbenedic          #+#    #+#             */
/*   Updated: 2018/06/05 11:53:14 by tbenedic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	int i = 0;
	int j;

	const char *h[] = {"MZIRIBMZIRIBMZP", " ", "HelloWorld", "Hello World", "	HelloWorld", " Hello	World", "$H$el$loW$orld", "HelloWorld	", "			HelloWorld			", "H	e	l	l	o	W	o	r	l	d	", "HiEarth"};

	const char *n[] = {"MZIRIBMZP", "ello", "el lo", " ello", "	ello", "	ello	", "$lo", "el$", " "};

	while (i <= 10)
	{
		j = 0;
		while (j <= 8)
		{
			printf("%d %d\n",i,j);
	 		printf("%s\n", strstr(h[i],n[j]));
			printf("%s\n\n", ft_strstr(h[i],n[j]));
			j++;
		}
		i++;
	}
}
