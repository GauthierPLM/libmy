/*
** my_str_is_printable.c for libmy in /home/pogam-_g/lib/my/src/is
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Wed Oct  8 18:34:34 2014 gauthier pogam-lemontagner
** Last update Wed Oct  8 21:55:49 2014 gauthier pogam-lemontagner
*/

int	my_str_is_printable(char *str)
{
  while (*str)
    {
      if (*str < 32 || *str == 127 )
	return (0);
      str++;
    }
  return (1);
}
