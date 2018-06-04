/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memccpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenedic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 15:00:21 by tbenedic          #+#    #+#             */
/*   Updated: 2018/06/03 15:48:58 by tbenedic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	char dst1[22] = "HellThere";
	char dst2[22] = "HellThere";
	char src[] = "ThatoBen";
	int c = 't';
	//size_t n = strlen(src) + 1;
	size_t n = 5;

	memccpy(dst1, src, c, n);
	printf("|%s|\n", dst1);
	ft_memccpy(dst2, src, c, n);
	printf("|%s|\n", dst2);

	return (0);
}
