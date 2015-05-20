/*
** my_tab_join.c for libmy in /home/pogam-_g/dev/C/lib/my/tests/src/tab
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Wed May 20 12:32:07 2015 gauthier pogam-lemontagner
** Last update Wed May 20 12:32:07 2015 gauthier pogam-lemontagner
*/

#include <libmy/my.h>

void	my_tab_join_tests()
{
  int	result;

  result = 0;
  result += my_strcmp(my_tab_join((char *[2]) {NULL}, ""), "");
  result += my_strcmp(my_tab_join((char *[2]) {NULL}, " "), "");
  result += my_strcmp(my_tab_join((char *[2]) {"hello", NULL}, ""), "hello");
  result += my_strcmp(my_tab_join((char *[2]) {"hello", NULL}, " "), "hello");
  result += my_strcmp(my_tab_join(
    (char *[4]) {"hello", "42", "!", NULL}, " "),
		      "hello 42 !");
  result += my_strcmp(my_tab_join(
    (char *[4]) {"hello", "42", "!", NULL}, ""),
		      "hello42!");
  my_printf("my_tab_join : %s\n", (!result) ? "OK" : "kO");
}
