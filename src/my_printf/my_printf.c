/*
** my_printf.c for libmy in /home/pogam-_g/dev/C/lib/my/src/my_printf
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Mon Dec 22 15:32:40 2014 gauthier pogam-lemontagner
** Last update Mon Dec 22 15:32:42 2014 gauthier pogam-lemontagner
*/

#include <libmy/my.h>
#include <my_printf.h>

t_functions	*init_functions()
{
  static t_functions functions[] = {
    {'c', &print_char},
    {'s', &print_string},
    {'S', &print_formated_string},
    {'p', &print_pointer},
    {'b', &print_binary},
    {'d', &print_int},
    {'l', &print_long},
    {'h', &print_short},
    {0, NULL}
  };

  return (functions);
}

int		my_print_formated(int fd, char *str, va_list vargs)
{
  int 		i;
  int 		j;
  int		printed;
  t_functions	func[9];

  init_functions();
  i = 0;
  printed = 0;
  while (str[i] != 0)
    {
      if (str[i] != '%')
	printed += my_putchar(str[i], fd);
      else
	{
	  j = 0;
	  while (func[j].letter != 0 && func[j].letter != str[i + 1])
	    j++;
	  printed += func[j].letter != 0 ? func[j].function(fd, vargs)
					 : my_putchar(str[i], fd);
	  i++;
	}
      i++;
    }
  return (printed);
}

int 		my_fprintf(int fd, char *str, ...)
{
  int 		i;
  int 		simple;
  int		printed;
  va_list 	vargs;

  i = 0;
  simple = 0;
  while (str[i])
    if (str[i++] == '%')
      simple = 1;
  if (simple == 0)
    return (my_putstr(str, 0, fd));
  else
    {
      va_start(vargs, str);
      printed = my_print_formated(fd, str, vargs);
      va_end(vargs);
    }
  return (printed);
}

int 		my_printf(char *str, ...)
{
  int 		i;
  int		fd;
  int 		simple;
  int		printed;
  va_list 	vargs;

  i = 0;
  simple = 0;
  fd = 1;
  while (str[i])
    if (str[i++] == '%')
      simple = 1;
  if (simple == 0)
    return (my_putstr(str, 0, fd));
  else
    {
      va_start(vargs, str);
      printed = my_print_formated(fd, str, vargs);
      va_end(vargs);
    }
  return (printed);
}
