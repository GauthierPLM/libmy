/*
** my_count_word.c for libmy in /home/pogam-_g/dev/C/lib/my/src/str
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Fri Jan 23 13:51:05 2015 gauthier pogam-lemontagner
** Last update Fri Jan 23 13:51:06 2015 gauthier pogam-lemontagner
*/

#include <stddef.h>

int	my_count_word_c(char *str, char separator)
{
  int	w;

  if (str == NULL)
    return (0);
  w = 1;
  while (*str != 0)
    if (*str++ == separator)
      {
	w++;
	while (*str && *str == separator)
	  str++;
      }
  return (w);
}
