/*
** my_getnbr_base.c for libmy in /home/pogam-_g/lib/my/src/getters
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Wed Oct  8 23:36:46 2014 gauthier pogam-lemontagner
** Last update Wed Dec  3 19:36:51 2014 gauthier pogam-lemontagner
*/

#include "libmy/my.h"

int		my_getnbr_base(char *str, char *base)
{
  int		sign;
  int		result;
  size_t	size_base;

  sign = 1;
  result = 0;
  size_base = my_strlen(base);
  while (*str && (*str == '+' || *str == '-'))
    if (*str++ == '-')
      sign = -sign;
  while (*str && my_get_position_in_base(*str, base) != -1)
    {
      result *= size_base;
      result += my_get_position_in_base(*str, base);
      str++;
    }
  return (sign * result);
}
