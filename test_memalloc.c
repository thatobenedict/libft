
#include "libft.h"

int		main(void)
{
	size_t *ptr;
	size_t *ptr1;
	int 	i = 0;
	while (i < 10)
	  {
	  printf("i is %zu\n", ptr[i]);
	  i++;
	  }
	i = 0;
	ptr = (size_t*)ft_memalloc(sizeof(size_t) * 10);
	while (i < 10)
	{
		printf("i is %zu\n", ptr[i]);
		i++;
		}
	return (0);
}
