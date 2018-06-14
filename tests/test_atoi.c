/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenedic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 12:09:35 by tbenedic          #+#    #+#             */
/*   Updated: 2018/05/23 18:01:39 by tbenedic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	const char arg1[] = "9";
	const char arg2[] = "-9";
	const char arg3[] = "-09";
	const char arg4[] = "0-9";
	const char arg5[] = "--9";
	const char arg6[] = "ghfhh-9";
	const char arg7[] = "009";
	const char arg8[] = "-009";
	const char arg9[] = "900000";
	const char arg00[] = "900 000";
	const char arg01[] = "  900000";
	const char arg02[] = "  -900000";
	
	printf("%i\n", atoi(arg1));
	printf("%i\n\n", ft_atoi(arg1));
	printf("%i\n", atoi(arg2));
	printf("%i\n\n", ft_atoi(arg2));
	printf("%i\n", atoi(arg3));
	printf("%i\n\n", ft_atoi(arg3));
	printf("%i\n", atoi(arg4));
	printf("%i\n\n", ft_atoi(arg4));
	printf("%i\n", atoi(arg5));
	printf("%i\n\n", ft_atoi(arg5));
	printf("%i\n", atoi(arg6));
	printf("%i\n\n", ft_atoi(arg6));
	printf("%i\n", atoi(arg7));
	printf("%i\n\n", ft_atoi(arg7));	
	printf("%i\n", atoi(arg8));
	printf("%i\n\n", ft_atoi(arg8));	
	printf("%i\n", atoi(arg9));
	printf("%i\n\n", ft_atoi(arg9));	
	printf("%i\n", atoi(arg00));
	printf("%i\n\n", ft_atoi(arg00));
	printf("%i\n", atoi(arg01));
	printf("%i\n\n", ft_atoi(arg01));
	printf("%i\n", atoi(arg02));
	printf("%i\n\n", ft_atoi(arg02));
	return (0);
}
