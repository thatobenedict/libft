/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_tolower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenedic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 14:30:28 by tbenedic          #+#    #+#             */
/*   Updated: 2018/05/22 17:16:53 by tbenedic         ###   ########.fr       */
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

	printf("%i\n", tolower(arg1));
	printf("%i\n\n", ft_tolower(arg1));
	printf("%i\n", tolower(arg2));
	printf("%i\n\n", ft_tolower(arg2));
	printf("%i\n", tolower(arg3));
	printf("%i\n\n", ft_tolower(arg3));
	printf("%i\n", tolower(arg4));
	printf("%i\n", ft_tolower(arg4));
	return (0);
}
