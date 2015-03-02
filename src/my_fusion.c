/*
** my_fusion.c for libmy in /home/pogam-_g/dev/C/lib/my/src
**
** Made by gauthier pogam-lemontagner
** Login   <pogam-_g@epitech.net>
**
** Started on  Mon Dec 22 15:12:12 2014 gauthier pogam-lemontagner
** Last update Mon Dec 22 15:12:14 2014 gauthier pogam-lemontagner
*/

char	*my_fusion(char *s1, char *s2)
{
  int	i;
  int	j;
  int	k;
  char	*dest;

  i = my_strlen(s1);
  j = my_strlen(s2);
  if ((dest = malloc((i + j + 1) * sizeof(char))) == NULL)
    return (NULL);
  k = i;
  i = 0;
  while (i < k)
    {
      dest[i] = s1[i];
      i++;
    }
  k = j;
  j = 0;
  while (j < k)
    dest[i++] = s2[j++];
  dest[i] = '\0';
  return (dest);
}

