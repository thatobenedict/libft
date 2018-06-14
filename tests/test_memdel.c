
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	size_t *ptr;
	size_t *ptr1;
	int 	i = 0;
	ptr1 = (size_t*)ft_memalloc(sizeof(size_t) * 10);
	while (i < 5)
	  {
	  printf("i is %zu\n", ptr1[i]);
	  i++;
	  }
	
	i = 0;
	ptr = (size_t*)memdel(sizeof(size_t) * 10);
	while (i < 5)
	{
		printf("i is %zu\n", ptr[i]);
		i++;
		}
	return (0);
}
