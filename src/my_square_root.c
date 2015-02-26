/*
** my_square_root.c for libmy in /home/pogam-_g/lib/my/src/
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Tue Oct  7 11:25:22 2014 gauthier pogam-lemontagner
** Last update Mon Oct 20 14:23:44 2014 gauthier pogam-lemontagner
*/

int	my_square_root(int nb)
{
  int	i;

  i = (nb == 1) ? 1 : 0;
  while (i <= nb / 2 && i * i != nb)
    if (i * i == nb)
      return (i);
    else
      i = i + 1;
  return (i);
}
