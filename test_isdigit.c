/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isdigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenedic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 11:21:34 by tbenedic          #+#    #+#             */
/*   Updated: 2018/05/23 11:54:35 by tbenedic         ###   ########.fr       */
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
	
	printf("%i\n", isdigit(arg1));
	printf("%i\n\n", ft_isdigit(arg1));
	printf("%i\n", isdigit(arg2));
	printf("%i\n\n", ft_isdigit(arg2));
	printf("%i\n", isdigit(arg3));
	printf("%i\n\n", ft_isdigit(arg3));
	printf("%i\n", isdigit(arg4));
	printf("%i\n\n", ft_isdigit(arg4));
	printf("%i\n", isdigit(arg5));
	printf("%i\n", ft_isdigit(arg5));
	return (0);
}
