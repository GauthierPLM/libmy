/*
** my_getnbr_base.c for libmy in /home/pogam-_g/lib/my/src/
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Wed Oct  8 23:36:46 2014 gauthier pogam-lemontagner
** Last update Wed Dec  3 19:36:51 2014 gauthier pogam-lemontagner
*/

#include "libmy/my.h"

int	position(char c, char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] == c)
	return (i);
      i++;
    }
  return (-1);
}

int	my_getnbr_base(char *str, char *base)
{
  int	sign;
  int	result;
  int	size_base;

  size_base = my_strlen(base);
  sign = 1;
  result = 0;
  while (*str != 0 && (*str == '+' || *str == '-'))
    if (*str++ == '-')
      sign = -sign;
  while (*str != 0)
    {
      result = (result * size_base) + position(*str, base);
      str++;
    }
  return (sign * result);
}
