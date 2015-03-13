/*
** my_count_word.c for libmy in /home/pogam-_g/dev/C/lib/my
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Fri Jan 23 13:51:05 2015 gauthier pogam-lemontagner
** Last update Fri Jan 23 13:51:06 2015 gauthier pogam-lemontagner
*/

#include <libmy/my.h>

int	 my_count_word(char *str)
{
  return (my_count_word_c(str, ' '));
}
