/*
** xopen.c for libmy in /home/pogam-_g/dev/C/lib/my/src/x
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Mon Mar 30 15:45:05 2015 gauthier pogam-lemontagner
** Last update Mon Mar 30 15:45:06 2015 gauthier pogam-lemontagner
*/

#include <fcntl.h>
#include <libmy/my.h>
#include <stdlib.h>

int		xopen(char *file, int oflags)
{
  int		fd;

  fd = open(file, oflags);
  if (fd == -1)
    {
      my_fprintf(STDERR_FILENO, "%s : Can't open file.\n", file);
      exit(EXIT_FAILURE);
    }
  return (fd);
}

int		xopens(char *file, int oflags, int sflags)
{
  int		fd;

  fd = open(file, oflags, sflags);
  if (fd == -1)
    {
      my_fprintf(STDERR_FILENO, "%s : Can't open file.\n", file);
      exit(EXIT_FAILURE);
    }
  return (fd);
}
