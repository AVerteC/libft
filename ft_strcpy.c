#include "libft.h"
char *ft_strcpy(char *dest, char *src)
{
    char *orig = dest;
    while((*dest++ = *src++)!='\0');
    return orig;
}


int main()
{
    char k[] = "kea";
    char e[] = "   ";
ft_putstr(ft_strcpy(e, k));
}
