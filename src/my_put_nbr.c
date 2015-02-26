/*
** my_put_nbr.c for libmy in /home/pogam-_g/lib/my/src/
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Tue Oct  7 10:52:20 2014 gauthier pogam-lemontagner
** Last update Sun Nov 16 17:27:47 2014 gauthier pogam-lemontagner
*/

#include "libmy/my.h"

int	my_put_nbr(long nbr, int fd)
{
  int	char_printed;
  long	div;

  div = 1;
  if (nbr < 0)
    {
      nbr = -nbr;
      my_putchar('-', fd);
    }
  while (nbr / div >= 10)
    div *= 10;
  char_printed = 0;
  while (div > 0)
    {
      my_putchar((char) (nbr / div + '0'), fd);
      nbr = nbr % div;
      div /= 10;
      char_printed++;
    }
  return (char_printed);
}
