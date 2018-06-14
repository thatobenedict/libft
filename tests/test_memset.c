/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenedic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 16:09:45 by tbenedic          #+#    #+#             */
/*   Updated: 2018/05/29 11:11:57 by tbenedic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	char str[] = "Hello World";
	int c = '$';
	size_t len = 12;

	memset(str, c, len);
	printf("%s\n", str);
	ft_memset(str, c, len);
	printf("%s\n", str);

	return (0);
}
