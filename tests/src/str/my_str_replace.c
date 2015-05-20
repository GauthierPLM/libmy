/*
** my_str_replace.c for libmy in /home/pogam-_g/dev/C/lib/my/tests/src/str
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Thu May 14 22:50:37 2015 gauthier pogam-lemontagner
** Last update Thu May 14 22:50:37 2015 gauthier pogam-lemontagner
*/

#include <libmy/my.h>

void	my_str_replace_tests()
{
  int	result;

  result = 0;
  result += my_strcmp(my_str_replace("hello", "l", "r"), "herro");
  result += my_strcmp(my_str_replace("hello", "ll", "r"), "hero");
  result += my_strcmp(my_str_replace("hello", "ll", "rr"), "herro");
  result += my_strcmp(my_str_replace("hello", "l", "rr"), "herrrro");
  result += my_strcmp(my_str_replace("hello", "hello", "bonjour"), "bonjour");
  result += my_strcmp(my_str_replace("hello", "hello", ""), "");
  result += my_strcmp(my_str_replace("hello", "ll", ""), "heo");
  my_printf("my_str_replace : %s\n", (!result) ? "OK" : "kO");
}
