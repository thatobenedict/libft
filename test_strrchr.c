/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenedic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 11:47:48 by tbenedic          #+#    #+#             */
/*   Updated: 2018/05/31 12:03:36 by tbenedic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	char s[] = "Hello World";
	int c = 'd';
	char *ret1;
	char *ret2;
	ret1 = strrchr(s, c);
	printf("%s\n", ret1);
	ret2 = ft_strrchr(s, c);
	printf("%s\n", ret2);

	return (0);
}
