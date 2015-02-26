/*
** my_put_nbr_base.c for libmy in /home/pogam-_g/lib/my/src/
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Wed Oct  8 23:28:39 2014 gauthier pogam-lemontagner
** Last update Sun Nov 16 17:27:35 2014 gauthier pogam-lemontagner
*/

#include "libmy/my.h"

int	my_put_nbr_base(long nbr, char *base, int fd)
{
  int	char_printed;
  long	div;
  int	size_base;

  div = 1;
  size_base = my_strlen(base);
  if (nbr < 0)
    {
      nbr = -nbr;
      my_putchar('-', fd);
    }
  while (nbr / div >= size_base)
    div *= size_base;
  char_printed = 0;
  while (div > 0)
    {
      my_putchar(base[nbr / div], fd);
      nbr = nbr % div;
      div /= size_base;
      char_printed++;
    }
  return (char_printed);
}
