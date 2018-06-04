/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenedic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 12:02:48 by tbenedic          #+#    #+#             */
/*   Updated: 2018/05/23 12:06:41 by tbenedic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

int		main(void)
{
	int arg1 = 'T';
	int arg2 = 't';
	int arg3 = '3';
	int arg4 = '&';
	int arg5 = 123;
	
	printf("%i\n", isalpha(arg1));
	printf("%i\n\n", ft_isalpha(arg1));
	printf("%i\n", isalpha(arg2));
	printf("%i\n\n", ft_isalpha(arg2));
	printf("%i\n", isalpha(arg3));
	printf("%i\n\n", ft_isalpha(arg3));
	printf("%i\n", isalpha(arg4));
	printf("%i\n\n", ft_isalpha(arg4));
	printf("%i\n", isalpha(arg5));
	printf("%i\n", ft_isalpha(arg5));
	return (0);
}
