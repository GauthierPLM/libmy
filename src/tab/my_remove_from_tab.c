/*
** my_remove_from_tab.c for libmy in /home/pogam-_g/dev/C/lib/my/src/tab
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Tue May  5 18:32:31 2015 gauthier pogam-lemontagner
** Last update Tue May  5 18:32:32 2015 gauthier pogam-lemontagner
*/

#include <stddef.h>
#include <libmy/my.h>

int	ptr_in_tab(void **old_tab, void *ptr)
{
  int	i;

  i = 0;
  while (old_tab[i])
    {
      if (old_tab[i] == ptr)
	return (1);
      ++i;
    }
  return (0);
}

void	**my_remove_from_tab(void **old_tab, void *ptr)
{
  int	i;
  int	j;
  void	**new_tab;
  int	tab_len;

  if (!ptr_in_tab(old_tab, ptr))
    return (NULL);
  i = 0;
  j = 0;
  tab_len = my_tab_len(old_tab);
  new_tab = xmalloc(sizeof(*old_tab) * (tab_len + 1));
  while (i < tab_len)
    {
      if (old_tab[i] == ptr)
	xfree(old_tab[i++]);
      new_tab[j] = old_tab[i];
      ++i;
      ++j;
    }
  new_tab[j] = NULL;
  xfree(old_tab);
  return (new_tab);
}
