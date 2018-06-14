/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenedic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 17:19:20 by tbenedic          #+#    #+#             */
/*   Updated: 2018/05/22 18:08:33 by tbenedic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

int		main(void)
{
	int arg1 = 'T';
	int arg2 = 't';
	int arg3 = 3;
	int arg4 = 23;
	int arg5 = 123;
	
	printf("%i\n", isprint(arg1));
	printf("%i\n\n", ft_isprint(arg1));
	printf("%i\n", isprint(arg2));
	printf("%i\n\n", ft_isprint(arg2));
	printf("%i\n", isprint(arg3));
	printf("%i\n\n", ft_isprint(arg3));
	printf("%i\n", isprint(arg4));
	printf("%i\n\n", ft_isprint(arg4));
	printf("%i\n", isprint(arg5));
	printf("%i\n", ft_isprint(arg5));
	return (0);
}
