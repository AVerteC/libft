#include "libft.h"

void ft_putstr(char *str)
{
	int s;

	s = 0;
	while (str[s] != '\0')
	{
			ft_putchar(str[s]);
			s++;
	}
}
