/*
** my_put_unsigned_nbr.c for libmy in /home/pogam-_g/dev/C/lib/my/src/put
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Mon Dec 22 15:33:46 2014 gauthier pogam-lemontagner
** Last update Mon Dec 22 15:33:57 2014 gauthier pogam-lemontagner
*/

#include "libmy/my.h"

size_t		my_put_unsigned_nbr(unsigned long nbr, char *base, int fd)
{
  unsigned long	div;
  size_t	printed;
  size_t	size_base;

  printed = 0;
  size_base = my_strlen(base);
  div = 1;
  while (nbr / div >= size_base)
    div *= size_base;
  while (div > 0)
    {
      my_putchar(base[nbr / div], fd);
      nbr = nbr % div;
      div /= size_base;
      printed++;
    }
  return (printed);
}
