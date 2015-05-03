/*
** my_str_is_in_tab.c for libmy in /home/pogam-_g/dev/C/lib/my/src/is
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Thu Apr  2 19:00:49 2015 gauthier pogam-lemontagner
** Last update Thu Apr  2 19:00:50 2015 gauthier pogam-lemontagner
*/

#include <libmy/my.h>

int	my_str_is_in_tab(char *str, char **tab)
{
  int	i;

  i = 0;
  while (tab[i] != NULL)
    {
      if (my_strcmp(str, tab[i]) == 0)
	return (1);
      ++i;
    }
  return (0);
}
