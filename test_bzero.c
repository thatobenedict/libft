/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenedic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 09:59:08 by tbenedic          #+#    #+#             */
/*   Updated: 2018/05/29 10:24:29 by tbenedic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	char s[] = "Hello World abcdefghijklmnopqrstuvwxyz";
	size_t n = 2;

	bzero(s, n);
	printf("%s\n", s);
	ft_bzero(s, n);
	printf("%s\n", s);

	return (0);
}
