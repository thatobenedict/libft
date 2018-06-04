/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenedic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 15:03:48 by tbenedic          #+#    #+#             */
/*   Updated: 2018/06/04 09:32:46 by tbenedic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	char dst1[] = "Hello World";
	char dst2[] = "Hello World";
	//const char src[] = "HeyThere";
	size_t len = 10;

	memmove(dst1 + 1, dst1, len);
	printf("%s\n", dst1);
	ft_memmove(dst2 + 1, dst2, len);
	printf("%s\n", dst2);

	return (0);
}
