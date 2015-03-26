/*
** my_fusion.c for libmy in /home/pogam-_g/dev/C/lib/my/src
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Mon Dec 22 15:12:12 2014 gauthier pogam-lemontagner
** Last update Mon Dec 22 15:12:14 2014 gauthier pogam-lemontagner
*/

#include <malloc.h>
#include <libmy/my.h>

char		*my_fusion_copy(char *from, char *dest)
{
  static int	i = 0;
  int		j;

  j = 0;
  while (from[j] && dest[i])
    {
      dest[i] = from[j];
      i++;
      j++;
    }
  return (dest);
}

char	*my_fusion(char *s1, char *s2)
{
  int s1_len;
  int s2_len;
  char	*dest;

  s1_len = (s1) ? my_strlen(s1) : 0;
  s2_len = (s2) ? my_strlen(s2) : 0;
  dest = xmalloc((s1_len + s2_len + 1) * sizeof(char));
  if (s1)
    my_fusion_copy(s1, dest);
  if (s2)
    my_fusion_copy(s2, dest);
  dest[s1_len + s2_len] = '\0';
  return (dest);
}
