/*
** my_get_str_from_nbr.c for libmy in /home/pogam-_g/dev/C/lib/my/src
** 
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
** 
** Started on  Wed Mar 25 09:12:36 2015 gauthier pogam-lemontagner
** Last update Wed Mar 25 09:12:38 2015 gauthier pogam-lemontagner
*/

#include <libmy/my.h>

char	*my_get_str_from_nbr(long nbr)
{
  char	*str;
  int	i;

  str = xmalloc(sizeof(char) * 9);
  i = 0;
  while (i < 8)
    str[i++] = '0';
  str[i] = 0;
  i = 0;
  while (nbr > 0)
    {
      str[7 - i] = (char) ((nbr % 10) + 48);
      nbr /= 10;
      i++;
    }
  return (str);
}
