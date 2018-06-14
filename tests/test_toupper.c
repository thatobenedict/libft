/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_toupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenedic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 17:05:49 by tbenedic          #+#    #+#             */
/*   Updated: 2018/06/04 15:22:55 by tbenedic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

int		main(void)
{
	int arg1 = 'T';
	int arg2 = 't';
	int arg3 = '&';
	int arg4 = ' ';

	printf("%i\n", toupper(arg1));
	printf("%i\n\n", ft_toupper(arg1));
	printf("%i\n", toupper(arg2));
	printf("%i\n\n", ft_toupper(arg2));
	printf("%i\n", toupper(arg3));
	printf("%i\n\n", ft_toupper(arg3));
	printf("%i\n", toupper(arg4));
	printf("%i\n", ft_toupper(arg4));
	return (0);
}
