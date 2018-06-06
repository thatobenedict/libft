/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putendl_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenedic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 10:16:51 by tbenedic          #+#    #+#             */
/*   Updated: 2018/06/06 12:01:23 by tbenedic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	char s[] = "the cake is a lie !\0I'm hidden lol\r\n";
	int fd = 1;
	
	printf("%c", '|');
	ft_putendl_fd(s, fd);
	printf("%c", '|');
	return (0);
}
