/*
** xfree.c for libmy in /home/pogam-_g/dev/C/lib/my/src/x
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Fri Mar 04 15:23:05 2015 gauthier pogam-lemontagner
** Last update Fri Mar 04 15:23:06 2015 gauthier pogam-lemontagner
*/

#include <malloc.h>

void	xfree(void *ptr)
{
  if (ptr != NULL)
    free(ptr);
}
