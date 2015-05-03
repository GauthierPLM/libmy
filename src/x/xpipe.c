/*
** xpipe.c for libmy in /home/pogam-_g/dev/C/lib/my/src/x
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Tue Mar  3 16:41:11 2015 gauthier pogam-lemontagner
** Last update Tue Mar  3 16:41:11 2015 gauthier pogam-lemontagner
*/

#include <libmy/my.h>

int	xpipe(int fd[2])
{
  if (pipe(fd) == -1)
    {
      my_fprintf(STDERR_FILENO, "Can’t perform pipe");
      return (-1);
    }
  return (0);
}
