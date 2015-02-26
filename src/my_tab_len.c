/*
** my_tab_len.c for libmy in /home/pogam-_g/dev/C/lib/my/src
** 
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
** 
** Started on  Mon Feb 16 14:42:21 2015 Gauthier Pogam-Le Montagner
** Last update Mon Feb 16 14:42:23 2015 Gauthier Pogam-Le Montagner
*/

int	my_tab_len(void **table)
{
  int	i;

  i = 0;
  while (table[i])
    i++;
  return (i);
}
