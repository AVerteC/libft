#include "libft.h"

int ft_sqrt(int nb)
{
  int mult;
  mult = 1;

  while (mult * mult < nb)
  {
    mult++;
  }

  if ((nb % mult) != 1)
          return(mult);

  else
        return(0);
}
