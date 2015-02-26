/*
** my_str_is_alpha_num.c for libmy in /home/pogam-_g/lib/my/src
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Fri Oct 10 15:58:58 2014 gauthier pogam-lemontagner
** Last update Wed Dec  3 19:37:56 2014 gauthier pogam-lemontagner
*/

#include "libmy/my.h"

int	my_str_is_alpha_num(char *str)
{
  while (*str)
    {
      if (my_str_is_alpha(str) || my_str_is_num(str))
	return (0);
      str++;
    }
  return (1);
}
