/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenedic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 15:32:42 by tbenedic          #+#    #+#             */
/*   Updated: 2018/05/30 15:48:33 by tbenedic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	char s[] = "Hello World";
	int c = 'e';
	size_t n = 0;
		//strlen(s) + 1;
	char *ret1;
	char *ret2;
	ret1 = memchr(s, c, n);
	printf("%s\n", ret1);
	ret2 = ft_memchr(s, c, n);
	printf("%s\n", ret2);

	return (0);
}
