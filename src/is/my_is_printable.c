/*
** my_is_printable.c for libmy in /home/pogam-_g/dev/C/lib/my/src/is
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Mon Dec 22 15:21:59 2014 gauthier pogam-lemontagner
** Last update Mon Dec 22 15:22:01 2014 gauthier pogam-lemontagner
*/

int	my_is_printable(char c)
{
  return ((c < 32 || 127 <= c) ? 0 : 1);
}
