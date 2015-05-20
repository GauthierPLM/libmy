/*
** my_str_to_wordtab.c for libmy in /home/pogam-_g/dev/C/lib/my/src/tab
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Fri Jan 23 13:50:10 2015 gauthier pogam-lemontagner
** Last update Tue Mar  3 14:29:58 2015 gauthier pogam-lemontagner
*/

#include <libmy/my.h>

char	**my_str_to_wordtab_c(char *str, char separator)
{
  int	i;
  int	j;
  int	len;
  char	**tab;

  if ((len = my_count_word_c(str, separator)) == 0)
    return (NULL);
  tab = xmalloc(sizeof(char *) * (len + 1));
  i = 0;
  j = 0;
  while (str[j] != 0)
    {
      tab[i++] = my_strccpy(&str[j], separator);
      while (str[j] && str[j] != separator)
	j++;
      while (str[j] && str[j] == separator)
	j++;
    }
  tab[i] = NULL;
  return (tab);
}
