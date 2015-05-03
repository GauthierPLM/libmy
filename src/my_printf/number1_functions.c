/*
** number1_functions.c for libmy in /home/pogam-_g/dev/C/lib/my/src/my_printf
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Sat Feb 21 21:47:20 2015 Gauthier Pogam-Le Montagner
** Last update Sat Feb 21 21:47:20 2015 Gauthier Pogam-Le Montagner
*/

#include <libmy/my.h>
#include <stdarg.h>

size_t	print_short(int fd, va_list vargs)
{
  return (my_putnbr((short) va_arg(vargs, int), fd));
}

size_t	print_int(int fd, va_list vargs)
{
  return (my_putnbr(va_arg(vargs, int), fd));
}

size_t	print_long(int fd, va_list vargs)
{
  return (my_putnbr(va_arg(vargs, long), fd));
}
