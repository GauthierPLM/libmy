/*
** xpipe.c for libmy in /home/pogam-_g/dev/C/lib/my/src
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Tue Mar  3 16:41:11 2015 gauthier pogam-lemontagner
** Last update Tue Mar  3 16:41:11 2015 gauthier pogam-lemontagner
*/

#include <libmy/my.h>
#include <stdlib.h>
#include <unistd.h>

void	xpipe(int fd[2])
{
  if (pipe(fd) == -1)
    {
      my_fprintf(STDERR_FILENO, "Can’t perform pipe");
      exit(EXIT_FAILURE);
    }
}
