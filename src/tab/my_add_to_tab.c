/*
** my_add_to_tab.c for libmy in /home/pogam-_g/dev/C/lib/my/src/tab
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Tue May  5 18:28:27 2015 gauthier pogam-lemontagner
** Last update Tue May  5 18:28:27 2015 gauthier pogam-lemontagner
*/

#include <libmy/my.h>

void	**my_add_to_tab(void **old_table, void *value)
{
  int	i;
  void	**new_tab;
  int	tab_len;

  i = 0;
  tab_len = my_tab_len(old_table);
  new_tab = xmalloc(sizeof(*old_table) * (tab_len + 2));
  while (old_table[i])
    {
      new_tab[i] = old_table[i];
      i++;
    }
  new_tab[i++] = value;
  new_tab[i] = NULL;
  return (new_tab);
}
