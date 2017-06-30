#ifndef LIBFT_H
#define LIBFT_H
#include <unistd.h>
#include <stdio.h>
typedef struct s_fun
{
    int intfun;
    char charfun;
} t_fun;
int ft_putchar(char c);
int ft_strlen(char *str);
void ft_swap(int *a, int *b);
void ft_putstr(char *str);
void ft_is_negative(int n);
int ft_recursive_factorial(int nb);
void ft_ultimate_div_mod(int *a, int *b);
void ft_putnbr(int nb);
void ft_atoi(char *str);
#endif
