/*
** my_strncmp.c for libmy in /home/pogam-_g/lib/my/src/str
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Tue Oct  7 18:57:58 2014 gauthier pogam-lemontagner
** Last update Wed Oct  8 23:44:33 2014 gauthier pogam-lemontagner
*/

#include <stddef.h>
#include <libmy/my.h>

int		my_strncmp(char *s1, char *s2, size_t n)
{
  size_t	i;

  i = 0;
  while (i < n)
    {
      if (s1[i] != s2[i])
	return (s1[i] - s2[i]);
      i++;
    }
  --i;
  return (s2[i] - s1[i]);
}
