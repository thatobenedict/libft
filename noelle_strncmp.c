/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   noelle_strncmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenedic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 16:22:04 by tbenedic          #+#    #+#             */
/*   Updated: 2018/05/22 16:28:11 by tbenedic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < n)
        i++;
        //while loop ends here
        //next step checks whether the ascii value is greater or smaller or null ie the same at this position
	if (s1[i] > s2[i])
		return (1);
	else if (s1[i] < s2[i])
		return (-1);
	else
		return (0);

}
int main ()
{
   const char haystack[] = "Point";
   const char needle[] = "Pointless";
   int length;
   int ret;
   int ret1;
   
   length = 20;

   ret = ft_strncmp(haystack, needle, length);
   ret1 = strncmp(haystack, needle, length);

   printf("The substring is: %i\n", ret);
   printf("The substring is: %i\n", ret1);
   
   return(0);
}
