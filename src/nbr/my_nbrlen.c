/*
** my_nbrlen.c for libmy in /home/pogam-_g/dev/C/lib/my/src/nbr
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Wed Mar 25 09:12:55 2015 gauthier pogam-lemontagner
** Last update Wed Mar 25 09:13:03 2015 gauthier pogam-lemontagner
*/

#include <stddef.h>

size_t	my_nbrlen(long number)
{
  size_t	len;

  len = 0;
  while (number > 0)
    {
      number /= 10;
      len++;
    }
  return (len);
}
