/*
** my_put_unsigned_nbr.c for libmy in /home/pogam-_g/dev/C/lib/my/src
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Mon Dec 22 15:33:46 2014 gauthier pogam-lemontagner
** Last update Mon Dec 22 15:33:57 2014 gauthier pogam-lemontagner
*/

#include "libmy/my.h"

int		my_put_unsigned_nbr(unsigned long nbr, char *base, int fd)
{
  unsigned long	div;
  int		i;
  unsigned int	size_base;

  i = 0;
  size_base = (unsigned int) my_strlen(base);
  div = 1;
  while (nbr / div >= size_base)
    div *= size_base;
  while (div > 0)
    {
      my_putchar(base[nbr / div], fd);
      nbr = nbr % div;
      div /= size_base;
      i++;
    }
  return (i);
}
