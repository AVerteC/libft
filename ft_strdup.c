#include "libft.h"
#include <stdlib.h>
char *ft_strdup(char *src)
{
char *dest;
char *temp;
dest = malloc(ft_strlen(src) + 1);
temp = dest;
while((*temp++ = *src++)!='\0');
return dest;
}

/*
int main()
{
    char src[] = "acbsdfes";
ft_putstr(ft_strdup(src));
}
*/
