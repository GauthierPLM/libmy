/*
** number2_functions.c for libmy in /home/pogam-_g/dev/C/lib/my/src/my_printf
** 
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
** 
** Started on  Sat Feb 21 21:47:26 2015 Gauthier Pogam-Le Montagner
** Last update Sat Feb 21 21:47:27 2015 Gauthier Pogam-Le Montagner
*/

#include <stdarg.h>
#include <libmy/my.h>
#include <my_printf.h>

int	print_pointer(int fd, va_list vargs)
{
  return (my_putstr("0x", 0, fd)
	  + my_put_unsigned_nbr(va_arg(vargs, long), HEXADECIAML, fd));
}

int 	print_binary(int fd, va_list vargs)
{
  return (my_put_unsigned_nbr(va_arg(vargs, long), BINARY, fd));
}
