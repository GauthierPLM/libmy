/*
** my_str_str.c for libmy in /home/pogam-_g/lib/my/src/
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Mon Oct  6 15:41:10 2014 gauthier pogam-lemontagner
** Last update Wed Dec  3 19:38:47 2014 gauthier pogam-lemontagner
*/

#include "libmy/my.h"

char	*my_str_str(char *str, char *to_find)
{
  while (*str)
    {
      if (my_strncmp(str, to_find, my_strlen(to_find)) == 0)
	return (str);
      str++;
    }
  return (0);
}
