/*
** my_swap_int.c for libmy in /home/pogam-_g/dev/C/lib/my/src/nbr
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Sun Nov 16 17:36:40 2014 gauthier pogam-lemontagner
** Last update Sun Nov 16 17:36:43 2014 gauthier pogam-lemontagner
*/

void	my_swap_int(int *a, int *b)
{
  int	c;

  c = *a;
  *a = *b;
  *b = c;
}
