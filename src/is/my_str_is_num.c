/*
** my_str_is_num.c for libmy in /home/pogam-_g/lib/my/src/is
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Wed Oct  8 16:40:05 2014 gauthier pogam-lemontagner
** Last update Wed Oct  8 21:55:09 2014 gauthier pogam-lemontagner
*/

int	my_str_is_num(char *str)
{
  if (*str == '-')
    ++str;
  while (*str)
    {
      if (*str < '0' || '9' < *str)
	return (0);
      ++str;
    }
  return (1);
}
