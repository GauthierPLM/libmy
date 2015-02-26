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

int	print_short(int fd, va_list vargs)
{
  return (my_put_nbr((short) va_arg(vargs, int), fd));
}

int	print_int(int fd, va_list vargs)
{
  return (my_put_nbr(va_arg(vargs, int), fd));
}

int	print_long(int fd, va_list vargs)
{
  return (my_put_nbr(va_arg(vargs, long), fd));
}
