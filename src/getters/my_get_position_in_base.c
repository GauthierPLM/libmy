/*
** my_get_position_in_base.c for libmy in /home/pogam-_g/dev/C/lib/my/src/getters
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Sat May  2 16:54:38 2015 gauthier pogam-lemontagner
** Last update Sat May  2 16:54:39 2015 gauthier pogam-lemontagner
*/

int	my_get_position_in_base(char c, char *base)
{
  int	i;

  i = 0;
  while (base[i])
    {
      if (base[i] == c)
	return (i);
      i++;
    }
  return (-1);
}
