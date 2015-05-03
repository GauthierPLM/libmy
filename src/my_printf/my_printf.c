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

t_functions	*init_functions(t_functions func[])
{
  func[0].letter = 'c';
  func[0].function = &print_char;
  func[1].letter = 's';
  func[1].function = &print_string;
  func[2].letter = 'S';
  func[2].function = &print_formated_string;
  func[3].letter = 'p';
  func[3].function = &print_pointer;
  func[4].letter = 'b';
  func[4].function = &print_binary;
  func[5].letter = 'd';
  func[5].function = &print_int;
  func[6].letter = 'l';
  func[6].function = &print_long;
  func[7].letter = 'h';
  func[7].function = &print_short;
  func[8].letter = 0;
  func[8].function = NULL;
  return (func);
}

size_t		my_print_formated_mod(int fd, char *str, va_list vargs, int i)
{
  int		j;
  t_functions	func[9];
  size_t	printed;

  init_functions(func);
  j = 0;
  while (func[j].letter != 0 && func[j].letter != str[i + 1])
    j++;
  if (func[j].letter != 0)
    {
      printed = func[j].function(fd, vargs);
    }
  else
    {
      printed = my_putchar(str[i], fd);
      printed += my_putchar(str[i + 1], fd);
    }
  return (printed);
}

size_t		my_print_formated(int fd, char *str, va_list vargs)
{
  int 		i;
  size_t	printed;

  i = 0;
  printed = 0;
  while (str[i] != 0)
    {
      if (str[i] != '%')
	printed += my_putchar(str[i], fd);
      else
	{
	  printed += my_print_formated_mod(fd, str, vargs, i);
	  i++;
	}
      i++;
    }
  return (printed);
}

size_t		my_fprintf(int fd, char *str, ...)
{
  int 		i;
  int 		simple;
  size_t	printed;
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

size_t 		my_printf(char *str, ...)
{
  int 		i;
  int		fd;
  int 		simple;
  size_t	printed;
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
