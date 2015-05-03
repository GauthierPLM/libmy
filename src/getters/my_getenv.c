/*
** my_getenv.c for libmy in /home/pogam-_g/dev/C/lib/my/src/getters
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Thu Jan  8 18:33:20 2015 gauthier pogam-lemontagner
** Last update Thu Jan  8 18:33:22 2015 gauthier pogam-lemontagner
*/

#include "libmy/my.h"

char		*my_getenv(char *var, char **ae)
{
  size_t	var_len;
  int		i;

  var_len = my_strlen(var);
  i = 0;
  while (ae[i] != NULL)
    {
      if (my_strncmp(var, ae[i], (int) var_len) == 0 && ae[i][var_len] == '=')
	return (&ae[i][var_len + 1]);
      i++;
    }
  return (NULL);
}
