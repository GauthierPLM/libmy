/*
** xfork.c for minishell2 in /home/pogam-_g/dev/C/lib/my/src/x
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Mon Mar  2 15:31:09 2015 gauthier pogam-lemontagner
** Last update Mon Mar  2 15:31:10 2015 gauthier pogam-lemontagner
*/

#include <unistd.h>
#include <libmy/my.h>

#if __STRICT_ANSI__
int	xfork()
#else
pid_t	xfork()
#endif
{
#if __STRICT_ANSI__
  int	pid;
  #else
  pid_t	pid;
#endif

  if ((pid = fork()) == -1)
    {
      my_fprintf(STDERR_FILENO, "Can’t perform fork");
      return (-1);
    }
  return (pid);
}
