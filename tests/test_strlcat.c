/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenedic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 12:38:55 by tbenedic          #+#    #+#             */
/*   Updated: 2018/06/01 16:36:12 by tbenedic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	char dst1[100] = "Hello";
	char dst2[100] = "Hello";
	const char src[] = "heyy";
	size_t dstsize = 15;

	printf("%zu\n", strlen(dst1));
	printf("%zu\n", strlcat(dst1, src, dstsize));
	printf("%s\n", strncat(dst2, src, dstsize));
	printf("%lu\n", strlen(dst2));
	return (0);
}
