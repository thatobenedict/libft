/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenedic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 11:15:58 by tbenedic          #+#    #+#             */
/*   Updated: 2018/05/23 11:17:05 by tbenedic         ###   ########.fr       */
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
	
	printf("%i\n", isalnum(arg1));
	printf("%i\n\n", ft_isalnum(arg1));
	printf("%i\n", isalnum(arg2));
	printf("%i\n\n", ft_isalnum(arg2));
	printf("%i\n", isalnum(arg3));
	printf("%i\n\n", ft_isalnum(arg3));
	printf("%i\n", isalnum(arg4));
	printf("%i\n\n", ft_isalnum(arg4));
	printf("%i\n", isalnum(arg5));
	printf("%i\n", ft_isalnum(arg5));
	return (0);
}
