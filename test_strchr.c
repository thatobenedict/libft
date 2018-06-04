/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenedic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 10:15:39 by tbenedic          #+#    #+#             */
/*   Updated: 2018/05/31 11:42:08 by tbenedic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	char s[] = "Hello World";
	int c = 'e';
	char *ret1;
	char *ret2;
	ret1 = strchr(s, c);
	printf("%s\n", ret1);
	ret2 = ft_strchr(s, c);
	printf("%s\n", ret2);

	return (0);
}
