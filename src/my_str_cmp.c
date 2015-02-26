/*
** my_str_cmp.c for libmy in /home/pogam-_g/lib/my/src/
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Tue Oct  7 18:58:38 2014 gauthier pogam-lemontagner
** Last update Wed Oct  8 21:39:00 2014 gauthier pogam-lemontagner
*/

int	my_str_cmp(char *s1, char *s2)
{
  while (*s1 == *s2 && *s1 && *s2)
    {
      s1++;
      s2++;
    }
  return (*s1 - *s2);
}
