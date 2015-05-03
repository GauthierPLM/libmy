/*
** my_rev_str.c for libmy in /home/pogam-_g/lib/my/src/str
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Tue Oct  7 18:56:06 2014 gauthier pogam-lemontagner
** Last update Wed Dec  3 19:37:26 2014 gauthier pogam-lemontagner
*/

#include "libmy/my.h"

char		*my_rev_str(char *str)
{
  unsigned int	i;
  size_t	nb;
  char		tmp;

  nb = my_strlen(str) / 2;
  i = 0;
  while (i < nb)
    {
      tmp = str[i];
      str[i] = str[my_strlen(str) - 1 - i];
      str[my_strlen(str) - 1 - i] = tmp;
      i++;
    }
  return (str);
}
