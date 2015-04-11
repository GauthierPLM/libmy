/*
** my_cut_str_after_char.c for libmy in /home/pogam-_g/dev/C/lib/my/src
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Fri Apr  3 18:21:47 2015 gauthier pogam-lemontagner
** Last update Fri Apr  3 18:21:48 2015 gauthier pogam-lemontagner
*/

#include <libmy/my.h>

char	*my_cut_str_after_char(char *str, char endchar)
{
  char	*new_str;
  int	i;

  i = 0;
  while (str[i] != endchar)
    ++i;
  new_str = xmalloc(sizeof(char) * (i + 1));
  new_str[i] = 0;
  my_strncpy(new_str, str, i);
  return (new_str);
}
