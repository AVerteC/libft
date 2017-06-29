#include "libft.h"

void ft_putnbr(int nb)
{
    if (nb < 0){
        ft_putchar('-');
        nb = -nb;
    }

    if (nb == 0)
        ft_putchar('0');

    if (nb / 10)
        ft_putnbr(nb / 10);

    ft_putchar(nb%10 + '0');
}

/*int main()
{
int nb;
int res;
nb = 42;
ft_putnbr(nb);
}








    if (nb == (0))
    {
    int nb = 48;
    return ft_putchar(nb);
    }

    if (nb == (1))
    {
    int nb = 49;
    return ft_putchar(nb);
    }

    if (nb == (2))
    {
    int nb = 50;
    return ft_putchar(nb);
    }

    if (nb == (3))
    {
    int nb = 51;
    return ft_putchar(nb);
    }

    if (nb == (4))
    {
    int nb = 52;
    return ft_putchar(nb);
    }

    if (nb == (5))
    {
    int nb = 53;
    return ft_putchar(nb);
    }

    if (nb == (6))
    {
    int nb = 54;
    return ft_putchar(nb);
    }

    if (nb == (7))
    {
    int nb = 55;
    return ft_putchar(nb);
    }

    if (nb == (8))
    {
    int nb = 56;
    return ft_putchar(nb);
    }

    if (nb == (9))
    {
    int nb = 57;
    return ft_putchar(nb);
    }
    */
