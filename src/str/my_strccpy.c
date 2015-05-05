/*
** my_strccpy.c for libmy in /home/pogam-_g/dev/C/lib/my/src/str
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Fri Apr  3 18:21:47 2015 gauthier pogam-lemontagner
** Last update Fri Apr  3 18:21:48 2015 gauthier pogam-lemontagner
*/

#include <libmy/my.h>

int	my_strccpy_len(char *str, char endchar)
{
  int	i;

  i = 0;
  while (str[i] && str[i] != endchar)
    ++i;
  if (i > 0 && str[i - 1] == '\\')
    i += my_strccpy_len(&str[i], endchar);
  return (i);
}

char	*my_strccpy(char *str, char endchar)
{
  char	*new_str;
  int	len;

  len = my_strccpy_len(str, endchar);
  new_str = xmalloc(sizeof(char) * (len + 1));
  new_str[len] = 0;
  my_strncpy(new_str, str, len);
  return (new_str);
}
