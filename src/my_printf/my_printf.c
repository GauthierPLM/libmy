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

t_functions *init_functions(t_functions	functions[9])
{
  functions[0].letter = 'c';
  functions[0].function = &print_char;
  functions[1].letter = 's';
  functions[1].function = &print_string;
  functions[2].letter = 'S';
  functions[2].function = &print_formated_string;
  functions[3].letter = 'p';
  functions[3].function = &print_pointer;
  functions[4].letter = 'b';
  functions[4].function = &print_binary;
  functions[5].letter = 'd';
  functions[5].function = &print_int;
  functions[6].letter = 'l';
  functions[6].function = &print_long;
  functions[7].letter = 'h';
  functions[7].function = &print_short;
  functions[8].letter = 0;
  functions[8].function = NULL;
  return (functions);
}

int		my_print_formated(int fd, char *str, va_list vargs)
{
  int 		i;
  int 		j;
  int		printed;
  t_functions	func[9];

  init_functions(func);
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

int 	my_fprintf(int fd, char *str, ...)
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
