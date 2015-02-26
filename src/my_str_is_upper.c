/*
** my_str_is_upper.c for libmy in /home/pogam-_g/lib/my/src/
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Wed Oct  8 18:15:58 2014 gauthier pogam-lemontagner
** Last update Wed Oct  8 21:54:59 2014 gauthier pogam-lemontagner
*/

int	my_str_is_upper(char *str)
{
  while (*str)
    {
      if (*str < 'A' || 'Z'  < *str )
	return (0);
      str++;
    }
  return (1);
}
