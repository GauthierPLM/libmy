/*
** my_getnbr.c for libmy in /home/pogam-_g/lib/my/src/getters
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Wed Oct  8 21:08:14 2014 gauthier pogam-lemontagner
** Last update Thu Oct 16 12:00:54 2014 gauthier pogam-lemontagner
*/

int	my_getnbr(char *s)
{
  int	sign;
  int	result;

  sign = 1;
  result = 0;
  while (*s != 0 && (*s == '+' || *s == '-'))
    if (*s++ == '-')
      sign = -sign;
  while (*s != 0 && (*s >= '0' && *s <= '9'))
    result = result * 10 + (*s++ - '0');
  return (sign * result);
}
