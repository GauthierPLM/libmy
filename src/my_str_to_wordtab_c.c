/*
** my_str_to_wordtab.c for libmy in /home/pogam-_g/dev/C/lib/my
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Fri Jan 23 13:50:10 2015 gauthier pogam-lemontagner
** Last update Fri Jan 23 13:50:12 2015 gauthier pogam-lemontagner
*/

#include <malloc.h>
#include "libmy/my.h"

char	**my_str_to_wordtab_c(char *str, char separator)
{
  int	table_len;
  char	**tab;
  int	i;

  if ((table_len = my_count_word_c(str, separator)) == 0)
    return (NULL);
  tab = xmalloc(sizeof(char *) * (table_len + 1));
  tab[0] = str;
  i = 1;
  while (*str != 0)
    {
      if (*str == separator && *(str + 1))
	{
	  *str = '\0';
	  tab[i] = (str + 1);
	  i++;
	}
      str++;
    }
  tab[i] = NULL;
  return (tab);
}
