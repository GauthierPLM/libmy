/*
** my_str_is_alpha.c for libmy in /home/pogam-_g/lib/my/src/is
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Wed Oct  8 16:02:27 2014 gauthier pogam-lemontagner
** Last update Fri Oct 10 16:01:41 2014 gauthier pogam-lemontagner
*/

#include <libmy/my.h>

int		my_str_is_alpha(char *str)
{
  unsigned int	i;

  i = 0;
  while (('A' <= str[i] && str[i] <= 'Z') || ('a' <= str[i] && str[i] <= 'z'))
    i++;
  return (i == my_strlen(str) ? 1 : 0);
}
