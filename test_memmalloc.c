/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memmalloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenedic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 10:00:02 by tbenedic          #+#    #+#             */
/*   Updated: 2018/06/05 10:23:19 by tbenedic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	size_t i = 0;
	size_t n = 1;

while (i <= 4)
{
	printf("%zu\n", n);
	printf("%zu\n\n", (size_t)ft_memmalloc(n));
	i++;
}
	return (0);
}