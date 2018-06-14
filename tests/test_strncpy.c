/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenedic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 10:28:53 by tbenedic          #+#    #+#             */
/*   Updated: 2018/06/04 14:37:01 by tbenedic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	char dst1[] = "Hello World";
	char dst2[] = "Hello World";
	const char src[] = "Hey";
	size_t len = 3;

	printf("%s\n", strncpy(dst1, src, len));
	printf("%s\n", ft_strncpy(dst2, src, len));

	return (0);
}
