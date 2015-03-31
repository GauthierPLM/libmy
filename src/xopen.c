/*
** xopen.c for libmy in /home/pogam-_g/dev/C/lib/my/src
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
#include <stdarg.h>
#include <unistd.h>

int		xopen(char *file, int oflags, ...)
{
  int		fd;
  va_list	va_args;

  va_start(va_args, oflags);
  if (va_args == NULL)
    fd = open(file, oflags);
  else
    fd = open(file, oflags, va_args);
  if (fd == -1)
    {
      my_fprintf(STDERR_FILENO, "%s : Can't open file.\n", file);
      exit(EXIT_FAILURE);
    }
  va_end(va_args);
  return (fd);
}
