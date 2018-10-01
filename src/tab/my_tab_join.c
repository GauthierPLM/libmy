/*
** my_tab_join.c for libmy in /home/pogam-_g/dev/C/lib/my/src/tab
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Wed May 20 12:25:00 2015 gauthier pogam-lemontagner
** Last update Wed May 20 12:25:09 2015 gauthier pogam-lemontagner
*/

#include <libmy/my.h>

char	*my_tab_join(char **tab, char *separator)
{
  int	i;
  char	*str;
  char	*tmp;

  i = 0;
  str = "";
  while (tab[i])
    {
      if (str[0])
	{
	  tmp = my_fusion(str, separator);
	  xfree(str);
	}
      else
	tmp = my_strdup("");
      str = my_fusion(tmp, tab[i]);
      xfree(tmp);
      i++;
    }
  return (str);
}
