/*
** my_strdup.c for libmy in /home/pogam-_g/lib/my/src/
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Thu Oct  9 23:28:49 2014 gauthier pogam-lemontagner
** Last update Wed Dec  3 19:38:28 2014 gauthier pogam-lemontagner
*/

#include <malloc.h>
#include <libmy/my.h>

char	*my_strdup(char *src)
{
  char	*str;

  if ((str = malloc((size_t) (my_strlen(src) + 1))) == NULL)
    return (NULL);
  my_strcpy(str, src);
  return (str);
}
