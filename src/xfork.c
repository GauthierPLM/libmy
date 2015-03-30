/*
** xfork.c for minishell2 in /home/pogam-_g/dev/C/lib/my/src
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Mon Mar  2 15:31:09 2015 gauthier pogam-lemontagner
** Last update Mon Mar  2 15:31:10 2015 gauthier pogam-lemontagner
*/

#include <unistd.h>
#include <libmy/my.h>
#include <stdlib.h>

int	xfork(void)
{
  int	pid;

  if ((pid = fork()) == -1)
    {
      my_fprintf(STDERR_FILENO, "Can’t perform fork");
      exit(EXIT_FAILURE);
    }
  return (pid);
}
