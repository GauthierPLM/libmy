/*
** chars_functions.c for libmy in /home/pogam-_g/dev/C/lib/my/src/my_printf
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Sat Feb 21 21:44:54 2015 Gauthier Pogam-Le Montagner
** Last update Sat Feb 21 21:44:55 2015 Gauthier Pogam-Le Montagner
*/

#include <stdarg.h>
#include <libmy/my.h>

size_t	print_char(int fd, va_list vargs)
{
  return (my_putchar((char) va_arg(vargs, int), fd));
}

size_t	print_formated_string(int fd, va_list vargs)
{
  return (my_putstr(va_arg(vargs, char *), 1, fd));
}

size_t	print_string(int fd, va_list vargs)
{
  return (my_putstr(va_arg(vargs, char *), 0, fd));
}
