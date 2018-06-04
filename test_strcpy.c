/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenedic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 10:22:09 by tbenedic          #+#    #+#             */
/*   Updated: 2018/06/01 10:26:09 by tbenedic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	char dst1[] = "Hello World";
	char dst2[] = "Hello World";
	const char src[] = "HeyThere";

	strcpy(dst1, src);
	printf("%s\n", dst1);
	ft_strcpy(dst2, src);
	printf("%s\n", dst2);

	return (0);
}
