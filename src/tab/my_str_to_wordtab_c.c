/*
** my_str_to_wordtab.c for libmy in /home/pogam-_g/dev/C/lib/my/src/tab
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Fri Jan 23 13:50:10 2015 gauthier pogam-lemontagner
** Last update Tue Mar  3 14:29:58 2015 gauthier pogam-lemontagner
*/

#include <malloc.h>
#include <libmy/my.h>

char	**my_str_to_wordtab_c(char *str, char separator)
{
  int	len;
  char	*str_cpy;
  char	**tab;
  int	i;

  str_cpy = my_strdup(str);
  if ((len = my_count_word_c(str_cpy, separator)) == 0)
    return (NULL);
  tab = xmalloc(sizeof(char *) * (len + 1));
  tab[0] = str_cpy;
  i = 1;
  while (*str_cpy != 0)
    {
      if (*str_cpy == separator && *(str_cpy + 1))
	{
	  *str_cpy = '\0';
	  tab[i] = (str_cpy + 1);
	  i++;
	}
      str_cpy++;
    }
  tab[i] = NULL;
  return (tab);
}
