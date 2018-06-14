/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenedic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 10:09:41 by tbenedic          #+#    #+#             */
/*   Updated: 2018/05/23 10:10:13 by tbenedic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

int		main(void)
{
	int arg1 = 'T';
	int arg2 = ' ';
	int arg3 = 3;
	int arg4 = 23;
	int arg5 = 128;

	printf("%i\n", isascii(arg1));
	printf("%i\n\n", ft_isascii(arg1));
	printf("%i\n", isascii(arg2));
	printf("%i\n\n", ft_isascii(arg2));
	printf("%i\n", isascii(arg3));
	printf("%i\n\n", ft_isascii(arg3));
	printf("%i\n", isascii(arg4));
	printf("%i\n\n", ft_isascii(arg4));
	printf("%i\n", isascii(arg5));
	printf("%i\n", ft_isascii(arg5));
	return (0);
}
