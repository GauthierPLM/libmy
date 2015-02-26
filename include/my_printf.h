/*
** my_printf.h for libmy in /home/pogam-_g/dev/C/lib/my/include
** 
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
** 
** Started on  Mon Dec 22 15:34:36 2014 gauthier pogam-lemontagner
** Last update Mon Dec 22 15:34:40 2014 gauthier pogam-lemontagner
*/

#ifndef MY_PRINTF_H_
#define MY_PRINTF_H_

#include <stdarg.h>


#define BINARY		"01"
#define HEXADECIAML	"0123456789abcdef"

typedef struct	s_functions
{
  char		letter;
  int		(*function)(int fd, va_list vargs);
}		t_functions;

int 	print_binary(int fd, va_list vargs);

int	print_char(int fd, va_list vargs);

int	print_formated_string(int fd, va_list vargs);

int	print_int(int fd, va_list vargs);

int	print_long(int fd, va_list vargs);

int	print_pointer(int fd, va_list vargs);

int	print_short(int fd, va_list vargs);

int	print_string(int fd, va_list vargs);

#endif
