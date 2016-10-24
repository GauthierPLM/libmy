/*
** my_strlen.c for libmy in /home/pogam-_g/lib/my/src/str
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Tue Oct  7 10:54:21 2014 gauthier pogam-lemontagner
** Last update Tue Oct  7 10:54:23 2014 gauthier pogam-lemontagner
*/

#include <stddef.h>

size_t		my_strlen(const char *str)
{
  size_t	length;

  length = 0;
  while (*str != '\0')
    {
      str++;
      length++;
    }
  return (length);
}
