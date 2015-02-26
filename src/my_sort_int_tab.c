/*
** my_sort_int_tab.c for libmy in /home/pogam-_g/lib/my/src/
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Tue Oct  7 10:55:14 2014 gauthier pogam-lemontagner
** Last update Wed Dec  3 19:37:41 2014 gauthier pogam-lemontagner
*/

#include "libmy/my.h"

void	my_sort_int_tab(int *table, int size)
{
  int	i;
  int	sort;

  sort = 0;
  while (sort == 0)
    {
      i = 0;
      sort = 1;
      while (i + 1 < size)
	{
	  if (table[i] > table[i + 1])
	    {
	      sort = 0;
	      my_swap_int(&table[i], &table[i + 1]);
	    }
	  i++;
	}
    }
}
