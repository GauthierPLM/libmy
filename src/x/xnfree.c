/*
** xnfree.c for libmy in /home/pogam-_g/dev/C/lib/my/src/x
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Fri Mar 04 15:23:05 2015 gauthier pogam-lemontagner
** Last update Fri Mar 04 15:23:06 2015 gauthier pogam-lemontagner
*/

#include <libmy/my.h>
#include <stdarg.h>

void		xnfree(int nb_ptr, ...)
{
  int		i;
  va_list	ap;
  void		*ptr;

  va_start(ap, nb_ptr);
  i = 0;
  while (i < nb_ptr)
    {
      ptr = va_arg(ap, void *);
      xfree(ptr);
      i++;
    }
  va_end(ap);
}
