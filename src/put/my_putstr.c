/*
** my_putstr.c for libmy in /home/pogam-_g/lib/my/src/put
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Tue Oct  7 10:51:39 2014 gauthier pogam-lemontagner
** Last update Wed Oct  8 21:21:46 2014 gauthier pogam-lemontagner
*/

#include <unistd.h>
#include "libmy/my.h"

size_t		my_putstr(char *str, int escape, int fd)
{
  size_t	i;

  i = 0;
  if (escape == 0)
    i = (size_t) write(fd, str, my_strlen(str));
  else
    while (*str)
      {
	if (!my_is_printable(*str))
	  {
	    my_putchar('\\', fd);
	    if ((int) *str < 64)
	      my_putchar('0', fd);
	    if ((int) *str < 8)
	      my_putchar('0', fd);
	    my_put_nbr_base(*str, "01234567", fd);
	  }
	else
	  my_putchar(*str, fd);
	str++;
      }
  return (i);
}
