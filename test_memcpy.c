/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenedic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 12:30:39 by tbenedic          #+#    #+#             */
/*   Updated: 2018/05/29 13:55:24 by tbenedic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	char dst1[] = "Hello World";
	char dst2[] = "Hello World";
	const char src[] = "HeyThere";
	size_t n = strlen(src) + 1;

	memcpy(dst1, src, n);
	printf("%s\n", dst1);
	ft_memcpy(dst2, src, n);
	printf("%s\n", dst2);

	return (0);
}
