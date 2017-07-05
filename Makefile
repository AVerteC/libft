NAME = libft.a
FILESC = ft_putstr.c ft_putchar.c ft_strlen.c ft_swap.c ft_recursive_factorial.c ft_is_negative.c ft_ultimate_div_mod.c ft_putnbr.c ft_atoi.c ft_strlen.c
FILESO = ft_putstr.o ft_putchar.o ft_strlen.o ft_swap.o ft_recursive_factorial.o ft_is_negative.o ft_ultimate_div_mod.o ft_putnbr.o ft_atoi.o ft_strlen.o

HEADERS = includes
all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -I $(HEADERS) -c $(FILESC)
	ar rc $(NAME) $(FILESO)
	ranlib $(NAME)

clean:
	rm -f $(FILESO)

fclean: clean
	rm -f $(NAME)

re: fclean all
