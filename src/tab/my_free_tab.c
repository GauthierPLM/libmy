/*
** my_free_tab.c for libmy in /home/pogam-_g/dev/C/lib/my/src/tab
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Sun May  3 18:02:23 2015 gauthier pogam-lemontagner
** Last update Sun May  3 18:02:23 2015 gauthier pogam-lemontagner
*/

#include <libmy/my.h>

void	my_free_tab(char **tab)
{
  int	i;

  if (!tab)
    return;
  if (*tab)
    {
      i = 0;
      while (tab[i])
	xfree(tab[i++]);
      xfree(tab[i]);
    }
  xfree(tab);
}
