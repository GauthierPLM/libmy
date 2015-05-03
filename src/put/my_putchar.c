/*
** my_putchar.c for libmy in /home/pogam-_g/lib/my/src/put
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Tue Oct  7 10:50:04 2014 gauthier pogam-lemontagner
** Last update Tue Oct  7 10:50:26 2014 gauthier pogam-lemontagner
*/

#include <unistd.h>

size_t	my_putchar(char c, int fd)
{
  return ((size_t) (write(fd, &c, 1)));
}
