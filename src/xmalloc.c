/*
** xmalloc.c for libmy in /home/pogam-_g/dev/C/lib/my/src
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Tue Jan 20 23:45:21 2015 gauthier pogam-lemontagner
** Last update Tue Jan 20 23:45:23 2015 gauthier pogam-lemontagner
*/

#include <libmy/my.h>
#include <stdlib.h>

void	*xmalloc(size_t size)
{
  void	*ptr;

  if ((ptr = malloc((size_t) size)) == NULL)
    {
      my_fprintf(2, "Can’t perform malloc");
      exit(1);
    }
  return (ptr);
}
