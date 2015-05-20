/*
** my_str_capitalize.c for libmy in /home/pogam-_g/lib/my/src/str
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Wed Oct  8 15:30:46 2014 gauthier pogam-lemontagner
** Last update Wed Dec  3 19:38:10 2014 gauthier pogam-lemontagner
*/

#include "libmy/my.h"

char	*my_str_capitalize(char *str)
{
  int	i;
  int	cap;

  i = 0;
  cap = 1;
  my_lower(str);
  while (str[i])
    {
      if ((str[i] > 'a' && str[i] < 'z') || (str[i] > '0' && str[i] < '9'))
	{
	  if (cap == 1)
	    {
	      if (str[i] > 'a' && str[i] < 'z')
		str[i] = (char) (str[i] - 32);
	      cap = 0;
	    }
	}
      else
	cap = 1;
      i++;
    }
  return (str);
}
