/*
** my_strncat.c for libmy in /home/pogam-_g/lib/my/src/str
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Wed Oct  8 20:43:15 2014 gauthier pogam-lemontagner
** Last update Wed Oct  8 20:55:45 2014 gauthier pogam-lemontagner
*/

#include <stddef.h>

char		*my_strncat(char *dest, char *src, size_t n)
{
  size_t	i;
  size_t	j;

  i = 0;
  j = 0;
  while (dest[i] != '\0')
    i++;
  while (src[j] != '\0' && j < n)
    {
      dest[i] = src[j];
      i++;
      j++;
    }
  dest[i] = '\0';
  return (dest);
}
