/*
** xclose.c for libmy in /home/pogam-_g/dev/C/lib/my/src/x
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Mon Mar 30 15:54:20 2015 gauthier pogam-lemontagner
** Last update Mon Mar 30 15:54:22 2015 gauthier pogam-lemontagner
*/

#include <stdlib.h>
#include <unistd.h>
#include <libmy/my.h>

int	xclose(int fd)
{
  if (close(fd) == -1)
    {
      my_fprintf(STDERR_FILENO, "Can't perform close.");
      exit(EXIT_FAILURE);
    }
  return (0);
}
