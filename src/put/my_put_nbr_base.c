/*
** my_put_nbr_base.c for libmy in /home/pogam-_g/lib/my/src/put
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Wed Oct  8 23:28:39 2014 gauthier pogam-lemontagner
** Last update Sun Nov 16 17:27:35 2014 gauthier pogam-lemontagner
*/

#include "libmy/my.h"

size_t		my_put_nbr_base(long nbr, char *base, int fd)
{
  size_t	printed;
  unsigned long	div;
  size_t	size_base;

  div = 1;
  size_base = my_strlen(base);
  if (nbr < 0)
    {
      nbr = -nbr;
      my_putchar('-', fd);
    }
  while (nbr / div >= size_base)
    div *= size_base;
  printed = 0;
  while (div > 0)
    {
      my_putchar(base[nbr / div], fd);
      nbr = nbr % div;
      div /= size_base;
      printed++;
    }
  return (printed);
}
