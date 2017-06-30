#include "libft.h"

void ft_print_struct()
{
    t_fun *rohan;
    rohan = malloc(sizeof(t_fun));
    rohan->charfun = 42;
    ft_putnbr(rohan);
}

int main(int argc, char const **argv) {
    /* code */
    return 0;
}
