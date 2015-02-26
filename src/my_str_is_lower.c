/*
** my_str_is_lower.c for libmy in /home/pogam-_g/lib/my/src/
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Wed Oct  8 16:53:18 2014 gauthier pogam-lemontagner
** Last update Wed Oct  8 23:47:04 2014 gauthier pogam-lemontagner
*/

int	my_str_is_lower(char *str)
{
  while (*str != '\0')
    {
      if (*str < 'a' || 'z' < *str )
	return (0);
      str++;
    }
  return (1);
}
